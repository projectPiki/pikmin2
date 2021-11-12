#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048CC98
    lbl_8048CC98:
        .4byte 0x3234362D
        .4byte 0x4B616275
        .4byte 0x746F4D67
        .4byte 0x72000000
    .global lbl_8048CCA8
    lbl_8048CCA8:
        .4byte 0x834A8375
        .4byte 0x8367837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_8048CCBC
    lbl_8048CCBC:
        .4byte 0x0000004B
        .4byte 0x0000005F
        .4byte 0x00000060
    .global lbl_8048CCC8
    lbl_8048CCC8:
        .4byte 0x0000004B
        .4byte 0x0000005F
        .4byte 0x00000060
        .4byte 0x4B616275
        .4byte 0x746F4D67
        .4byte 0x722E6370
        .4byte 0x70000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6D61745F
        .4byte 0x62616279
        .4byte 0x6B616275
        .4byte 0x746F5F62
        .4byte 0x6F647900
        .4byte 0x6D61745F
        .4byte 0x62616279
        .4byte 0x6B616275
        .4byte 0x746F5F65
        .4byte 0x79650000
        .4byte 0x6D61745F
        .4byte 0x62616279
        .4byte 0x6B616275
        .4byte 0x746F5F68
        .4byte 0x65616400

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game6Kabuto3Mgr
    __vt__Q34Game6Kabuto3Mgr:
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
        .4byte "@4@__dt__Q34Game6Kabuto3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game6Kabuto3MgrFv
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
        .4byte getEnemyTypeID__Q34Game6Kabuto3MgrFv
        .4byte createModel__Q34Game6Kabuto3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game6Kabuto3MgrFv
        .4byte loadAnimData__Q34Game6Kabuto3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q34Game6Kabuto3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0
*/

namespace Game {

/*
 * --INFO--
 * Address:	802E3D68
 * Size:	000050
 */
Kabuto::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game6Kabuto3Mgr@ha
	lis      r4, lbl_8048CCA8@ha
	addi     r5, r3, __vt__Q34Game6Kabuto3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8048CCA8@l
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
 * Address:	802E3DB8
 * Size:	0000E8
 */
void Kabuto::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8048CCBC@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_8048CCBC@l
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

lbl_802E3DFC:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r30)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_802E3E30
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802E3E30
	stw      r3, 0x1c(r31)
	b        lbl_802E3E84

lbl_802E3E30:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 3
	blt      lbl_802E3DFC
	mr       r3, r31
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	li       r5, 0
	b        lbl_802E3E70

lbl_802E3E50:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_802E3E70:
	lwz      r4, 0x1c(r31)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_802E3E50

lbl_802E3E84:
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
 * Address:	802E3EA0
 * Size:	0000A0
 */
void Kabuto::Mgr::loadAnimData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8048CCC8@ha
	stw      r0, 0x34(r1)
	addi     r5, r4, lbl_8048CCC8@l
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

lbl_802E3EE4:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r31)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_802E3F0C
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_802E3F0C
	stw      r0, 0x20(r29)
	b        lbl_802E3F24

lbl_802E3F0C:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802E3EE4
	mr       r3, r29
	bl       loadAnimData__Q24Game12EnemyMgrBaseFv

lbl_802E3F24:
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
 * Address:	802E3F40
 * Size:	00014C
 */
void Kabuto::Mgr::createModel()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, lbl_8048CC98@ha
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r27, r3
	addi     r31, r4, lbl_8048CC98@l
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802E3F80
	lwz      r4, 0x1c(r27)
	lis      r5, 8
	lbz      r6, 0x24(r27)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r30, r3

lbl_802E3F80:
	cmplwi   r30, 0
	bne      lbl_802E3F9C
	addi     r3, r31, 0x3c
	addi     r5, r31, 0x4c
	li       r4, 0x93
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802E3F9C:
	li       r29, 0
	b        lbl_802E400C

lbl_802E3FA4:
	lwz      r3, 0x64(r4)
	mr       r4, r29
	bl       getName__10JUTNameTabCFUs
	addi     r4, r31, 0x58
	mr       r28, r3
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_802E3FEC
	mr       r3, r28
	addi     r4, r31, 0x6c
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_802E3FEC
	mr       r3, r28
	addi     r4, r31, 0x80
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_802E4008

lbl_802E3FEC:
	lwz      r4, 8(r30)
	rlwinm   r3, r29, 6, 0xa, 0x19
	addi     r0, r3, 0x2c
	lwz      r3, 0xc0(r4)
	lis      r4, 0x402
	lwzx     r3, r3, r0
	bl       newDifferedDisplayList__14J3DShapePacketFUl

lbl_802E4008:
	addi     r29, r29, 1

lbl_802E400C:
	lwz      r4, 0x1c(r27)
	clrlwi   r0, r29, 0x10
	lhz      r3, 0x5c(r4)
	cmplw    r0, r3
	blt      lbl_802E3FA4
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
 * Address:	802E408C
 * Size:	0000B0
 */
Kabuto::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802E4120
	lis      r3, __vt__Q34Game6Kabuto3Mgr@ha
	addi     r3, r3, __vt__Q34Game6Kabuto3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802E4110
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802E4110
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802E4110
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_802E4110:
	extsh.   r0, r31
	ble      lbl_802E4120
	mr       r3, r30
	bl       __dl__FPv

lbl_802E4120:
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
 * Address:	802E413C
 * Size:	000008
 */
u32 Kabuto::Mgr::getEnemyTypeID() { return 0x4B; }

/*
 * --INFO--
 * Address:	802E4144
 * Size:	00002C
 */
void Kabuto::Mgr::doLoadBmd(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x01240030@ha
	mr       r3, r4
	stw      r0, 0x14(r1)
	addi     r4, r5, 0x01240030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E4170
 * Size:	000008
 */
Kabuto::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game6Kabuto3MgrFv
	*/
}
} // namespace Game
