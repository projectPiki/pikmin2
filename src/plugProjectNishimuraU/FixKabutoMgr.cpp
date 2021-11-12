#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D8F8
    lbl_8048D8F8:
        .asciz "/enemy/data/Kabuto/babykabuto_green_s3tc.bti"
        .skip 3
    .global lbl_8048D928
    lbl_8048D928:
        .4byte 0x8CC592E8
        .4byte 0x834A8375
        .4byte 0x8367837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_8048D940
    lbl_8048D940:
        .asciz "FixKabutoMgr.cpp"
        .skip 3
    .global lbl_8048D954
    lbl_8048D954:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game9FixKabuto3Mgr
    __vt__Q34Game9FixKabuto3Mgr:
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
        .4byte "@4@__dt__Q34Game9FixKabuto3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game9FixKabuto3MgrFv
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
        .4byte createObj__Q34Game9FixKabuto3MgrFi
        .4byte getEnemy__Q34Game9FixKabuto3MgrFi
        .4byte doAlloc__Q34Game9FixKabuto3MgrFv
        .4byte getEnemyTypeID__Q34Game9FixKabuto3MgrFv
        .4byte createModel__Q34Game6Kabuto3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game6Kabuto3MgrFv
        .4byte loadAnimData__Q34Game6Kabuto3MgrFv
        .4byte loadTexData__Q34Game9FixKabuto3MgrFv
        .4byte doLoadBmd__Q34Game6Kabuto3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture__Q34Game9FixKabuto3MgrFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@"
    "cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@":
        .4byte lbl_8048D8F8
*/

namespace Game {

/*
 * --INFO--
 * Address:	80300394
 * Size:	000050
 */
FixKabuto::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game6Kabuto3MgrFiUc
	lis      r3, __vt__Q34Game9FixKabuto3Mgr@ha
	lis      r4, lbl_8048D928@ha
	addi     r5, r3, __vt__Q34Game9FixKabuto3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8048D928@l
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
 * Address:	803003E4
 * Size:	000048
 */
void FixKabuto::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x808
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80300410
	bl       __ct__Q34Game6Kabuto5ParmsFv
	mr       r4, r3

lbl_80300410:
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
 * Address:	8030042C
 * Size:	000060
 */
void FixKabuto::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x2fc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game9FixKabuto3ObjFv@ha
	lis      r5, __dt__Q34Game9FixKabuto3ObjFv@ha
	addi     r4, r4, __ct__Q34Game9FixKabuto3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game9FixKabuto3ObjFv@l
	li       r6, 0x2fc
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
 * Address:	8030048C
 * Size:	0000F0
 */
FixKabuto::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80300560
	lis      r3, __vt__Q34Game9FixKabuto3Obj@ha
	addi     r0, r30, 0x2ec
	addi     r4, r3, __vt__Q34Game9FixKabuto3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x31c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_80300550
	lis      r3, __vt__Q34Game6Kabuto3Obj@ha
	addi     r0, r30, 0x2e4
	addi     r4, r3, __vt__Q34Game6Kabuto3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x31c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_80300550
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

lbl_80300550:
	extsh.   r0, r31
	ble      lbl_80300560
	mr       r3, r30
	bl       __dl__FPv

lbl_80300560:
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
 * Address:	8030057C
 * Size:	000010
 */
void FixKabuto::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2fc
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030058C
 * Size:	000080
 */
void FixKabuto::Mgr::loadTexData()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r0, 0x44(r3)
	addi     r3, r1, 8
	lwz      r4,
"cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@"@sda21(r13)
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_803005D0
	lwz      r0, 0x30(r3)
	stw      r0, 0x44(r31)

lbl_803005D0:
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_803005F8
	lis      r3, lbl_8048D940@ha
	lis      r5, lbl_8048D954@ha
	addi     r3, r3, lbl_8048D940@l
	li       r4, 0x52
	addi     r5, r5, lbl_8048D954@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803005F8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030060C
 * Size:	0000C8
 */
FixKabuto::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803006B8
	lis      r3, __vt__Q34Game9FixKabuto3Mgr@ha
	addi     r3, r3, __vt__Q34Game9FixKabuto3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803006A8
	lis      r3, __vt__Q34Game6Kabuto3Mgr@ha
	addi     r3, r3, __vt__Q34Game6Kabuto3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803006A8
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803006A8
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803006A8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_803006A8:
	extsh.   r0, r31
	ble      lbl_803006B8
	mr       r3, r30
	bl       __dl__FPv

lbl_803006B8:
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
 * Address:	803006D4
 * Size:	000008
 */
u32 FixKabuto::Mgr::getEnemyTypeID() { return 0x60; }

/*
 * --INFO--
 * Address:	803006DC
 * Size:	000008
 */
void FixKabuto::Mgr::getChangeTexture()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803006E4
 * Size:	000008
 */
FixKabuto::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game9FixKabuto3MgrFv
	*/
}
} // namespace Game
