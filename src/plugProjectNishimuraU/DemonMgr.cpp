#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80488330
    lbl_80488330:
        .4byte 0x8349836A
        .4byte 0x83548389
        .4byte 0x8343837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game5Demon3Mgr
    __vt__Q34Game5Demon3Mgr:
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
        .4byte "@4@__dt__Q34Game5Demon3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game5Demon3MgrFv
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
        .4byte createObj__Q34Game5Demon3MgrFi
        .4byte getEnemy__Q34Game5Demon3MgrFi
        .4byte doAlloc__Q34Game5Demon3MgrFv
        .4byte getEnemyTypeID__Q34Game5Demon3MgrFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game5Demon3MgrFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q34Game5Demon3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
*/

namespace Game {

/*
 * --INFO--
 * Address:	8028E048
 * Size:	000050
 */
Demon::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game5Demon3Mgr@ha
	lis      r4, lbl_80488330@ha
	addi     r5, r3, __vt__Q34Game5Demon3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80488330@l
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
 * Address:	8028E098
 * Size:	000048
 */
void Demon::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0xa38
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8028E0C4
	bl       __ct__Q34Game5Sarai5ParmsFv
	mr       r4, r3

lbl_8028E0C4:
	mr       r3, r31
	bl       init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028E0E0
 * Size:	000060
 */
void Demon::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x2ec
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game5Demon3ObjFv@ha
	lis      r5, __dt__Q34Game5Demon3ObjFv@ha
	addi     r4, r4, __ct__Q34Game5Demon3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game5Demon3ObjFv@l
	li       r6, 0x2ec
	bl       __construct_new_array
	stw      r3, 0x44(r30)
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
 * Address:	8028E140
 * Size:	0000F0
 */
Demon::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8028E214
	lis      r3, __vt__Q34Game5Demon3Obj@ha
	addi     r0, r30, 0x2dc
	addi     r4, r3, __vt__Q34Game5Demon3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x30c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8028E204
	lis      r3, __vt__Q34Game5Sarai3Obj@ha
	addi     r0, r30, 0x2d8
	addi     r4, r3, __vt__Q34Game5Sarai3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x30c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8028E204
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r30, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r30, 0x290
	stw      r4, 0(r30)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r30)
	lwz      r5, 0x17c(r30)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r30)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_8028E204:
	extsh.   r0, r31
	ble      lbl_8028E214
	mr       r3, r30
	bl       __dl__FPv

lbl_8028E214:
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
 * Address:	8028E230
 * Size:	000010
 */
void Demon::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2ec
	lwz      r3, 0x44(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028E240
 * Size:	000068
 */
void Demon::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	li       r5, 0
	b        lbl_8028E280

lbl_8028E260:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8028E280:
	lwz      r4, 0x1c(r31)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_8028E260
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028E2A8
 * Size:	0000B0
 */
Demon::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8028E33C
	lis      r3, __vt__Q34Game5Demon3Mgr@ha
	addi     r3, r3, __vt__Q34Game5Demon3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028E32C
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028E32C
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028E32C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8028E32C:
	extsh.   r0, r31
	ble      lbl_8028E33C
	mr       r3, r30
	bl       __dl__FPv

lbl_8028E33C:
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
 * Address:	8028E358
 * Size:	000008
 */
u32 Demon::Mgr::getEnemyTypeID() { return 0x20; }

/*
 * --INFO--
 * Address:	8028E360
 * Size:	00002C
 */
void Demon::Mgr::doLoadBmd(void*)
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
 * Address:	8028E38C
 * Size:	000008
 */
Demon::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game5Demon3MgrFv
	*/
}
} // namespace Game
