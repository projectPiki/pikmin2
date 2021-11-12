#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80487080
    lbl_80487080:
        .asciz "/enemy/data/Wtank/mizu_butadokkuri_main_s3tc.bti"
        .skip 3
    .global lbl_804870B4
    lbl_804870B4:
        .4byte 0x837E8359
        .4byte 0x8375835E
        .4byte 0x83688362
        .4byte 0x834E838A
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
    .global lbl_804870D0
    lbl_804870D0:
        .asciz "TankParms"
        .skip 2
    .global lbl_804870DC
    lbl_804870DC:
        .asciz "WtankMgr.cpp"
        .skip 3
    .global lbl_804870EC
    lbl_804870EC:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game5Wtank3Mgr
    __vt__Q34Game5Wtank3Mgr:
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
        .4byte "@4@__dt__Q34Game5Wtank3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game5Wtank3MgrFv
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
        .4byte createObj__Q34Game5Wtank3MgrFi
        .4byte getEnemy__Q34Game5Wtank3MgrFi
        .4byte doAlloc__Q34Game5Wtank3MgrFv
        .4byte getEnemyTypeID__Q34Game5Wtank3MgrFv
        .4byte createModel__Q34Game4Tank3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game4Tank3MgrFv
        .4byte loadAnimData__Q34Game4Tank3MgrFv
        .4byte loadTexData__Q34Game5Wtank3MgrFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture__Q34Game5Wtank3MgrFv
    .global __vt__Q34Game4Tank5Parms
    __vt__Q34Game4Tank5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game4Tank5ParmsFR6Stream

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global "cTankChangeTexName__Q34Game5Wtank22@unnamed@WtankMgr_cpp@"
    "cTankChangeTexName__Q34Game5Wtank22@unnamed@WtankMgr_cpp@":
        .4byte lbl_80487080
*/

namespace Game {

/*
 * --INFO--
 * Address:	8027C40C
 * Size:	000050
 */
Wtank::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game4Tank3MgrFiUc
	lis      r3, __vt__Q34Game5Wtank3Mgr@ha
	lis      r4, lbl_804870B4@ha
	addi     r5, r3, __vt__Q34Game5Wtank3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_804870B4@l
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
 * Address:	8027C45C
 * Size:	000048
 */
void Wtank::Mgr::doAlloc()
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
	beq      lbl_8027C488
	bl       __ct__Q34Game4Tank5ParmsFv
	mr       r4, r3

lbl_8027C488:
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
 * Address:	8027C4A4
 * Size:	000058
 */
Tank::Parms::Parms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r4, __vt__Q34Game4Tank5Parms@ha
	lis      r3, lbl_804870D0@ha
	addi     r0, r4, __vt__Q34Game4Tank5Parms@l
	addi     r5, r31, 0x804
	stw      r0, 0xd8(r31)
	li       r4, 0
	addi     r0, r3, lbl_804870D0@l
	mr       r3, r31
	stw      r5, 0x7f8(r31)
	stw      r4, 0x7fc(r31)
	stw      r0, 0x800(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C4FC
 * Size:	000060
 */
void Wtank::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x31c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game5Wtank3ObjFv@ha
	lis      r5, __dt__Q34Game5Wtank3ObjFv@ha
	addi     r4, r4, __ct__Q34Game5Wtank3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game5Wtank3ObjFv@l
	li       r6, 0x31c
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
 * Address:	8027C55C
 * Size:	0000F0
 */
Wtank::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027C630
	lis      r3, __vt__Q34Game5Wtank3Obj@ha
	addi     r0, r30, 0x30c
	addi     r4, r3, __vt__Q34Game5Wtank3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x328
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8027C620
	lis      r3, __vt__Q34Game4Tank3Obj@ha
	addi     r0, r30, 0x308
	addi     r4, r3, __vt__Q34Game4Tank3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x328
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8027C620
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

lbl_8027C620:
	extsh.   r0, r31
	ble      lbl_8027C630
	mr       r3, r30
	bl       __dl__FPv

lbl_8027C630:
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
 * Address:	8027C64C
 * Size:	000010
 */
void Wtank::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x31c
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C65C
 * Size:	000080
 */
void Wtank::Mgr::loadTexData()
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
"cTankChangeTexName__Q34Game5Wtank22@unnamed@WtankMgr_cpp@"@sda21(r13) bl
__ct__Q212LoadResource3ArgFPCc lwz      r3, gLoadResourceMgr@sda21(r13) addi r4,
r1, 8 bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg cmplwi   r3, 0
	beq      lbl_8027C6A0
	lwz      r0, 0x30(r3)
	stw      r0, 0x44(r31)

lbl_8027C6A0:
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_8027C6C8
	lis      r3, lbl_804870DC@ha
	lis      r5, lbl_804870EC@ha
	addi     r3, r3, lbl_804870DC@l
	li       r4, 0x52
	addi     r5, r5, lbl_804870EC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8027C6C8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C6DC
 * Size:	0000C8
 */
Wtank::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8027C788
	lis      r3, __vt__Q34Game5Wtank3Mgr@ha
	addi     r3, r3, __vt__Q34Game5Wtank3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8027C778
	lis      r3, __vt__Q34Game4Tank3Mgr@ha
	addi     r3, r3, __vt__Q34Game4Tank3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8027C778
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8027C778
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8027C778
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8027C778:
	extsh.   r0, r31
	ble      lbl_8027C788
	mr       r3, r30
	bl       __dl__FPv

lbl_8027C788:
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
 * Address:	8027C7A4
 * Size:	000008
 */
u32 Wtank::Mgr::getEnemyTypeID() { return 0x19; }

/*
 * --INFO--
 * Address:	8027C7AC
 * Size:	000008
 */
void Wtank::Mgr::getChangeTexture()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027C7B4
 * Size:	000050
 */
void Tank::Parms::read(Stream&)
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
 * Address:	8027C804
 * Size:	000008
 */
Wtank::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game5Wtank3MgrFv
	*/
}
} // namespace Game
