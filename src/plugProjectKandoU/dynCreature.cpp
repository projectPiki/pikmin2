#include "Game/DynCreature.h"
#include "Game/DynParticle.h"
#include "Iterator.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F630
    lbl_8047F630:
        .4byte 0x64796E43
        .4byte 0x72656174
        .4byte 0x7572652E
        .4byte 0x63707000
    .global lbl_8047F640
    lbl_8047F640:
        .4byte 0x70206973
        .4byte 0x206E756C
        .4byte 0x6C206E20
        .4byte 0x69732025
        .4byte 0x640A0000
    .global lbl_8047F654
    lbl_8047F654:
        .4byte 0x73696D75
        .4byte 0x6C617465
        .4byte 0x20657272
        .4byte 0x6F720A00
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5218
    lbl_804B5218:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte
   "tracemoveCallback__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>" .global
   __vt__Q24Game11DynCreature
    __vt__Q24Game11DynCreature:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game11DynCreatureFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte 0
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game8CreatureFv
        .4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game8CreatureFv
        .4byte doEntry__Q24Game8CreatureFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8CreatureFf
        .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
        .4byte getBodyRadius__Q24Game8CreatureFv
        .4byte getCellRadius__Q24Game8CreatureFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte 0
        .4byte "setVelocity__Q24Game11DynCreatureFR10Vector3<f>"
        .4byte getVelocity__Q24Game11DynCreatureFv
        .4byte "onSetPosition__Q24Game11DynCreatureFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
        .4byte 0
        .4byte isTeki__Q24Game8CreatureFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game8CreatureFv
        .4byte inWater__Q24Game8CreatureFv
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
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game8CreatureFv
        .4byte getPSCreature__Q24Game8CreatureFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8CreatureFv
        .4byte sound_culling__Q24Game8CreatureFv
        .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
        .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
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
        .4byte needShadow__Q24Game8CreatureFv
        .4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
        .4byte
   "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>" .4byte
   "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>" .4byte
   ignoreAtari__Q24Game8CreatureFPQ24Game8Creature .4byte
   getSuckPos__Q24Game8CreatureFv .4byte getGoalPos__Q24Game8CreatureFv .4byte
   isSuckReady__Q24Game8CreatureFv .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game8CreatureFv
        .4byte getCreatureID__Q24Game8CreatureFv
        .4byte onSetPosition__Q24Game11DynCreatureFv
    .global
   "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"
    "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>FR10Vector3<f>R10Vector3<f>"
    .global "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"
    "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game14DynParticleMgr
    __vt__Q24Game14DynParticleMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game14DynParticleMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__31Container<Q24Game11DynParticle>FPv"
        .4byte "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv"
        .4byte "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "get__35MonoObjectMgr<Q24Game11DynParticle>FPv"
        .4byte "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
        .4byte
   "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte
   "@28@resetMgr__Q24Game14DynParticleMgrFv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi" .4byte
   "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff" .4byte
   "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics" .4byte
   "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   resetMgr__Q24Game14DynParticleMgrFv .4byte
   "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv" .global
   "__vt__31Container<Q24Game11DynParticle>"
    "__vt__31Container<Q24Game11DynParticle>":
        .4byte 0
        .4byte 0
        .4byte "__dt__31Container<Q24Game11DynParticle>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__31Container<Q24Game11DynParticle>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__31Container<Q24Game11DynParticle>Fi"
        .4byte "getTo__31Container<Q24Game11DynParticle>Fv"
    .global "__vt__31ObjectMgr<Q24Game11DynParticle>"
    "__vt__31ObjectMgr<Q24Game11DynParticle>":
        .4byte 0
        .4byte 0
        .4byte "__dt__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__31Container<Q24Game11DynParticle>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__31Container<Q24Game11DynParticle>Fi"
        .4byte "getTo__31Container<Q24Game11DynParticle>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "@28@doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
        .4byte "@28@doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
        .4byte "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
    .global "__vt__35MonoObjectMgr<Q24Game11DynParticle>"
    "__vt__35MonoObjectMgr<Q24Game11DynParticle>":
        .4byte 0
        .4byte 0
        .4byte "__dt__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__31Container<Q24Game11DynParticle>FPv"
        .4byte "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv"
        .4byte "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "get__35MonoObjectMgr<Q24Game11DynParticle>FPv"
        .4byte "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
        .4byte "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
        .4byte "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
        .4byte
   "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte
   "@28@resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi" .4byte
   "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff" .4byte
   "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics" .4byte
   "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv" .4byte
   "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv" .global
   __vt__Q24Game11DynParticle
    __vt__Q24Game11DynParticle:
        .4byte 0
        .4byte 0
        .4byte constructor__Q24Game11DynParticleFv
        .4byte doAnimation__Q24Game11DynParticleFv
        .4byte doEntry__Q24Game11DynParticleFv
        .4byte doSetView__Q24Game11DynParticleFUl
        .4byte doViewCalc__Q24Game11DynParticleFv
        .4byte doSimulation__Q24Game11DynParticleFf
        .4byte doDirectDraw__Q24Game11DynParticleFR8Graphics
    .global "__vt__30Iterator<Q24Game11DynParticle>"
    "__vt__30Iterator<Q24Game11DynParticle>":
        .4byte 0
        .4byte 0
        .4byte "first__30Iterator<Q24Game11DynParticle>Fv"
        .4byte "next__30Iterator<Q24Game11DynParticle>Fv"
        .4byte "isDone__30Iterator<Q24Game11DynParticle>Fv"
        .4byte "__ml__30Iterator<Q24Game11DynParticle>Fv"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global dynParticleMgr__4Game
    dynParticleMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519238
    lbl_80519238:
        .4byte 0x00000000
    .global lbl_8051923C
    lbl_8051923C:
        .float 1.0
    .global lbl_80519240
    lbl_80519240:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519248
    lbl_80519248:
        .4byte 0xC7FA0000
    .global lbl_8051924C
    lbl_8051924C:
        .4byte 0x47FA0000
    .global lbl_80519250
    lbl_80519250:
        .4byte 0x42480000
    .global lbl_80519254
    lbl_80519254:
        .4byte 0x3F19999A
*/

