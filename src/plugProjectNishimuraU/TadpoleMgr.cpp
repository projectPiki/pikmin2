#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80486CE8
    lbl_80486CE8:
        .4byte 0x8349835E
        .4byte 0x837D837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_80486CFC
    lbl_80486CFC:
        .4byte 0x456E656D
        .4byte 0x79506172
        .4byte 0x6D734261
        .4byte 0x73650000
    .global lbl_80486D0C
    lbl_80486D0C:
        .4byte 0x83738360
        .4byte 0x83738360
        .4byte 0x88DA93AE
        .4byte 0x91AC9378
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game7Tadpole5Parms
    __vt__Q34Game7Tadpole5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game7Tadpole5ParmsFR6Stream
    .global __vt__Q34Game7Tadpole3Mgr
    __vt__Q34Game7Tadpole3Mgr:
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
        .4byte "@4@__dt__Q34Game7Tadpole3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game7Tadpole3MgrFv
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
        .4byte createObj__Q34Game7Tadpole3MgrFi
        .4byte getEnemy__Q34Game7Tadpole3MgrFi
        .4byte doAlloc__Q34Game7Tadpole3MgrFv
        .4byte getEnemyTypeID__Q34Game7Tadpole3MgrFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q24Game12EnemyMgrBaseFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B400
    lbl_8051B400:
        .4byte 0x41A00000
    .global lbl_8051B404
    lbl_8051B404:
        .4byte 0x00000000
    .global lbl_8051B408
    lbl_8051B408:
        .4byte 0x447A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80278264
 * Size:	000050
 */
Tadpole::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game7Tadpole3Mgr@ha
	lis      r4, lbl_80486CE8@ha
	addi     r5, r3, __vt__Q34Game7Tadpole3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80486CE8@l
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
 * Address:	802782B4
 * Size:	000048
 */
void Tadpole::Mgr::doAlloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x830
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802782E0
	bl       __ct__Q34Game7Tadpole5ParmsFv
	mr       r4, r3

lbl_802782E0:
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
 * Address:	802782FC
 * Size:	000098
 */
Tadpole::Parms::Parms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r3, __vt__Q34Game7Tadpole5Parms@ha
	lis      r5, 0x66703031@ha
	addi     r0, r3, __vt__Q34Game7Tadpole5Parms@l
	lis      r4, lbl_80486CFC@ha
	stw      r0, 0xd8(r31)
	addi     r0, r31, 0x82c
	lis      r3, lbl_80486D0C@ha
	addi     r5, r5, 0x66703031@l
	stw      r0, 0x7f8(r31)
	addi     r6, r3, lbl_80486D0C@l
	li       r3, 0
	addi     r0, r4, lbl_80486CFC@l
	stw      r3, 0x7fc(r31)
	addi     r3, r31, 0x804
	addi     r4, r31, 0x7f8
	stw      r0, 0x800(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051B400@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051B404@sda21(r2)
	stw      r0, 0x804(r31)
	mr       r3, r31
	lfs      f0, lbl_8051B408@sda21(r2)
	stfs     f2, 0x81c(r31)
	stfs     f1, 0x824(r31)
	stfs     f0, 0x828(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80278394
 * Size:	000060
 */
void Tadpole::Mgr::createObj(int)
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
	lis      r4, __ct__Q34Game7Tadpole3ObjFv@ha
	lis      r5, __dt__Q34Game7Tadpole3ObjFv@ha
	addi     r4, r4, __ct__Q34Game7Tadpole3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game7Tadpole3ObjFv@l
	li       r6, 0x2e8
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
 * Address:	802783F4
 * Size:	0000BC
 */
Tadpole::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_80278494
	lis      r3, __vt__Q34Game7Tadpole3Obj@ha
	addi     r0, r31, 0x2d8
	addi     r4, r3, __vt__Q34Game7Tadpole3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2fc
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_80278484
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r31, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r31, 0x290
	stw      r4, 0(r31)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_80278484:
	extsh.   r0, r30
	ble      lbl_80278494
	mr       r3, r31
	bl       __dl__FPv

lbl_80278494:
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
 * Address:	802784B0
 * Size:	000010
 */
void Tadpole::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2e8
	lwz      r3, 0x44(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802784C0
 * Size:	000050
 */
void Tadpole::Parms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0xe0
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0x7f8
	bl       read__10ParametersFR6Stream
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
 * Address:	80278510
 * Size:	0000B0
 */
Tadpole::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802785A4
	lis      r3, __vt__Q34Game7Tadpole3Mgr@ha
	addi     r3, r3, __vt__Q34Game7Tadpole3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80278594
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80278594
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80278594
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_80278594:
	extsh.   r0, r31
	ble      lbl_802785A4
	mr       r3, r30
	bl       __dl__FPv

lbl_802785A4:
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
 * Address:	802785C0
 * Size:	000008
 */
u32 Tadpole::Mgr::getEnemyTypeID() { return 0x1B; }

/*
 * --INFO--
 * Address:	802785C8
 * Size:	000008
 */
Tadpole::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game7Tadpole3MgrFv
	*/
}
} // namespace Game
