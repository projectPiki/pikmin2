#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BF80
    lbl_8047BF80:
        .4byte 0x83608383
        .4byte 0x83628373
        .4byte 0x815B8378
        .4byte 0x815B8358
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
    .global lbl_8047BF9C
    lbl_8047BF9C:
        .4byte 2
        .4byte 42
        .4byte 43
    .global lbl_8047BFA8
    lbl_8047BFA8:
        .4byte 2
        .4byte 42
        .4byte 43
    .global lbl_8047BFB4
    lbl_8047BFB4:
        .asciz "osiri_1_2"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10ChappyBase3Mgr
    __vt__Q34Game10ChappyBase3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game10ChappyBase3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game10ChappyBase3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
        .4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
        .4byte getGenerator__Q24Game12EnemyMgrBaseCFv
        .4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
        .4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
        .4byte startMovie__Q24Game12EnemyMgrBaseFv
        .4byte endMovie__Q24Game12EnemyMgrBaseFv
        .4byte get__Q24Game12EnemyMgrBaseFPv
        .4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0
        .4byte doAlloc__Q24Game12EnemyMgrBaseFv
        .4byte getEnemyTypeID__Q34Game10ChappyBase3MgrFv
        .4byte createModel__Q34Game10ChappyBase3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game10ChappyBase3MgrFv
        .4byte loadAnimData__Q34Game10ChappyBase3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518050
    lbl_80518050:
        .4byte 0x6174616D
        .4byte 0x615F3200
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012A670
 * Size:	000050
 */
ChappyBase::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game10ChappyBase3Mgr@ha
	lis      r4, lbl_8047BF80@ha
	addi     r5, r3, __vt__Q34Game10ChappyBase3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8047BF80@l
	stw      r5, 4(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A6C0
 * Size:	0000C0
 */
void ChappyBase::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8047BF9C@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_8047BF9C@l
	stw      r31, 0x2c(r1)
	addi     r31, r1, 8
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_8012A704:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8012A738
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8012A738
	stw      r3, 0x1c(r29)
	b        lbl_8012A764

lbl_8012A738:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_8012A704
	mr       r3, r29
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	lwz      r3, 0x1c(r29)
	lis      r4, 4
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r29)
	bl       makeSharedDL__12J3DModelDataFv

lbl_8012A764:
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
 * Address:	8012A780
 * Size:	0000A0
 */
void ChappyBase::Mgr::loadAnimData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8047BFA8@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_8047BFA8@l
	stw      r31, 0x2c(r1)
	addi     r31, r1, 8
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_8012A7C4:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8012A7EC
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8012A7EC
	stw      r0, 0x20(r29)
	b        lbl_8012A804

lbl_8012A7EC:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_8012A7C4
	mr       r3, r29
	bl       loadAnimData__Q24Game12EnemyMgrBaseFv

lbl_8012A804:
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
 * Address:	8012A820
 * Size:	00011C
 */
void ChappyBase::Mgr::createModel()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r27, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8012A858
	lwz      r4, 0x1c(r27)
	lis      r5, 8
	lbz      r6, 0x24(r27)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r30, r3

lbl_8012A858:
	lis      r3, lbl_8047BFB4@ha
	li       r29, 0
	addi     r31, r3, lbl_8047BFB4@l
	b        lbl_8012A8BC

lbl_8012A868:
	lwz      r3, 0x64(r4)
	mr       r4, r29
	bl       getName__10JUTNameTabCFUs
	mr       r4, r31
	mr       r28, r3
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_8012A89C
	mr       r3, r28
	addi     r4, r2, lbl_80518050@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8012A8B8

lbl_8012A89C:
	lwz      r4, 8(r30)
	rlwinm   r3, r29, 6, 0xa, 0x19
	addi     r0, r3, 0x2c
	lwz      r3, 0xc0(r4)
	lis      r4, 0x402
	lwzx     r3, r3, r0
	bl       newDifferedDisplayList__14J3DShapePacketFUl

lbl_8012A8B8:
	addi     r29, r29, 1

lbl_8012A8BC:
	lwz      r4, 0x1c(r27)
	clrlwi   r0, r29, 0x10
	lhz      r3, 0x5c(r4)
	cmplw    r0, r3
	blt      lbl_8012A868
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lis      r4, j3dSys@ha
	addi     r3, r1, 8
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lwz      r31, 8(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       makeDL__8J3DModelFv
	mr       r3, r31
	bl       lock__8J3DModelFv
	mr       r3, r30
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A93C
 * Size:	000008
 */
u32 ChappyBase::Mgr::getEnemyTypeID() { return 0x2; }

/*
 * --INFO--
 * Address:	8012A944
 * Size:	000004
 */
void EnemyMgrBase::doAlloc() { }

/*
 * --INFO--
 * Address:	8012A948
 * Size:	000008
 */
ChappyBase::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game10ChappyBase3MgrFv
	*/
}
} // namespace Game
