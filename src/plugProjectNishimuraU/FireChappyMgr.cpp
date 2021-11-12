#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80488348
    lbl_80488348:
        .asciz "/enemy/data/FireChappy/yakichappy.btk"
        .skip 2
    .global lbl_80488370
    lbl_80488370:
        .asciz "/enemy/data/FireChappy/yakichappy.brk"
        .skip 2
    .global lbl_80488398
    lbl_80488398:
        .4byte 0x8384834C
        .4byte 0x83608383
        .4byte 0x83628373
        .4byte 0x815B837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_804883B4
    lbl_804883B4:
        .asciz "FireChappyMgr.cpp"
        .skip 2
    .global lbl_804883C8
    lbl_804883C8:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10FireChappy3Mgr
    __vt__Q34Game10FireChappy3Mgr:
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
        .4byte "@4@__dt__Q34Game10FireChappy3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game10FireChappy3MgrFv
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
        .4byte createObj__Q34Game10FireChappy3MgrFi
        .4byte getEnemy__Q34Game10FireChappy3MgrFi
        .4byte doAlloc__Q34Game10FireChappy3MgrFv
        .4byte getEnemyTypeID__Q34Game10FireChappy3MgrFv
        .4byte createModel__Q34Game10FireChappy3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game10FireChappy3MgrFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q34Game10FireChappy3MgrFv
        .4byte doLoadBmd__Q34Game10FireChappy3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
    "cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
        .4byte lbl_80488348
    .global
   "cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
    "cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
        .4byte lbl_80488370
*/

namespace Game {

/*
 * --INFO--
 * Address:	8028F138
 * Size:	000050
 */
FireChappy::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game10FireChappy3Mgr@ha
	lis      r4, lbl_80488398@ha
	addi     r5, r3, __vt__Q34Game10FireChappy3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80488398@l
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
 * Address:	8028F188
 * Size:	000048
 */
void FireChappy::Mgr::doAlloc()
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
	beq      lbl_8028F1B4
	bl       __ct__Q34Game10ChappyBase5ParmsFv
	mr       r4, r3

lbl_8028F1B4:
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
 * Address:	8028F1D0
 * Size:	000060
 */
void FireChappy::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x310
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game10FireChappy3ObjFv@ha
	lis      r5, __dt__Q34Game10FireChappy3ObjFv@ha
	addi     r4, r4, __ct__Q34Game10FireChappy3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game10FireChappy3ObjFv@l
	li       r6, 0x310
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
 * Address:	8028F230
 * Size:	0000F0
 */
FireChappy::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8028F304
	lis      r3, __vt__Q34Game10FireChappy3Obj@ha
	addi     r0, r30, 0x300
	addi     r4, r3, __vt__Q34Game10FireChappy3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8028F2F4
	lis      r3, __vt__Q34Game10ChappyBase3Obj@ha
	addi     r0, r30, 0x2e4
	addi     r4, r3, __vt__Q34Game10ChappyBase3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x334
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8028F2F4
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

lbl_8028F2F4:
	extsh.   r0, r31
	ble      lbl_8028F304
	mr       r3, r30
	bl       __dl__FPv

lbl_8028F304:
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
 * Address:	8028F320
 * Size:	000010
 */
void FireChappy::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x310
	lwz      r3, 0x44(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F330
 * Size:	000068
 */
void FireChappy::Mgr::loadModelData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	li       r5, 0
	b        lbl_8028F370

lbl_8028F350:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8028F370:
	lwz      r4, 0x1c(r31)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_8028F350
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F398
 * Size:	00012C
 */
void FireChappy::Mgr::loadTexData()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	lwz      r3, 0x1c(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	lwz      r4,
"cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"@sda21(r13)
	addi     r3, r1, 0x38
	li       r31, 0
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 0x38
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8028F3E4
	lwz      r31, 0x30(r3)

lbl_8028F3E4:
	cmplwi   r31, 0
	bne      lbl_8028F408
	lis      r3, lbl_804883B4@ha
	lis      r5, lbl_804883C8@ha
	addi     r3, r3, lbl_804883B4@l
	li       r4, 0x6e
	addi     r5, r5, lbl_804883C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8028F408:
	li       r3, 0x10
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8028F420
	bl       __ct__Q23Sys15MatTexAnimationFv
	mr       r0, r3

lbl_8028F420:
	stw      r0, 0x48(r30)
	mr       r4, r31
	lwz      r3, 0x48(r30)
	lwz      r5, 0x1c(r30)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r4,
"cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"@sda21(r13)
	addi     r3, r1, 8
	li       r31, 0
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8028F45C
	lwz      r31, 0x30(r3)

lbl_8028F45C:
	cmplwi   r31, 0
	bne      lbl_8028F480
	lis      r3, lbl_804883B4@ha
	lis      r5, lbl_804883C8@ha
	addi     r3, r3, lbl_804883B4@l
	li       r4, 0x76
	addi     r5, r5, lbl_804883C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8028F480:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8028F498
	bl       __ct__Q23Sys18MatTevRegAnimationFv
	mr       r0, r3

lbl_8028F498:
	stw      r0, 0x4c(r30)
	mr       r4, r31
	lwz      r3, 0x4c(r30)
	lwz      r5, 0x1c(r30)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F4C4
 * Size:	00007C
 */
void FireChappy::Mgr::createModel()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8028F500
	lwz      r4, 0x1c(r30)
	lis      r5, 4
	lbz      r6, 0x24(r30)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r31, r3

lbl_8028F500:
	cmplwi   r31, 0
	bne      lbl_8028F524
	lis      r3, lbl_804883B4@ha
	lis      r5, lbl_804883C8@ha
	addi     r3, r3, lbl_804883B4@l
	li       r4, 0x90
	addi     r5, r5, lbl_804883C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8028F524:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F540
 * Size:	0000B0
 */
FireChappy::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8028F5D4
	lis      r3, __vt__Q34Game10FireChappy3Mgr@ha
	addi     r3, r3, __vt__Q34Game10FireChappy3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028F5C4
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028F5C4
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8028F5C4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8028F5C4:
	extsh.   r0, r31
	ble      lbl_8028F5D4
	mr       r3, r30
	bl       __dl__FPv

lbl_8028F5D4:
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
 * Address:	8028F5F0
 * Size:	000008
 */
u32 FireChappy::Mgr::getEnemyTypeID() { return 0x21; }

/*
 * --INFO--
 * Address:	8028F5F8
 * Size:	00002C
 */
void FireChappy::Mgr::doLoadBmd(void*)
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
 * Address:	8028F624
 * Size:	000008
 */
FireChappy::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game10FireChappy3MgrFv
	*/
}
} // namespace Game
