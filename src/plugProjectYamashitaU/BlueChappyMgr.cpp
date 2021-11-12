#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BFC0
    lbl_8047BFC0:
        .asciz "/enemy/data/BlueChappy/moyou_565.3.bti"
        .skip 1
    .global lbl_8047BFE8
    lbl_8047BFE8:
        .asciz "/enemy/data/BlueChappy/swallow_565.3.bti"
        .skip 3
    .global lbl_8047C014
    lbl_8047C014:
        .4byte 0x90C28360
        .4byte 0x83838362
        .4byte 0x8373815B
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10BlueChappy3Mgr
    __vt__Q34Game10BlueChappy3Mgr:
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
        .4byte "@4@__dt__Q34Game10BlueChappy3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game10BlueChappy3MgrFv
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
        .4byte createObj__Q34Game10BlueChappy3MgrFi
        .4byte getEnemy__Q34Game10BlueChappy3MgrFi
        .4byte doAlloc__Q34Game10BlueChappy3MgrFv
        .4byte getEnemyTypeID__Q34Game10BlueChappy3MgrFv
        .4byte createModel__Q34Game10ChappyBase3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game10ChappyBase3MgrFv
        .4byte loadAnimData__Q34Game10ChappyBase3MgrFv
        .4byte loadTexData__Q34Game10BlueChappy3MgrFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture0__Q34Game10BlueChappy3MgrFv
        .4byte getChangeTexture1__Q34Game10BlueChappy3MgrFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"
    "cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@":
        .4byte lbl_8047BFC0
    .global
   "cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"
    "cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@":
        .4byte lbl_8047BFE8
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012B8AC
 * Size:	000050
 */
BlueChappy::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game10ChappyBase3MgrFiUc
	lis      r3, __vt__Q34Game10BlueChappy3Mgr@ha
	lis      r4, lbl_8047C014@ha
	addi     r5, r3, __vt__Q34Game10BlueChappy3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8047C014@l
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
 * Address:	8012B8FC
 * Size:	00006C
 */
void BlueChappy::Mgr::loadTexData()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4,
	"cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
	bl       __ct__Q212LoadResource11ArgAramOnlyFPCc
	lwz      r0,
	"cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 8(r1)
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	lwz      r0, 0x30(r3)
	addi     r4, r1, 8
	stw      r0, 0x44(r31)
	lwz      r0,
	"cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 8(r1)
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	lwz      r0, 0x30(r3)
	stw      r0, 0x48(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012B968
 * Size:	000048
 */
void BlueChappy::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x884
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8012B994
	bl       __ct__Q34Game10ChappyBase5ParmsFv
	mr       r4, r3

lbl_8012B994:
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
 * Address:	8012B9B0
 * Size:	0000C8
 */
BlueChappy::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012BA5C
	lis      r3, __vt__Q34Game10BlueChappy3Mgr@ha
	addi     r3, r3, __vt__Q34Game10BlueChappy3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012BA4C
	lis      r3, __vt__Q34Game10ChappyBase3Mgr@ha
	addi     r3, r3, __vt__Q34Game10ChappyBase3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012BA4C
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012BA4C
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8012BA4C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8012BA4C:
	extsh.   r0, r31
	ble      lbl_8012BA5C
	mr       r3, r30
	bl       __dl__FPv

lbl_8012BA5C:
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
 * Address:	8012BA78
 * Size:	000008
 */
u32 BlueChappy::Mgr::getEnemyTypeID() { return 0x2A; }

/*
 * --INFO--
 * Address:	8012BA80
 * Size:	000008
 */
void BlueChappy::Mgr::getChangeTexture0()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012BA88
 * Size:	000008
 */
void BlueChappy::Mgr::getChangeTexture1()
{
	/*
	lwz      r3, 0x48(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012BA90
 * Size:	000060
 */
void BlueChappy::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x2f4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game10BlueChappy3ObjFv@ha
	lis      r5, __dt__Q34Game10BlueChappy3ObjFv@ha
	addi     r4, r4, __ct__Q34Game10BlueChappy3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game10BlueChappy3ObjFv@l
	li       r6, 0x2f4
	bl       __construct_new_array
	stw      r3, 0x4c(r30)
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
 * Address:	8012BAF0
 * Size:	0000EC
 */
BlueChappy::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8012BBC0
	lis      r3, __vt__Q34Game10BlueChappy3Obj@ha
	addi     r5, r30, 0x2e4
	addi     r4, r3, __vt__Q34Game10BlueChappy3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_8012BBB0
	lis      r3, __vt__Q34Game10ChappyBase3Obj@ha
	addi     r4, r3, __vt__Q34Game10ChappyBase3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_8012BBB0
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

lbl_8012BBB0:
	extsh.   r0, r31
	ble      lbl_8012BBC0
	mr       r3, r30
	bl       __dl__FPv

lbl_8012BBC0:
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
 * Address:	8012BBDC
 * Size:	000010
 */
void BlueChappy::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2f4
	lwz      r3, 0x4c(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012BBEC
 * Size:	000008
 */
BlueChappy::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game10BlueChappy3MgrFv
	*/
}
} // namespace Game
