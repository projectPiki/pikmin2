#include "Game/Piki.h"
#include "Game/StateMachine.h"
#include "System.h"
#include "SoundID.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_piki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C880
    lbl_8047C880:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8047C88C
    lbl_8047C88C:
        .4byte 0x54506B45
        .4byte 0x66666563
        .4byte 0x74000000
    .global lbl_8047C898
    lbl_8047C898:
        .4byte 0x68617070
        .4byte 0x616A6E74
        .4byte 0x33000000
    .global lbl_8047C8A4
    lbl_8047C8A4:
        .4byte 0x68617070
        .4byte 0x616A6E74
        .4byte 0x31000000
    .global lbl_8047C8B0
    lbl_8047C8B0:
        .4byte 0x70696B69
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x68617070
        .4byte 0x616A6E74
        .4byte 0x33206E6F
        .4byte 0x7420666F
        .4byte 0x756E6421
        .4byte 0x0A000000
        .4byte 0x68617070
        .4byte 0x616A6E74
        .4byte 0x31206E6F
        .4byte 0x7420666F
        .4byte 0x756E6421
        .4byte 0x0A000000
        .4byte 0x70696B69
        .4byte 0x206F6E49
        .4byte 0x6E697400
        .4byte 0x2A2A2050
        .4byte 0x494B4920
        .4byte 0x4F4E494E
        .4byte 0x49542A2A
        .4byte 0x00000000
    .global lbl_8047C90C
    lbl_8047C90C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047C918
    lbl_8047C918:
        .4byte 0x6731415F
        .4byte 0x7265645F
        .4byte 0x646F7069
        .4byte 0x6E670000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B0990
    lbl_804B0990:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game4Piki
    __vt__Q24Game4Piki:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game8FakePikiFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game4PikiFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game8CreatureFv
        .4byte onInit__Q24Game4PikiFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game4PikiFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game4PikiFv
        .4byte doEntry__Q24Game8FakePikiFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8FakePikiFf
        .4byte doDirectDraw__Q24Game4PikiFR8Graphics
        .4byte getBodyRadius__Q24Game8CreatureFv
        .4byte getCellRadius__Q24Game8CreatureFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game8FakePikiFv
        .4byte "setVelocity__Q24Game8FakePikiFR10Vector3<f>"
        .4byte getVelocity__Q24Game8FakePikiFv
        .4byte "onSetPosition__Q24Game8FakePikiFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game8FakePikiFv
        .4byte isTeki__Q24Game8CreatureFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game4PikiFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game4PikiFv
        .4byte inWater__Q24Game8FakePikiFv
        .4byte getFlockMgr__Q24Game8CreatureFv
        .4byte onStartCapture__Q24Game8CreatureFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q24Game8CreatureFv
        .4byte isAtari__Q24Game8CreatureFv
        .4byte setAtari__Q24Game8CreatureFb
        .4byte isAlive__Q24Game4PikiFv
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
        .4byte bounceCallback__Q24Game4PikiFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game4PikiFRQ24Game9CollEvent
        .4byte platCallback__Q24Game4PikiFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game4PikiFv
        .4byte getPSCreature__Q24Game4PikiFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8FakePikiFv
        .4byte sound_culling__Q24Game8CreatureFv
        .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
        .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
        .4byte on_movie_begin__Q24Game4PikiFb
        .4byte on_movie_end__Q24Game4PikiFb
        .4byte movieStartAnimation__Q24Game4PikiFUl
        .4byte movieStartDemoAnimation__Q24Game4PikiFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game4PikiFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8FakePikiFf
        .4byte "movieGotoPosition__Q24Game4PikiFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game4PikiFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q24Game4PikiFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game8CreatureFv
        .4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game4PikiFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game4PikiFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game4PikiFPQ24Game8Creature
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
        .4byte ignoreAtari__Q24Game4PikiFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game4PikiFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game4PikiFv
        .4byte getCreatureID__Q24Game4PikiFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent"
        .4byte getDownfloorMass__Q24Game4PikiFv
        .4byte isPikmin__Q24Game4PikiFv
        .4byte doColorChange__Q24Game4PikiFv
        .4byte doDebugDL__Q24Game4PikiFv
        .4byte update__Q24Game4PikiFv
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
        .4byte getMapCollisionRadius__Q24Game8FakePikiFv
        .4byte "wallCallback__Q24Game4PikiFR10Vector3<f>"
        .4byte
   startMotion__Q24Game4PikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
        .4byte onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent
        .4byte updateLookCreature__Q24Game8FakePikiFv
        .4byte do_updateLookCreature__Q24Game4PikiFv
        .4byte onSetPosition__Q24Game4PikiFv
        .4byte isWalking__Q24Game4PikiFv
    .global __vt__Q23efx12TPkBlackDown
    __vt__Q23efx12TPkBlackDown:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx12TPkBlackDownFv"
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
        .4byte __dt__Q23efx12TPkBlackDownFv
    .global __vt__Q23efx7TPkMoeA
    __vt__Q23efx7TPkMoeA:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx7TPkMoeAFv"
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
        .4byte __dt__Q23efx7TPkMoeAFv
    .global "__vt__Q24Game26StateMachine<Q24Game4Piki>"
    "__vt__Q24Game26StateMachine<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte "init__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
        .4byte
   "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
        .4byte "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
        .4byte
   "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global pikiColors__Q24Game4Piki
    pikiColors__Q24Game4Piki:
        .skip 0x40
    .global pikiColorsCursor__Q24Game4Piki
    pikiColorsCursor__Q24Game4Piki:
        .skip 0x20

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515920
    lbl_80515920:
        .skip 0x4
    .global lbl_80515924
    lbl_80515924:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518410
    lbl_80518410:
        .4byte 0x40800000
    .global lbl_80518414
    lbl_80518414:
        .4byte 0x50535069
        .4byte 0x6B690000
    .global lbl_8051841C
    lbl_8051841C:
        .4byte 0x00000000
    .global lbl_80518420
    lbl_80518420:
        .4byte 0x41A00000
    .global lbl_80518424
    lbl_80518424:
        .4byte 0x41700000
    .global lbl_80518428
    lbl_80518428:
        .4byte 0x70752D31
        .4byte 0x00000000
    .global lbl_80518430
    lbl_80518430:
        .4byte 0x70752D34
        .4byte 0x00000000
    .global lbl_80518438
    lbl_80518438:
        .float 0.1
    .global lbl_8051843C
    lbl_8051843C:
        .4byte 0x42C80000
    .global lbl_80518440
    lbl_80518440:
        .float 1.0
    .global lbl_80518444
    lbl_80518444:
        .4byte 0x47FA0000
    .global lbl_80518448
    lbl_80518448:
        .4byte 0xC7FA0000
    .global lbl_8051844C
    lbl_8051844C:
        .float 0.5
    .global lbl_80518450
    lbl_80518450:
        .4byte 0x41200000
    .global lbl_80518454
    lbl_80518454:
        .4byte 0x40000000
    .global lbl_80518458
    lbl_80518458:
        .4byte 0x40A00000
    .global lbl_8051845C
    lbl_8051845C:
        .4byte 0x47000000
    .global lbl_80518460
    lbl_80518460:
        .4byte 0x3E4CCCCD
        .4byte 0x00000000
    .global lbl_80518468
    lbl_80518468:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518470
    lbl_80518470:
        .4byte 0x3F99999A
    .global lbl_80518474
    lbl_80518474:
        .4byte 0x3F4CCCCD
    .global lbl_80518478
    lbl_80518478:
        .4byte 0x40E00000
    .global lbl_8051847C
    lbl_8051847C:
        .4byte 0x68656164
        .4byte 0x6A6E7400
    .global lbl_80518484
    lbl_80518484:
        .4byte 0x43480000
    .global lbl_80518488
    lbl_80518488:
        .4byte 0x40400000
    .global lbl_8051848C
    lbl_8051848C:
        .4byte 0x70696B6D
        .4byte 0x696E0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801476DC
 * Size:	0001A4
 */
Piki::Piki(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__Q24Game8FakePikiFv
	lis      r4, __vt__Q24Game4Piki@ha
	addi     r3, r31, 0x298
	addi     r4, r4, __vt__Q24Game4Piki@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r31)
	bl       __ct__Q24Game13UpdateContextFv
	li       r3, 0x20
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80147744
	lis      r5, "__vt__Q24Game26StateMachine<Q24Game4Piki>"@ha
	lis      r4, __vt__Q24Game7PikiFSM@ha
	addi     r0, r5, "__vt__Q24Game26StateMachine<Q24Game4Piki>"@l
	li       r5, -1
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q24Game7PikiFSM@l
	stw      r5, 0x18(r3)
	stw      r0, 0(r3)