namespace Game {

/*
 * --INFO--
 * Address:	801A7F3C
 * Size:	00005C
 */
DynParticleMgr::DynParticleMgr(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "__ct__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	lis      r4, __vt__Q24Game14DynParticleMgr@ha
	mr       r3, r30
	addi     r5, r4, __vt__Q24Game14DynParticleMgr@l
	mr       r4, r31
	stw      r5, 0(r30)
	addi     r0, r5, 0x2c
	stw      r0, 0x1c(r30)
	bl       "alloc__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// } // namespace Game

/*
 * Generated?
 * --INFO--
 * Address:	801A7F98
 * Size:	0000A0
 */
// void MonoObjectMgr<Game::DynParticle>::~MonoObjectMgr()
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801A801C
lis      r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
addi     r4, r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
stw      r4, 0(r30)
addi     r0, r4, 0x2c
stw      r0, 0x1c(r30)
beq      lbl_801A800C
lis      r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
addi     r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
stw      r4, 0(r30)
addi     r0, r4, 0x2c
stw      r0, 0x1c(r30)
beq      lbl_801A800C
lis      r4, "__vt__31Container<Q24Game11DynParticle>"@ha
addi     r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
stw      r0, 0(r30)
beq      lbl_801A800C
lis      r5, __vt__16GenericContainer@ha
li       r4, 0
addi     r0, r5, __vt__16GenericContainer@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_801A800C:
extsh.   r0, r31
ble      lbl_801A801C
mr       r3, r30
bl       __dl__FPv

lbl_801A801C:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

// namespace Game {

/*
 * --INFO--
 * Address:	801A8038
 * Size:	000030
 */
void DynParticleMgr::resetMgr(void)
{
	/*
	li       r6, 0
	li       r5, 1
	b        lbl_801A8050

lbl_801A8044:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801A8050:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_801A8044
	li       r0, 0
	stw      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8068
 * Size:	000078
 */
DynParticle* DynParticle::getAt(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_8047F630@ha
	lis      r5, lbl_8047F640@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	mr       r29, r3
	addi     r30, r6, lbl_8047F630@l
	addi     r31, r5, lbl_8047F640@l
	li       r28, 0
	b        lbl_801A80C0

lbl_801A8098:
	cmplwi   r29, 0
	bne      lbl_801A80B8
	mr       r3, r30
	mr       r5, r31
	mr       r6, r27
	li       r4, 0x86
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A80B8:
	lwz      r29, 0x1c(r29)
	addi     r28, r28, 1

lbl_801A80C0:
	cmpw     r28, r27
	blt      lbl_801A8098
	mr       r3, r29
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void DynParticle::release(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void DynParticle::updateGlobal(Matrixf&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A80E0
 * Size:	000074
 */
DynCreature::DynCreature(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game8CreatureFv
	lis      r4, __vt__Q24Game11DynCreature@ha
	addi     r3, r31, 0x17c
	addi     r0, r4, __vt__Q24Game11DynCreature@l
	stw      r0, 0(r31)
	bl       __ct__Q24Game5RigidFv
	li       r0, 0
	lfs      f0, lbl_80519238@sda21(r2)
	stw      r0, 0x30c(r31)
	mr       r3, r31
	stw      r0, 0x178(r31)
	stfs     f0, 0x2f4(r31)
	stfs     f0, 0x2f8(r31)
	stfs     f0, 0x2fc(r31)
	stfs     f0, 0x300(r31)
	stfs     f0, 0x304(r31)
	stfs     f0, 0x308(r31)
	stb      r0, 0x310(r31)
	stb      r0, 0x311(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8154
 * Size:	0000B0
 */
void DynCreature::createParticles(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r31, 0x178(r3)
	b        lbl_801A81D8

lbl_801A8188:
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_801A81B4
	mr       r3, r28
	bl       releaseParticles__Q24Game11DynCreatureFv
	li       r3, 0
	b        lbl_801A81E4

lbl_801A81B4:
	stw      r31, 0x1c(r3)
	lwz      r0, 0x178(r28)
	cmplwi   r0, 0
	beq      lbl_801A81D0
	stw      r0, 0x1c(r3)
	stw      r3, 0x178(r28)
	b        lbl_801A81D4

lbl_801A81D0:
	stw      r3, 0x178(r28)

lbl_801A81D4:
	addi     r30, r30, 1

lbl_801A81D8:
	cmpw     r30, r29
	blt      lbl_801A8188
	li       r3, 1

lbl_801A81E4:
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
 * Address:	801A8204
 * Size:	000074
 */
void DynCreature::releaseParticles(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x178(r3)
	cmplwi   r30, 0
	beq      lbl_801A825C
	li       r31, 0
	b        lbl_801A824C

lbl_801A8234:
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	mr       r4, r30
	bl       "kill__35MonoObjectMgr<Q24Game11DynParticle>FPQ24Game11DynParticle"
	lwz      r0, 0x1c(r30)
	stw      r31, 0x1c(r30)
	mr       r30, r0

lbl_801A824C:
	cmplwi   r30, 0
	bne      lbl_801A8234
	li       r0, 0
	stw      r0, 0x178(r29)

lbl_801A825C:
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
 * Address:	801A8278
 * Size:	00006C
 */
void DynCreature::updateParticlePositions(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r31, 0x178(r3)
	b        lbl_801A82C4

lbl_801A8298:
	mr       r4, r31
	addi     r3, r30, 0x138
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	lwz      r31, 0x1c(r31)

lbl_801A82C4:
	cmplwi   r31, 0
	bne      lbl_801A8298
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A82E4
 * Size:	0004F4
 */
void DynCreature::computeForces(float)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r6, mInstance__13DynamicsParms@sda21(r13)
	lbz      r0, 0x3c(r6)
	cmplwi   r0, 0
	beq      lbl_801A85B0
	lwz      r5, 0x178(r3)
	b        lbl_801A85A4

lbl_801A8300:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A85A0
	lfs      f1, 0x14(r5)
	lfs      f0, 0x308(r3)
	lfs      f5, 0x1d4(r3)
	fsubs    f9, f1, f0
	lfs      f3, 0xc(r5)
	lfs      f1, 0x300(r3)
	lfs      f2, 0x10(r5)
	lfs      f0, 0x304(r3)
	fsubs    f6, f3, f1
	fmuls    f1, f5, f9
	lfs      f4, 0x1dc(r3)
	fsubs    f8, f2, f0
	lfs      f7, 0x1d8(r3)
	lfs      f0, 0x1c0(r3)
	fmsubs   f3, f4, f6, f1
	fmuls    f2, f4, f8
	lfs      f1, 0x1bc(r3)
	fmuls    f4, f7, f6
	lfs      f6, 0x24(r5)
	fadds    f0, f3, f0
	fmsubs   f3, f7, f9, f2
	fmsubs   f5, f5, f8, f4
	lfs      f4, 0x1c4(r3)
	fmuls    f2, f0, f6
	lfs      f7, 0x20(r5)
	fadds    f8, f3, f1
	fadds    f1, f5, f4
	lfs      f5, 0x28(r5)
	fmadds   f2, f8, f7, f2
	lfs      f3, 0x1cc(r3)
	lfs      f4, 0x1c8(r3)
	fmuls    f3, f3, f6
	lfs      f12, 0x1d0(r3)
	fmadds   f13, f1, f5, f2
	lfs      f9, lbl_80519238@sda21(r2)
	fmadds   f11, f4, f7, f3
	fmuls    f2, f6, f13
	fmuls    f10, f7, f13
	fmuls    f4, f5, f13
	fsubs    f3, f0, f2
	fsubs    f2, f8, f10
	fsubs    f4, f1, f4
	fmuls    f10, f3, f3
	fmadds   f12, f12, f5, f11
	fmuls    f11, f4, f4
	fmadds   f10, f2, f2, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_801A83E0
	ble      lbl_801A83E4
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_801A83E4

lbl_801A83E0:
	fmr      f10, f9

lbl_801A83E4:
	lfs      f9, lbl_80519238@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_801A8404
	lfs      f9, lbl_8051923C@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f2, f2, f9
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9

lbl_801A8404:
	fmuls    f10, f7, f12
	lfs      f11, 0x1c8(r3)
	fmuls    f7, f3, f0
	fmuls    f9, f6, f12
	fadds    f10, f11, f10
	fmadds   f6, f2, f8, f7
	fmuls    f7, f5, f12
	stfs     f10, 0x1c8(r3)
	fmadds   f5, f4, f1, f6
	lfs      f6, 0x1cc(r3)
	fadds    f6, f6, f9
	fabs     f5, f5
	stfs     f6, 0x1cc(r3)
	frsp     f5, f5
	lfs      f6, 0x1d0(r3)
	fadds    f6, f6, f7
	stfs     f6, 0x1d0(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f6, 0x80(r4)
	fcmpo    cr0, f5, f6
	bge      lbl_801A84E4
	fmuls    f1, f3, f3
	lfs      f0, lbl_80519238@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A8484
	ble      lbl_801A8488
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A8488

lbl_801A8484:
	fmr      f1, f0

lbl_801A8488:
	lfs      f0, lbl_80519238@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A84A8
	lfs      f0, lbl_8051923C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_801A84A8:
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f0, 0x1c8(r3)
	lfs      f1, 0x58(r4)
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f1, f4, f1
	fsubs    f0, f0, f2
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1cc(r3)
	fsubs    f0, f0, f3
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fsubs    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	b        lbl_801A85A0

lbl_801A84E4:
	lfs      f4, 0x24(r5)
	lfs      f5, 0x20(r5)
	fmuls    f3, f0, f4
	lfs      f6, 0x28(r5)
	lfs      f2, lbl_80519238@sda21(r2)
	fmadds   f3, f8, f5, f3
	fmadds   f3, f1, f6, f3
	fmuls    f4, f4, f3
	fmuls    f5, f5, f3
	fmuls    f3, f6, f3
	fsubs    f6, f0, f4
	fsubs    f4, f8, f5
	fsubs    f5, f1, f3
	fmuls    f0, f6, f6
	fmuls    f1, f5, f5
	fmadds   f0, f4, f4, f0
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f2
	ble      lbl_801A8540
	ble      lbl_801A8544
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A8544

lbl_801A8540:
	fmr      f1, f2

lbl_801A8544:
	lfs      f0, lbl_80519238@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8564
	lfs      f0, lbl_8051923C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f6, f6, f0
	fmuls    f5, f5, f0

lbl_801A8564:
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f2, 0x1c8(r3)
	lfs      f0, 0x168(r4)
	fneg     f3, f0
	fmuls    f1, f4, f3
	fmuls    f0, f6, f3
	fmuls    f3, f5, f3
	fadds    f1, f2, f1
	stfs     f1, 0x1c8(r3)
	lfs      f1, 0x1cc(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x1d0(r3)

lbl_801A85A0:
	lwz      r5, 0x1c(r5)

lbl_801A85A4:
	cmplwi   r5, 0
	bne      lbl_801A8300
	b        lbl_801A87D0

lbl_801A85B0:
	lwz      r7, 0x178(r3)
	li       r4, 0
	li       r8, 0
	mr       r5, r7
	b        lbl_801A85DC

lbl_801A85C4:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A85D4
	addi     r4, r4, 1

lbl_801A85D4:
	lwz      r5, 0x1c(r5)
	addi     r8, r8, 1

lbl_801A85DC:
	cmplwi   r5, 0
	bne      lbl_801A85C4
	cmpwi    r4, 0
	beq      lbl_801A87D0
	lbz      r0, 0x114(r6)
	cmplwi   r0, 0
	beq      lbl_801A87D0
	lis      r5, 0x4330
	xoris    r0, r4, 0x8000
	xoris    r4, r8, 0x8000
	stw      r0, 0xc(r1)
	lbz      r0, 0x14c(r6)
	stw      r5, 8(r1)
	lfd      f3, lbl_80519240@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f2, f0, f3
	stw      r5, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f3
	fdivs    f2, f2, f0
	beq      lbl_801A863C
	lfs      f1, 0x168(r6)

lbl_801A863C:
	fneg     f0, f1
	mr       r5, r7
	fmuls    f3, f0, f2
	b        lbl_801A87C8

lbl_801A864C:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A87C4
	lfs      f1, 0x14(r5)
	lfs      f0, 0x308(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	fsubs    f2, f1, f0
	lfs      f10, 0x1d4(r3)
	lfs      f6, 0xc(r5)
	lfs      f0, 0x300(r3)
	lfs      f5, 0x10(r5)
	fmuls    f4, f10, f2
	lfs      f1, 0x304(r3)
	fsubs    f0, f6, f0
	lfs      f9, 0x1dc(r3)
	fsubs    f1, f5, f1
	lfs      f11, 0x1d8(r3)
	fmsubs   f7, f9, f0, f4
	lfs      f6, 0x1c0(r3)
	fmuls    f8, f11, f0
	lbz      r0, 0x130(r4)
	fmuls    f4, f9, f1
	lfs      f5, 0x1bc(r3)
	fadds    f9, f7, f6
	lfs      f12, 0x24(r5)
	fmsubs   f8, f10, f1, f8
	lfs      f7, 0x1c4(r3)
	fmsubs   f6, f11, f2, f4
	lfs      f11, 0x20(r5)
	fmuls    f4, f9, f12
	lfs      f10, 0x28(r5)
	fadds    f7, f8, f7
	cmplwi   r0, 0
	fadds    f8, f6, f5
	fmadds   f4, f8, f11, f4
	fmadds   f4, f7, f10, f4
	fmuls    f6, f11, f4
	fmuls    f5, f12, f4
	fmuls    f4, f10, f4
	fsubs    f6, f8, f6
	fsubs    f8, f9, f5
	fsubs    f7, f7, f4
	beq      lbl_801A8748
	fmuls    f5, f8, f8
	lfs      f4, lbl_80519238@sda21(r2)
	fmuls    f9, f7, f7
	fmadds   f5, f6, f6, f5
	fadds    f5, f9, f5
	fcmpo    cr0, f5, f4
	ble      lbl_801A8724
	ble      lbl_801A8728
	frsqrte  f4, f5
	fmuls    f5, f4, f5
	b        lbl_801A8728

lbl_801A8724:
	fmr      f5, f4

lbl_801A8728:
	lfs      f4, lbl_80519238@sda21(r2)
	fcmpo    cr0, f5, f4
	ble      lbl_801A8748
	lfs      f4, lbl_8051923C@sda21(r2)
	fdivs    f4, f4, f5
	fmuls    f6, f6, f4
	fmuls    f8, f8, f4
	fmuls    f7, f7, f4

lbl_801A8748:
	fmuls    f10, f6, f3
	lfs      f4, 0x1c8(r3)
	fmuls    f11, f8, f3
	lfs      f5, 0x1cc(r3)
	fmuls    f12, f7, f3
	lfs      f6, 0x1d0(r3)
	fadds    f4, f4, f10
	fadds    f5, f5, f11
	fadds    f6, f6, f12
	stfs     f4, 0x1c8(r3)
	stfs     f5, 0x1cc(r3)
	stfs     f6, 0x1d0(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lbz      r0, 0x190(r4)
	cmplwi   r0, 0
	bne      lbl_801A87C4
	fmuls    f4, f2, f11
	lfs      f5, 0x1ec(r3)
	fmuls    f6, f0, f12
	lfs      f7, 0x1f0(r3)
	fmuls    f8, f1, f10
	lfs      f9, 0x1f4(r3)
	fmsubs   f1, f1, f12, f4
	fmsubs   f2, f2, f10, f6
	fmsubs   f4, f0, f11, f8
	fadds    f0, f5, f1
	fadds    f1, f7, f2
	fadds    f2, f9, f4
	stfs     f0, 0x1ec(r3)
	stfs     f1, 0x1f0(r3)
	stfs     f2, 0x1f4(r3)

lbl_801A87C4:
	lwz      r5, 0x1c(r5)

lbl_801A87C8:
	cmplwi   r5, 0
	bne      lbl_801A864C

lbl_801A87D0:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A87D8
 * Size:	0000B4
 */
// void tracemoveCallback__Q24Game11DynCreatureFR10Vector3f R10Vector3f(void)
void DynCreature::tracemoveCallback(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	mr       r5, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x17c
	lwz      r6, mInstance__13DynamicsParms@sda21(r13)
	lfs      f1, 0xec(r6)
	mr       r6, r31
	bl       "resolveCollision__Q24Game5RigidFiR10Vector3<f>R10Vector3<f>f"
	lwz      r0, 0x30c(r30)
	cmplwi   r0, 0
	beq      lbl_801A8874
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A8874
	lbz      r0, 0x310(r30)
	cmplwi   r0, 0
	bne      lbl_801A8848
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl

lbl_801A8848:
	li       r0, 1
	stb      r0, 0x311(r30)
	lwz      r3, 0x30c(r30)
	stb      r0, 0x2c(r3)
	lwz      r3, 0x30c(r30)
	lfs      f0, 0(r31)
	stfs     f0, 0x20(r3)
	lfs      f0, 4(r31)
	stfs     f0, 0x24(r3)
	lfs      f0, 8(r31)
	stfs     f0, 0x28(r3)

lbl_801A8874:
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
 * Address:	........
 * Size:	000028
 */
void range_check(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void range_check(Vector3f&)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void DynCreature::getContactParticeRatio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
int DynCreature::getContactParticleNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
int DynCreature::getParticleNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A888C
 * Size:	0004A8
 */
void DynCreature::simulate(float)
{
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stmw     r26, 0x108(r1)
	mr       r26, r3
	lis      r5, lbl_804B5218@ha
	lbz      r6, 0x311(r3)
	lis      r4, "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@ha
	lis      r3,
"__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@ha li r0,
0 stb      r6, 0x310(r26) addi     r7, r5, lbl_804B5218@l addi     r6, r4,
"__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@l fmr      f27, f1 stb r0,
0x311(r26) addi     r0, r3,
"__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@l addi r3,
r26, 0x138 addi     r4, r26, 0x2f4 lwz      r9, 0(r7) lwz      r8, 4(r7) addi
r5, r1, 0x14 lwz      r7, 8(r7) stw      r6, 0x50(r1) stw      r9, 0x44(r1) stw
r8, 0x48(r1) stw      r7, 0x4c(r1) stw      r0, 0x50(r1) stw      r26, 0x54(r1)
	stw      r9, 0x58(r1)
	stw      r8, 0x5c(r1)
	stw      r7, 0x60(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x18(r1)
	fmr      f1, f27
	lfs      f3, 0x1c(r1)
	addi     r3, r26, 0x17c
	lfs      f0, 0x14(r1)
	li       r4, 0
	stfs     f0, 0x300(r26)
	stfs     f2, 0x304(r26)
	stfs     f3, 0x308(r26)
	bl       integrate__Q24Game5RigidFfi
	lis      r3, sincosTable___5JMath@ha
	lwz      r27, 0x178(r26)
	lfs      f29, lbl_80519238@sda21(r2)
	addi     r28, r3, sincosTable___5JMath@l
	lfs      f30, lbl_80519250@sda21(r2)
	addi     r29, r1, 0x20
	lfs      f31, lbl_80519248@sda21(r2)
	addi     r30, r1, 0x30
	lfs      f25, lbl_8051923C@sda21(r2)
	addi     r31, r1, 0x50
	lfs      f26, lbl_80519254@sda21(r2)
	b        lbl_801A8CE0

lbl_801A899C:
	mr       r4, r27
	addi     r3, r26, 0x138
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0xc(r27)
	stfs     f1, 0x10(r27)
	stfs     f2, 0x14(r27)
	lfs      f6, 0x1d4(r26)
	stfs     f6, 0x30(r1)
	lfs      f5, 0x1d8(r26)
	stfs     f5, 0x34(r1)
	lfs      f4, 0x1dc(r26)
	stfs     f4, 0x38(r1)
	lfs      f2, 0xc(r27)
	lfs      f0, 0x300(r26)
	lfs      f3, 0x10(r27)
	lfs      f1, 0x304(r26)
	fsubs    f7, f2, f0
	lfs      f2, 0x14(r27)
	lfs      f0, 0x308(r26)
	fsubs    f3, f3, f1
	fmuls    f1, f5, f7
	fsubs    f2, f2, f0
	fmuls    f0, f4, f3
	fmsubs   f8, f6, f3, f1
	fmuls    f1, f6, f2
	fmsubs   f3, f5, f2, f0
	stfs     f8, 0x38(r1)
	fmsubs   f2, f4, f7, f1
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	lfs      f1, 0x1c0(r26)
	lfs      f0, 0x1bc(r26)
	fadds    f4, f2, f1
	lfs      f2, 0x1c4(r26)
	fadds    f1, f3, f0
	fadds    f2, f8, f2
	fmuls    f3, f4, f4
	stfs     f4, 0x34(r1)
	fmuls    f0, f1, f1
	fmuls    f4, f2, f2
	stfs     f1, 0x30(r1)
	fadds    f0, f0, f3
	stfs     f2, 0x38(r1)
	lfs      f28, 0x18(r27)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f29
	ble      lbl_801A8A84
	fmadds   f0, f1, f1, f3
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f29
	ble      lbl_801A8A88
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_801A8A88

lbl_801A8A84:
	fmr      f0, f29

lbl_801A8A88:
	fmuls    f0, f27, f0
	fcmpo    cr0, f0, f30
	ble      lbl_801A8A98
	fmr      f0, f30

lbl_801A8A98:
	lfs      f1, 0(r27)
	fadds    f28, f28, f0
	fcmpo    cr0, f1, f31
	blt      lbl_801A8AB4
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8ABC

lbl_801A8AB4:
	li       r0, 0
	b        lbl_801A8AC0

lbl_801A8ABC:
	li       r0, 1

lbl_801A8AC0:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	bne      lbl_801A8B08
	lfs      f1, 4(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8AF0
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8AF8

lbl_801A8AF0:
	li       r0, 0
	b        lbl_801A8AFC

lbl_801A8AF8:
	li       r0, 1

lbl_801A8AFC:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8B08:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8B44
	lfs      f1, 8(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8B2C
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8B34

lbl_801A8B2C:
	li       r0, 0
	b        lbl_801A8B38

lbl_801A8B34:
	li       r0, 1

lbl_801A8B38:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8B44:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8C00
	lfs      f1, 0xc(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8B68
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8B70

lbl_801A8B68:
	li       r0, 0
	b        lbl_801A8B74

lbl_801A8B70:
	li       r0, 1

lbl_801A8B74:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	bne      lbl_801A8BBC
	lfs      f1, 0x10(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8BA4
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8BAC

lbl_801A8BA4:
	li       r0, 0
	b        lbl_801A8BB0

lbl_801A8BAC:
	li       r0, 1

lbl_801A8BB0:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8BBC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8BF8
	lfs      f1, 0x14(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8BE0
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8BE8

lbl_801A8BE0:
	li       r0, 0
	b        lbl_801A8BEC

lbl_801A8BE8:
	li       r0, 1

lbl_801A8BEC:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8BF8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A8C1C

lbl_801A8C00:
	lis      r3, lbl_8047F630@ha
	lis      r5, lbl_8047F654@ha
	addi     r3, r3, lbl_8047F630@l
	li       r4, 0x1f1
	addi     r5, r5, lbl_8047F654@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A8C1C:
	lfs      f0, 0xc(r27)
	li       r6, 0
	li       r5, -1
	li       r0, 1
	stfs     f0, 0x20(r1)
	fmr      f1, f27
	addi     r4, r1, 0x64
	lfs      f0, 0x10(r27)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x14(r27)
	stfs     f0, 0x28(r1)
	stfs     f28, 0x2c(r1)
	stw      r27, 0x30c(r26)
	lwz      r3, 0x30c(r26)
	stb      r6, 0x2c(r3)
	stb      r6, 0x7d(r1)
	lfs      f0, 0x800(r28)
	stw      r29, 0x64(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r30, 0x68(r1)
	stfs     f25, 0x6c(r1)
	stfs     f29, 0x70(r1)
	stw      r31, 0x74(r1)
	stw      r6, 0xa8(r1)
	stb      r6, 0xd8(r1)
	stb      r6, 0x7c(r1)
	stw      r6, 0xac(r1)
	stw      r6, 0x78(r1)
	stb      r6, 0xf4(r1)
	stw      r6, 0xf8(r1)
	stfs     f0, 0x90(r1)
	stfs     f26, 0x94(r1)
	stw      r5, 0xfc(r1)
	stw      r6, 0xb0(r1)
	stb      r6, 0x7e(r1)
	stb      r0, 0x7d(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, platMgr__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x7d(r1)
	cmplwi   r3, 0
	beq      lbl_801A8CDC
	fmr      f1, f27
	addi     r4, r1, 0x64
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_801A8CDC:
	lwz      r27, 0x1c(r27)

lbl_801A8CE0:
	cmplwi   r27, 0
	bne      lbl_801A899C
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	lmw      r26, 0x108(r1)
	lwz      r0, 0x194(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8D34
 * Size:	00001C
 */
Vector3f DynCreature::getPosition(void)
{
	/*
	lfs      f0, 0x1b0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x1b4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x1b8(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8D50
 * Size:	0000AC
 */
// void onSetPosition__Q24Game11DynCreatureFR10Vector3f(void)
void DynCreature::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, "zero__10Vector3<f>"@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, "zero__10Vector3<f>"@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x17c
	bl       "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x180(r31)
	mr       r3, r31
	lwz      r0, 0x184(r31)
	stw      r4, 0x138(r31)
	stw      r0, 0x13c(r31)
	lwz      r4, 0x188(r31)
	lwz      r0, 0x18c(r31)
	stw      r4, 0x140(r31)
	stw      r0, 0x144(r31)
	lwz      r4, 0x190(r31)
	lwz      r0, 0x194(r31)
	stw      r4, 0x148(r31)
	stw      r0, 0x14c(r31)
	lwz      r4, 0x198(r31)
	lwz      r0, 0x19c(r31)
	stw      r4, 0x150(r31)
	stw      r0, 0x154(r31)
	lwz      r4, 0x1a0(r31)
	lwz      r0, 0x1a4(r31)
	stw      r4, 0x158(r31)
	stw      r0, 0x15c(r31)
	lwz      r4, 0x1a8(r31)
	lwz      r0, 0x1ac(r31)
	stw      r4, 0x160(r31)
	stw      r0, 0x164(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x1b0(r12)
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
 * Address:	801A8DFC
 * Size:	000004
 */
void DynCreature::onSetPosition(void) { }

/*
 * --INFO--
 * Address:	801A8E00
 * Size:	00001C
 */
Vector3f DynCreature::getVelocity(void)
{
	/*
	lfs      f0, 0x1bc(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x1c0(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x1c4(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8E1C
 * Size:	00001C
 */
// void setVelocity__Q24Game11DynCreatureFR10Vector3f(void)
void DynCreature::setVelocity(Vector3f&)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0x1bc(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x1c0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x1c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8E38
 * Size:	000088
 */
// void getVelocityAt__Q24Game11DynCreatureFR10Vector3f R10Vector3f(void)
void DynCreature::getVelocityAt(Vector3f&, Vector3f&)
{
	/*
	lfs      f0, 0x1bc(r3)
	stfs     f0, 0(r5)
	lfs      f0, 0x1c0(r3)
	stfs     f0, 4(r5)
	lfs      f0, 0x1c4(r3)
	stfs     f0, 8(r5)
	lfs      f1, 4(r4)
	lfs      f0, 0x1b4(r3)
	lfs      f3, 8(r4)
	lfs      f2, 0x1b8(r3)
	fsubs    f7, f1, f0
	lfs      f10, 0x1dc(r3)
	fsubs    f4, f3, f2
	lfs      f8, 0x1d4(r3)
	lfs      f2, 0(r4)
	fmuls    f0, f10, f7
	lfs      f1, 0x1b0(r3)
	lfs      f9, 0x1d8(r3)
	fsubs    f6, f2, f1
	lfs      f1, 0(r5)
	fmuls    f2, f8, f4
	lfs      f3, 4(r5)
	fmsubs   f0, f9, f4, f0
	lfs      f5, 8(r5)
	fmuls    f4, f9, f6
	fmsubs   f2, f10, f6, f2
	fadds    f0, f1, f0
	fmsubs   f1, f8, f7, f4
	fadds    f2, f3, f2
	stfs     f0, 0(r5)
	fadds    f0, f5, f1
	stfs     f2, 4(r5)
	stfs     f0, 8(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8EC0
 * Size:	000008
 */
// void getAngularEffect__Q24Game11DynCreatureFR10Vector3f R10Vector3f(void)
void DynCreature::getAngularEffect(Vector3f&, Vector3f&)
{
	/*
	lfs      f1, lbl_80519238@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A8EC8
 * Size:	000044
 */
// void applyImpulse__Q24Game11DynCreatureFR10Vector3f R10Vector3f(void)
void DynCreature::applyImpulse(Vector3f&, Vector3f&)
{
	/*
	lfs      f6, 0x118(r3)
	lfs      f0, 0(r5)
	lfs      f2, 4(r5)
	fmuls    f0, f0, f6
	lfs      f1, 0x1bc(r3)
	lfs      f4, 8(r5)
	fmuls    f2, f2, f6
	lfs      f3, 0x1c0(r3)
	fadds    f0, f1, f0
	lfs      f5, 0x1c4(r3)
	fmuls    f1, f4, f6
	fadds    f2, f3, f2
	stfs     f0, 0x1bc(r3)
	fadds    f0, f5, f1
	stfs     f2, 0x1c0(r3)
	stfs     f0, 0x1c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void DynCreature::simulateCylinder(Sys::Cylinder&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A8F0C
 * Size:	0000B8
 */
DynParticleMgr::~DynParticleMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801A8FA8
	lis      r4, __vt__Q24Game14DynParticleMgr@ha
	addi     r4, r4, __vt__Q24Game14DynParticleMgr@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801A8F98
	lis      r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
	addi     r4, r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801A8F98
	lis      r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
	addi     r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801A8F98
	lis      r4, "__vt__31Container<Q24Game11DynParticle>"@ha
	addi     r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
	stw      r0, 0(r30)
	beq      lbl_801A8F98
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801A8F98:
	extsh.   r0, r31
	ble      lbl_801A8FA8
	mr       r3, r30
	bl       __dl__FPv

lbl_801A8FA8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
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
 * Address:	801A8FC4
 * Size:	000070
 */
void Container<Game::DynParticle>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801A9018
	lis      r4, "__vt__31Container<Q24Game11DynParticle>"@ha
	addi     r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
	stw      r0, 0(r30)
	beq      lbl_801A9008
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801A9008:
	extsh.   r0, r31
	ble      lbl_801A9018
	mr       r3, r30
	bl       __dl__FPv

lbl_801A9018:
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
 * Address:	801A9034
 * Size:	000088
 */
void ObjectMgr<Game::DynParticle>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801A90A0
	lis      r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
	addi     r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801A9090
	lis      r4, "__vt__31Container<Q24Game11DynParticle>"@ha
	addi     r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
	stw      r0, 0(r30)
	beq      lbl_801A9090
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801A9090:
	extsh.   r0, r31
	ble      lbl_801A90A0
	mr       r3, r30
	bl       __dl__FPv

lbl_801A90A0:
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
 * Address:	801A90BC
 * Size:	000060
 */
void MonoObjectMgr<Game::DynParticle>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	cmpwi    r3, -1
	beq      lbl_801A9104
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x34
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_801A9108

lbl_801A9104:
	li       r3, 0

lbl_801A9108:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A911C
 * Size:	000054
 */
void MonoObjectMgr<Game::DynParticle>::kill(Game::DynParticle*)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_801A9134:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_801A9160
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_801A9160:
	addi     r5, r5, 0x34
	addi     r6, r6, 1
	bdnz     lbl_801A9134
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9170
 * Size:	000040
 */
void MonoObjectMgr<Game::DynParticle>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_801A91A8

lbl_801A9188:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_801A91A0
	mr       r3, r6
	blr

lbl_801A91A0:
	addi     r6, r6, 1
	bdnz     lbl_801A9188

lbl_801A91A8:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A91B0
 * Size:	000030
 */
void MonoObjectMgr<Game::DynParticle>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
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
 * Address:	801A91E0
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A91E8
 * Size:	000010
 */
void MonoObjectMgr<Game::DynParticle>::getAt(int)
{
	/*
	mulli    r0, r4, 0x34
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A91F8
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9200
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801A9258

lbl_801A9228:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801A9250
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801A9250:
	addi     r31, r31, 0x34
	addi     r30, r30, 1

lbl_801A9258:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801A9228
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
 * Address:	801A9280
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801A92D8

lbl_801A92A8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801A92D0
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801A92D0:
	addi     r31, r31, 0x34
	addi     r30, r30, 1

lbl_801A92D8:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801A92A8
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
 * Address:	801A9300
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801A9364

lbl_801A9330:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_801A935C
	lwz      r0, 0x28(r28)
	mr       r4, r30
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801A935C:
	addi     r31, r31, 0x34
	addi     r29, r29, 1

lbl_801A9364:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_801A9330
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
 * Address:	801A9390
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801A93E8

lbl_801A93B8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801A93E0
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801A93E0:
	addi     r31, r31, 0x34
	addi     r30, r30, 1

lbl_801A93E8:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801A93B8
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
 * Address:	801A9410
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_801A9474

lbl_801A9440:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801A946C
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801A946C:
	addi     r31, r31, 0x34
	addi     r30, r30, 1

lbl_801A9474:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801A9440
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A94A0
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801A9504

lbl_801A94D0:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801A94FC
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0x30(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_801A94FC:
	addi     r31, r31, 0x34
	addi     r30, r30, 1

lbl_801A9504:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_801A94D0
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
 * Address:	801A9530
 * Size:	000018
 */
void MonoObjectMgr<Game::DynParticle>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9548
 * Size:	000030
 */
void MonoObjectMgr<Game::DynParticle>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_801A9568

lbl_801A955C:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801A9568:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_801A955C
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9578
 * Size:	000004
 */
void MonoObjectMgr<Game::DynParticle>::onAlloc() { }

/*
 * --INFO--
 * Address:	801A957C
 * Size:	00003C
 */
void MonoObjectMgr<Game::DynParticle>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A95B0

lbl_801A9590:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_801A95A8
	mr       r3, r5
	blr

lbl_801A95A8:
	addi     r5, r5, 1
	bdnz     lbl_801A9590

lbl_801A95B0:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A95B8
 * Size:	000010
 */
void MonoObjectMgr<Game::DynParticle>::get(void*)
{
	/*
	mulli    r0, r4, 0x34
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A95C8
 * Size:	00002C
 */
void Container<Game::DynParticle>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	801A95F4
 * Size:	000008
 */
u32 Container<Game::DynParticle>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801A95FC
 * Size:	000008
 */
u32 Container<Game::DynParticle>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801A9604
 * Size:	000030
 */
void Delegate2<Game::DynCreature, Vector3f&, Vector3f&>::invoke(Vector3f&, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r6, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0xE7AF8
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A9634
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__30Iterator<Q24Game11DynParticle>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A9684
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A97F4

lbl_801A9684:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A96F0

lbl_801A969C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A97F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A96F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A969C
	b        lbl_801A97F4

lbl_801A9710:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	mr       r4, r31
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A9764
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A97F4

lbl_801A9764:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A97D8

lbl_801A9784:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A97F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A97D8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9784

lbl_801A97F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A9710
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9828
 * Size:	00004C
 */
void Iterator<Game::DynParticle>::isDone()
{
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
}

/*
 * --INFO--
 * Address:	801A9874
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A98C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9A34

lbl_801A98C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9930

lbl_801A98DC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9A34
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9930:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A98DC
	b        lbl_801A9A34

lbl_801A9950:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	fmr      f1, f31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A99A4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9A34

lbl_801A99A4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9A18

lbl_801A99C4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9A34
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9A18:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A99C4

lbl_801A9A34:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A9950
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9A68
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A9AB0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9C1C

lbl_801A9AB0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9B1C

lbl_801A9AC8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9C1C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9B1C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9AC8
	b        lbl_801A9C1C

lbl_801A9B3C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A9B8C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9C1C

lbl_801A9B8C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9C00

lbl_801A9BAC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9C1C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9C00:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9BAC

lbl_801A9C1C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A9B3C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9C4C
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__30Iterator<Q24Game11DynParticle>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A9C9C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9E0C

lbl_801A9C9C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9D08

lbl_801A9CB4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9E0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9D08:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9CB4
	b        lbl_801A9E0C

lbl_801A9D28:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A9D7C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9E0C

lbl_801A9D7C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9DF0

lbl_801A9D9C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9E0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9DF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9D9C

lbl_801A9E0C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A9D28
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A9E40
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A9E88
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9FF4

lbl_801A9E88:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9EF4

lbl_801A9EA0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9FF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9EF4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9EA0
	b        lbl_801A9FF4

lbl_801A9F14:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A9F64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9FF4

lbl_801A9F64:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A9FD8

lbl_801A9F84:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A9FF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A9FD8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A9F84

lbl_801A9FF4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A9F14
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AA024
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801AA06C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AA1D8

lbl_801AA06C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AA0D8

lbl_801AA084:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801AA1D8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801AA0D8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AA084
	b        lbl_801AA1D8

lbl_801AA0F8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x30(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801AA148
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AA1D8

lbl_801AA148:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AA1BC

lbl_801AA168:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801AA1D8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801AA1BC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AA168

lbl_801AA1D8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801AA0F8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801AA208
 * Size:	000004
 */
void DynParticle::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801AA20C
 * Size:	000004
 */
void DynParticle::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801AA210
 * Size:	000004
 */
void DynParticle::doViewCalc(void) { }

/*
 * --INFO--
 * Address:	801AA214
 * Size:	000004
 */
void DynParticle::doSetView(unsigned long) { }

/*
 * --INFO--
 * Address:	801AA218
 * Size:	000004
 */
void DynParticle::doEntry(void) { }

/*
 * --INFO--
 * Address:	801AA21C
 * Size:	000004
 */
void DynParticle::doAnimation(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801AA220
 * Size:	000188
 */
void MonoObjectMgr<Game::DynParticle>::alloc(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r31
	mulli    r3, r29, 0x34
	stw      r28, 0x10(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game11DynParticleFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game11DynParticleFv@l
	li       r5, 0
	li       r6, 0x34
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r0, 0
	mr       r3, r29
	stw      r31, 0x24(r30)
	stw      r0, 0x20(r30)
	bl       __nwa__FUl
	cmpwi    r31, 0
	stw      r3, 0x2c(r30)
	li       r11, 0
	ble      lbl_801AA340
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_801AA31C
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_801AA31C

lbl_801AA2B4:
	lwz      r3, 0x2c(r30)
	li       r10, 1
	addi     r8, r11, 1
	addi     r7, r11, 2
	stbx     r10, r3, r11
	addi     r6, r11, 3
	addi     r5, r11, 4
	addi     r4, r11, 5
	lwz      r9, 0x2c(r30)
	addi     r3, r11, 6
	addi     r0, r11, 7
	addi     r11, r11, 8
	stbx     r10, r9, r8
	lwz      r8, 0x2c(r30)
	stbx     r10, r8, r7
	lwz      r7, 0x2c(r30)
	stbx     r10, r7, r6
	lwz      r6, 0x2c(r30)
	stbx     r10, r6, r5
	lwz      r5, 0x2c(r30)
	stbx     r10, r5, r4
	lwz      r4, 0x2c(r30)
	stbx     r10, r4, r3
	lwz      r3, 0x2c(r30)
	stbx     r10, r3, r0
	bdnz     lbl_801AA2B4

lbl_801AA31C:
	subf     r0, r11, r31
	li       r4, 1
	mtctr    r0
	cmpw     r11, r31
	bge      lbl_801AA340

lbl_801AA330:
	lwz      r3, 0x2c(r30)
	stbx     r4, r3, r11
	addi     r11, r11, 1
	bdnz     lbl_801AA330

lbl_801AA340:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	li       r29, 0
	b        lbl_801AA380

lbl_801AA360:
	lwz      r0, 0x28(r30)
	add      r3, r0, r29
	lwz      r12, 0x30(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 0x34
	addi     r28, r28, 1

lbl_801AA380:
	cmpw     r28, r31
	blt      lbl_801AA360
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

namespace Game {

/*
 * --INFO--
 * Address:	801AA3A8
 * Size:	000004
 */
void DynParticle::constructor(void) { }

/*
 * --INFO--
 * Address:	801AA3AC
 * Size:	000034
 */
DynParticle::DynParticle(void)
{
	/*
	lis      r4, __vt__Q24Game11DynParticle@ha
	lfs      f1, lbl_8051923C@sda21(r2)
	addi     r4, r4, __vt__Q24Game11DynParticle@l
	li       r0, 0
	stw      r4, 0x30(r3)
	lfs      f0, lbl_80519238@sda21(r2)
	stfs     f1, 0x18(r3)
	stb      r0, 0x2c(r3)
	stw      r0, 0x1c(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x28(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801AA3E0
 * Size:	00009C
 */
void MonoObjectMgr<Game::DynParticle>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__31Container<Q24Game11DynParticle>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__31Container<Q24Game11DynParticle>"@l
	lis      r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
	lis      r3, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
	addi     r5, r3, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AA47C
 * Size:	000038
 */
void Iterator<Game::DynParticle>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	801AA4B4
 * Size:	0000E4
 */
void Iterator<Game::DynParticle>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801AA4F4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801AA584

lbl_801AA4F4:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801AA568

lbl_801AA514:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801AA584
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801AA568:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AA514

lbl_801AA584:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AA598
 * Size:	0000DC
 */
void Iterator<Game::DynParticle>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801AA5D4
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801AA660

lbl_801AA5D4:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801AA644

lbl_801AA5F0:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801AA660
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801AA644:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AA5F0

lbl_801AA660:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AA674
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA67C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	801AA684
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
	*/
}

/*
 * --INFO--
 * Address:	801AA68C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA694
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
	*/
}

/*
 * --INFO--
 * Address:	801AA69C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA6A4
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA6AC
 * Size:	000008
 */
void @28 @Game::DynParticleMgr::resetMgr(void)
{
	/*
	addi     r3, r3, -28
	b        resetMgr__Q24Game14DynParticleMgrFv
	*/
}

/*
 * --INFO--
 * Address:	801AA6B4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	801AA6BC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
	*/
}

/*
 * --INFO--
 * Address:	801AA6C4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA6CC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	*/
}

/*
 * --INFO--
 * Address:	801AA6D4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801AA6DC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	*/
}
