#include "Game/FakePiki.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_fakePiki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C708
    lbl_8047C708:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x66616B65
        .4byte 0x50696B69
        .4byte 0x00000000
    .global lbl_8047C720
    lbl_8047C720:
        .4byte 0x66616B65
        .4byte 0x50696B69
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8047C730
    lbl_8047C730:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047C73C
    lbl_8047C73C:
        .4byte 0x64616D65
        .4byte 0x6461796F
        .4byte 0x210A0000
        .4byte 0x7A616D61
        .4byte 0x2D2D2D2D
        .4byte 0x2D2D2D2D
        .4byte 0x6E0A0000
        .4byte 0x63616C63
        .4byte 0x2D636F6C
        .4byte 0x6C000000
    .global lbl_8047C764
    lbl_8047C764:
        .4byte 0x6E6F2072
        .4byte 0x65636F76
        .4byte 0x6572206F
        .4byte 0x6E796F6E
        .4byte 0x0A000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B02B0
    lbl_804B02B0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game8FakePiki
    __vt__Q24Game8FakePiki:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game8FakePikiFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
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
        .4byte doAnimation__Q24Game8FakePikiFv
        .4byte doEntry__Q24Game8FakePikiFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8FakePikiFf
        .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
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
        .4byte inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game8FakePikiFv
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
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game8CreatureFv
        .4byte getPSCreature__Q24Game8CreatureFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8FakePikiFv
        .4byte sound_culling__Q24Game8CreatureFv
        .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
        .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8FakePikiFf
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
        .4byte "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game8CreatureFv
        .4byte getCreatureID__Q24Game8CreatureFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent"
        .4byte getDownfloorMass__Q24Game8FakePikiFv
        .4byte isPikmin__Q24Game8FakePikiFv
        .4byte doColorChange__Q24Game8FakePikiFv
        .4byte doDebugDL__Q24Game8FakePikiFv
        .4byte update__Q24Game8FakePikiFv
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
        .4byte "wallCallback__Q24Game8FakePikiFR10Vector3<f>"
        .4byte
   startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
        .4byte onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent
        .4byte updateLookCreature__Q24Game8FakePikiFv
        .4byte do_updateLookCreature__Q24Game8FakePikiFv
        .4byte onSetPosition__Q24Game8FakePikiFv
        .4byte isWalking__Q24Game8FakePikiFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global kAngleSpeed__Q23efx7TCursor
    kAngleSpeed__Q23efx7TCursor:
        .float 0.05235988

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515900
    lbl_80515900:
        .skip 0x4
    .global lbl_80515904
    lbl_80515904:
        .skip 0x4
    .global sCurrNeckTheta__Q24Game8FakePiki
    sCurrNeckTheta__Q24Game8FakePiki:
        .skip 0x4
    .global sCurrNeckPhi__Q24Game8FakePiki
    sCurrNeckPhi__Q24Game8FakePiki:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805182B0
    lbl_805182B0:
        .4byte 0x41080000
    .global lbl_805182B4
    lbl_805182B4:
        .4byte 0x00000000
    .global lbl_805182B8
    lbl_805182B8:
        .4byte 0x41F00000
    .global lbl_805182BC
    lbl_805182BC:
        .4byte 0x41200000
    .global lbl_805182C0
    lbl_805182C0:
        .4byte 0x3C23D70A
    .global lbl_805182C4
    lbl_805182C4:
        .4byte 0x42700000
    .global lbl_805182C8
    lbl_805182C8:
        .4byte 0xC3A2F983
    .global lbl_805182CC
    lbl_805182CC:
        .4byte 0x43A2F983
    .global lbl_805182D0
    lbl_805182D0:
        .4byte 0x3E4CCCCD
    .global lbl_805182D4
    lbl_805182D4:
        .float 0.1
    .global lbl_805182D8
    lbl_805182D8:
        .4byte 0x40490FDB
    .global lbl_805182DC
    lbl_805182DC:
        .4byte 0x40C90FDB
    .global lbl_805182E0
    lbl_805182E0:
        .float -1.0
    .global lbl_805182E4
    lbl_805182E4:
        .4byte 0x3E20D97C
    .global lbl_805182E8
    lbl_805182E8:
        .float 0.05
    .global lbl_805182EC
    lbl_805182EC:
        .4byte 0x3EA0D97C
    .global lbl_805182F0
    lbl_805182F0:
        .4byte 0xBEA0D97C
    .global lbl_805182F4
    lbl_805182F4:
        .4byte 0x40060A92
    .global lbl_805182F8
    lbl_805182F8:
        .4byte 0x40860A92
    .global lbl_805182FC
    lbl_805182FC:
        .4byte 0x3F860A92
    .global lbl_80518300
    lbl_80518300:
        .4byte 0x40A78D36
    .global lbl_80518304
    lbl_80518304:
        .float 1.0
    .global lbl_80518308
    lbl_80518308:
        .4byte 0x40200000
    .global lbl_8051830C
    lbl_8051830C:
        .4byte 0x40800000
    .global lbl_80518310
    lbl_80518310:
        .4byte 0x3F4CCCCD
    .global lbl_80518314
    lbl_80518314:
        .4byte 0x3F19999A
    .global lbl_80518318
    lbl_80518318:
        .4byte 0x3D088889
    .global lbl_8051831C
    lbl_8051831C:
        .4byte 0xBCCCCCCE
    .global lbl_80518320
    lbl_80518320:
        .4byte 0x42C80000
    .global lbl_80518324
    lbl_80518324:
        .4byte 0x47000000
    .global lbl_80518328
    lbl_80518328:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518330
    lbl_80518330:
        .4byte 0x646F6131
        .4byte 0x00000000
    .global lbl_80518338
    lbl_80518338:
        .4byte 0x3C1374BC
    .global lbl_8051833C
    lbl_8051833C:
        .4byte 0x40000000
    .global lbl_80518340
    lbl_80518340:
        .4byte 0x43160000
    .global lbl_80518344
    lbl_80518344:
        .4byte 0x3F8CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	8013CC68
 * Size:	00012C
 */