lbl_80147744:
	stw      r3, 0x28c(r31)
	mr       r4, r31
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518410@sda21(r2)
	li       r3, 0x10
	stfs     f0, 0x224(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80147784
	mr       r4, r31
	bl       __ct__Q26PikiAI5BrainFPQ24Game4Piki
	mr       r0, r3

lbl_80147784:
	stw      r0, 0x294(r31)
	addi     r6, r31, 0x218
	li       r4, 0
	li       r5, 0
	lwz      r3, 0x114(r31)
	li       r7, 0
	bl
createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
	li       r0, 0
	lis      r3, lbl_8047C88C@ha
	sth      r0, 0x128(r31)
	addi     r4, r3, lbl_8047C88C@l
	li       r5, 0
	stw      r0, 0x2c4(r31)
	stw      r0, 0x290(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x1a8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801477DC
	bl       __ct__Q23efx9TPkEffectFv
	mr       r0, r3

lbl_801477DC:
	stw      r0, 0x258(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80147814
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx7Context@ha
	li       r0, 0
	addi     r3, r3, __vt__Q23efx7Context@l
	stw      r3, 0(r30)
	stw      r0, 0x10(r30)
	stw      r0, 0xc(r30)
	stw      r0, 8(r30)
	stw      r0, 4(r30)

lbl_80147814:
	stw      r30, 0x27c(r31)
	lis      r3, lbl_8047C88C@ha
	addi     r4, r3, lbl_8047C88C@l
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518414@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80147854
	mr       r4, r31
	bl       __ct__Q23PSM4PikiFPQ24Game4Piki
	mr       r0, r3

lbl_80147854:
	stw      r0, 0x250(r31)
	addi     r4, r2, lbl_80518414@sda21
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80147880
 * Size:	0002BC
 */
TPkEffect::TPkEffect(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
li       r9, -1
lis      r7, __vt__Q23efx5TBase@ha
stw      r0, 0x44(r1)
li       r0, 0
lis      r6, __vt__18JPAEmitterCallBack@ha
lis      r4, __vt__Q23efx9TChaseMtx@ha
stmw     r18, 8(r1)
addi     r23, r4, __vt__Q23efx9TChaseMtx@l
addi     r20, r7, __vt__Q23efx5TBase@l
addi     r21, r6, __vt__18JPAEmitterCallBack@l
lis      r4, __vt__Q23efx7TPkMoeA@ha
mr       r31, r3
addi     r30, r4, __vt__Q23efx7TPkMoeA@l
li       r22, 0x2b2
lis      r4, __ct__Q23efx15ContextChasePosFv@ha
addi     r24, r23, 0x14
li       r25, 0x174
li       r29, 0x16f
addi     r12, r30, 0x14
li       r11, 0x14a
addi     r4, r4, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
li       r7, 1
stb      r0, 0(r3)
lis      r3, __vt__Q23efx5TSync@ha
addi     r8, r3, __vt__Q23efx5TSync@l
stb      r0, 1(r31)
lis      r3, __vt__Q23efx11TPkNageBlur@ha
addi     r26, r3, __vt__Q23efx11TPkNageBlur@l
addi     r19, r8, 0x14
stb      r0, 2(r31)
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r28, r3, __vt__Q23efx9TChasePos@l
addi     r27, r26, 0x14
stb      r0, 3(r31)
lis      r3, __vt__Q23efx12TPkBlackDown@ha
addi     r10, r3, __vt__Q23efx12TPkBlackDown@l
addi     r18, r28, 0x14
stb      r0, 4(r31)
lis      r3, __dt__Q23efx15ContextChasePosFv@ha
addi     r5, r3, __dt__Q23efx15ContextChasePosFv@l
stb      r0, 5(r31)
addi     r3, r31, 0x70
stb      r0, 6(r31)
stb      r0, 7(r31)
stw      r9, 8(r31)
addi     r9, r10, 0x14
stw      r0, 0xc(r31)
stw      r0, 0x10(r31)
stw      r0, 0x14(r31)
stw      r0, 0x18(r31)
stw      r0, 0x1c(r31)
stw      r0, 0x20(r31)
stw      r0, 0x24(r31)
stw      r20, 0x34(r31)
stw      r21, 0x38(r31)
stw      r8, 0x34(r31)
stw      r19, 0x38(r31)
stw      r0, 0x3c(r31)
sth      r22, 0x40(r31)
stb      r0, 0x42(r31)
stw      r23, 0x34(r31)
stw      r24, 0x38(r31)
stw      r0, 0x44(r31)
sth      r25, 0x40(r31)
stw      r26, 0x34(r31)
stw      r27, 0x38(r31)
stw      r20, 0x48(r31)
stw      r21, 0x4c(r31)
stw      r8, 0x48(r31)
stw      r19, 0x4c(r31)
stw      r0, 0x50(r31)
sth      r22, 0x54(r31)
stb      r0, 0x56(r31)
stw      r28, 0x48(r31)
stw      r18, 0x4c(r31)
stw      r0, 0x58(r31)
sth      r29, 0x54(r31)
stw      r30, 0x48(r31)
stw      r12, 0x4c(r31)
stw      r20, 0x5c(r31)
stw      r21, 0x60(r31)
stw      r8, 0x5c(r31)
stw      r19, 0x60(r31)
stw      r0, 0x64(r31)
sth      r22, 0x68(r31)
stb      r0, 0x6a(r31)
stw      r28, 0x5c(r31)
stw      r18, 0x60(r31)
stw      r0, 0x6c(r31)
sth      r11, 0x68(r31)
stw      r10, 0x5c(r31)
stw      r9, 0x60(r31)
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x90
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0xac
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0xc8
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 2
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x100
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x11c
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 2
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x154
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x170
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
lis      r3, __ct__Q23efx15ContextChasePosFv@ha
lis      r5, __dt__Q23efx15ContextChasePosFv@ha
addi     r4, r3, __ct__Q23efx15ContextChasePosFv@l
li       r6, 0x1c
addi     r3, r31, 0x18c
addi     r5, r5, __dt__Q23efx15ContextChasePosFv@l
li       r7, 1
bl       __construct_array
li       r0, 0
mr       r3, r31
stb      r0, 0(r31)
stb      r0, 1(r31)
stb      r0, 2(r31)
stb      r0, 3(r31)
stb      r0, 4(r31)
stb      r0, 5(r31)
stb      r0, 6(r31)
stb      r0, 7(r31)
lmw      r18, 8(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeMoeSmoke::~ToeMoeSmoke(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeWater::~ToeWater(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeChudoku::~ToeChudoku(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeMoeBC::~ToeMoeBC(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeNagekira::~ToeNagekira(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeDoping::~ToeDoping(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ToeKourin::~ToeKourin(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80147B3C
 * Size:	00009C
 */
TPkBlackDown::~TPkBlackDown(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80147BBC
lis      r3, __vt__Q23efx12TPkBlackDown@ha
addi     r3, r3, __vt__Q23efx12TPkBlackDown@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147BAC
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147BAC
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80147BAC:
extsh.   r0, r31
ble      lbl_80147BBC
mr       r3, r30
bl       __dl__FPv

lbl_80147BBC:
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
 * Address:	80147BD8
 * Size:	00009C
 */
TPkMoeA::~TPkMoeA(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80147C58
lis      r3, __vt__Q23efx7TPkMoeA@ha
addi     r3, r3, __vt__Q23efx7TPkMoeA@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147C48
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147C48
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80147C48:
extsh.   r0, r31
ble      lbl_80147C58
mr       r3, r30
bl       __dl__FPv

lbl_80147C58:
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
 * Address:	80147C74
 * Size:	00009C
 */
TPkNageBlur::~TPkNageBlur(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80147CF4
lis      r3, __vt__Q23efx11TPkNageBlur@ha
addi     r3, r3, __vt__Q23efx11TPkNageBlur@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147CE4
lis      r3, __vt__Q23efx9TChaseMtx@ha
addi     r3, r3, __vt__Q23efx9TChaseMtx@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80147CE4
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80147CE4:
extsh.   r0, r31
ble      lbl_80147CF4
mr       r3, r30
bl       __dl__FPv

lbl_80147CF4:
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
 * Address:	80147D10
 * Size:	0000B4
 */
bool Piki::isWalking()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80147DAC
	mr       r3, r31
	bl       getCurrAction__Q24Game4PikiFv
	cmplwi   r3, 0
	beq      lbl_80147DAC
	lhz      r0, 0x28(r3)
	cmplwi   r0, 1
	bne      lbl_80147DAC
	lfs      f2, 0x1e4(r31)
	lfs      f1, 0x1e8(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x1ec(r31)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051841C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80147D94
	fmadds   f0, f2, f2, f4
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80147D98
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80147D98

lbl_80147D94:
	fmr      f2, f1

lbl_80147D98:
	lfs      f0, lbl_80518420@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80147DAC
	li       r3, 1
	b        lbl_80147DB0

lbl_80147DAC:
	li       r3, 0

lbl_80147DB0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80147DC4
 * Size:	000050
 */
int Piki::getFormationSlotID()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80147DFC
	mr       r3, r31
	bl       getCurrAction__Q24Game4PikiFv
	cmplwi   r3, 0
	beq      lbl_80147DFC
	lwz      r3, 0x34(r3)
	b        lbl_80147E00

lbl_80147DFC:
	li       r3, -1

lbl_80147E00:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80147E14
 * Size:	000024
 */
void Piki::getCurrAction(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x294(r3)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80147E38
 * Size:	000010
 */
void Piki::clearCurrAction(void)
{
	/*
	lwz      r3, 0x294(r3)
	li       r0, -1
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80147E48
 * Size:	00000C
 */
int Piki::getCurrActionID(void)
{
	/*
	lwz      r3, 0x294(r3)
	lwz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80147E54
 * Size:	000280
 */
void Piki::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047C880@ha
	stw      r0, 0x24(r1)
	li       r0, -1
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8047C880@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	sth      r0, 0x2a4(r3)
	li       r0, 0
	stw      r0, 0x2c4(r3)
	bl       initColor__Q24Game4PikiFv
	mr       r3, r29
	bl       initFakePiki__Q24Game8FakePikiFv
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0x1e0(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 0
	bl       setGasInvincible__Q24Game4PikiFUc
	li       r0, 0
	mr       r4, r29
	stb      r0, 0x2b8(r29)
	stb      r0, 0x2b9(r29)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       setupPiki__Q24Game7PikiMgrFPQ24Game4Piki
	mr       r3, r29
	bl       initAnimator__Q24Game8FakePikiFv
	lwz      r3, 0x258(r29)
	bl       init__Q23efx9TPkEffectFv
	lwz      r3, 0x258(r29)
	addi     r5, r29, 0x25c
	addi     r4, r29, 0x26c
	li       r0, -1
	stw      r5, 0xc(r3)
	lwz      r3, 0x258(r29)
	stw      r4, 0x14(r3)
	lwz      r3, 0x258(r29)
	stw      r0, 8(r3)
	lwz      r3, 0x114(r29)
	lwz      r4, 0x174(r29)
	bl       attachModel__8CollTreeFPQ28SysShape9MtxObject
	cmplwi   r30, 0
	beq      lbl_80147FA0
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	beq      lbl_80147FA0
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI17CreatureActionArg@ha
	addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__Q26PikiAI17CreatureActionArg@l
	addi     r5, r1, 8
	stw      r4, 8(r1)
	li       r4, 0xb
	stw      r0, 8(r1)
	lwz      r3, 0x294(r29)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	mr       r3, r29
	li       r4, 5
	bl       changeShape__Q24Game4PikiFi
	lwz      r0, 0x17c(r29)
	ori      r0, r0, 0x100
	stw      r0, 0x17c(r29)
	b        lbl_80147FC0

lbl_80147FA0:
	lwz      r3, 0x294(r29)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	lis      r3, alivePikis__Q24Game8GameStat@ha
	mr       r4, r29
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki

lbl_80147FC0:
	cmplwi   r30, 0
	beq      lbl_80147FD4
	lwz      r5, 4(r30)
	cmpwi    r5, -1
	bne      lbl_80147FF8

lbl_80147FD4:
	lwz      r3, 0x28c(r29)
	mr       r4, r29
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80148014

lbl_80147FF8:
	lwz      r3, 0x28c(r29)
	mr       r4, r29
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80148014:
	lwz      r4, pikiMgr__4Game@sda21(r13)
	addi     r3, r29, 0x298
	lwz      r4, 0x78(r4)
	bl       init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
	lwz      r3, 0x174(r29)
	addi     r4, r31, 0x18
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x268(r29)
	addi     r4, r31, 0x24
	lwz      r3, 0x174(r29)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x278(r29)
	lwz      r0, 0x268(r29)
	cmplwi   r0, 0
	bne      lbl_80148064
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0x2b4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80148064:
	lwz      r0, 0x278(r29)
	cmplwi   r0, 0
	bne      lbl_80148084
	addi     r3, r31, 0x30
	addi     r5, r31, 0x54
	li       r4, 0x2b7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80148084:
	mr       r3, r29
	addi     r4, r31, 0x6c
	bl       debugShapeDL__Q24Game8FakePikiFPc
	lwz      r3, pikiMgr__4Game@sda21(r13)
	addi     r4, r31, 0x78
	bl       debugShapeDL__Q24Game7PikiMgrFPc
	lfs      f0, lbl_8051841C@sda21(r2)
	li       r0, -1
	mr       r3, r29
	li       r4, 0
	stfs     f0, 0x288(r29)
	sth      r0, 0x284(r29)
	bl       setDopeEffect__Q24Game4PikiFb
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
 * Address:	801480D4
 * Size:	000034
 */
// void start__Q24Game26StateMachine<Game::Piki>
// FPQ24Game4PikiiPQ24Game8StateArg(void)
template <>
void StateMachine<Piki>::start(Piki*, int, StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x290(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80148108
 * Size:	00038C
 */
void Piki::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	bne      lbl_80148164
	cmplwi   r29, 0
	beq      lbl_80148164
	lwz      r0, 4(r29)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_80148164
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_80148164
	bl       vsChargePikmin__Q24Game5OnyonFv

lbl_80148164:
	mr       r3, r31
	bl       clearDope__Q24Game4PikiFv
	lwz      r30, 0x258(r31)
	li       r0, 0
	stb      r0, 0(r30)
	mr       r3, r30
	stb      r0, 1(r30)
	stb      r0, 2(r30)
	stb      r0, 3(r30)
	stb      r0, 4(r30)
	stb      r0, 5(r30)
	stb      r0, 6(r30)
	stb      r0, 7(r30)
	bl       killKourin___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killDoping___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killNage___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killMoe___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killChudoku___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killMoeSmoke___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killBlackDown___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killWater___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killHamonA___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killHamonB___Q23efx9TPkEffectFv
	cmplwi   r29, 0
	beq      lbl_801481F8
	lwz      r0, 4(r29)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801483B8

lbl_801481F8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80148278
	lwz      r3, 0x44(r3)
	li       r0, 0
	cmpwi    r3, 2
	beq      lbl_8014821C
	cmpwi    r3, 3
	bne      lbl_80148220

lbl_8014821C:
	li       r0, 1

lbl_80148220:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80148278
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148278
	lis      r3, __vt__Q24Game11GameMessage@ha
	lis      r4, __vt__Q24Game23GameMessageVsPikminDead@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q24Game23GameMessageVsPikminDead@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_80148278:
	mr       r4, r31
	addi     r3, r1, 0xc
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0x258(r31)
	li       r0, 0
	stb      r0, 0(r30)
	mr       r3, r30
	stb      r0, 1(r30)
	stb      r0, 2(r30)
	stb      r0, 3(r30)
	stb      r0, 4(r30)
	stb      r0, 5(r30)
	stb      r0, 6(r30)
	stb      r0, 7(r30)
	bl       killKourin___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killDoping___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killNage___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killMoe___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killChudoku___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killMoeSmoke___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killBlackDown___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killWater___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killHamonA___Q23efx9TPkEffectFv
	mr       r3, r30
	bl       killHamonB___Q23efx9TPkEffectFv
	lwz      r3, 0x10(r30)
	lwz      r4, 8(r30)
	bl       "createSimpleDead__3efxFR10Vector3<f>l"
	lwz      r3, 0x250(r31)
	li       r4, 0x2810
	li       r5, 0x5a
	li       r6, 0
	bl       startFreePikiSound__Q23PSM4PikiFUlUlUl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801483B8
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_801483B8
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	bge      lbl_8014838C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014838C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014838C
	li       r3, 7
	bl       inc__Q24Game8DeathMgrFi

lbl_8014838C:
	lha      r4, 0x2a4(r31)
	cmpwi    r4, -1
	beq      lbl_801483B8
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_801483B8
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x40
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	bl       incKillPikmin__Q34Game8TekiStat4InfoFv

lbl_801483B8:
	mr       r3, r31
	li       r30, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801483E8
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	bne      lbl_801483E8
	li       r30, 1

lbl_801483E8:
	mr       r3, r31
	bl       killFakePiki__Q24Game8FakePikiFv
	mr       r3, r31
	li       r4, 0
	bl       setFreeLightEffect__Q24Game4PikiFb
	mr       r3, r31
	li       r4, 0
	bl       setDopeEffect__Q24Game4PikiFb
	lwz      r3, 0x294(r31)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80148430
	lwz      r3, 0x294(r31)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80148430:
	lwz      r4, 0x294(r31)
	li       r0, -1
	addi     r3, r31, 0x298
	stw      r0, 8(r4)
	bl       exit__Q24Game13UpdateContextFv
	clrlwi.  r0, r30, 0x18
	bne      lbl_8014845C
	lis      r3, alivePikis__Q24Game8GameStat@ha
	mr       r4, r31
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat11PikiCounterFPQ24Game4Piki

lbl_8014845C:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       "kill__27MonoObjectMgr<Q24Game4Piki>FPQ24Game4Piki"
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       exit__Q25Radar3MgrFPQ24Game15TPositionObject
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80148494
 * Size:	000004
 */
void PikiAI::Action::cleanup(void) { }

namespace Game {

/*
 * --INFO--
 * Address:	80148498
 * Size:	00001C
 */
void Piki::onSetPosition(void)
{
	/*
	lfs      f0, 0x20c(r3)
	stfs     f0, 0x218(r3)
	lfs      f0, 0x210(r3)
	stfs     f0, 0x21c(r3)
	lfs      f0, 0x214(r3)
	stfs     f0, 0x220(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801484B4
 * Size:	000024
 */
void Piki::getLODSphere(Sys::Sphere&)
{
	/*
	lfs      f1, 0x20c(r3)
	lfs      f0, lbl_80518424@sda21(r2)
	stfs     f1, 0(r4)
	lfs      f1, 0x210(r3)
	stfs     f1, 4(r4)
	lfs      f1, 0x214(r3)
	stfs     f1, 8(r4)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801484D8
 * Size:	000210
 */
void Piki::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_80518428@sda21
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x250(r30)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       updateGasInvincible__Q24Game4PikiFv
	mr       r3, r30
	bl       updateLook__Q24Game8FakePikiFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x210(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518430@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148588
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801485A0

lbl_80148588:
	lwz      r3, 0x28c(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801485A0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801486D0
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518430@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, 0x258(r30)
	bl       update__Q23efx9TPkEffectFv
	lwz      r3, 0x27c(r30)
	addi     r4, r2, lbl_80518428@sda21
	lfs      f0, 0x25c(r30)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x260(r30)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x264(r30)
	stfs     f0, 0x20(r3)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801486D0
	lwz      r0, 0x190(r30)
	cmplwi   r0, 0
	beq      lbl_801486D0
	mr       r3, r30
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 5
	lbz      r31, 0x2b8(r30)
	beq      lbl_801486D0
	cmpwi    r3, 0xa
	beq      lbl_801486D0
	lwz      r3, 0x290(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801486D0
	cmpwi    r31, 0
	beq      lbl_801486D0
	cmpwi    r31, 5
	beq      lbl_801486D0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_801486D0
	lfs      f1, 0x204(r30)
	lfs      f0, lbl_80518438@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801486D0
	lwz      r3, 0x28c(r30)
	mr       r4, r30
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x190(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x258(r30)
	stw      r3, 0x20(r4)

lbl_801486D0:
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
 * Address:	801486E8
 * Size:	000008
 */
bool PikiState::dead(void) { return false; }

/*
 * --INFO--
 * Address:	801486F0
 * Size:	000058
 */
bool Piki::isAlive(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xbc(r3)
	rlwinm.  r0, r0, 0x1f, 0x1f, 0x1f
	beq      lbl_80148734
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80148734
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_80148738

lbl_80148734:
	mr       r3, r0

lbl_80148738:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148748
 * Size:	000004
 */
void Piki::on_movie_begin(bool) { }

/*
 * --INFO--
 * Address:	8014874C
 * Size:	000064
 */
void Piki::on_movie_end(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8014879C
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0x1f
	lwz      r12, 0(r31)
	li       r5, 0x1f
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8014879C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801487B0
 * Size:	000008
 */
s32 Piki::getCreatureID(void)
{
	/*
	lwz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801487B8
 * Size:	000004
 */
void Piki::movieUserCommand(unsigned long, Game::MoviePlayer*) { }

/*
 * --INFO--
 * Address:	801487BC
 * Size:	000038
 */
void Piki::movieStartAnimation(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
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
 * Address:	801487F4
 * Size:	000048
 */
void Piki::movieStartDemoAnimation(SysShape::AnimInfo*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x1c8
	bl       startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
	mr       r4, r31
	addi     r3, r30, 0x1ac
	bl       startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
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
 * Address:	8014883C
 * Size:	000088
 */
// void movieSetTranslation__Q24Game4PikiFR10Vector3f f(void)
void Piki::movieSetTranslation(Vector3f&, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lfs      f0, lbl_8051841C@sda21(r2)
	mr       r31, r3
	fmr      f31, f1
	li       r5, 0
	stfs     f0, 0x200(r3)
	stfs     f0, 0x204(r3)
	stfs     f0, 0x208(r3)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	stfs     f0, 0x11c(r3)
	stfs     f0, 0x120(r3)
	stfs     f0, 0x124(r3)
	lfs      f0, 0x20c(r3)
	stfs     f0, 0x238(r3)
	lfs      f0, 0x210(r3)
	stfs     f0, 0x23c(r3)
	lfs      f0, 0x214(r3)
	stfs     f0, 0x240(r3)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	stfs     f31, 0x1fc(r31)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801488C4
 * Size:	000008
 */
// u32 movieGotoPosition__Q24Game4PikiFR10Vector3f(void) { return 0x0; }
bool Piki::movieGotoPosition(Vector3f&) { return false; }

/*
 * --INFO--
 * Address:	801488CC
 * Size:	000040
 */
void Piki::startSound(u32, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r5, 0x18
	beq      lbl_801488EC
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlQ36PSGame5SeMgr7SetSeId
	b        lbl_801488FC

lbl_801488EC:
	lwz      r3, 0x250(r3)
	li       r5, 0x5a
	li       r6, 0
	bl       startFreePikiSound__Q23PSM4PikiFUlUlUl

lbl_801488FC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014890C
 * Size:	000048
 */
void Piki::startSound(u32, PSGame::SeMgr::SetSeId)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r5, 8
	stw      r0, 0x14(r1)
	bge      lbl_80148934
	lwz      r3, 0x250(r3)
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	b        lbl_80148944

lbl_80148934:
	lwz      r3, 0x250(r3)
	li       r5, 0x5a
	li       r6, 0
	bl       startFreePikiSound__Q23PSM4PikiFUlUlUl

lbl_80148944:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148954
 * Size:	000070
 */
void Piki::startSound(Game::Creature*, u32, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r6, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80148984
	li       r6, 0
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	b        lbl_801489AC

lbl_80148984:
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x250(r30)
	mr       r5, r31
	li       r6, 0
	bl       startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl

lbl_801489AC:
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
 * Address:	801489C4
 * Size:	0000CC
 */
void Piki::startSound(Game::Creature*, u32, PSGame::SeMgr::SetSeId)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	beq      lbl_80148A70
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80148A70
	cmpwi    r31, 8
	bge      lbl_80148A48
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x250(r28)
	mr       r5, r30
	mr       r6, r31
	li       r7, 0
	bl
startPikiSetSound__Q23PSM4PikiFPQ27JAInter6ObjectUlQ36PSGame5SeMgr7SetSeIdUl b
lbl_80148A70

lbl_80148A48:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x250(r28)
	mr       r5, r30
	li       r6, 0
	bl       startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl

lbl_80148A70:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148A90
 * Size:	000014
 */
void Piki::getJAIObject(void)
{
	/*
	lwz      r3, 0x250(r3)
	cmplwi   r3, 0
	beqlr
	addi     r3, r3, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148AA4
 * Size:	000008
 */
PSM::Creature* Piki::getPSCreature(void)
{
	return m_soundObj;
	/*
	lwz      r3, 0x250(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148AAC
 * Size:	000030
 */
bool Piki::canVsBattle(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x290(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
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
 * Address:	80148ADC
 * Size:	000008
 */
bool PikiState::battleOK() { return false; }

/*
 * --INFO--
 * Address:	80148AE4
 * Size:	00003C
 */
void Piki::getVsBattlePiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x294(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 0xd
	bne      lbl_80148B0C
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r3, 0x10(r3)
	b        lbl_80148B10

lbl_80148B0C:
	li       r3, 0

lbl_80148B10:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148B20
 * Size:	0000B0
 */
void Piki::attachRadar(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 3
	beq      lbl_80148BA4
	bge      lbl_80148B54
	cmpwi    r0, 1
	beq      lbl_80148B74
	bge      lbl_80148B84
	cmpwi    r0, 0
	bge      lbl_80148B64
	b        lbl_80148BC0

lbl_80148B54:
	cmpwi    r0, 5
	beq      lbl_80148BB4
	bge      lbl_80148BC0
	b        lbl_80148B94

lbl_80148B64:
	li       r4, 4
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80148BC0

lbl_80148B74:
	li       r4, 3
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80148BC0

lbl_80148B84:
	li       r4, 5
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80148BC0

lbl_80148B94:
	li       r4, 7
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80148BC0

lbl_80148BA4:
	li       r4, 6
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80148BC0

lbl_80148BB4:
	li       r4, 8
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl

lbl_80148BC0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148BD0
 * Size:	000148
 */
void Piki::inWaterCallback(WaterBox*)
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
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 5
	lbz      r31, 0x2b8(r29)
	beq      lbl_80148C80
	cmpwi    r3, 0xa
	beq      lbl_80148C80
	lwz      r3, 0x290(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80148C80
	cmpwi    r31, 0
	beq      lbl_80148C80
	cmpwi    r31, 5
	beq      lbl_80148C80
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80148CFC
	lfs      f1, 0x204(r29)
	lfs      f0, lbl_80518438@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80148CFC
	lwz      r3, 0x28c(r29)
	mr       r4, r29
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80148C80
	b        lbl_80148CFC

lbl_80148C80:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x258(r29)
	stw      r3, 0x20(r4)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148CFC
	lwz      r31, 0x258(r29)
	lwz      r4, 0(r31)
	mr       r3, r31
	ori      r0, r4, 0x20
	rlwinm   r30, r4, 0x1b, 0x1f, 0x1f
	stw      r0, 0(r31)
	bl       updateHamon___Q23efx9TPkEffectFv
	cmplwi   r30, 0
	bne      lbl_80148CE4
	addi     r3, r31, 0x28
	bl       "createSimpleDive__3efxFR10Vector3<f>"

lbl_80148CE4:
	lwz      r3, 0x250(r29)
	li       r4, 0x2811
	li       r5, 6
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl

lbl_80148CFC:
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
 * Address:	80148D18
 * Size:	000068
 */
void Piki::outWaterCallback(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80148D4C
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl

lbl_80148D4C:
	lwz      r31, 0x258(r31)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stw      r0, 0(r31)
	bl       killHamonA___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killHamonB___Q23efx9TPkEffectFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148D80
 * Size:	000004
 */
void PikiState::outWaterCallback(Game::Piki* p) { }

/*
 * --INFO--
 * Address:	80148D84
 * Size:	000154
 */
void Piki::might_bury(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r3
	lwz      r3, 0xc8(r3)
	cmplwi   r3, 0
	beq      lbl_80148DBC
	addi     r3, r3, 0x5c
	bl       isBald__Q27MapCode4CodeFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148DBC
	li       r3, 0
	b        lbl_80148EC4

lbl_80148DBC:
	lfs      f1, 0x20c(r31)
	addi     r3, r1, 0x24
	lfs      f0, lbl_8051843C@sda21(r2)
	addi     r4, r1, 0x14
	stfs     f1, 0x14(r1)
	lfs      f1, 0x210(r31)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x214(r31)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x44
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80148EB0

lbl_80148E00:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x40a
	beq      lbl_80148E24
	cmplwi   r0, 0x40c
	beq      lbl_80148E24
	cmplwi   r0, 0x405
	bne      lbl_80148EA8

lbl_80148E24:
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x210(r31)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x20c(r31)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x214(r31)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051841C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80148E8C
	ble      lbl_80148E90
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80148E90

lbl_80148E8C:
	fmr      f1, f0

lbl_80148E90:
	lfs      f0, lbl_8051843C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80148EA8
	li       r3, 0
	b        lbl_80148EC4

lbl_80148EA8:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_80148EB0:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148E00
	li       r3, 1

lbl_80148EC4:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148ED8
 * Size:	000014
 */
void Piki::surviveDayEnd(void)
{
	/*
	lwz      r3, 0x294(r3)
	lwz      r0, 8(r3)
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148EEC
 * Size:	000044
 */
void Piki::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80148F20
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80148F20:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148F30
 * Size:	000004
 */
void PikiState::onKeyEvent(Game::Piki*, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	80148F34
 * Size:	00001C
 */
int Piki::getStateID(void)
{
	/*
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80148F48
	lwz      r3, 4(r3)
	blr

lbl_80148F48:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80148F50
 * Size:	0000C8
 */
void Piki::getSpeed(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	fmr      f31, f1
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80148F8C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x11a0(r3)
	b        lbl_80148FFC

lbl_80148F8C:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x2b9(r31)
	lwz      r3, 0x6c(r3)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 2
	lfs      f0, 0x2c8(r3)
	fmuls    f2, f1, f0
	bne      lbl_80148FB4
	lfs      f2, 0x2f0(r3)
	b        lbl_80148FC0

lbl_80148FB4:
	cmplwi   r0, 1
	bne      lbl_80148FC0
	lfs      f2, 0x318(r3)

lbl_80148FC0:
	lfs      f1, lbl_80518440@sda21(r2)
	lfs      f0, 0x2a0(r3)
	lbz      r0, 0x2b8(r31)
	fmuls    f1, f1, f0
	cmpwi    r0, 4
	fsubs    f0, f2, f1
	fmadds   f1, f31, f0, f1
	bne      lbl_80148FEC
	lfs      f0, 0x1010(r3)
	fmuls    f1, f1, f0
	b        lbl_80148FFC

lbl_80148FEC:
	cmpwi    r0, 3
	bne      lbl_80148FFC
	lfs      f0, 0x1038(r3)
	fmuls    f1, f1, f0

lbl_80148FFC:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149018
 * Size:	0001C0
 */
// void setSpeed__Q24Game4PikiFfR10Vector3f(void)
void Piki::setSpeed(float, Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	lfs      f0, lbl_8051841C@sda21(r2)
	mr       r30, r3
	mr       r31, r4
	fcmpo    cr0, f31, f0
	bge      lbl_80149108
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149068
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x11a0(r3)
	b        lbl_801490DC

lbl_80149068:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x2b9(r30)
	lwz      r3, 0x6c(r3)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 2
	lfs      f0, 0x2c8(r3)
	fmuls    f3, f1, f0
	bne      lbl_80149090
	lfs      f3, 0x2f0(r3)
	b        lbl_8014909C

lbl_80149090:
	cmplwi   r0, 1
	bne      lbl_8014909C
	lfs      f3, 0x318(r3)

lbl_8014909C:
	lfs      f2, lbl_80518440@sda21(r2)
	fneg     f1, f31
	lfs      f0, 0x2a0(r3)
	lbz      r0, 0x2b8(r30)
	fmuls    f2, f2, f0
	cmpwi    r0, 4
	fsubs    f0, f3, f2
	fmadds   f1, f1, f0, f2
	bne      lbl_801490CC
	lfs      f0, 0x1010(r3)
	fmuls    f1, f1, f0
	b        lbl_801490DC

lbl_801490CC:
	cmpwi    r0, 3
	bne      lbl_801490DC
	lfs      f0, 0x1038(r3)
	fmuls    f1, f1, f0

lbl_801490DC:
	fneg     f3, f1
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	lfs      f2, 8(r31)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r30)
	stfs     f1, 0x1e8(r30)
	stfs     f2, 0x1ec(r30)
	b        lbl_801491B8

lbl_80149108:
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149124
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f3, 0x11a0(r3)
	b        lbl_80149194

lbl_80149124:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x2b9(r30)
	lwz      r3, 0x6c(r3)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 2
	lfs      f0, 0x2c8(r3)
	fmuls    f2, f1, f0
	bne      lbl_8014914C
	lfs      f2, 0x2f0(r3)
	b        lbl_80149158

lbl_8014914C:
	cmplwi   r0, 1
	bne      lbl_80149158
	lfs      f2, 0x318(r3)

lbl_80149158:
	lfs      f1, lbl_80518440@sda21(r2)
	lfs      f0, 0x2a0(r3)
	lbz      r0, 0x2b8(r30)
	fmuls    f1, f1, f0
	cmpwi    r0, 4
	fsubs    f0, f2, f1
	fmadds   f3, f31, f0, f1
	bne      lbl_80149184
	lfs      f0, 0x1010(r3)
	fmuls    f3, f3, f0
	b        lbl_80149194

lbl_80149184:
	cmpwi    r0, 3
	bne      lbl_80149194
	lfs      f0, 0x1038(r3)
	fmuls    f3, f3, f0

lbl_80149194:
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	fmuls    f0, f0, f3
	lfs      f2, 8(r31)
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r30)
	stfs     f1, 0x1e8(r30)
	stfs     f2, 0x1ec(r30)

lbl_801491B8:
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
 * Address:	........
 * Size:	0000F8
 */
void Piki::getSpeed(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801491D8
 * Size:	00020C
 */
// void setSpeed__Q24Game4PikiFfR10Vector3f f(void)
void Piki::setSpeed(float, Vector3f&, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f30, f1
	lfs      f0, lbl_8051841C@sda21(r2)
	fmr      f31, f2
	mr       r30, r3
	mr       r31, r4
	fcmpo    cr0, f30, f0
	bge      lbl_801492F0
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149234
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x11a0(r3)
	b        lbl_801492A8

lbl_80149234:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x2b9(r30)
	lwz      r3, 0x6c(r3)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 2
	lfs      f0, 0x2c8(r3)
	fmuls    f3, f1, f0
	bne      lbl_8014925C
	lfs      f3, 0x2f0(r3)
	b        lbl_80149268

lbl_8014925C:
	cmplwi   r0, 1
	bne      lbl_80149268
	lfs      f3, 0x318(r3)

lbl_80149268:
	lfs      f2, lbl_80518440@sda21(r2)
	fneg     f1, f30
	lfs      f0, 0x2a0(r3)
	lbz      r0, 0x2b8(r30)
	fmuls    f2, f2, f0
	cmpwi    r0, 4
	fsubs    f0, f3, f2
	fmadds   f1, f1, f0, f2
	bne      lbl_80149298
	lfs      f0, 0x1010(r3)
	fmuls    f1, f1, f0
	b        lbl_801492A8

lbl_80149298:
	cmpwi    r0, 3
	bne      lbl_801492A8
	lfs      f0, 0x1038(r3)
	fmuls    f1, f1, f0

lbl_801492A8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x54(r3)
	fmuls    f0, f1, f2
	fcmpo    cr0, f0, f31
	bge      lbl_801492C0
	b        lbl_801492C4

lbl_801492C0:
	fdivs    f1, f31, f2

lbl_801492C4:
	fneg     f3, f1
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	lfs      f2, 8(r31)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r30)
	stfs     f1, 0x1e8(r30)
	stfs     f2, 0x1ec(r30)
	b        lbl_801493BC

lbl_801492F0:
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014930C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f3, 0x11a0(r3)
	b        lbl_8014937C

lbl_8014930C:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x2b9(r30)
	lwz      r3, 0x6c(r3)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 2
	lfs      f0, 0x2c8(r3)
	fmuls    f2, f1, f0
	bne      lbl_80149334
	lfs      f2, 0x2f0(r3)
	b        lbl_80149340

lbl_80149334:
	cmplwi   r0, 1
	bne      lbl_80149340
	lfs      f2, 0x318(r3)

lbl_80149340:
	lfs      f1, lbl_80518440@sda21(r2)
	lfs      f0, 0x2a0(r3)
	lbz      r0, 0x2b8(r30)
	fmuls    f1, f1, f0
	cmpwi    r0, 4
	fsubs    f0, f2, f1
	fmadds   f3, f30, f0, f1
	bne      lbl_8014936C
	lfs      f0, 0x1010(r3)
	fmuls    f3, f3, f0
	b        lbl_8014937C

lbl_8014936C:
	cmpwi    r0, 3
	bne      lbl_8014937C
	lfs      f0, 0x1038(r3)
	fmuls    f3, f3, f0

lbl_8014937C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f0, f3, f1
	fcmpo    cr0, f0, f31
	bge      lbl_80149394
	b        lbl_80149398

lbl_80149394:
	fdivs    f3, f31, f1

lbl_80149398:
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	fmuls    f0, f0, f3
	lfs      f2, 8(r31)
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r30)
	stfs     f1, 0x1e8(r30)
	stfs     f2, 0x1ec(r30)

lbl_801493BC:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801493E4
 * Size:	000040
 */
bool Piki::isPikmin(void)
{
	/*
	lbz      r0, sTekiChappyFlag__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80149404
	lwz      r0, 0x17c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80149404
	li       r3, 0
	blr

lbl_80149404:
	lwz      r3, 0x294(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 0xb
	bne      lbl_8014941C
	li       r3, 0
	blr

lbl_8014941C:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149424
 * Size:	00004C
 */
bool Piki::isThrowable(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_8014945C
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014945C
	li       r3, 1
	b        lbl_80149460

lbl_8014945C:
	li       r3, 0

lbl_80149460:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149470
 * Size:	000008
 */
bool PikiState::throwable(void) { return false; }

/*
 * --INFO--
 * Address:	80149478
 * Size:	000040
 */
int Piki::getDownfloorMass(void)
{
	/*
	lwz      r4, 0x290(r3)
	cmplwi   r4, 0
	beq      lbl_8014948C
	lwz      r0, 4(r4)
	b        lbl_80149490

lbl_8014948C:
	li       r0, -1

lbl_80149490:
	cmpwi    r0, 4
	bne      lbl_801494A0
	li       r3, 0
	blr

lbl_801494A0:
	lbz      r0, 0x2b8(r3)
	li       r3, 1
	cmpwi    r0, 3
	bnelr
	li       r3, 0xa
	blr
	*/
}

/*
 * --INFO--
 * Address:	801494B8
 * Size:	000014
 */
bool Piki::gasInvicible(void)
{
	/*
	lbz      r3, 0x2a6(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	801494CC
 * Size:	000008
 */
void Piki::setGasInvincible(u8 a1)
{
	// Generated from stb r4, 0x2A6(r3)
	m_gasInvincible = a1;
}

/*
 * --INFO--
 * Address:	801494D4
 * Size:	000018
 */
void Piki::updateGasInvincible(void)
{
	/*
	lbz      r4, 0x2a6(r3)
	cmplwi   r4, 0
	beqlr
	addi     r0, r4, -1
	stb      r0, 0x2a6(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801494EC
 * Size:	0000F8
 */
void Piki::getAttackDamage(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014951C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x1178(r3)
	b        lbl_801495D0

lbl_8014951C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80149544
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80149544
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x408(r3)
	b        lbl_801495D0

lbl_80149544:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 2
	beq      lbl_80149594
	bge      lbl_80149564
	cmpwi    r0, 0
	beq      lbl_80149584
	bge      lbl_80149574
	b        lbl_801495C4

lbl_80149564:
	cmpwi    r0, 4
	beq      lbl_801495B4
	bge      lbl_801495C4
	b        lbl_801495A4

lbl_80149574:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x408(r3)
	b        lbl_801495D0

lbl_80149584:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x3e0(r3)
	b        lbl_801495D0

lbl_80149594:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x430(r3)
	b        lbl_801495D0

lbl_801495A4:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x458(r3)
	b        lbl_801495D0

lbl_801495B4:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x480(r3)
	b        lbl_801495D0

lbl_801495C4:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f1, 0x3e0(r3)

lbl_801495D0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801495E4
 * Size:	0000C0
 */
float Piki::getThrowHeight(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x2c4(r3)
	cmplwi   r0, 0
	bne      lbl_8014960C
	lfs      f1, lbl_8051841C@sda21(r2)
	b        lbl_80149690

lbl_8014960C:
	bne      lbl_8014962C
	lis      r3, lbl_8047C8B0@ha
	lis      r5, lbl_8047C90C@ha
	addi     r3, r3, lbl_8047C8B0@l
	li       r4, 0x57b
	addi     r5, r5, lbl_8047C90C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014962C:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 3
	beq      lbl_80149664
	bge      lbl_80149648
	cmpwi    r0, 2
	bge      lbl_80149654
	b        lbl_80149684

lbl_80149648:
	cmpwi    r0, 5
	bge      lbl_80149684
	b        lbl_80149674

lbl_80149654:
	lwz      r3, 0x2c4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x5c0(r3)
	b        lbl_80149690

lbl_80149664:
	lwz      r3, 0x2c4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x5e8(r3)
	b        lbl_80149690

lbl_80149674:
	lwz      r3, 0x2c4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x610(r3)
	b        lbl_80149690

lbl_80149684:
	lwz      r3, 0x2c4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x598(r3)

lbl_80149690:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801496A4
 * Size:	0000C4
 */
void Piki::getPelletCarryPower(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 4
	beq      lbl_801496DC
	bge      lbl_801496FC
	cmpwi    r0, 3
	bge      lbl_801496EC
	b        lbl_801496FC

lbl_801496DC:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f31, 0x1088(r3)
	b        lbl_80149700

lbl_801496EC:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f31, 0x1060(r3)
	b        lbl_80149700

lbl_801496FC:
	lfs      f31, lbl_80518440@sda21(r2)

lbl_80149700:
	mr       r3, r31
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014971C
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 2
	bne      lbl_80149730

lbl_8014971C:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f0, 0x10d8(r3)
	fadds    f31, f31, f0
	b        lbl_80149748

lbl_80149730:
	cmpwi    r0, 1
	bne      lbl_80149748
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f0, 0x10b0(r3)
	fadds    f31, f31, f0

lbl_80149748:
	fmr      f1, f31
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149768
 * Size:	000004
 */
void Piki::onStickStartSelf(Game::Creature*) { }

/*
 * --INFO--
 * Address:	8014976C
 * Size:	0000E8
 */
void Piki::onStickEndSelf(Game::Creature*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	mr       r4, r31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f6, 8(r1)
	lfs      f5, 0xc(r1)
	cmplwi   r3, 0
	lfs      f4, 0x10(r1)
	stfs     f6, 0x14(r1)
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	beq      lbl_80149840
	li       r0, 1
	li       r5, 0
	lfs      f1, lbl_8051841C@sda21(r2)
	addi     r4, r1, 0x20
	stb      r0, 0x2c(r1)
	lfs      f3, lbl_80518444@sda21(r2)
	lfs      f2, lbl_80518448@sda21(r2)
	lfs      f0, lbl_80518440@sda21(r2)
	stw      r5, 0x34(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stw      r5, 0x30(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f1, 0x48(r1)
	stb      r5, 0x2d(r1)
	stfs     f6, 0x20(r1)
	stfs     f5, 0x24(r1)
	stfs     f4, 0x28(r1)
	stb      r0, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f1, 0x38(r1)
	fcmpo    cr0, f0, f1
	bge      lbl_80149840
	stfs     f1, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_80149840:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149854
 * Size:	000088
 */
void Piki::stimulate(Game::Interaction&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xbc(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80149884
	li       r3, 0
	b        lbl_801498C4

lbl_80149884:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801498C0
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801498C4

lbl_801498C0:
	li       r3, 0

lbl_801498C4:
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
 * Address:	801498DC
 * Size:	0000A4
 */
void Piki::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_8014991C
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8014991C:
	lwz      r3, 0x290(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149968
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80149968
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80149968:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80149980
 * Size:	000004
 */
void PikiAI::Action::bounceCallback(Game::Piki*, Sys::Triangle*) { }

namespace Game {

/*
 * --INFO--
 * Address:	80149984
 * Size:	000008
 */
bool PikiState::aiActive(void) { return false; }

/*
 * --INFO--
 * Address:	8014998C
 * Size:	000004
 */
void PikiState::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	80149990
 * Size:	0000A0
 */
// void wallCallback__Q24Game4PikiFR10Vector3f(void)
void Piki::wallCallback(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_801499D0
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_801499D0:
	lwz      r3, 0x290(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149A18
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80149A18
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_80149A18:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game

/*
 * --INFO--
 * Address:	80149A30
 * Size:	000004
 */
// void wallCallback__Q26PikiAI6ActionFR10Vector3f(void) { }
void PikiAI::Action::wallCallback(Vector3f&) { }

namespace Game {
/*
 * --INFO--
 * Address:	80149A34
 * Size:	000004
 */
// void wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3f(void) { }
void PikiState::wallCallback(Piki*, Vector3f&) { }

/*
 * --INFO--
 * Address:	80149A38
 * Size:	0000AC
 */
void Piki::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80149A78
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80149A78:
	lwz      r3, 0x290(r30)
	cmplwi   r3, 0
	beq      lbl_80149ACC
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149ACC
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80149ACC
	lwz      r3, 0x294(r30)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80149ACC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80149AE4
 * Size:	000004
 */
void PikiAI::Action::collisionCallback(Game::Piki*, Game::CollEvent&) { }

namespace Game {

/*
 * --INFO--
 * Address:	80149AE8
 * Size:	000004
 */
void PikiState::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	80149AEC
 * Size:	000178
 */
void Piki::platCallback(Game::PlatEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r4
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80149B2C
	lwz      r12, 0(r3)
	mr       r4, r31
	mr       r5, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80149B2C:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149B78
	lwz      r3, 0x294(r31)
	bl       getCurrAction__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80149B78
	lwz      r3, 0x294(r31)
	bl       getCurrAction__Q26PikiAI5BrainFv
	lwz      r12, 0(r3)
	mr       r4, r31
	mr       r5, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80149B78:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149C4C
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80149C4C
	lwz      r6, 0(r30)
	lis      r3, 0x656C6563@ha
	addi     r4, r3, 0x656C6563@l
	li       r5, 0x2a
	addi     r3, r6, 0xf8
	bl       match__4ID32FUlc
	clrlwi.  r0, r3, 0x18
	beq      lbl_80149C4C
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 2
	beq      lbl_80149C4C
	li       r0, -1
	lis      r3, __vt__Q24Game11Interaction@ha
	sth      r0, 0x2a4(r31)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r5, __vt__Q24Game12InteractWind@ha
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 8(r1)
	addi     r4, r3, "zero__10Vector3<f>"@l
	addi     r5, r5, __vt__Q24Game12InteractWind@l
	lfs      f3, lbl_8051841C@sda21(r2)
	lfs      f2, 0(r4)
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f1, 4(r4)
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r5, 8(r1)
	mr       r3, r31
	lfs      f0, 8(r4)
	addi     r4, r1, 8
	stw      r31, 0xc(r1)
	stfs     f3, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 8(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80149C4C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80149C64
 * Size:	000004
 */
void PikiAI::Action::platCallback(Game::Piki*, Game::PlatEvent&) { }

namespace Game {

/*
 * --INFO--
 * Address:	80149C68
 * Size:	000004
 */
void PikiState::platCallback(Game::Piki*, Game::PlatEvent&) { }

/*
 * --INFO--
 * Address:	80149C6C
 * Size:	000050
 */
bool Piki::ignoreAtari(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	lwz      r3, 0x290(r3)
	cmplwi   r3, 0
	beq      lbl_80149CA8
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3

lbl_80149CA8:
	mr       r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149CBC
 * Size:	000008
 */
bool PikiState::ignoreAtari(Game::Piki*, Game::Creature*) { return false; }

/*
 * --INFO--
 * Address:	80149CC4
 * Size:	000060
 */
void Piki::setFreeLightEffect(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	beq      lbl_80149D00
	lwz      r3, 0x258(r3)
	lwz      r0, 0(r3)
	ori      r0, r0, 1
	stw      r0, 0(r3)
	lwz      r0, 0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80149D14
	lwz      r4, 0xc(r3)
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"
	b        lbl_80149D14

lbl_80149D00:
	lwz      r3, 0x258(r3)
	lwz      r0, 0(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0(r3)
	bl       killKourin___Q23efx9TPkEffectFv

lbl_80149D14:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149D24
 * Size:	000084
 */
void Piki::setDopeEffect(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	beq      lbl_80149D64
	lwz      r31, 0x258(r3)
	lwz      r0, 0(r31)
	mr       r3, r31
	ori      r0, r0, 2
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
	mr       r3, r31
	bl       killKourin___Q23efx9TPkEffectFv
	b        lbl_80149D94

lbl_80149D64:
	lwz      r31, 0x258(r3)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0(r31)
	bl       killDoping___Q23efx9TPkEffectFv
	lwz      r0, 0(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80149D94
	lwz      r4, 0xc(r31)
	mr       r3, r31
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

lbl_80149D94:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149DA8
 * Size:	000088
 */
void Piki::clearDope(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lha      r0, 0x284(r3)
	cmpwi    r0, -1
	beq      lbl_80149DE4
	li       r0, -1
	sth      r0, 0x284(r3)
	lwz      r5, pikiMgr__4Game@sda21(r13)
	lwz      r4, 0x30(r5)
	cmpwi    r4, 0
	ble      lbl_80149DE4
	addi     r0, r4, -1
	stw      r0, 0x30(r5)

lbl_80149DE4:
	lfs      f0, lbl_8051841C@sda21(r2)
	stfs     f0, 0x288(r3)
	lwz      r31, 0x258(r3)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0(r31)
	bl       killDoping___Q23efx9TPkEffectFv
	lwz      r0, 0(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80149E1C
	lwz      r4, 0xc(r31)
	mr       r3, r31
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

lbl_80149E1C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80149E30
 * Size:	000014
 */
void Piki::extendDopeTime(void) { m_dopeTime = pikiMgr->_6C->_1150; }

/*
 * --INFO--
 * Address:	80149E44
 * Size:	00019C
 */
void Piki::startDope(int)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lha      r0, 0x284(r3)
	cmpwi    r0, -1
	bne      lbl_80149FC4
	lwz      r5, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x30(r5)
	addi     r0, r3, 1
	stw      r0, 0x30(r5)
	sth      r4, 0x284(r31)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	lfs      f0, 0x1150(r3)
	stfs     f0, 0x288(r31)
	lwz      r30, 0x258(r31)
	lwz      r0, 0(r30)
	mr       r3, r30
	ori      r0, r0, 2
	stw      r0, 0(r30)
	lwz      r4, 0xc(r30)
	bl       "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
	mr       r3, r30
	bl       killKourin___Q23efx9TPkEffectFv
	lwz      r3, 0x250(r31)
	li       r4, 0x2851
	li       r5, 0
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	lwz      r3, 0x250(r31)
	li       r4, 0x2855
	li       r5, 0
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80149FBC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xa
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80149FBC
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80149FB0
	lfs      f0, lbl_8051841C@sda21(r2)
	lis      r3, lbl_8047C918@ha
	li       r0, 0
	mr       r4, r31
	addi     r5, r3, lbl_8047C918@l
	stw      r0, 0x18(r1)
	addi     r3, r1, 8
	stw      r5, 0x14(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x14
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_80149FB0:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xa
	bl       setDemoFlag__Q24Game8PlayDataFi

lbl_80149FBC:
	li       r3, 1
	b        lbl_80149FC8

lbl_80149FC4:
	li       r3, 0

lbl_80149FC8:
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
 * Address:	80149FE0
 * Size:	000018
 */
bool Piki::doped() { return m_isDoped != -1; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Piki::updateDope(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80149FF8
 * Size:	000040
 */
void Piki::initColor(void)
{
	/*
	lfs      f0, lbl_80518440@sda21(r2)
	lis      r4, pikiColors__Q24Game4Piki@ha
	addi     r0, r4, pikiColors__Q24Game4Piki@l
	stfs     f0, 0x2b4(r3)
	lbz      r4, 0x2b8(r3)
	slwi     r4, r4, 2
	add      r4, r0, r4
	lbz      r0, 0(r4)
	stb      r0, 0x2a7(r3)
	lbz      r0, 1(r4)
	stb      r0, 0x2a8(r3)
	lbz      r0, 2(r4)
	stb      r0, 0x2a9(r3)
	lbz      r0, 3(r4)
	stb      r0, 0x2aa(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void Piki::updateColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014A038
 * Size:	000100
 */
void Piki::setPastel(bool)
{
	/*
	lfs      f0, lbl_8051841C@sda21(r2)
	clrlwi.  r0, r4, 0x18
	lis      r4, pikiColors__Q24Game4Piki@ha
	stfs     f0, 0x2b4(r3)
	addi     r0, r4, pikiColors__Q24Game4Piki@l
	lbz      r4, 0x2b8(r3)
	slwi     r4, r4, 2
	add      r5, r0, r4
	bne      lbl_8014A0A0
	lbz      r0, 0(r5)
	stb      r0, 0x2af(r3)
	lbz      r0, 1(r5)
	stb      r0, 0x2b0(r3)
	lbz      r0, 2(r5)
	stb      r0, 0x2b1(r3)
	lbz      r0, 3(r5)
	stb      r0, 0x2b2(r3)
	lbz      r0, 0x2a7(r3)
	stb      r0, 0x2ab(r3)
	lbz      r0, 0x2a8(r3)
	stb      r0, 0x2ac(r3)
	lbz      r0, 0x2a9(r3)
	stb      r0, 0x2ad(r3)
	lbz      r0, 0x2aa(r3)
	stb      r0, 0x2ae(r3)
	blr

lbl_8014A0A0:
	lbz      r4, 0(r5)
	li       r0, 0xff
	stb      r4, 0x2af(r3)
	lbz      r4, 1(r5)
	stb      r4, 0x2b0(r3)
	lbz      r4, 2(r5)
	stb      r4, 0x2b1(r3)
	lbz      r4, 3(r5)
	stb      r4, 0x2b2(r3)
	lbz      r4, 0(r5)
	addi     r4, r4, 0xa0
	cmpwi    r4, 0xff
	bge      lbl_8014A0D8
	mr       r0, r4

lbl_8014A0D8:
	stb      r0, 0x2af(r3)
	li       r0, 0xff
	lbz      r4, 1(r5)
	addi     r4, r4, 0xa0
	cmpwi    r4, 0xff
	bge      lbl_8014A0F4
	mr       r0, r4

lbl_8014A0F4:
	stb      r0, 0x2b0(r3)
	li       r0, 0xff
	lbz      r4, 2(r5)
	addi     r4, r4, 0xa0
	cmpwi    r4, 0xff
	bge      lbl_8014A110
	mr       r0, r4

lbl_8014A110:
	stb      r0, 0x2b1(r3)
	lbz      r0, 0x2a7(r3)
	stb      r0, 0x2ab(r3)
	lbz      r0, 0x2a8(r3)
	stb      r0, 0x2ac(r3)
	lbz      r0, 0x2a9(r3)
	stb      r0, 0x2ad(r3)
	lbz      r0, 0x2aa(r3)
	stb      r0, 0x2ae(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A138
 * Size:	0000D0
 */
void Piki::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	lwz      r4, 0x290(r3)
	cmplwi   r4, 0
	beq      lbl_8014A160
	lwz      r0, 4(r4)
	b        lbl_8014A164

lbl_8014A160:
	li       r0, -1

lbl_8014A164:
	cmpwi    r0, 0xc
	bne      lbl_8014A190
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 4(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 8(r31)
	b        lbl_8014A1C0

lbl_8014A190:
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)

lbl_8014A1C0:
	lfs      f1, 4(r31)
	lfs      f0, lbl_8051844C@sda21(r2)
	lfs      f3, lbl_80518450@sda21(r2)
	fadds    f4, f1, f0
	lfs      f2, lbl_80518454@sda21(r2)
	lfs      f1, lbl_8051841C@sda21(r2)
	lfs      f0, lbl_80518440@sda21(r2)
	stfs     f4, 4(r31)
	stfs     f3, 0x18(r31)
	stfs     f2, 0x1c(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A208
 * Size:	000080
 */
bool Piki::isMyPikmin(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r3, 0x294(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 0xb
	bne      lbl_8014A26C
	bl       getCurrAction__Q26PikiAI5BrainFv
	or.      r31, r3, r3
	bne      lbl_8014A258
	lis      r3, lbl_8047C8B0@ha
	lis      r5, lbl_8047C90C@ha
	addi     r3, r3, lbl_8047C8B0@l
	li       r4, 0x6b6
	addi     r5, r5, lbl_8047C90C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014A258:
	lwz      r0, 0x10(r31)
	subf     r0, r0, r30
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_8014A270

lbl_8014A26C:
	li       r3, 0

lbl_8014A270:
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
 * Address:	8014A288
 * Size:	000018
 */
bool Piki::isTekiFollowAI(void)
{
	return m_brain->m_actionId == 11; // teki follow AI
	                                  /*
	                                  lwz      r3, 0x294(r3)
	                                  lwz      r0, 8(r3)
	                                  subfic   r0, r0, 0xb
	                                  cntlzw   r0, r0
	                                  rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	                                  blr
	                                  */
}

/*
 * --INFO--
 * Address:	8014A2A0
 * Size:	0000EC
 */
void Piki::doColorChange(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r31, 0x278(r3)
	lwz      r3, 0x268(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lbz      r0, 0xd8(r30)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_8014A31C
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x25c(r30)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x260(r30)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x264(r30)
	lfs      f0, 0x25c(r30)
	stfs     f0, 0x26c(r30)
	lfs      f0, 0x260(r30)
	stfs     f0, 0x270(r30)
	lfs      f0, 0x264(r30)
	stfs     f0, 0x274(r30)
	b        lbl_8014A374

lbl_8014A31C:
	lfs      f1, lbl_80518458@sda21(r2)
	addi     r4, r30, 0x25c
	lfs      f0, lbl_8051841C@sda21(r2)
	addi     r5, r1, 8
	stfs     f1, 0x25c(r30)
	stfs     f0, 0x260(r30)
	stfs     f0, 0x264(r30)
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	mr       r3, r31
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x25c(r30)
	stfs     f1, 0x260(r30)
	stfs     f2, 0x264(r30)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	stfs     f0, 0x26c(r30)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x270(r30)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x274(r30)

lbl_8014A374:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A38C
 * Size:	00002C
 */
void Piki::doDebugDL(void)
{
	/*
	lwz      r3, 0x174(r3)
	li       r5, 0
	lwz      r3, 8(r3)
	lwz      r4, 4(r3)
	b        lbl_8014A3A4

lbl_8014A3A0:
	addi     r5, r5, 1

lbl_8014A3A4:
	lhz      r0, 0x7c(r4)
	clrlwi   r3, r5, 0x10
	cmplw    r3, r0
	blt      lbl_8014A3A0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A3B8
 * Size:	0000F8
 */
void Piki::startMotion(int, int, SysShape::MotionListener*, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r4
	  cmpwi     r28, 0x33
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  beq-      .loc_0x98
	  bge-      .loc_0x3C
	  cmpwi     r28, 0x32
	  bge-      .loc_0x48
	  b         .loc_0xCC

	.loc_0x3C:
	  cmpwi     r28, 0x35
	  bge-      .loc_0xCC
	  b         .loc_0xB4

	.loc_0x48:
	  bl        -0x80E60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5EF8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5F04(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x5F00(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC
	  lwz       r3, 0x250(r27)
	  li        r4, 0x2839
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x3183A0
	  b         .loc_0xCC

	.loc_0x98:
	  lwz       r3, 0x250(r27)
	  li        r4, 0x283A
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x318384
	  b         .loc_0xCC

	.loc_0xB4:
	  lwz       r3, 0x250(r27)
	  li        r4, 0x283B
	  li        r5, 0
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x318368

	.loc_0xCC:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        -0xD4D8
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014A4B0
 * Size:	0000E4
 */
void Piki::doAnimation(void)
{
	FakePiki::doAnimation();

	if (m_isDoped == -1 || m_dopeTime <= 0.0f) {
		return;
	}

	m_dopeTime -= sys->m_deltaTime;
	if (m_dopeTime > 0) {
		return;
	}

	m_soundObj->startFreePikiSetSound(PSSE_PK_VC_DOPE_END, 0, 90, 0);
	if (m_isDoped != -1) {
		m_isDoped = -1;

		if (pikiMgr->_30 > 0) {
			pikiMgr->_30--;
		}
	}

	m_dopeTime = 0;

	// TPKEFFECT stuff.
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doAnimation__Q24Game8FakePikiFv
	lha      r0, 0x284(r31)
	cmpwi    r0, -1
	beq      lbl_8014A580
	lfs      f2, 0x288(r31)
	lfs      f1, lbl_8051841C@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8014A580
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x288(r31)
	lfs      f0, 0x288(r31)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8014A580
	lwz      r3, 0x250(r31)
	li       r4, 0x2853
	li       r5, 0
	li       r6, 0x5a
	li       r7, 0
	bl       startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
	lha      r0, 0x284(r31)
	cmpwi    r0, -1
	beq      lbl_8014A548
	li       r0, -1
	sth      r0, 0x284(r31)
	lwz      r4, pikiMgr__4Game@sda21(r13)
	lwz      r3, 0x30(r4)
	cmpwi    r3, 0
	ble      lbl_8014A548
	addi     r0, r3, -1
	stw      r0, 0x30(r4)

lbl_8014A548:
	lfs      f0, lbl_8051841C@sda21(r2)
	stfs     f0, 0x288(r31)
	lwz      r31, 0x258(r31)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0(r31)
	bl       killDoping___Q23efx9TPkEffectFv
	lwz      r0, 0(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8014A580
	lwz      r4, 0xc(r31)
	mr       r3, r31
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8014A580:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A594
 * Size:	000004
 */
void Piki::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8014A598
 * Size:	000028
 */
float Piki::getBaseScale(void)
{
	switch (m_pikiKind) {
	case Purple:
		return 1.2f;
	case White:
		return 0.8f;
	default:
		return 1.0f;
	}
}

/*
 * --INFO--
 * Address:	8014A5C0
 * Size:	0001B0
 */
void Piki::changeShape(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmpwi    r31, 5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lbz      r29, 0x2b8(r3)
	beq      lbl_8014A5F8
	lfs      f0, lbl_80518410@sda21(r2)
	stfs     f0, 0x224(r30)
	b        lbl_8014A600

lbl_8014A5F8:
	lfs      f0, lbl_80518478@sda21(r2)
	stfs     f0, 0x224(r30)

lbl_8014A600:
	stb      r31, 0x2b8(r30)
	mr       r4, r30
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       setupPiki__Q24Game7PikiMgrFPQ24Game4Piki
	lbz      r0, 0x2b8(r30)
	lfs      f1, lbl_80518440@sda21(r2)
	cmplwi   r0, 3
	bne      lbl_8014A628
	lfs      f1, lbl_80518470@sda21(r2)
	b        lbl_8014A634

lbl_8014A628:
	cmplwi   r0, 4
	bne      lbl_8014A634
	lfs      f1, lbl_80518474@sda21(r2)

lbl_8014A634:
	stfs     f1, 0x168(r30)
	lis      r3, pikiColors__Q24Game4Piki@ha
	lfs      f0, lbl_80518440@sda21(r2)
	addi     r0, r3, pikiColors__Q24Game4Piki@l
	stfs     f1, 0x16c(r30)
	cmpwi    r31, 5
	stfs     f1, 0x170(r30)
	stfs     f0, 0x2b4(r30)
	lbz      r3, 0x2b8(r30)
	slwi     r3, r3, 2
	add      r3, r0, r3
	lbz      r0, 0(r3)
	stb      r0, 0x2a7(r30)
	lbz      r0, 1(r3)
	stb      r0, 0x2a8(r30)
	lbz      r0, 2(r3)
	stb      r0, 0x2a9(r30)
	lbz      r0, 3(r3)
	stb      r0, 0x2aa(r30)
	bne      lbl_8014A6A0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014A6C0

lbl_8014A6A0:
	lis      r3, alivePikis__Q24Game8GameStat@ha
	mr       r4, r29
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat11PikiCounterFi
	lis      r3, alivePikis__Q24Game8GameStat@ha
	mr       r4, r30
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki

lbl_8014A6C0:
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwzu     r12, alivePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x258(r30)
	lis      r3, lbl_8047C898@ha
	addi     r4, r3, lbl_8047C898@l
	addi     r5, r30, 0x20c
	stw      r31, 8(r6)
	addi     r0, r30, 0x138
	lwz      r3, 0x258(r30)
	stw      r5, 0x10(r3)
	lwz      r3, 0x258(r30)
	stw      r0, 0x1c(r3)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x268(r30)
	lis      r3, lbl_8047C8A4@ha
	addi     r4, r3, lbl_8047C8A4@l
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x278(r30)
	lis      r3, lbl_8047C898@ha
	addi     r4, r3, lbl_8047C898@l
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x258(r30)
	addi     r4, r2, lbl_8051847C@sda21
	stw      r3, 0x18(r5)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	lis      r4, sNeckCallback__Q24Game8FakePikiFP8J3DJointi@ha
	lwz      r3, 0x18(r3)
	addi     r0, r4, sNeckCallback__Q24Game8FakePikiFP8J3DJointi@l
	stw      r0, 4(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014A770
 * Size:	000008
 */
void Piki::changeHappa(int a1) { m_happaKind = a1; }

/*
 * --INFO--
 * Address:	8014A778
 * Size:	000344
 */
void Piki::do_updateLookCreature(void)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014A7EC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014A7EC
	li       r0, 0
	lfs      f0, lbl_8051841C@sda21(r2)
	stw      r0, 0x1a0(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	stb      r0, 0x1a4(r31)
	b        lbl_8014AA98

lbl_8014A7EC:
	lwz      r3, mInstance__Q24Game18OptimiseController@sda21(r13)
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_8014AA98
	lwz      r0, 0x1a8(r31)
	cmplwi   r0, 0
	beq      lbl_8014A8B0
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x254(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051841C@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x254(r31)
	lfs      f1, 0x254(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8014A8B0
	lwz      r4, 0x1a8(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x210(r31)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x20c(r31)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x214(r31)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051841C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8014A894
	ble      lbl_8014A898
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8014A898

lbl_8014A894:
	fmr      f1, f0

lbl_8014A898:
	lfs      f0, lbl_80518484@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8014AA98
	mr       r3, r31
	bl       finishLook__Q24Game8FakePikiFv
	b        lbl_8014AA98

lbl_8014A8B0:
	addi     r3, r31, 0x298
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014AA98
	lwz      r3, 0x1b8(r31)
	cmplwi   r3, 0
	beq      lbl_8014A8D4
	lha      r0, 0x20(r3)
	b        lbl_8014A8D8

lbl_8014A8D4:
	li       r0, -1

lbl_8014A8D8:
	cmpwi    r0, 0x20
	bge      lbl_8014A8F8
	cmpwi    r0, 0x15
	beq      lbl_8014A90C
	blt      lbl_8014A900
	cmpwi    r0, 0x1c
	bge      lbl_8014A90C
	b        lbl_8014A900

lbl_8014A8F8:
	cmpwi    r0, 0x38
	beq      lbl_8014A90C

lbl_8014A900:
	mr       r3, r31
	bl       finishLook__Q24Game8FakePikiFv
	b        lbl_8014AA98

lbl_8014A90C:
	lfs      f1, 0x20c(r31)
	addi     r3, r1, 0x24
	lfs      f0, lbl_80518484@sda21(r2)
	addi     r4, r1, 0x14
	stfs     f1, 0x14(r1)
	lfs      f1, 0x210(r31)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x214(r31)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stw      r0, 0x38(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	li       r30, 0
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8014A988

lbl_8014A95C:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014A980
	addi     r30, r30, 1

lbl_8014A980:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_8014A988:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014A95C
	cmpwi    r30, 0
	li       r29, 0
	ble      lbl_8014AA98
	xoris    r3, r30, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	addi     r3, r1, 0x44
	lfd      f1, lbl_80518468@sda21(r2)
	stw      r0, 0x90(r1)
	lfd      f0, 0x90(r1)
	fsubs    f31, f0, f1
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8014AA40

lbl_8014A9CC:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014AA38
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfs      f1, lbl_80518440@sda21(r2)
	stw      r0, 0x90(r1)
	lfd      f4, lbl_80518468@sda21(r2)
	fdivs    f0, f1, f31
	lfd      f3, 0x90(r1)
	lfs      f2, lbl_8051845C@sda21(r2)
	fsubs    f3, f3, f4
	fdivs    f2, f3, f2
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8014AA34
	mr       r29, r30
	b        lbl_8014AA50

lbl_8014AA34:
	fsubs    f31, f31, f1

lbl_8014AA38:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_8014AA40:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014A9CC

lbl_8014AA50:
	cmplwi   r29, 0
	beq      lbl_8014AA98
	mr       r3, r31
	mr       r4, r29
	bl       startLookCreature__Q24Game8FakePikiFPQ24Game8Creature
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f3, lbl_80518468@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f1, lbl_8051845C@sda21(r2)
	lfd      f2, 0x90(r1)
	lfs      f0, lbl_80518488@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f0
	stfs     f0, 0x254(r31)

lbl_8014AA98:
	psq_l    f31, 184(r1), 0, qr0
	lwz      r0, 0xc4(r1)
	lfd      f31, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014AABC
 * Size:	000014
 */
void Piki::setTekiKillID(int id)
{
	if (id == 98) {
		id = 99;
	}

	m_tekiKillID = id;
}

/*
 * --INFO--
 * Address:	8014AAD0
 * Size:	000008
 */
bool Piki::deferPikiCollision() { return true; }

/*
 * --INFO--
 * Address:	8014AAD8
 * Size:	000008
 */
char* Piki::getCreatureName(void) { return "pikmin"; }

} // namespace Game

/*
 * --INFO--
 * Address:	8014AAE0
 * Size:	000054
 */
void MonoObjectMgr<Game::Piki>::kill(Game::Piki* p)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_8014AAF8:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_8014AB24
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_8014AB24:
	addi     r5, r5, 0x2c8
	addi     r6, r6, 1
	bdnz     lbl_8014AAF8
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014AB34
 * Size:	000004
 */
void init__Q24Game26StateMachine<Game::Piki> FPQ24Game4Piki(void) { }

/*
 * --INFO--
 * Address:	8014AB38
 * Size:	00009C
 */
void transit__Q24Game26StateMachine<Game::Piki> FPQ24Game4PikiiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x290(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x290(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014ABD4
 * Size:	000004
 */
void init__Q24Game22FSMState<Game::Piki> FPQ24Game4PikiPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	8014ABD8
 * Size:	000004
 */
void cleanup__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void) { }

/*
 * --INFO--
 * Address:	8014ABDC
 * Size:	000038
 */
void exec__Q24Game26StateMachine<Game::Piki> FPQ24Game4Piki(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x290(r4)
	cmplwi   r3, 0
	beq      lbl_8014AC04
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8014AC04:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014AC14
 * Size:	000004
 */
void exec__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void) { }

/*
 * --INFO--
 * Address:	8014AC18
 * Size:	000170
 */
void __sinit_piki_cpp(void)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r3, __float_nan@ha
	lis      r5, lbl_804B0990@ha
	lis      r4, pikiColors__Q24Game4Piki@ha
	stw      r31, 0x1c(r1)
	addi     r31, r4, pikiColors__Q24Game4Piki@l
	li       r11, 0xff
	li       r12, 0x32
	stw      r30, 0x18(r1)
	li       r30, 0
	li       r10, 0x1e
	li       r9, 0xd2
	stw      r29, 0x14(r1)
	addi     r29, r5, lbl_804B0990@l
	li       r6, 0xe6
	li       r5, 0x8c
	stw      r28, 0x10(r1)
	li       r8, 0x1c
	li       r7, 0x34
	li       r28, -1
	lfs      f0, __float_nan@l(r3)
	lis      r3, pikiColorsCursor__Q24Game4Piki@ha
	addi     r4, r3, pikiColorsCursor__Q24Game4Piki@l
	li       r0, 0xfa
	li       r3, 0x78
	stb      r30, 0(r31)
	stb      r12, 1(r31)
	stb      r11, 2(r31)
	stb      r11, 3(r31)
	stb      r11, 4(r31)
	stb      r10, 5(r31)
	stb      r30, 6(r31)
	stb      r11, 7(r31)
	stb      r11, 8(r31)
	stb      r9, 9(r31)
	stb      r30, 0xa(r31)
	stb      r11, 0xb(r31)
	stb      r8, 0xc(r31)
	stb      r30, 0xd(r31)
	stb      r7, 0xe(r31)
	stb      r11, 0xf(r31)
	stb      r11, 0x10(r31)
	stb      r6, 0x11(r31)
	stb      r11, 0x12(r31)
	stb      r11, 0x13(r31)
	stb      r11, 0x14(r31)
	stb      r5, 0x15(r31)
	stb      r30, 0x16(r31)
	stb      r11, 0x17(r31)
	stb      r11, 0x18(r31)
	stb      r11, 0x19(r31)
	stb      r11, 0x1a(r31)
	stb      r30, 0x1b(r31)
	stb      r30, 0(r4)
	stb      r12, 1(r4)
	stb      r11, 2(r4)
	stb      r11, 3(r4)
	stb      r11, 4(r4)
	stb      r10, 5(r4)
	stb      r30, 6(r4)
	stb      r11, 7(r4)
	stb      r11, 8(r4)
	stb      r9, 9(r4)
	stb      r30, 0xa(r4)
	stb      r11, 0xb(r4)
	stb      r3, 0xc(r4)
	stb      r30, 0xd(r4)
	stb      r0, 0xe(r4)
	stb      r11, 0xf(r4)
	stb      r11, 0x10(r4)
	stb      r6, 0x11(r4)
	stb      r11, 0x12(r4)
	stb      r11, 0x13(r4)
	stb      r11, 0x14(r4)
	stb      r5, 0x15(r4)
	stb      r30, 0x16(r4)
	stb      r11, 0x17(r4)
	stb      r11, 0x18(r4)
	stb      r11, 0x19(r4)
	stb      r11, 0x1a(r4)
	stb      r30, 0x1b(r4)
	lwz      r31, 0x1c(r1)
	stw      r28, lbl_80515920@sda21(r13)
	lwz      r30, 0x18(r1)
	stfs     f0, lbl_80515924@sda21(r13)
	stfs     f0, 0(r29)
	stfs     f0, 4(r29)
	stfs     f0, 8(r29)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014AD88
 * Size:	000008
 */
@4 @efx::TPkMoeA::~TPkMoeA(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx7TPkMoeAFv
	*/
}

/*
 * --INFO--
 * Address:	8014AD90
 * Size:	000008
 */
@4 @efx::TPkBlackDown::~TPkBlackDown(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx12TPkBlackDownFv
	*/
}

/*
 * --INFO--
 * Address:	8014AD98
 * Size:	000008
 */
void @376 @Game::Piki::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	addi     r3, r3, -376
	b        onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent
	*/
}
