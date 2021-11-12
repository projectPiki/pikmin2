#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C110
    lbl_8047C110:
        .asciz "/enemy/data/YellowKochappy/kochappy_body_s3tc.2.bti"
    .global lbl_8047C144
    lbl_8047C144:
        .4byte 0x89A98352
        .4byte 0x83608383
        .4byte 0x83628373
        .4byte 0x815B837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game14YellowKochappy3Mgr
    __vt__Q34Game14YellowKochappy3Mgr:
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
        .4byte "@4@__dt__Q34Game14YellowKochappy3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game14YellowKochappy3MgrFv
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
        .4byte createObj__Q34Game14YellowKochappy3MgrFi
        .4byte getEnemy__Q34Game14YellowKochappy3MgrFi
        .4byte doAlloc__Q34Game14YellowKochappy3MgrFv
        .4byte getEnemyTypeID__Q34Game14YellowKochappy3MgrFv
        .4byte createModel__Q34Game12KochappyBase3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game12KochappyBase3MgrFv
        .4byte loadAnimData__Q34Game12KochappyBase3MgrFv
        .4byte loadTexData__Q34Game14YellowKochappy3MgrFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture__Q34Game14YellowKochappy3MgrFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@"
    "cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@":
        .4byte lbl_8047C110
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012D5E4
 * Size:	000050
 */
YellowKochappy::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game12KochappyBase3MgrFiUc
	lis      r3, __vt__Q34Game14YellowKochappy3Mgr@ha
	lis      r4, lbl_8047C144@ha
	addi     r5, r3, __vt__Q34Game14YellowKochappy3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8047C144@l
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
 * Address:	8012D634
 * Size:	000048
 */
void YellowKochappy::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x880
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8012D660
	bl       __ct__Q34Game12KochappyBase5ParmsFv
	mr       r4, r3

lbl_8012D660:
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
 * Address:	8012D67C
 * Size:	000048
 */
void YellowKochappy::Mgr::loadTexData()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4,
	"cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@"@sda21(r13)
	bl       __ct__Q212LoadResource11ArgAramOnlyFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	lwz      r0, 0x30(r3)
	stw      r0, 0x44(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012D6C4
 * Size:	0000C8
 */
YellowKochappy::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012D770
	lis      r3, __vt__Q34Game14YellowKochappy3Mgr@ha
	addi     r3, r3, __vt__Q34Game14YellowKochappy3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012D760
	lis      r3, __vt__Q34Game12KochappyBase3Mgr@ha
	addi     r3, r3, __vt__Q34Game12KochappyBase3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012D760
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012D760
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012D760
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8012D760:
	extsh.   r0, r31
	ble      lbl_8012D770
	mr       r3, r30
	bl       __dl__FPv

lbl_8012D770:
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
 * Address:	8012D78C
 * Size:	000008
 */
u32 YellowKochappy::Mgr::getEnemyTypeID() { return 0x2D; }

/*
 * --INFO--
 * Address:	8012D794
 * Size:	000060
 */
void YellowKochappy::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x2e8
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game14YellowKochappy3ObjFv@ha
	lis      r5, __dt__Q34Game14YellowKochappy3ObjFv@ha
	addi     r4, r4, __ct__Q34Game14YellowKochappy3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game14YellowKochappy3ObjFv@l
	li       r6, 0x2e8
	bl       __construct_new_array
	stw      r3, 0x48(r30)
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
 * Address:	8012D7F4
 * Size:	000010
 */
void YellowKochappy::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2e8
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012D804
 * Size:	000008
 */
YellowKochappy::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game14YellowKochappy3MgrFv
	*/
}
} // namespace Game