FakePiki::FakePiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game8CreatureFv
	lis      r4, __vt__Q28SysShape14MotionListener@ha
	lis      r3, __vt__Q24Game8FakePiki@ha
	addi     r4, r4, __vt__Q28SysShape14MotionListener@l
	li       r0, 0
	stw      r4, 0x178(r31)
	addi     r5, r3, __vt__Q24Game8FakePiki@l
	addi     r4, r5, 0x1b0
	addi     r3, r31, 0x1ac
	stw      r5, 0(r31)
	stw      r4, 0x178(r31)
	stb      r0, 0x17c(r31)
	stb      r0, 0x17d(r31)
	stb      r0, 0x17e(r31)
	stb      r0, 0x17f(r31)
	bl       __ct__12PikiAnimatorFv
	li       r0, 0
	stw      r0, 0x188(r31)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8013CCD8
	mr       r4, r31
	bl       createShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_8013CCD8:
	li       r0, 0
	lfs      f0, lbl_805182B0@sda21(r2)
	stw      r0, 0x174(r31)
	li       r0, -1
	lfs      f1, lbl_805182B4@sda21(r2)
	li       r3, 8
	stfs     f0, 0x224(r31)
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f1, 0x1fc(r31)
	stfs     f1, 0x20c(r31)
	stfs     f1, 0x210(r31)
	stfs     f1, 0x214(r31)
	stfs     f1, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f1, 0x208(r31)
	stfs     f1, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)
	stfs     f1, 0x1f0(r31)
	stfs     f1, 0x1f4(r31)
	stfs     f1, 0x1f8(r31)
	stw      r0, 0x228(r31)
	stfs     f0, 0x234(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013CD48
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8013CD48:
	stw      r0, 0x114(r31)
	li       r0, 0
	mr       r4, r31
	addi     r3, r31, 0xa8
	stw      r0, 0x190(r31)
	li       r5, 8
	bl       alloc__Q24Game15CollisionBufferFPQ24Game10CellObjecti
	li       r0, 0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x1a0(r31)
	mr       r3, r31
	stw      r0, 0x1a8(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CD94
 * Size:	0000B8
 */
void FakePiki::initFakePiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x188(r3)
	stw      r0, 0x190(r3)
	stfs     f0, 0x1fc(r3)
	stfs     f0, 0x20c(r3)
	stfs     f0, 0x210(r3)
	stfs     f0, 0x214(r3)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	stfs     f0, 0x1f0(r3)
	stfs     f0, 0x1f4(r3)
	stfs     f0, 0x1f8(r3)
	stfs     f0, 0x200(r3)
	stfs     f0, 0x204(r3)
	stfs     f0, 0x208(r3)
	stw      r0, 0x248(r3)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8013CE04
	mr       r4, r31
	bl       addShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_8013CE04:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x17c(r31)
	stb      r0, 0x17d(r31)
	stb      r0, 0x17e(r31)
	stb      r0, 0x17f(r31)
	bl       initCaptureStomach__Q24Game8FakePikiFv
	lfs      f0, lbl_805182B4@sda21(r2)
	li       r3, -1
	li       r0, 0
	stfs     f0, 0x180(r31)
	sth      r3, 0x18c(r31)
	stw      r0, 0x184(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CE4C
 * Size:	000028
 */
void FakePiki::killFakePiki()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CE74
 * Size:	0000B8
 */
void FakePiki::initAnimator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x1ac
	lwz      r4, animMgr__Q24Game7NaviMgr@sda21(r13)
	bl       setAnimMgr__12PikiAnimatorFPQ28SysShape7AnimMgr
	mr       r3, r31
	li       r4, 0x1f
	lwz      r12, 0(r31)
	li       r5, 0x1f
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x1ac
	bl       assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013CEE8
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C730@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x1ca
	addi     r5, r5, lbl_8047C730@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013CEE8:
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x1c8
	bl       assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013CF18
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C730@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x1cb
	addi     r5, r5, lbl_8047C730@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013CF18:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CF2C
 * Size:	000028
 * Returns whether the pikmin or captains current animation matches the given
 * animation ID
 */
bool FakePiki::assertMotion(int)
{
	/*
	lwz      r3, 0x1b8(r3)
	cmplwi   r3, 0
	beq      lbl_8013CF40
	lha      r0, 0x20(r3)
	b        lbl_8013CF44

lbl_8013CF40:
	li       r0, -1

lbl_8013CF44:
	subf     r0, r0, r4
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CF54
 * Size:	00006C
 */
void FakePiki::enableMotionBlend()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1d4(r3)
	cmplwi   r3, 0
	beq      lbl_8013CF7C
	lha      r0, 0x20(r3)
	b        lbl_8013CF80

lbl_8013CF7C:
	li       r0, -1

lbl_8013CF80:
	cmplwi   r31, 0
	stw      r0, 0x228(r31)
	mr       r5, r31
	beq      lbl_8013CF94
	addi     r5, r31, 0x178

lbl_8013CF94:
	addi     r3, r31, 0x1c8
	li       r4, 0x1c
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f1, lbl_805182BC@sda21(r2)
	addi     r3, r31, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CFC0
 * Size:	000100
 * This function is used to make a pikmin or captain start an animation
 */
void FakePiki::startMotion(int, int, SysShape::MotionListener*, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r7
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  mr        r5, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x1AC
	  bl        0x2EBC94
	  mr        r4, r30
	  mr        r5, r31
	  addi      r3, r28, 0x1C8
	  bl        0x2EBC84
	  lwz       r4, 0x174(r28)
	  addi      r3, r28, 0x1AC
	  bl        0x2EBDA8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x38E0
	  li        r4, 0x1E1
	  subi      r5, r5, 0x38D0
	  crclr     6, 0x6
	  bl        -0x1129F4

	.loc_0x78:
	  lwz       r4, 0x174(r28)
	  addi      r3, r28, 0x1C8
	  bl        0x2EBD78
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x38E0
	  li        r4, 0x1E2
	  subi      r5, r5, 0x38D0
	  crclr     6, 0x6
	  bl        -0x112A24

	.loc_0xA8:
	  li        r0, -0x1
	  cmpwi     r29, 0x20
	  stw       r0, 0x228(r28)
	  bge-      .loc_0xD0
	  cmpwi     r29, 0x15
	  beq-      .loc_0xE0
	  blt-      .loc_0xD8
	  cmpwi     r29, 0x1C
	  bge-      .loc_0xE0
	  b         .loc_0xD8

	.loc_0xD0:
	  cmpwi     r29, 0x38
	  beq-      .loc_0xE0

	.loc_0xD8:
	  mr        r3, r28
	  bl        0x788

	.loc_0xE0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013D0C0
 * Size:	00001C
 */
void FakePiki::finishMotion()
{
	/*
	lbz      r0, 0x1c4(r3)
	ori      r0, r0, 2
	stb      r0, 0x1c4(r3)
	lbz      r0, 0x1e0(r3)
	ori      r0, r0, 2
	stb      r0, 0x1e0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D0DC
 * Size:	000008
 */
void FakePiki::movieSetFaceDir(float)
{
	/*
	stfs     f1, 0x1fc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D0E4
 * Size:	000008
 */
void FakePiki::setDoAnimCallback(IDelegate* callback)
{
	// Generated from stw r4, 0x188(r3)
	m_doAnimCallback = callback;
}

/*
 * --INFO--
 * Address:	8013D0EC
 * Size:	00000C
 */
void FakePiki::clearDoAnimCallback()
{
	// Generated from stw r0, 0x188(r3)
	m_doAnimCallback = nullptr;
}

/*
 * --INFO--
 * Address:	8013D0F8
 * Size:	0003BC
 */
void FakePiki::updateWalkAnimation()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x214(r31)
	lfs      f1, 0x240(r31)
	lfs      f2, 0x20c(r31)
	lfs      f0, 0x238(r31)
	fsubs    f3, f3, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fsubs    f0, f2, f0
	lfs      f2, 0x54(r3)
	fmuls    f3, f3, f3
	fmadds   f0, f0, f0, f1
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013D178
	ble      lbl_8013D17C
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8013D17C

lbl_8013D178:
	fmr      f0, f1

lbl_8013D17C:
	fdivs    f29, f0, f2
	lwz      r3, 0x1d4(r31)
	cmplwi   r3, 0
	beq      lbl_8013D194
	lha      r30, 0x20(r3)
	b        lbl_8013D198

lbl_8013D194:
	li       r30, -1

lbl_8013D198:
	lwz      r3, 0x1b8(r31)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8013D1B0
	lha      r0, 0x20(r3)
	b        lbl_8013D1B4

lbl_8013D1B0:
	li       r0, -1

lbl_8013D1B4:
	cmpwi    r0, 0x17
	bne      lbl_8013D1C0
	li       r4, 1

lbl_8013D1C0:
	cmpwi    r30, 0x1f
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1e
	beq      lbl_8013D1F4
	cmpwi    r30, 1
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1d
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1c
	beq      lbl_8013D1F4
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r31)
	b        lbl_8013D47C

lbl_8013D1F4:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8013D218
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C73C@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x252
	addi     r5, r5, lbl_8047C73C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013D218:
	lfs      f1, 0x1fc(r31)
	li       r28, 0
	lfs      f0, 0x244(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x100(r3)
	fabs     f1, f1
	fcmpo    cr0, f29, f0
	frsp     f1, f1
	bge      lbl_8013D260
	lfs      f0, lbl_805182C0@sda21(r2)
	li       r29, 0x1f
	lfs      f29, lbl_805182B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013D2EC
	lfs      f29, lbl_805182C4@sda21(r2)
	li       r29, 1
	b        lbl_8013D2EC

lbl_8013D260:
	lfs      f1, 0x128(r3)
	fcmpo    cr0, f29, f1
	bge      lbl_8013D278
	lfs      f29, lbl_805182B8@sda21(r2)
	li       r29, 1
	b        lbl_8013D2EC

lbl_8013D278:
	lfs      f2, 0x150(r3)
	fcmpo    cr0, f29, f2
	bge      lbl_8013D2AC
	fsubs    f3, f29, f1
	lfs      f0, 0x1c8(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x1a0(r3)
	mr       r28, r31
	li       r29, 0x1e
	fdivs    f2, f3, f2
	fsubs    f0, f0, f1
	fmadds   f29, f2, f0, f1
	b        lbl_8013D2EC

lbl_8013D2AC:
	lfs      f1, 0x178(r3)
	fcmpo    cr0, f29, f1
	bge      lbl_8013D2E0
	fsubs    f3, f29, f2
	lfs      f0, 0x218(r3)
	fsubs    f2, f1, f2
	lfs      f1, 0x1f0(r3)
	mr       r28, r31
	li       r29, 0x1d
	fdivs    f2, f3, f2
	fsubs    f0, f0, f1
	fmadds   f29, f2, f0, f1
	b        lbl_8013D2EC

lbl_8013D2E0:
	lfs      f29, 0x240(r3)
	mr       r28, r31
	li       r29, 0x1c

lbl_8013D2EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r30
	beq      lbl_8013D36C
	cmpwi    r30, 0x1f
	bne      lbl_8013D320
	cmpwi    r29, 1
	beq      lbl_8013D320
	li       r0, 4
	stw      r0, 0x230(r31)

lbl_8013D320:
	cmpwi    r30, 1
	beq      lbl_8013D338
	cmpwi    r29, 0x1f
	bne      lbl_8013D338
	li       r0, 4
	stw      r0, 0x230(r31)

lbl_8013D338:
	lwz      r0, 0x22c(r31)
	cmpw     r29, r0
	beq      lbl_8013D354
	li       r0, 0
	stw      r0, 0x230(r31)
	stw      r29, 0x22c(r31)
	b        lbl_8013D360

lbl_8013D354:
	lwz      r3, 0x230(r31)
	addi     r0, r3, 1
	stw      r0, 0x230(r31)

lbl_8013D360:
	lwz      r0, 0x230(r31)
	cmpwi    r0, 4
	blt      lbl_8013D47C

lbl_8013D36C:
	cmpw     r30, r29
	beq      lbl_8013D478
	cmpwi    r30, 0x1f
	beq      lbl_8013D394
	cmpwi    r30, 1
	beq      lbl_8013D394
	cmpwi    r29, 0x1f
	beq      lbl_8013D394
	cmpwi    r29, 1
	bne      lbl_8013D3F0

lbl_8013D394:
	lwz      r0, 0x228(r31)
	cmpwi    r0, -1
	bne      lbl_8013D3D0
	mr       r4, r29
	addi     r3, r31, 0x1ac
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	cmplwi   r28, 0
	mr       r5, r28
	beq      lbl_8013D3C0
	addi     r5, r28, 0x178

lbl_8013D3C0:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8013D478

lbl_8013D3D0:
	cmplwi   r28, 0
	mr       r5, r28
	beq      lbl_8013D3E0
	addi     r5, r28, 0x178

lbl_8013D3E0:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8013D478

lbl_8013D3F0:
	lwz      r0, 0x228(r31)
	cmpwi    r0, -1
	bne      lbl_8013D44C
	cmplwi   r28, 0
	lfs      f31, 0x1d0(r31)
	lfs      f30, 0x1b4(r31)
	mr       r5, r28
	beq      lbl_8013D414
	addi     r5, r28, 0x178

lbl_8013D414:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f31
	addi     r3, r31, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	mr       r4, r29
	addi     r3, r31, 0x1ac
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f30
	addi     r3, r31, 0x1ac
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	b        lbl_8013D478

lbl_8013D44C:
	cmplwi   r28, 0
	lfs      f30, 0x1d0(r31)
	mr       r5, r28
	beq      lbl_8013D460
	addi     r5, r28, 0x178

lbl_8013D460:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f30
	addi     r3, r31, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf

lbl_8013D478:
	stfs     f29, 0x234(r31)

lbl_8013D47C:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D4B4
 * Size:	00023C
 */
void FakePiki::sNeckCallback(J3DJoint*, int)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	bne      lbl_8013D6D8
	lwz      r4, mInstance__Q24Game18OptimiseController@sda21(r13)
	lbz      r0, 0x3c(r4)
	cmplwi   r0, 0
	beq      lbl_8013D6D8
	lfs      f2, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
	lhz      r0, 0x14(r3)
	fneg     f1, f2
	lwz      r3, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	lfs      f0, lbl_805182B4@sda21(r2)
	mulli    r0, r0, 0x30
	lwz      r3, 0xc(r3)
	fcmpo    cr0, f1, f0
	lfs      f3, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
	add      r31, r3, r0
	bge      lbl_8013D534
	lfs      f0, lbl_805182C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f6, f0
	b        lbl_8013D558

lbl_8013D534:
	lfs      f0, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f6, r3, r0

lbl_8013D558:
	fneg     f1, f2
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8013D56C
	fneg     f1, f1

lbl_8013D56C:
	lfs      f2, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805182B4@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r6, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f7, r6, r0
	bge      lbl_8013D5C4
	lfs      f0, lbl_805182C8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f8, f0
	b        lbl_8013D5DC

lbl_8013D5C4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r3, r0

lbl_8013D5DC:
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8013D5F0
	fneg     f1, f3

lbl_8013D5F0:
	lfs      f0, lbl_805182CC@sda21(r2)
	fneg     f4, f6
	lfs      f3, lbl_805182B4@sda21(r2)
	fneg     f2, f8
	fmuls    f5, f1, f0
	stfs     f7, 0x38(r1)
	fmuls    f1, f8, f6
	stfs     f4, 0x3c(r1)
	fmuls    f0, f8, f7
	fctiwz   f4, f5
	stfs     f2, 0x50(r1)
	mr       r5, r31
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	stfd     f4, 0x90(r1)
	lwz      r0, 0x94(r1)
	stfs     f1, 0x58(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r6, r0
	stfs     f3, 0x40(r1)
	fmuls    f2, f4, f6
	fmuls    f1, f4, f7
	stfs     f0, 0x5c(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x44(r1)
	stfs     f3, 0x54(r1)
	stfs     f3, 0x64(r1)
	lwz      r6, 0(r31)
	lwz      r0, 4(r31)
	stw      r6, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r6, 8(r31)
	lwz      r0, 0xc(r31)
	stw      r6, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r6, 0x10(r31)
	lwz      r0, 0x14(r31)
	stw      r6, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r6, 0x18(r31)
	lwz      r0, 0x1c(r31)
	stw      r6, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r6, 0x20(r31)
	lwz      r0, 0x24(r31)
	stw      r6, 0x28(r1)
	stw      r0, 0x2c(r1)
	lwz      r6, 0x28(r31)
	lwz      r0, 0x2c(r31)
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       PSMTXConcat
	lis      r4, mCurrentMtx__6J3DSys@ha
	mr       r3, r31
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy

lbl_8013D6D8:
	lwz      r0, 0xa4(r1)
	li       r3, 0
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D6F0
 * Size:	0000C0
 */
void FakePiki::startLookCreature(Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x1b8(r3)
	cmplwi   r3, 0
	beq      lbl_8013D720
	lha      r0, 0x20(r3)
	b        lbl_8013D724

lbl_8013D720:
	li       r0, -1

lbl_8013D724:
	cmpwi    r0, 0x20
	bge      lbl_8013D744
	cmpwi    r0, 0x15
	beq      lbl_8013D758
	blt      lbl_8013D74C
	cmpwi    r0, 0x1c
	bge      lbl_8013D758
	b        lbl_8013D74C

lbl_8013D744:
	cmpwi    r0, 0x38
	beq      lbl_8013D758

lbl_8013D74C:
	mr       r3, r30
	bl       finishLook__Q24Game8FakePikiFv
	b        lbl_8013D798

lbl_8013D758:
	lwz      r3, 0x114(r31)
	cmplwi   r3, 0
	beq      lbl_8013D788
	bl       getRandomCollPart__8CollTreeFv
	cmplwi   r3, 0
	beq      lbl_8013D788
	stw      r31, 0x1a8(r30)
	addi     r3, r3, 0x4c
	li       r0, 0
	stw      r3, 0x1a0(r30)
	stb      r0, 0x1a4(r30)
	b        lbl_8013D798

lbl_8013D788:
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x1a8(r30)
	bl       finishLook__Q24Game8FakePikiFv

lbl_8013D798:
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
 * Address:	8013D7B0
 * Size:	000070
 */
void FakePiki::updateLookCreature()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1a8(r3)
	cmplwi   r3, 0
	beq      lbl_8013D7F8
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013D7F8
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x1a8(r31)
	bl       finishLook__Q24Game8FakePikiFv

lbl_8013D7F8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x214(r12)
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
 * Address:	8013D820
 * Size:	000004
 */
void FakePiki::do_updateLookCreature() { }

/*
 * --INFO--
 * Address:	8013D824
 * Size:	000018
 */
void FakePiki::finishLook()
{
	/*
	li       r4, 0
	li       r0, 0xa
	stw      r4, 0x1a0(r3)
	stb      r0, 0x1a4(r3)
	stw      r4, 0x1a8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D83C
 * Size:	000398
 */
void FakePiki::updateLook()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x1a0(r3)
	cmplwi   r0, 0
	beq      lbl_8013D90C
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1a0(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f2, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 8(r4)
	lfs      f1, 0(r4)
	fsubs    f29, f3, f2
	lfs      f0, 8(r1)
	lfs      f3, 4(r4)
	fsubs    f31, f1, f0
	lfs      f0, 0xc(r1)
	fmr      f2, f29
	fsubs    f30, f3, f0
	fmr      f1, f31
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmuls    f2, f29, f29
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f29, f1
	fmadds   f2, f31, f31, f2
	fcmpo    cr0, f2, f0
	ble      lbl_8013D8F0
	ble      lbl_8013D8F4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8013D8F4

lbl_8013D8F0:
	fmr      f2, f0

lbl_8013D8F4:
	fmr      f1, f30
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	b        lbl_8013D994

lbl_8013D90C:
	lfs      f1, lbl_805182B4@sda21(r2)
	lfs      f2, 0x198(r31)
	bl       angDist__Fff
	lfs      f2, lbl_805182D0@sda21(r2)
	lfs      f0, 0x198(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x198(r31)
	lfs      f1, lbl_805182B4@sda21(r2)
	lfs      f2, 0x19c(r31)
	bl       angDist__Fff
	lfs      f2, lbl_805182D0@sda21(r2)
	lfs      f0, 0x19c(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x19c(r31)
	lfs      f1, lbl_805182D4@sda21(r2)
	lfs      f0, 0x198(r31)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8013DBA8
	lfs      f0, 0x19c(r31)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8013DBA8
	li       r0, 0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x1a0(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	stb      r0, 0x1a4(r31)
	b        lbl_8013DBA8

lbl_8013D994:
	lfs      f1, 0x198(r31)
	lfs      f0, 0x1fc(r31)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	fmr      f2, f1
	lfs      f0, 0x1fc(r31)
	fsubs    f1, f29, f0
	fmr      f30, f2
	bl       roundAng__Ff
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8013D9F0
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_8013D9E0
	fsubs    f0, f2, f1
	lfs      f1, lbl_805182DC@sda21(r2)
	fsubs    f1, f1, f0
	b        lbl_8013DA24

lbl_8013D9E0:
	fmr      f1, f29
	fmr      f2, f30
	bl       angDist__Fff
	b        lbl_8013DA24

lbl_8013D9F0:
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8013DA18
	fsubs    f1, f2, f1
	lfs      f2, lbl_805182DC@sda21(r2)
	lfs      f0, lbl_805182E0@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f1, f1, f0
	b        lbl_8013DA24

lbl_8013DA18:
	fmr      f1, f29
	fmr      f2, f30
	bl       angDist__Fff

lbl_8013DA24:
	fabs     f2, f1
	lfs      f0, lbl_805182E4@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_8013DA3C
	lfs      f1, lbl_805182B4@sda21(r2)

lbl_8013DA3C:
	lfs      f0, lbl_805182E8@sda21(r2)
	lfs      f2, lbl_805182EC@sda21(r2)
	fmuls    f1, f1, f0
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8013DA70
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DA6C
	fmr      f1, f2
	b        lbl_8013DA70

lbl_8013DA6C:
	lfs      f1, lbl_805182F0@sda21(r2)

lbl_8013DA70:
	lfs      f0, 0x198(r31)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x198(r31)
	lfs      f1, lbl_805182F4@sda21(r2)
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8013DAA4
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8013DAA4
	stfs     f1, 0x198(r31)
	b        lbl_8013DAC4

lbl_8013DAA4:
	lfs      f1, lbl_805182F8@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8013DAC4
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8013DAC4
	stfs     f1, 0x198(r31)

lbl_8013DAC4:
	fmr      f1, f31
	lfs      f2, 0x19c(r31)
	bl       angDist__Fff
	fabs     f2, f1
	lfs      f0, lbl_805182E4@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_8013DAE8
	lfs      f1, lbl_805182B4@sda21(r2)

lbl_8013DAE8:
	lfs      f0, lbl_805182E8@sda21(r2)
	lfs      f2, lbl_805182EC@sda21(r2)
	fmuls    f1, f1, f0
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8013DB1C
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DB18
	fmr      f1, f2
	b        lbl_8013DB1C

lbl_8013DB18:
	lfs      f1, lbl_805182F0@sda21(r2)

lbl_8013DB1C:
	lfs      f0, 0x19c(r31)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x19c(r31)
	lfs      f1, lbl_805182FC@sda21(r2)
	lfs      f2, 0x19c(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8013DB50
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8013DB50
	stfs     f1, 0x19c(r31)
	b        lbl_8013DB70

lbl_8013DB50:
	lfs      f1, lbl_80518300@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8013DB70
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8013DB70
	stfs     f1, 0x19c(r31)

lbl_8013DB70:
	lbz      r3, 0x1a4(r31)
	cmplwi   r3, 0
	beq      lbl_8013DBA8
	addi     r0, r3, -1
	stb      r0, 0x1a4(r31)
	lbz      r0, 0x1a4(r31)
	cmplwi   r0, 0
	bne      lbl_8013DBA8
	li       r0, 0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x1a0(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	stb      r0, 0x1a4(r31)

lbl_8013DBA8:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013DBD4
 * Size:	000060
 */
void FakePiki::turnTo(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 8(r4)
	lfs      f0, 0x214(r3)
	lfs      f3, 0(r4)
	fsubs    f2, f1, f0
	lfs      f1, 0x20c(r3)
	lfs      f0, lbl_805182B4@sda21(r2)
	fsubs    f1, f3, f1
	fcmpu    cr0, f0, f2
	beq      lbl_8013DC20
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)

lbl_8013DC20:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013DC34
 * Size:	0003B4
 */
void FakePiki::moveVelocity()
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
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stfd     f26, 0x20(r1)
	psq_st   f26, 40(r1), 0, qr0
	stfd     f25, 0x10(r1)
	psq_st   f25, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f30, lbl_805182B4@sda21(r2)
	lwz      r3, 0xc8(r3)
	fmr      f29, f30
	lfs      f27, 0x1e4(r31)
	fmr      f28, f30
	cmplwi   r3, 0
	lfs      f26, 0x1e8(r31)
	lfs      f25, 0x1ec(r31)
	beq      lbl_8013DEFC
	fmuls    f0, f26, f26
	fmuls    f1, f25, f25
	fmadds   f0, f27, f27, f0
	fadds    f31, f1, f0
	fcmpo    cr0, f31, f30
	ble      lbl_8013DCCC
	ble      lbl_8013DCD0
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8013DCD0

lbl_8013DCCC:
	fmr      f31, f30

lbl_8013DCD0:
	lfs      f2, 0xd0(r31)
	lfs      f3, 0xcc(r31)
	fmuls    f1, f26, f2
	lfs      f4, 0xd4(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fmadds   f1, f27, f3, f1
	fmadds   f1, f25, f4, f1
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f1, f4, f1
	fsubs    f4, f26, f2
	fsubs    f2, f27, f3
	fsubs    f3, f25, f1
	fmuls    f1, f4, f4
	fmuls    f5, f3, f3
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8013DD2C
	ble      lbl_8013DD30
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013DD30

lbl_8013DD2C:
	fmr      f1, f0

lbl_8013DD30:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DD50
	lfs      f0, lbl_80518304@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0
	fmuls    f3, f3, f0

lbl_8013DD50:
	fmuls    f27, f2, f31
	addi     r3, r3, 0x5c
	fmuls    f26, f4, f31
	fmuls    f25, f3, f31
	bl       getSlipCode__Q27MapCode4CodeFv
	cmpwi    r3, 0
	bne      lbl_8013DDE4
	lfs      f0, lbl_805182D4@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8013DEFC
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x28(r4)
	lfs      f0, 0x54(r3)
	lfs      f7, 0xd0(r31)
	fmuls    f0, f1, f0
	lfs      f4, lbl_805182B4@sda21(r2)
	lfs      f1, 0xcc(r31)
	lfs      f6, 0xd4(r31)
	fneg     f5, f0
	lfs      f2, lbl_80518304@sda21(r2)
	fmuls    f0, f5, f7
	fmadds   f0, f4, f1, f0
	fmadds   f0, f4, f6, f0
	fmuls    f3, f1, f0
	fmuls    f1, f7, f0
	fmuls    f0, f6, f0
	fsubs    f3, f4, f3
	fsubs    f1, f5, f1
	fsubs    f0, f4, f0
	fneg     f3, f3
	fneg     f1, f1
	fneg     f0, f0
	fmuls    f30, f3, f2
	fmuls    f29, f1, f2
	fmuls    f28, f0, f2
	b        lbl_8013DEFC

lbl_8013DDE4:
	lwz      r5, _aiConstants__4Game@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x28(r5)
	lfs      f0, 0x54(r4)
	lfs      f2, 0xd0(r31)
	fmuls    f0, f1, f0
	lfs      f3, lbl_805182B4@sda21(r2)
	lfs      f6, 0xcc(r31)
	lfs      f5, 0xd4(r31)
	fneg     f4, f0
	fmuls    f0, f4, f2
	fmadds   f0, f3, f6, f0
	fmadds   f0, f3, f5, f0
	fmuls    f1, f2, f0
	fmuls    f2, f6, f0
	fmuls    f0, f5, f0
	fsubs    f28, f4, f1
	fsubs    f30, f3, f2
	fsubs    f29, f3, f0
	fmuls    f0, f28, f28
	fmuls    f1, f29, f29
	fmadds   f0, f30, f30, f0
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_8013DE58
	ble      lbl_8013DE5C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013DE5C

lbl_8013DE58:
	fmr      f1, f3

lbl_8013DE5C:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DE7C
	lfs      f0, lbl_80518304@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f28, f28, f0
	fmuls    f29, f29, f0

lbl_8013DE7C:
	cmpwi    r3, 2
	bne      lbl_8013DEC4
	mr       r3, r31
	lfs      f31, lbl_80518308@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013DEC8
	mr       r3, r31
	bl       getOlimarData__Q24Game4NaviFv
	li       r4, 7
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013DEC8
	lfs      f31, lbl_8051830C@sda21(r2)
	b        lbl_8013DEC8

lbl_8013DEC4:
	lfs      f31, lbl_80518304@sda21(r2)

lbl_8013DEC8:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x28(r3)
	lfs      f3, 0x54(r4)
	fmuls    f2, f30, f0
	fmuls    f1, f28, f0
	fmuls    f0, f29, f0
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	fmuls    f30, f2, f31
	fmuls    f29, f1, f31
	fmuls    f28, f0, f31

lbl_8013DEFC:
	lfs      f0, 0x1f4(r31)
	lfs      f2, 0x1f8(r31)
	fadds    f1, f26, f0
	lfs      f8, 0x204(r31)
	lfs      f0, 0x1f0(r31)
	fadds    f2, f25, f2
	lfs      f7, 0x208(r31)
	fsubs    f3, f1, f8
	fadds    f1, f27, f0
	lfs      f9, 0x200(r31)
	fsubs    f4, f2, f7
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f9
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_805182D4@sda21(r2)
	lfs      f1, 0x54(r3)
	fdivs    f0, f1, f0
	fmuls    f2, f2, f0
	fmuls    f1, f3, f0
	fmuls    f0, f4, f0
	fadds    f2, f9, f2
	fadds    f1, f8, f1
	fadds    f0, f7, f0
	stfs     f2, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f0, 0x208(r31)
	lfs      f0, 0x200(r31)
	lfs      f1, 0x204(r31)
	fadds    f0, f0, f30
	lfs      f2, 0x208(r31)
	fadds    f1, f1, f29
	fadds    f2, f2, f28
	stfs     f0, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f2, 0x208(r31)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	psq_l    f26, 40(r1), 0, qr0
	lfd      f26, 0x20(r1)
	psq_l    f25, 24(r1), 0, qr0
	lfd      f25, 0x10(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013DFE8
 * Size:	0000B4
 */
void FakePiki::moveRotation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x1d4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E080
	lfs      f1, 0x1e4(r31)
	lfs      f2, 0x1ec(r31)
	fmuls    f4, f1, f1
	lwz      r3, sys@sda21(r13)
	fmuls    f3, f2, f2
	lfs      f0, lbl_80518304@sda21(r2)
	lfs      f31, 0x54(r3)
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_8013E080
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f2, 0x1fc(r31)
	bl       angDist__Fff
	lfs      f0, lbl_80518310@sda21(r2)
	lfs      f2, lbl_805182BC@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, 0x1fc(r31)
	fmuls    f1, f31, f1
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r31)
	lfs      f1, 0x1fc(r31)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)

lbl_8013E080:
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
 * Address:	8013E09C
 * Size:	000014
 */
bool FakePiki::useMoveRotation()
{
	/*
	lwz      r0, 0x17c(r3)
	clrlwi   r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E0B0
 * Size:	0006A4
 */
void FakePiki::move(float)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	stw      r29, 0xe4(r1)
	stw      r28, 0xe0(r1)
	lwz      r12, 0(r3)
	fmr      f28, f1
	mr       r31, r3
	lwz      r12, 0x200(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lwz      r0, 0x17c(r31)
	lfs      f1, 0x210(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	lfs      f0, 0x20c(r31)
	fadds    f1, f1, f31
	lfs      f2, 0x214(r31)
	beq      lbl_8013E150
	lwz      r3, 0x174(r31)
	cmplwi   r3, 0
	beq      lbl_8013E150
	lwz      r3, 0x10(r3)
	addi     r3, r3, 0x3c
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f30, 0xc(r3)
	lfs      f29, 0x2c(r3)
	fmr      f0, f30
	lfs      f1, 0x1c(r3)
	fmr      f2, f29

lbl_8013E150:
	stfs     f0, 0x24(r1)
	lis      r3, sincosTable___5JMath@ha
	lfs      f5, lbl_805182B4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	stfs     f1, 0x28(r1)
	li       r5, 0
	lfs      f0, lbl_80518314@sda21(r2)
	addi     r7, r1, 0x24
	stfs     f2, 0x2c(r1)
	addi     r6, r1, 0x18
	li       r0, -1
	mr       r3, r31
	stfs     f31, 0x30(r1)
	lfs      f7, 0x180(r31)
	stfs     f5, 0x120(r31)
	lfs      f3, 0x208(r31)
	lfs      f2, 0x124(r31)
	lfs      f4, 0x204(r31)
	lfs      f1, 0x120(r31)
	fadds    f6, f3, f2
	lfs      f3, 0x200(r31)
	lfs      f2, 0x11c(r31)
	fadds    f4, f4, f1
	lfs      f1, 0x800(r4)
	fadds    f2, f3, f2
	stw      r5, 0x48(r1)
	stfs     f4, 0x1c(r1)
	stfs     f2, 0x18(r1)
	stfs     f6, 0x20(r1)
	stw      r7, 0x34(r1)
	stw      r6, 0x38(r1)
	stfs     f7, 0x3c(r1)
	stfs     f5, 0x40(r1)
	stw      r5, 0x44(r1)
	stw      r5, 0x78(r1)
	stb      r5, 0xa8(r1)
	stb      r5, 0x4d(r1)
	stb      r5, 0x4c(r1)
	stw      r5, 0x7c(r1)
	stb      r5, 0xc4(r1)
	stw      r5, 0xc8(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stw      r0, 0xcc(r1)
	stw      r5, 0x80(r1)
	stb      r5, 0x4e(r1)
	stw      r31, 0x48(r1)
	stw      r5, 0x248(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x1ec(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E30C
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmr      f1, f28
	addi     r4, r1, 0x34
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24c(r31)
	addi     r0, r31, 0x200
	lfs      f0, 0x18(r1)
	stfs     f0, 0x200(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x208(r31)
	lwz      r4, 0xcc(r1)
	stw      r0, 0x38(r1)
	cmpwi    r4, -1
	beq      lbl_8013E354
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8013E354
	sth      r4, 0x18c(r31)
	lwz      r0, 0xcc(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	extsh    r4, r0
	bl       getMapRoom__Q24Game10RoomMapMgrFs
	mr       r30, r3
	lbz      r0, 0xbc(r3)
	cmplwi   r0, 0
	bne      lbl_8013E2C4
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 0xcc(r1)
	lwz      r3, 8(r3)
	extsh    r4, r0
	bl       openRoom__Q24Game8RouteMgrFs
	li       r0, 1
	stb      r0, 0xbc(r30)

lbl_8013E2C4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E354
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lwz      r3, 0x44(r3)
	cmpwi    r3, 1
	beq      lbl_8013E2FC
	cmpwi    r3, 3
	bne      lbl_8013E300

lbl_8013E2FC:
	li       r0, 1

lbl_8013E300:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8013E354
	b        lbl_8013E354

lbl_8013E30C:
	lfs      f0, 0x200(r31)
	li       r0, 0
	lwz      r3, 0x34(r1)
	lfs      f2, 0x204(r31)
	fmuls    f0, f0, f28
	lfs      f1, 0(r3)
	lfs      f4, 0x208(r31)
	fmuls    f2, f2, f28
	lfs      f3, 4(r3)
	fadds    f0, f1, f0
	lfs      f5, 8(r3)
	fmuls    f1, f4, f28
	fadds    f2, f3, f2
	stfs     f0, 0(r3)
	fadds    f0, f5, f1
	stfs     f2, 4(r3)
	stfs     f0, 8(r3)
	stw      r0, 0x78(r1)

lbl_8013E354:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8013E380
	lwz      r4, 0x78(r1)
	cmplwi   r4, 0
	beq      lbl_8013E380
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl

lbl_8013E380:
	lwz      r0, 0x78(r1)
	stw      r0, 0xc8(r31)
	lfs      f0, 0x84(r1)
	stfs     f0, 0xcc(r31)
	lfs      f0, 0x88(r1)
	stfs     f0, 0xd0(r31)
	lfs      f0, 0x8c(r1)
	stfs     f0, 0xd4(r31)
	lwz      r0, 0x184(r31)
	cmplwi   r0, 0
	bne      lbl_8013E3D0
	lwz      r0, 0x7c(r1)
	cmplwi   r0, 0
	beq      lbl_8013E3D0
	mr       r3, r31
	addi     r4, r1, 0x90
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl

lbl_8013E3D0:
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8013E3E8
	fmr      f1, f28
	addi     r4, r1, 0x34
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_8013E3E8:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8013E434
	lwz      r4, 0x78(r1)
	cmplwi   r4, 0
	beq      lbl_8013E434
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x78(r1)
	stw      r0, 0xc8(r31)
	lfs      f0, 0x84(r1)
	stfs     f0, 0xcc(r31)
	lfs      f0, 0x88(r1)
	stfs     f0, 0xd0(r31)
	lfs      f0, 0x8c(r1)
	stfs     f0, 0xd4(r31)

lbl_8013E434:
	lwz      r0, 0x184(r31)
	cmplwi   r0, 0
	bne      lbl_8013E464
	lwz      r0, 0x7c(r1)
	cmplwi   r0, 0
	beq      lbl_8013E464
	mr       r3, r31
	addi     r4, r1, 0x90
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl

lbl_8013E464:
	lwz      r3, 0xc8(r31)
	cmplwi   r3, 0
	beq      lbl_8013E484
	lfs      f1, 0x10(r3)
	lfs      f0, lbl_80518314@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013E484
	stw      r3, 0x248(r31)

lbl_8013E484:
	lwz      r0, 0x17c(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8013E4E4
	lfs      f0, 0x24(r1)
	lfs      f3, 0x2c(r1)
	fsubs    f1, f0, f30
	lfs      f2, 0x20c(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fsubs    f3, f3, f29
	fadds    f1, f2, f1
	stfs     f1, 0x20c(r31)
	lfs      f1, 0x210(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x210(r31)
	lfs      f0, 0x214(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x214(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x2c(r1)
	b        lbl_8013E508

lbl_8013E4E4:
	lfs      f0, 0x24(r1)
	stfs     f0, 0x20c(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x210(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x214(r31)
	lfs      f0, 0x210(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x210(r31)

lbl_8013E508:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E588
	lfs      f0, 0x20c(r31)
	addi     r4, r1, 8
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 8(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x10(r1)
	stfs     f31, 0x14(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x20c(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x210(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x214(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x2c(r1)

lbl_8013E588:
	lfs      f0, 0x24(r1)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x220(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x224(r31)
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_8013E714
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013E714
	lfs      f1, 0x23c(r31)
	lfs      f0, 0x210(r31)
	lfs      f3, 0x238(r31)
	fsubs    f4, f1, f0
	lfs      f2, 0x20c(r31)
	lfs      f1, 0x240(r31)
	lfs      f0, 0x214(r31)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_805182B4@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8013E620
	ble      lbl_8013E624
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013E624

lbl_8013E620:
	fmr      f1, f0

lbl_8013E624:
	lfs      f0, lbl_80518304@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013E714
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E654
	lfs      f28, lbl_80518318@sda21(r2)
	b        lbl_8013E6BC

lbl_8013E654:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	li       r29, 0
	addi     r28, r3, formationPikis__Q24Game8GameStat@l
	mr       r30, r29

lbl_8013E664:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	add      r29, r29, r3
	cmpwi    r30, 7
	addi     r28, r28, 0x20
	blt      lbl_8013E664
	xoris    r3, r29, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f2, lbl_80518328@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80518320@sda21(r2)
	lfd      f0, 0xd0(r1)
	lfs      f3, lbl_8051831C@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_80518318@sda21(r2)
	fdivs    f1, f2, f1
	fmadds   f28, f3, f1, f0

lbl_8013E6BC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f2, lbl_80518328@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f0, lbl_80518324@sda21(r2)
	lfd      f1, 0xd0(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_8013E714
	lwz      r3, 0xc8(r31)
	lbz      r0, 0x5c(r3)
	cmplwi   r0, 8
	bne      lbl_8013E70C
	addi     r3, r31, 0x20c
	bl       "createSimpleWalkwater__3efxFR10Vector3<f>"
	b        lbl_8013E714

lbl_8013E70C:
	addi     r3, r31, 0x20c
	bl       "createSimpleWalksmoke__3efxFR10Vector3<f>"

lbl_8013E714:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	lwz      r0, 0x134(r1)
	lwz      r28, 0xe0(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E754
 * Size:	00003C
 */
void GameStat::PikiCounter::__opi()
{
	/*
	lwz      r5, 4(r3)
	lwz      r4, 8(r3)
	lwz      r0, 0xc(r3)
	add      r5, r5, r4
	lwz      r4, 0x10(r3)
	add      r5, r5, r0
	lwz      r0, 0x14(r3)
	add      r5, r5, r4
	lwz      r4, 0x18(r3)
	add      r5, r5, r0
	lwz      r0, 0x1c(r3)
	add      r5, r5, r4
	add      r5, r5, r0
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E790
 * Size:	000014
 */
bool FakePiki::inWater()
{
	/*
	lwz      r3, 0x190(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E7A4
 * Size:	000004
 */
void FakePiki::wallCallback(Vector3f&) { }

/*
 * --INFO--
 * Address:	8013E7A8
 * Size:	000014
 */
void FakePiki::useMapCollision()
{
	/*
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1c, 0x1c
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E7BC
 * Size:	000008
 */
float FakePiki::getMapCollisionRadius()
{
	/*
	lfs      f1, lbl_805182B0@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E7C4
 * Size:	0000BC
 */
void FakePiki::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xd8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_8013E80C
	lwz      r3, 0x174(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8013E854

lbl_8013E80C:
	lbz      r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8013E840
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8013E834
	cmpwi    r0, 3
	bne      lbl_8013E838

lbl_8013E834:
	li       r3, 1

lbl_8013E838:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E86C

lbl_8013E840:
	lwz      r3, 0x174(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8013E854:
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8013E86C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E880
 * Size:	000004
 */
void FakePiki::doColorChange() { }

/*
 * --INFO--
 * Address:	8013E884
 * Size:	000494
 */
void FakePiki::doAnimation()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r5, sys@sda21(r13)
	mr       r30, r3
	lis      r6, lbl_8047C708@ha
	addi     r4, r2, lbl_80518330@sda21
	lwz      r3, 0x28(r5)
	addi     r31, r6, lbl_8047C708@l
	li       r5, 1
	bl       _start__9SysTimersFPcb
	addi     r3, r1, 0x18
	bl       __ct__Q24Game9AILODParmFv
	lfs      f1, lbl_805182C0@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_80518338@sda21(r2)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       updateCell__Q24Game8CreatureFv
	mr       r3, r30
	addi     r4, r1, 0x18
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518330@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r30
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r30)
	lfs      f31, 0x54(r4)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E934
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r30)

lbl_8013E934:
	mr       r3, r30
	lfs      f0, 0x234(r30)
	lwz      r12, 0(r30)
	fmuls    f30, f0, f31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E970
	mr       r3, r30
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E970
	lfs      f0, lbl_8051833C@sda21(r2)
	fmuls    f30, f30, f0

lbl_8013E970:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8013E9B8
	addi     r3, r30, 0x1ac
	fmr      f1, f30
	lwz      r12, 0x1ac(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r30, 0x1c8
	stb      r0, verbose__Q28SysShape8Animator@sda21(r13)
	fmr      f1, f30
	lwz      r12, 0x1c8(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8013E9B8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EA50
	lbz      r0, 0xd8(r30)
	clrlwi   r0, r0, 0x1e
	cmpwi    r0, 1
	blt      lbl_8013EA50
	lwz      r0, 0x174(r30)
	cmplwi   r0, 0
	bne      lbl_8013EA18
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	addi     r5, r31, 0x40
	li       r4, 0x69e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013EA18:
	lwz      r3, 0x174(r30)
	li       r0, 0
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r3, 0(r3)
	stw      r0, 0x54(r3)
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r3, 0x10(r3)
	stw      r0, 0x54(r3)
	b        lbl_8013EAA8

lbl_8013EA50:
	addi     r3, r30, 0x1c8
	lwz      r29, 0x174(r30)
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r29)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	addi     r3, r30, 0x1ac
	lwz      r12, 0x1ac(r30)
	lwz      r29, 0x174(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r29)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0x10(r4)
	stw      r3, 0x54(r4)

lbl_8013EAA8:
	li       r0, 0
	mr       r3, r30
	stb      r0, verbose__Q28SysShape8Animator@sda21(r13)
	lfs      f0, 0x20c(r30)
	stfs     f0, 0x238(r30)
	lfs      f0, 0x210(r30)
	stfs     f0, 0x23c(r30)
	lfs      f0, 0x214(r30)
	stfs     f0, 0x240(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EB00
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EBBC

lbl_8013EB00:
	lwz      r0, 0x248(r30)
	cmplwi   r0, 0
	beq      lbl_8013EBBC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EB34
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	bne      lbl_8013EB3C

lbl_8013EB34:
	mr       r3, r30
	bl       moveVelocity__Q24Game8FakePikiFv

lbl_8013EB3C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1d4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EBBC
	lfs      f1, 0x1e4(r30)
	lfs      f2, 0x1ec(r30)
	fmuls    f4, f1, f1
	lwz      r3, sys@sda21(r13)
	fmuls    f3, f2, f2
	lfs      f0, lbl_80518304@sda21(r2)
	lfs      f30, 0x54(r3)
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_8013EBBC
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f2, 0x1fc(r30)
	bl       angDist__Fff
	lfs      f0, lbl_80518310@sda21(r2)
	lfs      f2, lbl_805182BC@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, 0x1fc(r30)
	fmuls    f1, f30, f1
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r30)
	lfs      f1, 0x1fc(r30)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)

lbl_8013EBBC:
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x190(r30)
	mr       r3, r30
	addi     r5, r1, 8
	bl       checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
	stw      r3, 0x190(r30)
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8013EC08
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, 0x204(r30)
	lfs      f1, 0x28(r3)
	fnmsubs  f0, f31, f1, f0
	stfs     f0, 0x204(r30)

lbl_8013EC08:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EC68
	lwz      r3, 0x250(r30)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8013EC68
	addi     r4, r30, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x154(r30)
	lfs      f2, 0x164(r30)
	lfs      f0, 0x144(r30)
	stfs     f0, 0x20c(r30)
	stfs     f1, 0x210(r30)
	stfs     f2, 0x214(r30)

lbl_8013EC68:
	lwz      r4, 0x174(r30)
	addi     r3, r30, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lfs      f0, 0x198(r30)
	addi     r4, r31, 0x50
	lwz      r3, sys@sda21(r13)
	li       r5, 1
	stfs     f0, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
	lfs      f0, 0x19c(r30)
	stfs     f0, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	bl       update__8CollTreeFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x50
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, 0x188(r30)
	cmplwi   r3, 0
	beq      lbl_8013ECEC
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8013ECEC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013ED18
 * Size:	000024
 */
void FakePiki::getBoundingSphere(Sys::Sphere&)
{
	/*
	lfs      f0, 0x218(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x21c(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x220(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0x224(r3)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013ED3C
 * Size:	000014
 */
void FakePiki::useMoveVelocity()
{
	/*
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1d
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013ED50
 * Size:	000078
 */
void FakePiki::updateTrMatrix()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EDB4
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EDB4
	lfs      f1, 0x1fc(r31)
	addi     r3, r31, 0x138
	lfs      f0, lbl_805182B4@sda21(r2)
	addi     r4, r31, 0x168
	stfs     f1, 0xc(r1)
	addi     r5, r1, 8
	addi     r6, r31, 0x20c
	stfs     f0, 8(r1)
	stfs     f0, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_8013EDB4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013EDC8
 * Size:	000014
 */
void FakePiki::useUpdateTrMatrix()
{
	/*
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013EDDC
 * Size:	000560
 */
void FakePiki::doSimulation(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r12, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EF18
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EE7C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x39(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013EEE0
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EE7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EEE0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lbz      r0, 0x5c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013EEE0
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EEE0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EF18
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_8013EF18:
	lwz      r0, 0x194(r31)
	cmplwi   r0, 0
	beq      lbl_8013EF8C
	lfs      f0, 0x200(r31)
	mr       r3, r31
	lfs      f2, 0x204(r31)
	fmuls    f0, f0, f31
	lfs      f1, 0x20c(r31)
	lfs      f4, 0x208(r31)
	fmuls    f2, f2, f31
	lfs      f3, 0x210(r31)
	fadds    f0, f1, f0
	lfs      f5, 0x214(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0x20c(r31)
	fadds    f0, f5, f1
	stfs     f2, 0x210(r31)
	stfs     f0, 0x214(r31)
	bl       updateStomach__Q24Game8FakePikiFv
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EF8C:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F054
	lfs      f4, 0x1fc(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8013EFB4
	fneg     f1, f4

lbl_8013EFB4:
	lfs      f2, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805182B4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f3, 4(r3)
	bge      lbl_8013F00C
	lfs      f0, lbl_805182C8@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8013F024

lbl_8013F00C:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8013F024:
	lfs      f0, lbl_805182B4@sda21(r2)
	mr       r3, r31
	stfs     f1, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f0, 0x28(r1)
	stfs     f3, 0x2c(r1)
	bl       "updateStick__Q24Game8CreatureFR10Vector3<f>"
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r31)
	b        lbl_8013F0AC

lbl_8013F054:
	mr       r3, r31
	fmr      f1, f31
	lwz      r12, 0(r31)
	lwz      r12, 0x1d0(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013F0A4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013F0AC

lbl_8013F0A4:
	mr       r3, r31
	bl       updateWalkAnimation__Q24Game8FakePikiFv

lbl_8013F0AC:
	lfs      f2, 0x200(r31)
	lfs      f1, 0x204(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x208(r31)
	fmuls    f4, f1, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F0F4
	fmadds   f0, f2, f2, f4
	fadds    f4, f3, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8013F0F8
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8013F0F8

lbl_8013F0F4:
	fmr      f4, f1

lbl_8013F0F8:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8013F134
	lfs      f1, lbl_80518304@sda21(r2)
	lfs      f0, 0x200(r31)
	fdivs    f1, f1, f4
	fmuls    f0, f0, f1
	stfs     f0, 0x200(r31)
	lfs      f0, 0x204(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x204(r31)
	lfs      f0, 0x208(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x208(r31)
	b        lbl_8013F138

lbl_8013F134:
	fmr      f4, f0

lbl_8013F138:
	lfs      f2, 0x11c(r31)
	lfs      f1, 0x120(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x124(r31)
	fmuls    f5, f1, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f5
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F180
	fmadds   f0, f2, f2, f5
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F184
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8013F184

lbl_8013F180:
	fmr      f0, f1

lbl_8013F184:
	fcmpo    cr0, f4, f0
	ble      lbl_8013F1C8
	fsubs    f4, f4, f0
	lfs      f0, 0x200(r31)
	lfs      f2, 0x204(r31)
	lfs      f3, 0x208(r31)
	fmuls    f1, f0, f4
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f2, f2, f4
	fmuls    f3, f3, f4
	stfs     f1, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f3, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	b        lbl_8013F1FC

lbl_8013F1C8:
	lfs      f0, 0x200(r31)
	lfs      f2, 0x204(r31)
	fmuls    f1, f0, f4
	lfs      f3, 0x208(r31)
	fmuls    f2, f2, f4
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f4
	stfs     f1, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f3, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_8013F1FC:
	lfs      f0, 0x20c(r31)
	li       r0, 1
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	stb      r0, 8(r1)
	bl       checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
	cmpwi    r3, 1
	bne      lbl_8013F31C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F260
	mr       r3, r31
	li       r4, 0x2837
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_8013F31C

lbl_8013F260:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F31C
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r0, 0xb0(r3)
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_8013F294
	lwz      r30, 0xac(r3)

lbl_8013F294:
	cmplwi   r30, 0
	bne      lbl_8013F2AC
	lhz      r0, 0x2dc(r31)
	subfic   r4, r0, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	mr       r30, r3

lbl_8013F2AC:
	cmplwi   r30, 0
	bne      lbl_8013F2D0
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C764@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x789
	addi     r5, r5, lbl_8047C764@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013F2D0:
	mr       r4, r30
	addi     r3, r1, 0xc
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	mr       r3, r31
	lfs      f0, lbl_80518340@sda21(r2)
	addi     r4, r1, 0x18
	lfs      f3, 0xc(r1)
	li       r5, 0
	lfs      f1, 0x14(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x18(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x1c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8013F31C:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F33C
 * Size:	00001C
 */
Vector3f BaseItem::getPosition()
{
	/*
	lfs      f0, 0x19c(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x1a0(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x1a4(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F358
 * Size:	00000C
 */
void FakePiki::initCaptureStomach()
{
	// Generated from stw r0, 0x194(r3)
	m_stomachCaptureCollPart = nullptr;
}

/*
 * --INFO--
 * Address:	8013F364
 * Size:	000008
 */
void FakePiki::startCaptureStomach(CollPart* collPart)
{
	// Generated from stw r4, 0x194(r3)
	m_stomachCaptureCollPart = collPart;
}

/*
 * --INFO--
 * Address:	8013F36C
 * Size:	00000C
 */
void FakePiki::endCaptureStomach()
{
	// Generated from stw r0, 0x194(r3)
	m_stomachCaptureCollPart = nullptr;
}

/*
 * --INFO--
 * Address:	8013F378
 * Size:	000158
 */
void FakePiki::updateStomach()
{
	/*
	lwz      r4, 0x194(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f1, 0x210(r3)
	lfs      f0, 0x50(r4)
	lfs      f2, 0x214(r3)
	fsubs    f0, f1, f0
	lfs      f1, 0x54(r4)
	lfs      f3, 0x20c(r3)
	fsubs    f1, f2, f1
	lfs      f2, 0x4c(r4)
	fmuls    f4, f0, f0
	fsubs    f9, f3, f2
	lfs      f2, lbl_805182B4@sda21(r2)
	fmuls    f5, f1, f1
	fmadds   f3, f9, f9, f4
	fadds    f4, f5, f3
	fcmpo    cr0, f4, f2
	ble      lbl_8013F3D4
	ble      lbl_8013F3D8
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_8013F3D8

lbl_8013F3D4:
	fmr      f4, f2

lbl_8013F3D8:
	lfs      f2, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_8013F3FC
	lfs      f2, lbl_80518304@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f9, f9, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2
	b        lbl_8013F400

lbl_8013F3FC:
	fmr      f4, f2

lbl_8013F400:
	lfs      f3, 0x1c(r4)
	lfs      f2, lbl_805182B0@sda21(r2)
	fsubs    f7, f3, f2
	fcmpo    cr0, f4, f7
	blelr
	fmuls    f2, f9, f7
	lfs      f3, 0x4c(r4)
	fmuls    f5, f0, f7
	lfs      f6, 0x50(r4)
	fmuls    f7, f1, f7
	lfs      f8, 0x54(r4)
	fadds    f3, f3, f2
	lfs      f4, lbl_80518344@sda21(r2)
	fadds    f5, f6, f5
	lfs      f2, lbl_805182B4@sda21(r2)
	fadds    f6, f8, f7
	stfs     f3, 0x20c(r3)
	stfs     f5, 0x210(r3)
	stfs     f6, 0x214(r3)
	lfs      f7, 0x204(r3)
	lfs      f8, 0x200(r3)
	fmuls    f3, f7, f0
	lfs      f6, 0x208(r3)
	fmadds   f3, f8, f9, f3
	fmadds   f3, f6, f1, f3
	fmuls    f5, f4, f3
	fmuls    f4, f9, f5
	fmuls    f3, f0, f5
	fmuls    f0, f1, f5
	fsubs    f4, f8, f4
	fsubs    f1, f7, f3
	fsubs    f0, f6, f0
	stfs     f4, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	lwz      r4, 0x194(r3)
	lfs      f1, 0x210(r3)
	lfs      f0, 0x50(r4)
	lfs      f4, 0x20c(r3)
	fsubs    f5, f1, f0
	lfs      f3, 0x4c(r4)
	lfs      f1, 0x214(r3)
	lfs      f0, 0x54(r4)
	fsubs    f3, f4, f3
	fmuls    f4, f5, f5
	fsubs    f1, f1, f0
	fmadds   f0, f3, f3, f4
	fmuls    f1, f1, f1
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f2
	blelr
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F4D0
 * Size:	000008
 */
bool FakePiki::debugShapeDL(char*) { return true; }

/*
 * --INFO--
 * Address:	8013F4D8
 * Size:	000008
 */
int FakePiki::getDownfloorMass() { return 0; }

/*
 * --INFO--
 * Address:	8013F4E0
 * Size:	000008
 */
bool FakePiki::isPikmin() { return true; }

/*
 * --INFO--
 * Address:	8013F4E8
 * Size:	000004
 */
void FakePiki::doDebugDL() { }

/*
 * --INFO--
 * Address:	8013F4EC
 * Size:	000004
 */
void FakePiki::update() { }

/*
 * --INFO--
 * Address:	8013F4F0
 * Size:	000028
 */
void FakePiki::setMoveRotation(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	bne      lbl_8013F508
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 1
	stw      r0, 0x17c(r3)
	blr

lbl_8013F508:
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F518
 * Size:	000028
 */
void FakePiki::setUpdateTrMatrix(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	bne      lbl_8013F530
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 2
	stw      r0, 0x17c(r3)
	blr

lbl_8013F530:
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F540
 * Size:	000028
 */
void FakePiki::setMoveVelocity(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	bne      lbl_8013F558
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 4
	stw      r0, 0x17c(r3)
	blr

lbl_8013F558:
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F568
 * Size:	000028
 */
void FakePiki::setMapCollision(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	bne      lbl_8013F580
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 8
	stw      r0, 0x17c(r3)
	blr

lbl_8013F580:
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F590
 * Size:	00000C
 */
bool FakePiki::isZikatu()
{
	/*
	lwz      r0, 0x17c(r3)
	rlwinm   r3, r0, 0x1b, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F59C
 * Size:	00003C
 */
void FakePiki::setZikatu(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_8013F5B4
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 0x20
	stw      r0, 0x17c(r3)
	b        lbl_8013F5C0

lbl_8013F5B4:
	lwz      r0, 0x17c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stw      r0, 0x17c(r3)

lbl_8013F5C0:
	clrlwi.  r0, r4, 0x18
	beqlr
	lwz      r0, 0x17c(r3)
	ori      r0, r0, 0x80
	stw      r0, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F5D8
 * Size:	00000C
 */
bool FakePiki::wasZikatu()
{
	/*
	lwz      r0, 0x17c(r3)
	rlwinm   r3, r0, 0x19, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F5E4
 * Size:	000004
 */
void FakePiki::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8013F5E8
 * Size:	000004
 */
void FakePiki::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8013F5EC
 * Size:	000004
 */
void FakePiki::onSetPosition() { }

/*
 * --INFO--
 * Address:	8013F5F0
 * Size:	000044
 */
void FakePiki::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
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
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F634
 * Size:	000008
 */
float FakePiki::getFaceDir()
{
	/*
	lfs      f1, 0x1fc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F63C
 * Size:	00001C
 */
Vector3f FakePiki::getVelocity()
{
	/*
	lfs      f0, 0x200(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x204(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x208(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F658
 * Size:	00001C
 */
void FakePiki::setVelocity(Vector3f&)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0x200(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x204(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x208(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F674
 * Size:	00001C
 */
void FakePiki::getVelocityAt(Vector3f&, Vector3f&)
{
	/*
	lfs      f0, 0x200(r3)
	stfs     f0, 0(r5)
	lfs      f0, 0x204(r3)
	stfs     f0, 4(r5)
	lfs      f0, 0x208(r3)
	stfs     f0, 8(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F690
 * Size:	000008
 */
Vector3f* FakePiki::getSound_PosPtr()
{
	/*
	addi     r3, r3, 0x20c
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F698
 * Size:	000008
 */
bool FakePiki::isWalking() { return false; }

/*
 * --INFO--
 * Address:	8013F6A0
 * Size:	000004
 */
void FakePiki::onKeyEvent(const SysShape::KeyEvent&) { }

} // namespace Game

/*
 * --INFO--
 * Address:	8013F6A4
 * Size:	000028
 */
void __sinit_fakePiki_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B02B0@ha
	stw      r0, lbl_80515900@sda21(r13)
	stfsu    f0, lbl_804B02B0@l(r3)
	stfs     f0, lbl_80515904@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

// namespace Game {

// /*
//  * --INFO--
//  * Address:	8013F6CC
//  * Size:	000008
//  */
// void FakePiki::@376 @onKeyEvent(const SysShape::KeyEvent&)
// {
// 	/*
// 	addi     r3, r3, -376
// 	b        onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent
// 	*/
// }
// } // namespace Game
