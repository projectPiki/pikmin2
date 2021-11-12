#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80485390
    lbl_80485390:
        .4byte 0x8352834B
        .4byte 0x836C837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_804853A4
    lbl_804853A4:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global lbl_804853B0
    lbl_804853B0:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global lbl_804853BC
    lbl_804853BC:
        .4byte 0x4B6F6761
        .4byte 0x6E654D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_804853CC
    lbl_804853CC:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Kogane3Mgr
    __vt__Q34Game6Kogane3Mgr:
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
        .4byte "@4@__dt__Q34Game6Kogane3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game6Kogane3MgrFv
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
        .4byte getEnemyTypeID__Q34Game6Kogane3MgrFv
        .4byte createModel__Q34Game6Kogane3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game6Kogane3MgrFv
        .4byte loadAnimData__Q34Game6Kogane3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q34Game6Kogane3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051AC20
    lbl_8051AC20:
        .4byte 0x6B617261
        .4byte 0x64610000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8025D898
 * Size:	000050
 */
Kogane::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game6Kogane3Mgr@ha
	lis      r4, lbl_80485390@ha
	addi     r5, r3, __vt__Q34Game6Kogane3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80485390@l
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
 * Address:	8025D8E8
 * Size:	0000E8
 */
void Kogane::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_804853A4@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_804853A4@l
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	addi     r30, r1, 8
	stw      r29, 0x24(r1)
	li       r29, 0
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_8025D92C:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r30)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8025D960
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8025D960
	stw      r3, 0x1c(r31)
	b        lbl_8025D9B4

lbl_8025D960:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 3
	blt      lbl_8025D92C
	mr       r3, r31
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	li       r5, 0
	b        lbl_8025D9A0

lbl_8025D980:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8025D9A0:
	lwz      r4, 0x1c(r31)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_8025D980

lbl_8025D9B4:
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
 * Address:	8025D9D0
 * Size:	0000A0
 */
void Kogane::Mgr::loadAnimData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_804853B0@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_804853B0@l
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

lbl_8025DA14:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8025DA3C
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8025DA3C
	stw      r0, 0x20(r29)
	b        lbl_8025DA54

lbl_8025DA3C:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_8025DA14
	mr       r3, r29
	bl       loadAnimData__Q24Game12EnemyMgrBaseFv

lbl_8025DA54:
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
 * Address:	8025DA70
 * Size:	000130
 */
void Kogane::Mgr::createModel()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8025DAB0
	lwz      r4, 0x1c(r29)
	lis      r5, 8
	lbz      r6, 0x24(r29)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r31, r3

lbl_8025DAB0:
	cmplwi   r31, 0
	bne      lbl_8025DAD4
	lis      r3, lbl_804853BC@ha
	lis      r5, lbl_804853CC@ha
	addi     r3, r3, lbl_804853BC@l
	li       r4, 0x94
	addi     r5, r5, lbl_804853CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8025DAD4:
	li       r30, 0
	b        lbl_8025DB18

lbl_8025DADC:
	lwz      r3, 0x64(r4)
	mr       r4, r30
	bl       getName__10JUTNameTabCFUs
	addi     r4, r2, lbl_8051AC20@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8025DB14
	lwz      r4, 8(r31)
	rlwinm   r3, r30, 6, 0xa, 0x19
	addi     r0, r3, 0x2c
	lwz      r3, 0xc0(r4)
	lis      r4, 0x502
	lwzx     r3, r3, r0
	bl       newDifferedDisplayList__14J3DShapePacketFUl

lbl_8025DB14:
	addi     r30, r30, 1

lbl_8025DB18:
	lwz      r4, 0x1c(r29)
	clrlwi   r0, r30, 0x10
	lhz      r3, 0x5c(r4)
	cmplw    r0, r3
	blt      lbl_8025DADC
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lis      r4, j3dSys@ha
	addi     r3, r1, 8
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lwz      r30, 8(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       makeDL__8J3DModelFv
	mr       r3, r30
	bl       lock__8J3DModelFv
	lwz      r0, 0x54(r1)
	mr       r3, r31
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025DBA0
 * Size:	0000B0
 */
Kogane::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8025DC34
	lis      r3, __vt__Q34Game6Kogane3Mgr@ha
	addi     r3, r3, __vt__Q34Game6Kogane3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8025DC24
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8025DC24
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8025DC24
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8025DC24:
	extsh.   r0, r31
	ble      lbl_8025DC34
	mr       r3, r30
	bl       __dl__FPv

lbl_8025DC34:
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
 * Address:	8025DC50
 * Size:	000008
 */
u32 Kogane::Mgr::getEnemyTypeID() { return 0x9; }

/*
 * --INFO--
 * Address:	8025DC58
 * Size:	00002C
 */
void Kogane::Mgr::doLoadBmd(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x00240030@ha
	mr       r3, r4
	stw      r0, 0x14(r1)
	addi     r4, r5, 0x00240030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025DC84
 * Size:	000008
 */
Kogane::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game6Kogane3MgrFv
	*/
}
} // namespace Game
