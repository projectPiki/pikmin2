#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048A7D0
    lbl_8048A7D0:
        .asciz "/enemy/data/GasOtakara/otakara_purple_s3tc.bti"
        .skip 1
    .global lbl_8048A800
    lbl_8048A800:
        .4byte 0x834B8358
        .4byte 0x8349835E
        .4byte 0x834A8389
        .4byte 0x83808356
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
    .global lbl_8048A81C
    lbl_8048A81C:
        .asciz "GasOtakaraMgr.cpp"
        .skip 2
    .global lbl_8048A830
    lbl_8048A830:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10GasOtakara3Mgr
    __vt__Q34Game10GasOtakara3Mgr:
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
        .4byte "@4@__dt__Q34Game10GasOtakara3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game10GasOtakara3MgrFv
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
        .4byte createObj__Q34Game10GasOtakara3MgrFi
        .4byte getEnemy__Q34Game10GasOtakara3MgrFi
        .4byte doAlloc__Q34Game10GasOtakara3MgrFv
        .4byte getEnemyTypeID__Q34Game10GasOtakara3MgrFv
        .4byte createModel__Q34Game11OtakaraBase3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game11OtakaraBase3MgrFv
        .4byte loadAnimData__Q34Game11OtakaraBase3MgrFv
        .4byte loadTexData__Q34Game10GasOtakara3MgrFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture__Q34Game10GasOtakara3MgrFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@"
    "cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@":
        .4byte lbl_8048A7D0
*/

namespace Game {

/*
 * --INFO--
 * Address:	802B8F3C
 * Size:	000050
 */
GasOtakara::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game11OtakaraBase3MgrFiUc
	lis      r3, __vt__Q34Game10GasOtakara3Mgr@ha
	lis      r4, lbl_8048A800@ha
	addi     r5, r3, __vt__Q34Game10GasOtakara3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8048A800@l
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
 * Address:	802B8F8C
 * Size:	000048
 */
void GasOtakara::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x8a8
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802B8FB8
	bl       __ct__Q34Game11OtakaraBase5ParmsFv
	mr       r4, r3

lbl_802B8FB8:
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
 * Address:	802B8FD4
 * Size:	000060
 */
void GasOtakara::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x308
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game10GasOtakara3ObjFv@ha
	lis      r5, __dt__Q34Game10GasOtakara3ObjFv@ha
	addi     r4, r4, __ct__Q34Game10GasOtakara3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game10GasOtakara3ObjFv@l
	li       r6, 0x308
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
 * Address:	802B9034
 * Size:	0000F0
 */
GasOtakara::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802B9108
	lis      r3, __vt__Q34Game10GasOtakara3Obj@ha
	addi     r0, r30, 0x2f8
	addi     r4, r3, __vt__Q34Game10GasOtakara3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x324
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_802B90F8
	lis      r3, __vt__Q34Game11OtakaraBase3Obj@ha
	addi     r0, r30, 0x2f4
	addi     r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x324
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_802B90F8
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

lbl_802B90F8:
	extsh.   r0, r31
	ble      lbl_802B9108
	mr       r3, r30
	bl       __dl__FPv

lbl_802B9108:
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
 * Address:	802B9124
 * Size:	000010
 */
void GasOtakara::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x308
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B9134
 * Size:	000080
 */
void GasOtakara::Mgr::loadTexData()
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
"cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@"@sda21(r13)
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_802B9178
	lwz      r0, 0x30(r3)
	stw      r0, 0x44(r31)

lbl_802B9178:
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_802B91A0
	lis      r3, lbl_8048A81C@ha
	lis      r5, lbl_8048A830@ha
	addi     r3, r3, lbl_8048A81C@l
	li       r4, 0x53
	addi     r5, r5, lbl_8048A830@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802B91A0:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B91B4
 * Size:	0000C8
 */
GasOtakara::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802B9260
	lis      r3, __vt__Q34Game10GasOtakara3Mgr@ha
	addi     r3, r3, __vt__Q34Game10GasOtakara3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802B9250
	lis      r3, __vt__Q34Game11OtakaraBase3Mgr@ha
	addi     r3, r3, __vt__Q34Game11OtakaraBase3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802B9250
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802B9250
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802B9250
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_802B9250:
	extsh.   r0, r31
	ble      lbl_802B9260
	mr       r3, r30
	bl       __dl__FPv

lbl_802B9260:
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
 * Address:	802B927C
 * Size:	000008
 */
u32 GasOtakara::Mgr::getEnemyTypeID() { return 0x3D; }

/*
 * --INFO--
 * Address:	802B9284
 * Size:	000008
 */
void GasOtakara::Mgr::getChangeTexture()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B928C
 * Size:	000008
 */
GasOtakara::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game10GasOtakara3MgrFv
	*/
}
} // namespace Game
