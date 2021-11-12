#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80486C80
    lbl_80486C80:
        .4byte 0x3234362D
        .4byte 0x54616E6B
        .4byte 0x4D677200
    .global lbl_80486C8C
    lbl_80486C8C:
        .4byte 0x8375835E
        .4byte 0x83688362
        .4byte 0x834E838A
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
        .4byte 0x54616E6B
        .4byte 0x4D67722E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6D61745F
        .4byte 0x646F6B6B
        .4byte 0x7572695F
        .4byte 0x6D61696E
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Tank3Mgr
    __vt__Q34Game4Tank3Mgr:
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
        .4byte "@4@__dt__Q34Game4Tank3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game4Tank3MgrFv
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
        .4byte getEnemyTypeID__Q34Game4Tank3MgrFv
        .4byte createModel__Q34Game4Tank3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game4Tank3MgrFv
        .4byte loadAnimData__Q34Game4Tank3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B2D8
    lbl_8051B2D8:
        .4byte 0x00000018
    .global lbl_8051B2DC
    lbl_8051B2DC:
        .4byte 0x00000019
    .global lbl_8051B2E0
    lbl_8051B2E0:
        .4byte 0x00000018
    .global lbl_8051B2E4
    lbl_8051B2E4:
        .4byte 0x00000019
*/

namespace Game {

/*
 * --INFO--
 * Address:	80275A18
 * Size:	000050
 */
Tank::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game4Tank3Mgr@ha
	lis      r4, lbl_80486C8C@ha
	addi     r5, r3, __vt__Q34Game4Tank3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80486C8C@l
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
 * Address:	80275A68
 * Size:	00009C
 */
void Tank::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r1, 8
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, lbl_8051B2D8@sda21(r2)
	lwz      r0, lbl_8051B2DC@sda21(r2)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)

lbl_80275A9C:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_80275AD0
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80275AD0
	stw      r3, 0x1c(r29)
	b        lbl_80275AE8

lbl_80275AD0:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_80275A9C
	mr       r3, r29
	bl       loadModelData__Q24Game12EnemyMgrBaseFv

lbl_80275AE8:
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
 * Address:	80275B04
 * Size:	000090
 */
void Tank::Mgr::loadAnimData()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r1, 8
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, lbl_8051B2E0@sda21(r2)
	lwz      r0, lbl_8051B2E4@sda21(r2)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)

lbl_80275B38:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_80275B60
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80275B60
	stw      r0, 0x20(r29)
	b        lbl_80275B78

lbl_80275B60:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_80275B38
	mr       r3, r29
	bl       loadAnimData__Q24Game12EnemyMgrBaseFv

lbl_80275B78:
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
 * Address:	80275B94
 * Size:	000138
 */
void Tank::Mgr::createModel()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, lbl_80486C80@ha
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	addi     r31, r4, lbl_80486C80@l
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	mr       r28, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80275BE0
	lwz      r4, 0x1c(r28)
	lis      r5, 8
	lbz      r6, 0x24(r28)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r30, r3

lbl_80275BE0:
	cmplwi   r30, 0
	bne      lbl_80275BFC
	addi     r3, r31, 0x24
	addi     r5, r31, 0x30
	li       r4, 0x82
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80275BFC:
	li       r29, 0
	b        lbl_80275C40

lbl_80275C04:
	lwz      r3, 0x64(r4)
	mr       r4, r29
	bl       getName__10JUTNameTabCFUs
	addi     r4, r31, 0x3c
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80275C3C
	lwz      r4, 8(r30)
	rlwinm   r3, r29, 6, 0xa, 0x19
	addi     r0, r3, 0x2c
	lwz      r3, 0xc0(r4)
	lis      r4, 0x402
	lwzx     r3, r3, r0
	bl       newDifferedDisplayList__14J3DShapePacketFUl

lbl_80275C3C:
	addi     r29, r29, 1

lbl_80275C40:
	lwz      r4, 0x1c(r28)
	clrlwi   r0, r29, 0x10
	lhz      r3, 0x5c(r4)
	cmplw    r0, r3
	blt      lbl_80275C04
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
	lwz      r0, 0x54(r1)
	mr       r3, r30
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80275CCC
 * Size:	0000B0
 */
Tank::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80275D60
	lis      r3, __vt__Q34Game4Tank3Mgr@ha
	addi     r3, r3, __vt__Q34Game4Tank3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80275D50
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80275D50
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80275D50
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_80275D50:
	extsh.   r0, r31
	ble      lbl_80275D60
	mr       r3, r30
	bl       __dl__FPv

lbl_80275D60:
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
 * Address:	80275D7C
 * Size:	000008
 */
u32 Tank::Mgr::getEnemyTypeID() { return 0x18; }

/*
 * --INFO--
 * Address:	80275D84
 * Size:	000008
 */
Tank::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game4Tank3MgrFv
	*/
}
} // namespace Game
