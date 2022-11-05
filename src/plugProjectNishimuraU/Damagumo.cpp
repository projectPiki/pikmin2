#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_Damagumo_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80489870
    lbl_80489870:
        .asciz "rhand1jnt"
        .skip 2
    .global lbl_8048987C
    lbl_8048987C:
        .asciz "rhand2jnt"
        .skip 2
    .global lbl_80489888
    lbl_80489888:
        .asciz "rhand3jnt"
        .skip 2
    .global lbl_80489894
    lbl_80489894:
        .asciz "lhand1jnt"
        .skip 2
    .global lbl_804898A0
    lbl_804898A0:
        .asciz "lhand2jnt"
        .skip 2
    .global lbl_804898AC
    lbl_804898AC:
        .asciz "lhand3jnt"
        .skip 2
    .global lbl_804898B8
    lbl_804898B8:
        .asciz "rfoot1jnt"
        .skip 2
    .global lbl_804898C4
    lbl_804898C4:
        .asciz "rfoot2jnt"
        .skip 2
    .global lbl_804898D0
    lbl_804898D0:
        .asciz "rfoot3jnt"
        .skip 2
    .global lbl_804898DC
    lbl_804898DC:
        .asciz "lfoot1jnt"
        .skip 2
    .global lbl_804898E8
    lbl_804898E8:
        .asciz "lfoot2jnt"
        .skip 2
    .global lbl_804898F4
    lbl_804898F4:
        .asciz "lfoot3jnt"
        .skip 2
    .global lbl_80489900
    lbl_80489900:
        .4byte lbl_80489870
        .4byte lbl_8048987C
        .4byte lbl_80489888
        .4byte lbl_80489894
        .4byte lbl_804898A0
        .4byte lbl_804898AC
        .4byte lbl_804898B8
        .4byte lbl_804898C4
        .4byte lbl_804898D0
        .4byte lbl_804898DC
        .4byte lbl_804898E8
        .4byte lbl_804898F4
    .global lbl_80489930
    lbl_80489930:
        .ascii "lft1"
        .ascii "lht1"
        .ascii "rft1"
        .ascii "rht1"
    .global lbl_80489940
    lbl_80489940:
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
    .global lbl_80489958
    lbl_80489958:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804CD818
    lbl_804CD818:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q23efx13TDamaDeadBomb
    __vt__Q23efx13TDamaDeadBomb:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx9TDamaWalk
    __vt__Q23efx9TDamaWalk:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx10TDamaWalkw
    __vt__Q23efx10TDamaWalkw:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global "__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>"
    "__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx10TChasePos2
    __vt__Q23efx10TChasePos2:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx16TDamaDeadHahenC2
    __vt__Q23efx16TDamaDeadHahenC2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx16TDamaDeadHahenC2Fv"
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
        .4byte __dt__Q23efx16TDamaDeadHahenC2Fv
    .global __vt__Q23efx16TDamaDeadHahenC1
    __vt__Q23efx16TDamaDeadHahenC1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx16TDamaDeadHahenC1Fv"
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
        .4byte __dt__Q23efx16TDamaDeadHahenC1Fv
    .global __vt__Q23efx10TDamaSmoke
    __vt__Q23efx10TDamaSmoke:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TDamaSmokeFv"
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
        .4byte __dt__Q23efx10TDamaSmokeFv
    .global __vt__Q23efx15TDamaDeadHahenB
    __vt__Q23efx15TDamaDeadHahenB:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TDamaDeadHahenBFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx15TDamaDeadHahenBFv
    .global __vt__Q23efx15TDamaDeadHahenA
    __vt__Q23efx15TDamaDeadHahenA:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TDamaDeadHahenAFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx15TDamaDeadHahenAFv
    .global __vt__Q23efx14TDamaDeadElecB
    __vt__Q23efx14TDamaDeadElecB:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TDamaDeadElecBFv"
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
        .4byte __dt__Q23efx14TDamaDeadElecBFv
    .global __vt__Q23efx14TDamaDeadElecA
    __vt__Q23efx14TDamaDeadElecA:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14TDamaDeadElecAFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx14TDamaDeadElecAFv
    .global __vt__Q23efx10TDamaHahen
    __vt__Q23efx10TDamaHahen:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TDamaHahenFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx10TDamaHahenFv
    .global __vt__Q23efx10TDamaFootw
    __vt__Q23efx10TDamaFootw:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TDamaFootwFv"
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
        .4byte __dt__Q23efx10TDamaFootwFv
    .global __vt__Q23efx9TDamaFoot
    __vt__Q23efx9TDamaFoot:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q24Game19JointGroundCallBack
    __vt__Q24Game19JointGroundCallBack:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game23ConditionNotStickClient
    __vt__Q24Game23ConditionNotStickClient:
        .4byte 0
        .4byte 0
        .4byte satisfy__Q24Game23ConditionNotStickClientFPQ24Game4Piki
    .global __vt__Q34Game8Damagumo3Obj
    __vt__Q34Game8Damagumo3Obj:
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
        .4byte constructor__Q34Game8Damagumo3ObjFv
        .4byte onInit__Q34Game8Damagumo3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game8Damagumo3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game8Damagumo3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game8Damagumo3ObjFv
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
        .4byte collisionCallback__Q34Game8Damagumo3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game8Damagumo3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game8Damagumo3ObjFv
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
        .4byte __dt__Q34Game8Damagumo3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game8Damagumo3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game8Damagumo3ObjFv
        .4byte doUpdateCommon__Q34Game8Damagumo3ObjFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game8Damagumo3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game8Damagumo3ObjFR8Graphics
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
        .4byte getEnemyTypeID__Q34Game8Damagumo3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q34Game8Damagumo3ObjFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q34Game8Damagumo3ObjFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q34Game8Damagumo3ObjFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game8Damagumo3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game8Damagumo3ObjFv .4byte
   doFinishStoneState__Q34Game8Damagumo3ObjFv .4byte
   getDamageCoeStoneState__Q34Game8Damagumo3ObjFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game8Damagumo3ObjFv .4byte
   doEndMovie__Q34Game8Damagumo3ObjFv .4byte
   setFSM__Q34Game8Damagumo3ObjFPQ34Game8Damagumo3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@1176@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@1176@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@1176@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@1176@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@1176@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@1176@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>" .global
   __vt__Q34Game8Damagumo22DamagumoGroundCallBack
    __vt__Q34Game8Damagumo22DamagumoGroundCallBack:
        .4byte 0
        .4byte 0
        .4byte
   invokeOnGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
        .4byte
   invokeOffGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D70
    lbl_80515D70:
        .skip 0x4
    .global lbl_80515D74
    lbl_80515D74:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BED0
    lbl_8051BED0:
        .4byte 0x00000000
    .global lbl_8051BED4
    lbl_8051BED4:
        .float 1.0
    .global lbl_8051BED8
    lbl_8051BED8:
        .float 0.1
    .global lbl_8051BEDC
    lbl_8051BEDC:
        .4byte 0x43FA0000
    .global lbl_8051BEE0
    lbl_8051BEE0:
        .4byte 0x41200000
    .global lbl_8051BEE4
    lbl_8051BEE4:
        .4byte 0xC47A0000
    .global lbl_8051BEE8
    lbl_8051BEE8:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051BEF0
    lbl_8051BEF0:
        .4byte 0x41F00000
    .global lbl_8051BEF4
    lbl_8051BEF4:
        .4byte 0x441C4000
    .global lbl_8051BEF8
    lbl_8051BEF8:
        .4byte 0x47000000
    .global lbl_8051BEFC
    lbl_8051BEFC:
        .4byte 0x40490FDB
    .global lbl_8051BF00
    lbl_8051BF00:
        .4byte 0x3FC90FDB
    .global lbl_8051BF04
    lbl_8051BF04:
        .4byte 0xC3A2F983
    .global lbl_8051BF08
    lbl_8051BF08:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051BF10
    lbl_8051BF10:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051BF18
    lbl_8051BF18:
        .4byte 0x3F400000
    .global lbl_8051BF1C
    lbl_8051BF1C:
        .4byte 0x42F00000
    .global lbl_8051BF20
    lbl_8051BF20:
        .4byte 0x40400000
    .global lbl_8051BF24
    lbl_8051BF24:
        .4byte 0xBE19999A
    .global lbl_8051BF28
    lbl_8051BF28:
        .float 0.5
    .global lbl_8051BF2C
    lbl_8051BF2C:
        .4byte 0xC0000000
    .global lbl_8051BF30
    lbl_8051BF30:
        .4byte 0x42960000
    .global lbl_8051BF34
    lbl_8051BF34:
        .4byte 0x42700000
    .global lbl_8051BF38
    lbl_8051BF38:
        .float 0.7
    .global lbl_8051BF3C
    lbl_8051BF3C:
        .4byte 0xBFC00000
    .global lbl_8051BF40
    lbl_8051BF40:
        .4byte 0x3F2B851F
    .global lbl_8051BF44
    lbl_8051BF44:
        .4byte 0x42480000
    .global lbl_8051BF48
    lbl_8051BF48:
        .4byte 0x74616D61
        .4byte 0x31000000
    .global lbl_8051BF50
    lbl_8051BF50:
        .4byte 0x74616D61
        .4byte 0x32000000
    .global lbl_8051BF58
    lbl_8051BF58:
        .4byte 0x3E333333
    .global lbl_8051BF5C
    lbl_8051BF5C:
        .4byte 0x3EB33333
    .global lbl_8051BF60
    lbl_8051BF60:
        .4byte 0x40000000
    .global lbl_8051BF64
    lbl_8051BF64:
        .4byte 0x40800000
    .global lbl_8051BF68
    lbl_8051BF68:
        .float 0.25
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802A57A4
 * Size:	000024
 */
void Damagumo::DamagumoGroundCallBack::invokeOnGround(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       createOnGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A57C8
 * Size:	000024
 */
void Damagumo::DamagumoGroundCallBack::invokeOffGround(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       createOffGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A57EC
 * Size:	00016C
 */
Damagumo::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802A582C
	addi     r0, r31, 0x498
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x498(r31)
	stw      r0, 0x49c(r31)
	stw      r0, 0x4a0(r31)

lbl_802A582C:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r4, __vt__Q34Game8Damagumo3Obj@ha
	addi     r0, r31, 0x498
	addi     r6, r4, __vt__Q34Game8Damagumo3Obj@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	stw      r6, 0(r31)
	addi     r5, r6, 0x1b0
	addi     r9, r6, 0x2fc
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r5, 0x178(r31)
	addi     r3, r31, 0x2f0
	li       r5, 0
	li       r6, 0xc
	lwz      r8, 0x17c(r31)
	li       r7, 0x10
	stw      r9, 0(r8)
	lwz      r8, 0x17c(r31)
	subf     r0, r8, r0
	stw      r0, 0xc(r8)
	bl       __construct_array
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802A58D4
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game8Damagumo14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game8Damagumo14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r30)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r30)
	stw      r3, 0x10(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x20(r30)

lbl_802A58D4:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802A5908
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game8Damagumo3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game8Damagumo3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802A5908:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createIKSystem__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       createShadowSystem__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       createMaterialAnimation__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5958
 * Size:	000034
 */
void Damagumo::Obj::constructor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       constructor__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       resetBossAppearBGM__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A598C
 * Size:	000004
 */
void Damagumo::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802A5990
 * Size:	000134
 */
void Damagumo::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r4, -1
	lfs      f1, lbl_8051BED0@sda21(r2)
	li       r0, 0
	rlwinm   r5, r3, 0, 0x14, 0x12
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x19, 0x17
	stw      r5, 0x1e0(r31)
	stfs     f1, 0x2c0(r31)
	stfs     f1, 0x2c4(r31)
	stw      r4, 0x2c8(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d4(r31)
	stfs     f1, 0x2d8(r31)
	stb      r0, 0x2dc(r31)
	stb      r0, 0x2dd(r31)
	bl       setupIKSystem__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       setupShadowSystem__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       setupCollision__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       resetBossAppearBGM__Q34Game8Damagumo3ObjFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r31
	bl       startMaterialAnimation__Q34Game8Damagumo3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802A5A9C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802A5A9C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_802A5AB0

lbl_802A5A9C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl

lbl_802A5AB0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5AC4
 * Size:	000050
 */
void Damagumo::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updatePinchLife__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       updateIKSystem__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5B14
 * Size:	000034
 */
void Damagumo::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       updateBossBGM__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5B48
 * Size:	000098
 */
void Damagumo::Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doAnimationIKSystem__Q34Game8Damagumo3ObjFv
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	mr       r3, r31
	bl       doAnimationShadowSystem__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       updateMaterialAnimation__Q34Game8Damagumo3ObjFv
	mr       r3, r31
	bl       finishAnimationIKSystem__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5BE0
 * Size:	000004
 */
void Damagumo::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802A5BE4
 * Size:	000020
 */
void Damagumo::Obj::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5C04
 * Size:	00004C
 */
void Damagumo::Obj::setFSM(Game::Damagumo::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5C50
 * Size:	00003C
 */
void Damagumo::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f2, lbl_8051BED0@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f1, lbl_8051BED4@sda21(r2)
	lfs      f3, 0x190(r3)
	lfs      f0, lbl_8051BED8@sda21(r2)
	stfs     f3, 4(r4)
	lfs      f3, 0x194(r3)
	stfs     f3, 8(r4)
	stfs     f2, 0xc(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x14(r4)
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5C8C
 * Size:	000050
 */
void Damagumo::Obj::needShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5CB4
	li       r3, 1
	b        lbl_802A5CC8

lbl_802A5CB4:
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	subfic   r0, r3, 2
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f

lbl_802A5CC8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5CDC
 * Size:	00009C
 */
void Damagumo::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	or.      r31, r4, r4
	fmr      f31, f1
	mr       r30, r3
	beq      lbl_802A5D54
	cmplwi   r5, 0
	beq      lbl_802A5D54
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5D54
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5D54
	fmr      f1, f31
	lfs      f2, lbl_8051BED4@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802A5D58

lbl_802A5D54:
	li       r3, 0

lbl_802A5D58:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5D78
 * Size:	0001AC
 */
void Damagumo::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802A5EF0
	lwz      r31, 0(r30)
	cmplwi   r31, 0
	beq      lbl_802A5EF0
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_802A5EF0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5EF0
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_802A5EF0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802A5E1C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5E7C

lbl_802A5E1C:
	lwz      r4, 8(r30)
	mr       r3, r29
	bl       isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5EF0
	lwz      r5, 0xc0(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r29, 0x1c(r1)
	stw      r5, 0x18(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802A5EF0

lbl_802A5E7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5EF0
	lwz      r4, 8(r30)
	mr       r3, r29
	bl       isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A5EF0
	lwz      r5, 4(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051BEDC@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	mr       r3, r31
	stw      r29, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 0x14(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802A5EF0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5F24
 * Size:	000034
 */
void Damagumo::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishPinchJointEffect__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5F58
 * Size:	00005C
 */
void Damagumo::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BED4@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051BEE0@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051BED0@sda21(r2)
	lfs      f4, lbl_8051BEE4@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lbz      r0, 0x2dd(r31)
	cmplwi   r0, 0
	beq      lbl_802A5FA0
	mr       r3, r31
	bl       startPinchJointEffect__Q34Game8Damagumo3ObjFv

lbl_802A5FA0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5FB4
 * Size:	000020
 */
void Damagumo::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5FD4
 * Size:	000020
 */
void Damagumo::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game8Damagumo3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A5FF4
 * Size:	000060
 */
void Damagumo::Obj::getThrowupItemPosition(Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051BEE8@sda21
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f3, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_8051BEF0@sda21(r2)
	stfs     f1, 0(r31)
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	lfs      f1, 4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6054
 * Size:	000014
 */
void Damagumo::Obj::getThrowupItemVelocity(Vector3f*)
{
	/*
	lfs      f0, lbl_8051BED0@sda21(r2)
	stfs     f0, 8(r4)
	stfs     f0, 4(r4)
	stfs     f0, 0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6068
 * Size:	000298
 */
void Damagumo::Obj::getTargetPosition()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r7, 0xc0(r3)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r3)
	lfs      f4, 0x198(r3)
	lfs      f0, 0x35c(r7)
	fsubs    f3, f1, f4
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A62BC
	lis      r5, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__Q24Game23ConditionNotStickClient@ha
	addi     r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
	stw      r31, 0xc(r1)
	addi     r0, r4, __vt__Q24Game23ConditionNotStickClient@l
	addi     r5, r1, 8
	stw      r6, 8(r1)
	li       r4, 0
	stw      r0, 8(r1)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802A612C
	mr       r4, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2d4(r31)
	b        lbl_802A62D0

lbl_802A612C:
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2d4(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051BEF4@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A62D0
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lis      r3, atanTable___5JMath@ha
	lwz      r4, 0xc0(r31)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0x20(r1)
	lfd      f1, lbl_8051BF10@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f5, lbl_8051BEF8@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, 0x384(r4)
	fmuls    f6, f30, f0
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f2, lbl_8051BF10@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f3, lbl_8051BEFC@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_8051BEF8@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051BF00@sda21(r2)
	lfs      f0, lbl_8051BED0@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802A623C
	lfs      f0, lbl_8051BF04@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802A6260

lbl_802A623C:
	lfs      f0, lbl_8051BF08@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802A6260:
	lfs      f1, 0x198(r31)
	lfs      f0, lbl_8051BED0@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2cc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d0(r31)
	bge      lbl_802A6284
	fneg     f3, f3

lbl_802A6284:
	lfs      f1, lbl_8051BF08@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x1a0(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2d4(r31)
	b        lbl_802A62D0

lbl_802A62BC:
	stfs     f4, 0x2cc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d4(r31)

lbl_802A62D0:
	mr       r3, r31
	addi     r4, r31, 0x2cc
	bl       "setIKSystemTargetPosition__Q34Game8Damagumo3ObjFR10Vector3<f>"
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6300
 * Size:	00010C
 */
void Damagumo::Obj::createIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x9c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802A632C
	bl       __ct__Q24Game11IKSystemMgrFv
	mr       r0, r3

lbl_802A632C:
	stw      r0, 0x2e0(r31)
	li       r3, 0x48
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A63C4
	li       r0, -1
	lfs      f5, lbl_8051BED0@sda21(r2)
	stw      r0, 0(r3)
	lfs      f1, lbl_8051BF18@sda21(r2)
	stfs     f5, 4(r3)
	lfs      f0, lbl_8051BF1C@sda21(r2)
	stfs     f5, 8(r3)
	lfs      f2, lbl_8051BF20@sda21(r2)
	stfs     f1, 0xc(r3)
	lfs      f1, lbl_8051BF24@sda21(r2)
	stfs     f0, 0x10(r3)
	lfs      f0, lbl_8051BF28@sda21(r2)
	stfs     f2, 0x14(r3)
	lfs      f2, lbl_8051BEE0@sda21(r2)
	stfs     f1, 0x18(r3)
	lfs      f1, lbl_8051BF2C@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, lbl_8051BF30@sda21(r2)
	stfs     f2, 0x20(r3)
	lfs      f4, lbl_8051BEF0@sda21(r2)
	stfs     f1, 0x24(r3)
	lfs      f3, lbl_8051BF34@sda21(r2)
	stfs     f5, 0x28(r3)
	lfs      f2, lbl_8051BED8@sda21(r2)
	stfs     f0, 0x2c(r3)
	lfs      f1, lbl_8051BF38@sda21(r2)
	stfs     f5, 0x30(r3)
	lfs      f0, lbl_8051BF3C@sda21(r2)
	stfs     f4, 0x34(r3)
	stfs     f3, 0x38(r3)
	stfs     f2, 0x3c(r3)
	stfs     f1, 0x40(r3)
	stfs     f0, 0x44(r3)

lbl_802A63C4:
	stw      r3, 0x2e4(r31)
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A63F4
	lis      r5, __vt__Q24Game19JointGroundCallBack@ha
	lis      r4, __vt__Q34Game8Damagumo22DamagumoGroundCallBack@ha
	addi     r0, r5, __vt__Q24Game19JointGroundCallBack@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q34Game8Damagumo22DamagumoGroundCallBack@l
	stw      r0, 0(r3)
	stw      r31, 4(r3)

lbl_802A63F4:
	stw      r3, 0x2e8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A640C
 * Size:	000124
 */
void Damagumo::Obj::setupIKSystem()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2e0(r3)
	bl
	init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
	lis      r3, lbl_80489900@ha
	addi     r6, r1, 8
	addi     r27, r3, lbl_80489900@l
	li       r5, 0
	lwz      r28, 0(r27)
	lwz      r29, 4(r27)
	lwz      r30, 8(r27)
	lwz      r12, 0xc(r27)
	lwz      r11, 0x10(r27)
	lwz      r10, 0x14(r27)
	lwz      r9, 0x18(r27)
	lwz      r8, 0x1c(r27)
	lwz      r7, 0x20(r27)
	lwz      r4, 0x24(r27)
	lwz      r3, 0x28(r27)
	lwz      r0, 0x2c(r27)
	stw      r28, 8(r1)
	stw      r29, 0xc(r1)
	stw      r30, 0x10(r1)
	stw      r12, 0x14(r1)
	stw      r11, 0x18(r1)
	stw      r10, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	stw      r4, 0x2c(r1)
	stw      r3, 0x30(r1)
	stw      r0, 0x34(r1)
	lwz      r3, 0x2e0(r31)
	lwz      r4, 0x174(r31)
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x14
	lwz      r4, 0x174(r31)
	li       r5, 1
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x20
	lwz      r4, 0x174(r31)
	li       r5, 2
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x2c
	lwz      r4, 0x174(r31)
	li       r5, 3
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lis      r4, lbl_80489888@ha
	lwz      r3, 0x2e0(r31)
	addi     r5, r4, lbl_80489888@l
	lwz      r4, 0x174(r31)
	bl       setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
	mr       r3, r31
	bl       setIKParameter__Q34Game8Damagumo3ObjFv
	lwz      r3, 0x2e0(r31)
	lwz      r4, 0x2e4(r31)
	bl       setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
	lwz      r0, 0x2e8(r31)
	lwz      r3, 0x2e0(r31)
	stw      r0, 0x94(r3)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6530
 * Size:	000090
 */
void Damagumo::Obj::setIKParameter()
{
	/*
	lfs      f0, lbl_8051BF40@sda21(r2)
	lwz      r4, 0x2e4(r3)
	stfs     f0, 0x28(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x334(r5)
	stfs     f0, 0x38(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x2e4(r5)
	stfs     f0, 0x2c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x81c(r5)
	stfs     f0, 0x14(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x844(r5)
	stfs     f0, 0x18(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x86c(r5)
	stfs     f0, 0x1c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x8bc(r5)
	stfs     f0, 0x20(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x894(r5)
	stfs     f0, 0x24(r4)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2e4(r3)
	lfs      f0, 0x8e4(r4)
	stfs     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A65C0
 * Size:	000020
 */
void Damagumo::Obj::setIKSystemTargetPosition(Vector3f&)
{
	/*
	lwz      r3, 0x2e0(r3)
	lfs      f0, 0(r4)
	stfs     f0, 0x2c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x30(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x34(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A65E0
 * Size:	000060
 */
void Damagumo::Obj::updateIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e0(r3)
	bl       doUpdate__Q24Game11IKSystemMgrFv
	lwz      r3, 0x2e0(r31)
	lfs      f1, 0x3c(r3)
	lfs      f2, 0x40(r3)
	lfs      f0, 0x38(r3)
	stfs     f0, 0x18c(r31)
	stfs     f1, 0x190(r31)
	stfs     f2, 0x194(r31)
	lwz      r3, 0x2e0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6640
 * Size:	000060
 */
void Damagumo::Obj::doAnimationIKSystem()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x2e0(r3)
	bl       setAnimationCallBack__Q24Game11IKSystemMgrFv
	lwz      r7, 0x2e0(r31)
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	lfs      f1, 0x48(r7)
	addi     r6, r1, 8
	lfs      f2, 0x4c(r7)
	lfs      f0, 0x44(r7)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A66A0
 * Size:	000024
 */
void Damagumo::Obj::finishAnimationIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       resetAnimationCallBack__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A66C4
 * Size:	000024
 */
void Damagumo::Obj::startProgramedIK()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       startProgramedIK__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A66E8
 * Size:	000024
 */
void Damagumo::Obj::startIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       startIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A670C
 * Size:	000024
 */
void Damagumo::Obj::finishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       finishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6730
 * Size:	000024
 */
void Damagumo::Obj::forceFinishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       forceFinishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6754
 * Size:	000024
 */
void Damagumo::Obj::isFinishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       isFinishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6778
 * Size:	000024
 */
void Damagumo::Obj::startBlendMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       startBlendMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A679C
 * Size:	000024
 */
void Damagumo::Obj::finishBlendMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       finishBlendMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A67C0
 * Size:	000020
 */
void Damagumo::Obj::getTraceCentrePosition()
{
	/*
	lwz      r4, 0x2e0(r4)
	lfs      f0, 0x44(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A67E0
 * Size:	000024
 */
void Damagumo::Obj::isCollisionCheck(CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2e0(r3)
	bl       isCollisionCheck__Q24Game11IKSystemMgrFP8CollPart
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6804
 * Size:	000048
 */
void Damagumo::Obj::createShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802A6834
	mr       r4, r31
	bl       __ct__Q34Game8Damagumo17DamagumoShadowMgrFPQ34Game8Damagumo3Obj
	mr       r0, r3

lbl_802A6834:
	stw      r0, 0x2ec(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A684C
 * Size:	000074
 */
void Damagumo::Obj::setupShadowSystem()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x2ec(r3)
	bl       init__Q34Game8Damagumo17DamagumoShadowMgrFv
	li       r29, 0
	mr       r30, r27

lbl_802A6870:
	li       r28, 0
	mr       r31, r30

lbl_802A6878:
	lwz      r3, 0x2ec(r27)
	mr       r4, r29
	mr       r5, r28
	addi     r6, r31, 0x2f0
	bl "setJointPosPtr__Q34Game8Damagumo17DamagumoShadowMgrFiiP10Vector3<f>"
	addi     r28, r28, 1
	addi     r31, r31, 0xc
	cmpwi    r28, 4
	blt      lbl_802A6878
	addi     r29, r29, 1
	addi     r30, r30, 0x30
	cmpwi    r29, 4
	blt      lbl_802A6870
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A68C0
 * Size:	000024
 */
void Damagumo::Obj::doAnimationShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
	bl       update__Q34Game8Damagumo17DamagumoShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A68E4
 * Size:	00004C
 */
void Damagumo::Obj::createMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x28
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
	li       r5, 0
	addi     r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
	li       r6, 0xc
	li       r7, 2
	bl       __construct_new_array
	stw      r3, 0x494(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6930
 * Size:	000060
 */
void Damagumo::Obj::startMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x494(r3)
	lwz      r4, 0x180(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x44(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x494(r31)
	lwzu     r12, 0xc(r3)
	lwz      r4, 0x180(r31)
	lwz      r12, 8(r12)
	lwz      r4, 0x48(r4)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6990
 * Size:	00013C
 */
void Damagumo::Obj::updateMaterialAnimation()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	beq      lbl_802A6A58
	lwz      r4, 0x494(r31)
	lwz      r3, 0x10(r4)
	lfs      f30, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_802A69E8
	bl       getFrameMax__Q23Sys16MatBaseAnimationFv
	fmr      f31, f1
	b        lbl_802A69EC

lbl_802A69E8:
	lfs      f31, lbl_8051BED0@sda21(r2)

lbl_802A69EC:
	lfs      f0, lbl_8051BF44@sda21(r2)
	lfs      f2, lbl_8051BED4@sda21(r2)
	fsubs    f0, f31, f0
	lwz      r3, 0x494(r31)
	lfs      f1, lbl_8051BED0@sda21(r2)
	fdivs    f29, f2, f0
	bl       animate__Q23Sys15MatBaseAnimatorFf
	fcmpo    cr0, f30, f31
	bge      lbl_802A6A24
	lwz      r3, 0x494(r31)
	lfs      f1, lbl_8051BEF0@sda21(r2)
	addi     r3, r3, 0xc
	bl       animate__Q23Sys15MatBaseAnimatorFf
	b        lbl_802A6A34

lbl_802A6A24:
	lwz      r3, 0x494(r31)
	lfs      f1, lbl_8051BED0@sda21(r2)
	addi     r3, r3, 0xc
	bl       animate__Q23Sys15MatBaseAnimatorFf

lbl_802A6A34:
	lfs      f1, 0x2d8(r31)
	lfs      f0, lbl_8051BED0@sda21(r2)
	fsubs    f1, f1, f29
	stfs     f1, 0x2d8(r31)
	lfs      f1, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_802A6AA0
	stfs     f0, 0x2d8(r31)
	b        lbl_802A6AA0

lbl_802A6A58:
	lwz      r3, 0x494(r31)
	lfs      f1, lbl_8051BEF0@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x494(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x104(r3)
	addi     r3, r4, 0xc
	lfs      f2, lbl_8051BED4@sda21(r2)
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051BF44@sda21(r2)
	fsubs    f0, f2, f0
	fmuls    f1, f1, f0
	bl       setCurrentFrame__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x494(r31)
	lfs      f1, lbl_8051BED0@sda21(r2)
	addi     r3, r3, 0xc
	bl       animate__Q23Sys15MatBaseAnimatorFf

lbl_802A6AA0:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6ACC
 * Size:	000090
 */
void Damagumo::Obj::setupCollision()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80489930@ha
	stw      r0, 0x34(r1)
	addi     r6, r4, lbl_80489930@l
	stw      r31, 0x2c(r1)
	addi     r31, r1, 8
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r5, 0(r6)
	lwz      r4, 4(r6)
	lwz      r3, 8(r6)
	lwz      r0, 0xc(r6)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)

lbl_802A6B18:
	lwz      r3, 0x114(r29)
	lwz      r4, 0(r31)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802A6B30
	bl       makeTubeTree__8CollPartFv

lbl_802A6B30:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802A6B18
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6B5C
 * Size:	00008C
 */
void Damagumo::Obj::createItemAndEnemy()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	addi     r3, r30, 0x250
	bl       isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A6BD0
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_802A6BD0
	addi     r3, r1, 8
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x1fc(r30)
	mr       r3, r30
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x268(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0x19
	bl createGroupByBigFoot__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgi

lbl_802A6BD0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6BE8
 * Size:	0000C8
 */
void Damagumo::Obj::startBossFlickBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802A6C58
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802A6C58
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802A6C5C

lbl_802A6C58:
	li       r31, 1

lbl_802A6C5C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802A6C80
	lis      r3, lbl_80489940@ha
	lis      r5, lbl_80489958@ha
	addi     r3, r3, lbl_80489940@l
	li       r4, 0x454
	addi     r5, r5, lbl_80489958@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802A6C80:
	mr       r3, r30
	li       r4, 4
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6CB0
 * Size:	0000FC
 */
void Damagumo::Obj::updateBossBGM()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802A6D28
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802A6D28
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802A6D2C

lbl_802A6D28:
	li       r31, 1

lbl_802A6D2C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802A6D50
	lis      r3, lbl_80489940@ha
	lis      r5, lbl_80489958@ha
	addi     r3, r3, lbl_80489940@l
	li       r4, 0x454
	addi     r5, r5, lbl_80489958@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802A6D50:
	lwz      r0, 0x1f4(r29)
	cmpwi    r0, 0
	beq      lbl_802A6D78
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_802A6D90

lbl_802A6D78:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_802A6D90:
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
 * Address:	802A6DAC
 * Size:	0000C4
 */
void Damagumo::Obj::resetBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802A6E1C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802A6E1C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802A6E20

lbl_802A6E1C:
	li       r31, 1

lbl_802A6E20:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802A6E44
	lis      r3, lbl_80489940@ha
	lis      r5, lbl_80489958@ha
	addi     r3, r3, lbl_80489940@l
	li       r4, 0x454
	addi     r5, r5, lbl_80489958@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802A6E44:
	mr       r3, r30
	li       r4, 0
	bl       setAppearFlag__Q23PSM9EnemyBossFb
	li       r0, 1
	stb      r0, 0xff(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6E70
 * Size:	0000BC
 */
void Damagumo::Obj::setBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802A6EE0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802A6EE0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802A6EE4

lbl_802A6EE0:
	li       r31, 1

lbl_802A6EE4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802A6F08
	lis      r3, lbl_80489940@ha
	lis      r5, lbl_80489958@ha
	addi     r3, r3, lbl_80489940@l
	li       r4, 0x454
	addi     r5, r5, lbl_80489958@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802A6F08:
	mr       r3, r30
	li       r4, 1
	bl       setAppearFlag__Q23PSM9EnemyBossFb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A6F2C
 * Size:	0005BC
 */
void Damagumo::Obj::createEffect()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r11, __vt__Q23efx5TSync@ha
	lis      r10, __vt__Q23efx9TChasePos@ha
	stw      r0, 0x54(r1)
	lis      r9, __vt__Q23efx10TDamaFootw@ha
	lis      r8, __vt__Q23efx12TChasePosPos@ha
	lis      r7, __vt__Q23efx10TDamaHahen@ha
	stmw     r16, 0x10(r1)
	mr       r31, r3
	lis      r6, __vt__Q23efx14TDamaDeadElecA@ha
	lis      r5, __vt__Q23efx14TDamaDeadElecB@ha
	lis      r4, __vt__Q23efx15TDamaDeadHahenA@ha
	lis      r3, __vt__Q23efx15TDamaDeadHahenB@ha
	addi     r11, r11, __vt__Q23efx5TSync@l
	addi     r10, r10, __vt__Q23efx9TChasePos@l
	addi     r9, r9, __vt__Q23efx10TDamaFootw@l
	addi     r8, r8, __vt__Q23efx12TChasePosPos@l
	addi     r7, r7, __vt__Q23efx10TDamaHahen@l
	addi     r6, r6, __vt__Q23efx14TDamaDeadElecA@l
	addi     r5, r5, __vt__Q23efx14TDamaDeadElecB@l
	addi     r4, r4, __vt__Q23efx15TDamaDeadHahenA@l
	addi     r3, r3, __vt__Q23efx15TDamaDeadHahenB@l
	mr       r29, r31
	mr       r28, r31
	mr       r27, r31
	addi     r19, r11, 0x14
	addi     r18, r10, 0x14
	addi     r26, r9, 0x14
	addi     r25, r8, 0x14
	addi     r24, r7, 0x14
	addi     r23, r6, 0x14
	addi     r22, r5, 0x14
	addi     r21, r4, 0x14
	addi     r20, r3, 0x14
	li       r17, 0

lbl_802A6FBC:
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r16, r3, r3
	beq      lbl_802A6FE8
	li       r4, 0
	li       r5, 0x24
	li       r6, 0x25
	bl       "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
	lis      r3, __vt__Q23efx9TDamaFoot@ha
	addi     r0, r3, __vt__Q23efx9TDamaFoot@l
	stw      r0, 0(r16)

lbl_802A6FE8:
	stw      r16, 0x3b0(r29)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A7064
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx10TDamaFootw@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x23
	addi     r0, r4, __vt__Q23efx10TDamaFootw@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r26, 4(r3)

lbl_802A7064:
	stw      r3, 0x3c0(r29)
	mr       r30, r28
	li       r16, 0

lbl_802A7070:
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A70EC
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx10TDamaHahen@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x26
	addi     r0, r4, __vt__Q23efx10TDamaHahen@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r24, 4(r3)

lbl_802A70EC:
	stw      r3, 0x3dc(r30)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A716C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx14TDamaDeadElecA@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x1d
	addi     r0, r4, __vt__Q23efx14TDamaDeadElecA@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r23, 4(r3)

lbl_802A716C:
	addi     r16, r16, 1
	stw      r3, 0x40c(r30)
	cmpwi    r16, 3
	addi     r30, r30, 4
	blt      lbl_802A7070
	li       r16, 0
	mr       r30, r27

lbl_802A7188:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A7200
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx14TDamaDeadElecB@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x1e
	addi     r0, r4, __vt__Q23efx14TDamaDeadElecB@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r22, 4(r3)

lbl_802A7200:
	stw      r3, 0x43c(r30)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A7280
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx15TDamaDeadHahenA@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x1f
	addi     r0, r4, __vt__Q23efx15TDamaDeadHahenA@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r21, 4(r3)

lbl_802A7280:
	addi     r16, r16, 1
	stw      r3, 0x45c(r30)
	cmpwi    r16, 2
	addi     r30, r30, 4
	blt      lbl_802A7188
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A7310
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx15TDamaDeadHahenB@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x20
	addi     r0, r4, __vt__Q23efx15TDamaDeadHahenB@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r20, 4(r3)

lbl_802A7310:
	addi     r17, r17, 1
	stw      r3, 0x47c(r29)
	cmpwi    r17, 4
	addi     r29, r29, 4
	addi     r28, r28, 0xc
	addi     r27, r27, 8
	blt      lbl_802A6FBC
	lis      r3, __vt__Q23efx10TDamaSmoke@ha
	mr       r20, r31
	addi     r3, r3, __vt__Q23efx10TDamaSmoke@l
	li       r16, 0
	addi     r21, r3, 0x14

lbl_802A7340:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A73B8
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx10TDamaSmoke@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x27
	addi     r0, r4, __vt__Q23efx10TDamaSmoke@l
	stw      r19, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r21, 4(r3)

lbl_802A73B8:
	addi     r16, r16, 1
	stw      r3, 0x3d0(r20)
	cmpwi    r16, 3
	addi     r20, r20, 4
	blt      lbl_802A7340
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A744C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx16TDamaDeadHahenC1@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r7, r5, __vt__Q23efx9TChaseMtx@l
	addi     r4, r4, __vt__Q23efx16TDamaDeadHahenC1@l
	stw      r0, 0(r3)
	li       r9, 0
	li       r8, 0x2b2
	addi     r6, r7, 0x14
	stw      r19, 4(r3)
	li       r5, 0x21
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802A744C:
	stw      r3, 0x48c(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802A74D0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx16TDamaDeadHahenC2@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r7, r5, __vt__Q23efx9TChaseMtx@l
	addi     r4, r4, __vt__Q23efx16TDamaDeadHahenC2@l
	stw      r0, 0(r3)
	li       r9, 0
	li       r8, 0x2b2
	addi     r6, r7, 0x14
	stw      r19, 4(r3)
	li       r5, 0x22
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802A74D0:
	stw      r3, 0x490(r31)
	lmw      r16, 0x10(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802A74E8
 * Size:	000084
 */
TChasePosPos::~TChasePosPos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A7550
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A7540
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A7540:
	extsh.   r0, r31
	ble      lbl_802A7550
	mr       r3, r30
	bl       __dl__FPv

lbl_802A7550:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802A756C
 * Size:	000184
 */
void Damagumo::Obj::setupEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	li       r27, 0
	mr       r31, r26
	mr       r30, r26
	mr       r29, r26
	mr       r28, r26

lbl_802A7594:
	lwz      r3, 0x3b0(r30)
	addi     r4, r31, 0x314
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r3, 0x3c0(r30)
	addi     r8, r31, 0x314
	li       r6, 1
	li       r0, 1
	stw      r8, 0x10(r3)
	mulli    r4, r6, 0xc
	addi     r7, r31, 0x2f0
	lwz      r9, 0x3dc(r29)
	addi     r27, r27, 1
	mulli    r5, r0, 0xc
	li       r6, 2
	addi     r10, r4, 0x2f0
	stw      r7, 0x10(r9)
	mr       r3, r7
	add      r10, r31, r10
	stw      r10, 0x14(r9)
	mulli    r4, r6, 0xc
	addi     r11, r5, 0x2f0
	lwz      r9, 0x40c(r29)
	li       r0, 2
	mulli    r5, r0, 0xc
	li       r6, 3
	stw      r7, 0x10(r9)
	addi     r7, r31, 0x2fc
	add      r11, r31, r11
	stw      r10, 0x14(r9)
	addi     r10, r4, 0x2f0
	addi     r0, r31, 0x308
	lwz      r9, 0x3e0(r29)
	add      r10, r31, r10
	mulli    r4, r6, 0xc
	cmpwi    r27, 4
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r9, 0x410(r29)
	stw      r7, 0x10(r9)
	addi     r7, r31, 0x308
	stw      r10, 0x14(r9)
	addi     r10, r4, 0x2f0
	add      r10, r31, r10
	lwz      r9, 0x3e4(r29)
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r9, 0x414(r29)
	addi     r29, r29, 0xc
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r4, 0x43c(r28)
	stw      r11, 0x10(r4)
	lwz      r4, 0x45c(r28)
	stw      r3, 0x10(r4)
	addi     r3, r31, 0x2fc
	stw      r11, 0x14(r4)
	addi     r11, r5, 0x2f0
	add      r11, r31, r11
	addi     r31, r31, 0x30
	lwz      r4, 0x440(r28)
	stw      r11, 0x10(r4)
	lwz      r4, 0x460(r28)
	addi     r28, r28, 8
	stw      r3, 0x10(r4)
	stw      r11, 0x14(r4)
	lwz      r3, 0x47c(r30)
	addi     r30, r30, 4
	stw      r0, 0x10(r3)
	stw      r8, 0x14(r3)
	blt      lbl_802A7594
	lwz      r3, 0x174(r26)
	addi     r4, r2, lbl_8051BF48@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x48c(r26)
	addi     r4, r2, lbl_8051BF50@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r26)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x490(r26)
	stw      r3, 0x10(r4)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A76F0
 * Size:	0001F0
 */
void Damagumo::Obj::createOnGroundEffect(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r4
	mulli    r31, r30, 0x30
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	add      r3, r29, r31
	lfs      f2, 0x314(r3)
	stfs     f2, 0x38(r1)
	lfs      f1, 0x318(r3)
	stfs     f1, 0x3c(r1)
	lfs      f0, 0x31c(r3)
	stfs     f0, 0x40(r1)
	beq      lbl_802A77E4
	mr       r3, r5
	lwz      r12, 0(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TDamaWalkw@ha
	li       r8, 0x28
	addi     r9, r4, __vt__Q23efx3Arg@l
	li       r7, 0x29
	li       r6, 0x2a
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx10TDamaWalkw@l
	addi     r3, r1, 0x44
	stfs     f2, 0x3c(r1)
	addi     r4, r1, 0x28
	stw      r9, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	sth      r8, 0x48(r1)
	sth      r7, 0x4a(r1)
	sth      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r5, 0x58(r1)
	stw      r0, 0x44(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	addi     r4, r31, 0x314
	li       r3, 0x3849
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802A7848

lbl_802A77E4:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9TDamaWalk@ha
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx9TDamaWalk@l
	li       r7, 0x2b
	li       r6, 0x2c
	stw      r4, 0x18(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x18
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_802A7848:
	lbz      r0, 0x2dd(r29)
	cmplwi   r0, 0
	beq      lbl_802A7888
	mulli    r0, r30, 0xc
	li       r28, 0
	add      r30, r29, r0

lbl_802A7860:
	lwz      r3, 0x3dc(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 3
	blt      lbl_802A7860

lbl_802A7888:
	addi     r4, r31, 0x314
	li       r3, 0x5837
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A78E0
 * Size:	000128
 */
void Damagumo::Obj::createOffGroundEffect(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802A7920
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3c0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802A7940

lbl_802A7920:
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3b0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802A7940:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x200(r31)
	lfs      f1, 0x104(r3)
	lfs      f0, lbl_8051BF58@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A798C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5847
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802A79F4

lbl_802A798C:
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802A79C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5846
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802A79F4

lbl_802A79C8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5845
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A79F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7A08
 * Size:	0001A0
 */
void Damagumo::Obj::startPinchJointEffect()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	addi     r30, r1, 0x18
	lfd      f31, lbl_8051BF10@sda21(r2)
	lfs      f30, lbl_8051BEF8@sda21(r2)
	mr       r29, r3
	lfs      f29, lbl_8051BF60@sda21(r2)
	mr       r31, r30
	li       r27, 0
	lis      r28, 0x4330

lbl_802A7A50:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802A7A50
	li       r5, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 8
	stw      r5, 8(r1)
	lfd      f29, lbl_8051BF10@sda21(r2)
	mr       r27, r31
	stw      r4, 0xc(r1)
	li       r26, 0
	lfs      f30, lbl_8051BEF8@sda21(r2)
	lis      r28, 0x4330
	stw      r3, 0x10(r1)
	lfs      f31, lbl_8051BF64@sda21(r2)
	stw      r0, 0x14(r1)

lbl_802A7AD0:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r26, r26, 1
	stw      r0, 0x34(r1)
	cmpwi    r26, 4
	lwz      r4, 0(r27)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r27)
	addi     r27, r27, 4
	stwx     r4, r31, r3
	blt      lbl_802A7AD0
	mr       r27, r29
	li       r26, 0

lbl_802A7B28:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r27)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1
	addi     r31, r31, 4
	cmpwi    r26, 3
	addi     r27, r27, 4
	addi     r30, r30, 4
	blt      lbl_802A7B28
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7BA8
 * Size:	000058
 */
void Damagumo::Obj::finishPinchJointEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802A7BC4:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802A7BC4
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7C00
 * Size:	0001C0
 */
void Damagumo::Obj::startDeadEffect()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x64(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	stmw     r18, 0x28(r1)
	mr       r27, r3
	lis      r3, __vt__Q23efx13TDamaDeadBomb@ha
	addi     r21, r6, __vt__Q23efx3Arg@l
	mr       r31, r27
	mr       r30, r27
	mr       r29, r27
	mr       r28, r27
	addi     r22, r5, __vt__Q23efx5TBase@l
	addi     r23, r4, __vt__Q23efx8TSimple1@l
	addi     r26, r3, __vt__Q23efx13TDamaDeadBomb@l
	li       r19, 0

lbl_802A7C48:
	addi     r20, r31, 0xc
	li       r18, 1
	li       r24, 0x1c
	li       r25, 0

lbl_802A7C58:
	stw      r21, 0x14(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x2f0(r20)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x2f4(r20)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x2f8(r20)
	stw      r22, 8(r1)
	stw      r23, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r24, 0xc(r1)
	stw      r25, 0x10(r1)
	stw      r26, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	addi     r18, r18, 1
	addi     r20, r20, 0xc
	cmpwi    r18, 3
	blt      lbl_802A7C58
	li       r18, 0
	mr       r20, r30

lbl_802A7CAC:
	lwz      r3, 0x40c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 3
	blt      lbl_802A7CAC
	li       r18, 0
	mr       r20, r29

lbl_802A7CDC:
	lwz      r3, 0x43c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 2
	blt      lbl_802A7CDC
	lwz      r3, 0x47c(r28)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1
	addi     r30, r30, 0xc
	cmpwi    r19, 4
	addi     r29, r29, 8
	addi     r28, r28, 4
	addi     r31, r31, 0x30
	blt      lbl_802A7C48
	lwz      r3, 0x48c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r21, 0
	mr       r20, r27

lbl_802A7D88:
	lwz      r3, 0x3d0(r20)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r20, r20, 4
	cmpwi    r21, 3
	blt      lbl_802A7D88
	lmw      r18, 0x28(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7DC0
 * Size:	000250
 */
void Damagumo::Obj::updatePinchLife()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A7FE4
	lwz      r3, 0xc0(r29)
	lbz      r0, 0x2dd(r29)
	lfs      f1, 0x200(r29)
	lfs      f0, 0x104(r3)
	cmplwi   r0, 0
	fdivs    f1, f1, f0
	beq      lbl_802A7E60
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802A7FE4
	li       r28, 0
	mr       r27, r29
	stb      r28, 0x2dd(r29)

lbl_802A7E38:
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmpwi    r28, 3
	blt      lbl_802A7E38
	b        lbl_802A7FE4

lbl_802A7E60:
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802A7FE4
	li       r0, 1
	addi     r30, r1, 8
	stb      r0, 0x2dd(r29)
	mr       r31, r30
	lfd      f31, lbl_8051BF10@sda21(r2)
	li       r27, 0
	lfs      f30, lbl_8051BEF8@sda21(r2)
	lis      r28, 0x4330
	lfs      f29, lbl_8051BF60@sda21(r2)

lbl_802A7E90:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802A7E90
	li       r27, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 0x14
	stw      r27, 0x14(r1)
	lfd      f29, lbl_8051BF10@sda21(r2)
	mr       r26, r31
	stw      r4, 0x18(r1)
	lis      r28, 0x4330
	lfs      f30, lbl_8051BEF8@sda21(r2)
	stw      r3, 0x1c(r1)
	lfs      f31, lbl_8051BF64@sda21(r2)
	stw      r0, 0x20(r1)

lbl_802A7F0C:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x34(r1)
	cmpwi    r27, 4
	lwz      r4, 0(r26)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r26)
	addi     r26, r26, 4
	stwx     r4, r31, r3
	blt      lbl_802A7F0C
	mr       r26, r29
	li       r28, 0

lbl_802A7F64:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r26)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r26)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	addi     r26, r26, 4
	addi     r30, r30, 4
	blt      lbl_802A7F64
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5844
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A7FE4:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8010
 * Size:	000198
 */
void Damagumo::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r30, 0
	mr       r31, r27

lbl_802A802C:
	lwz      r3, 0x3b0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802A802C
	li       r30, 0
	mr       r31, r27

lbl_802A806C:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802A806C
	li       r29, 0
	mr       r30, r27

lbl_802A8098:
	li       r28, 0
	mr       r31, r30

lbl_802A80A0:
	lwz      r3, 0x3dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	blt      lbl_802A80A0
	addi     r29, r29, 1
	addi     r30, r30, 0xc
	cmpwi    r29, 4
	blt      lbl_802A8098
	li       r28, 0
	mr       r31, r27

lbl_802A80F0:
	li       r29, 0
	mr       r30, r31

lbl_802A80F8:
	lwz      r3, 0x43c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_802A80F8
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_802A80F0
	li       r28, 0
	mr       r30, r27

lbl_802A8148:
	lwz      r3, 0x47c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802A8148
	lwz      r3, 0x48c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A81A8
 * Size:	000198
 */
void Damagumo::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r30, 0
	mr       r31, r27

lbl_802A81C4:
	lwz      r3, 0x3b0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802A81C4
	li       r30, 0
	mr       r31, r27

lbl_802A8204:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802A8204
	li       r29, 0
	mr       r30, r27

lbl_802A8230:
	li       r28, 0
	mr       r31, r30

lbl_802A8238:
	lwz      r3, 0x3dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	blt      lbl_802A8238
	addi     r29, r29, 1
	addi     r30, r30, 0xc
	cmpwi    r29, 4
	blt      lbl_802A8230
	li       r28, 0
	mr       r31, r27

lbl_802A8288:
	li       r29, 0
	mr       r30, r31

lbl_802A8290:
	lwz      r3, 0x43c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_802A8290
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_802A8288
	li       r28, 0
	mr       r30, r27

lbl_802A82E0:
	lwz      r3, 0x47c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802A82E0
	lwz      r3, 0x48c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8340
 * Size:	000038
 */
void Damagumo::Obj::addShadowScale()
{
	/*
	lfs      f3, 0x2d8(r3)
	lfs      f2, lbl_8051BED4@sda21(r2)
	fcmpo    cr0, f3, f2
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051BF60@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x2d8(r3)
	lfs      f0, 0x2d8(r3)
	fcmpo    cr0, f0, f2
	blelr
	stfs     f2, 0x2d8(r3)
	blr
	*/
}

} // namespace efx

namespace efx {

/*
 * --INFO--
 * Address:	802A8378
 * Size:	00009C
 */
TDamaDeadHahenC2::~TDamaDeadHahenC2()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A83F8
	lis      r3, __vt__Q23efx16TDamaDeadHahenC2@ha
	addi     r3, r3, __vt__Q23efx16TDamaDeadHahenC2@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A83E8
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A83E8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A83E8:
	extsh.   r0, r31
	ble      lbl_802A83F8
	mr       r3, r30
	bl       __dl__FPv

lbl_802A83F8:
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
 * Address:	802A8414
 * Size:	00009C
 */
TDamaDeadHahenC1::~TDamaDeadHahenC1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A8494
	lis      r3, __vt__Q23efx16TDamaDeadHahenC1@ha
	addi     r3, r3, __vt__Q23efx16TDamaDeadHahenC1@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8484
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8484
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A8484:
	extsh.   r0, r31
	ble      lbl_802A8494
	mr       r3, r30
	bl       __dl__FPv

lbl_802A8494:
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
 * Address:	802A84B0
 * Size:	00009C
 */
TDamaSmoke::~TDamaSmoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A8530
	lis      r3, __vt__Q23efx10TDamaSmoke@ha
	addi     r3, r3, __vt__Q23efx10TDamaSmoke@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8520
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8520
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A8520:
	extsh.   r0, r31
	ble      lbl_802A8530
	mr       r3, r30
	bl       __dl__FPv

lbl_802A8530:
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
 * Address:	802A854C
 * Size:	00009C
 */
TDamaDeadHahenB::~TDamaDeadHahenB()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A85CC
	lis      r3, __vt__Q23efx15TDamaDeadHahenB@ha
	addi     r3, r3, __vt__Q23efx15TDamaDeadHahenB@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A85BC
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A85BC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A85BC:
	extsh.   r0, r31
	ble      lbl_802A85CC
	mr       r3, r30
	bl       __dl__FPv

lbl_802A85CC:
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
 * Address:	802A85E8
 * Size:	00009C
 */
TDamaDeadHahenA::~TDamaDeadHahenA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A8668
	lis      r3, __vt__Q23efx15TDamaDeadHahenA@ha
	addi     r3, r3, __vt__Q23efx15TDamaDeadHahenA@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8658
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8658
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A8658:
	extsh.   r0, r31
	ble      lbl_802A8668
	mr       r3, r30
	bl       __dl__FPv

lbl_802A8668:
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
 * Address:	802A8684
 * Size:	00009C
 */
TDamaDeadElecB::~TDamaDeadElecB()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A8704
	lis      r3, __vt__Q23efx14TDamaDeadElecB@ha
	addi     r3, r3, __vt__Q23efx14TDamaDeadElecB@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A86F4
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A86F4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A86F4:
	extsh.   r0, r31
	ble      lbl_802A8704
	mr       r3, r30
	bl       __dl__FPv

lbl_802A8704:
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
 * Address:	802A8720
 * Size:	00009C
 */
TDamaDeadElecA::~TDamaDeadElecA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A87A0
	lis      r3, __vt__Q23efx14TDamaDeadElecA@ha
	addi     r3, r3, __vt__Q23efx14TDamaDeadElecA@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8790
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A8790
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A8790:
	extsh.   r0, r31
	ble      lbl_802A87A0
	mr       r3, r30
	bl       __dl__FPv

lbl_802A87A0:
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
 * Address:	802A87BC
 * Size:	00009C
 */
TDamaHahen::~TDamaHahen()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A883C
	lis      r3, __vt__Q23efx10TDamaHahen@ha
	addi     r3, r3, __vt__Q23efx10TDamaHahen@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A882C
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A882C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A882C:
	extsh.   r0, r31
	ble      lbl_802A883C
	mr       r3, r30
	bl       __dl__FPv

lbl_802A883C:
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
 * Address:	802A8858
 * Size:	00009C
 */
TDamaFootw::~TDamaFootw()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802A88D8
	lis      r3, __vt__Q23efx10TDamaFootw@ha
	addi     r3, r3, __vt__Q23efx10TDamaFootw@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A88C8
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802A88C8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802A88C8:
	extsh.   r0, r31
	ble      lbl_802A88D8
	mr       r3, r30
	bl       __dl__FPv

lbl_802A88D8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802A88F4
 * Size:	000088
 */
void ConditionNotStickClient::satisfy(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A8960
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A8960
	lwz      r3, 0xf4(r31)
	lwz      r0, 4(r30)
	cmplw    r3, r0
	beq      lbl_802A8960
	li       r3, 1
	b        lbl_802A8964

lbl_802A8960:
	li       r3, 0

lbl_802A8964:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A897C
 * Size:	000004
 */
void Damagumo::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802A8980
 * Size:	000004
 */
void Damagumo::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802A8984
 * Size:	000008
 */
void Damagumo::Obj::getDamageCoeStoneState()
{
	/*
	lfs      f1, lbl_8051BF68@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A898C
 * Size:	000004
 */
void Damagumo::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802A8990
 * Size:	000008
 */
u32 Damagumo::Obj::getEnemyTypeID() { return 0x38; }

} // namespace efx

/*
 * --INFO--
 * Address:	802A8998
 * Size:	000028
 */
void __sinit_Damagumo_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804CD818@ha
	stw      r0, lbl_80515D70@sda21(r13)
	stfsu    f0, lbl_804CD818@l(r3)
	stfs     f0, lbl_80515D74@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802A89C0
 * Size:	000014
 */
void EnemyBase::@1176 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802A89D4
 * Size:	000014
 */
void EnemyBase::@1176 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802A89E8
 * Size:	000014
 */
void EnemyBase::@1176 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802A89FC
 * Size:	000014
 */
void EnemyBase::@1176 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A10
 * Size:	000014
 */
void EnemyBase::@1176 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A24
 * Size:	000014
 */
void EnemyBase::@1176 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1176
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	802A8A38
 * Size:	000008
 */
TDamaFootw::@4 @~TDamaFootw()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx10TDamaFootwFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A40
 * Size:	000008
 */
TDamaHahen::@4 @~TDamaHahen()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx10TDamaHahenFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A48
 * Size:	000008
 */
TDamaDeadElecA::@4 @~TDamaDeadElecA()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14TDamaDeadElecAFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A50
 * Size:	000008
 */
TDamaDeadElecB::@4 @~TDamaDeadElecB()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14TDamaDeadElecBFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A58
 * Size:	000008
 */
TDamaDeadHahenA::@4 @~TDamaDeadHahenA()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx15TDamaDeadHahenAFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A60
 * Size:	000008
 */
TDamaDeadHahenB::@4 @~TDamaDeadHahenB()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx15TDamaDeadHahenBFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A68
 * Size:	000008
 */
TDamaSmoke::@4 @~TDamaSmoke()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx10TDamaSmokeFv
	*/
}

/*
 * --INFO--
 * Address:	802A8A70
 * Size:	000008
 */
TDamaDeadHahenC1::@4 @~TDamaDeadHahenC1()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx16TDamaDeadHahenC1Fv
	*/
}

/*
 * --INFO--
 * Address:	802A8A78
 * Size:	000008
 */
TDamaDeadHahenC2::@4 @~TDamaDeadHahenC2()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx16TDamaDeadHahenC2Fv
	*/
}
} // namespace efx

} // namespace Game
