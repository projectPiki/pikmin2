#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804957D0
    lbl_804957D0:
        .4byte 0x835E8343
        .4byte 0x8384837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_804957E4
    lbl_804957E4:
        .4byte 0x456E656D
        .4byte 0x79506172
        .4byte 0x6D734261
        .4byte 0x73650000
    .global lbl_804957F4
    lbl_804957F4:
        .4byte 0x89F1935D
        .4byte 0x83588373
        .4byte 0x815B8368
        .4byte 0x00000000
    .global lbl_80495804
    lbl_80495804:
        .4byte 0x74797265
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_80495810
    lbl_80495810:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Tyre3Mgr
    __vt__Q34Game4Tyre3Mgr:
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
        .4byte "@4@__dt__Q34Game4Tyre3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game4Tyre3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q34Game4Tyre3MgrFRQ24Game13EnemyBirthArg
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
        .4byte createObj__Q34Game4Tyre3MgrFi
        .4byte getEnemy__Q34Game4Tyre3MgrFi
        .4byte doAlloc__Q34Game4Tyre3MgrFv
        .4byte getEnemyTypeID__Q34Game4Tyre3MgrFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game4Tyre3MgrFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q34Game4Tyre3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
    .global __vt__Q34Game4Tyre5Parms
    __vt__Q34Game4Tyre5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game4Tyre5ParmsFR6Stream
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F598
    lbl_8051F598:
        .float 0.5
    .global lbl_8051F59C
    lbl_8051F59C:
        .4byte 0x00000000
    .global lbl_8051F5A0
    lbl_8051F5A0:
        .4byte 0x42C80000
    .global lbl_8051F5A4
    lbl_8051F5A4:
        .4byte 0x3F400000
    .global lbl_8051F5A8
    lbl_8051F5A8:
        .float 0.05
    .global lbl_8051F5AC
    lbl_8051F5AC:
        .4byte 0x3CCCCCCD
    .global lbl_8051F5B0
    lbl_8051F5B0:
        .4byte 0x3F99999A
*/

namespace Game {

/*
 * --INFO--
 * Address:	803ABE60
 * Size:	000050
 */
Tyre::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game4Tyre3Mgr@ha
	lis      r4, lbl_804957D0@ha
	addi     r5, r3, __vt__Q34Game4Tyre3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_804957D0@l
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
 * Address:	803ABEB0
 * Size:	000048
 */
void Tyre::Mgr::doAlloc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x84c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803ABEDC
	bl       __ct__Q34Game4Tyre5ParmsFv
	mr       r4, r3

lbl_803ABEDC:
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
 * Address:	803ABEF8
 * Size:	0000DC
 */
Tyre::Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r3, __vt__Q34Game4Tyre5Parms@ha
	lis      r5, 0x66703031@ha
	addi     r0, r3, __vt__Q34Game4Tyre5Parms@l
	lis      r4, lbl_804957E4@ha
	stw      r0, 0xd8(r31)
	addi     r0, r31, 0x82c
	lis      r3, lbl_804957F4@ha
	addi     r5, r5, 0x66703031@l
	stw      r0, 0x7f8(r31)
	addi     r6, r3, lbl_804957F4@l
	li       r3, 0
	addi     r0, r4, lbl_804957E4@l
	stw      r3, 0x7fc(r31)
	addi     r3, r31, 0x804
	addi     r4, r31, 0x7f8
	stw      r0, 0x800(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f5, lbl_8051F598@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f4, lbl_8051F59C@sda21(r2)
	stw      r0, 0x804(r31)
	li       r5, 0
	lfs      f0, lbl_8051F5A0@sda21(r2)
	li       r4, 1
	stfs     f5, 0x81c(r31)
	li       r0, 0xa
	lfs      f3, lbl_8051F5A4@sda21(r2)
	mr       r3, r31
	stfs     f4, 0x824(r31)
	lfs      f2, lbl_8051F5A8@sda21(r2)
	stfs     f0, 0x828(r31)
	lfs      f1, lbl_8051F5AC@sda21(r2)
	stb      r5, 0x830(r31)
	lfs      f0, lbl_8051F5B0@sda21(r2)
	stb      r5, 0x831(r31)
	stb      r4, 0x832(r31)
	stb      r0, 0x833(r31)
	stfs     f4, 0x834(r31)
	stfs     f3, 0x838(r31)
	stfs     f2, 0x83c(r31)
	stfs     f1, 0x840(r31)
	stfs     f5, 0x844(r31)
	stfs     f0, 0x848(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABFD4
 * Size:	000020
 */
void Tyre::Mgr::birth(Game::EnemyBirthArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABFF4
 * Size:	000094
 */
void Tyre::Mgr::loadModelData(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	lis      r4, lbl_80495804@ha
	lis      r3, lbl_80495810@ha
	addi     r30, r4, lbl_80495804@l
	li       r28, 0
	addi     r31, r3, lbl_80495810@l
	b        lbl_803AC060

lbl_803AC024:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	cmplwi   r29, 0
	bne      lbl_803AC04C
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x38
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AC04C:
	lwz      r0, 0xc(r29)
	addi     r28, r28, 1
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r29)

lbl_803AC060:
	lwz      r4, 0x1c(r27)
	clrlwi   r0, r28, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_803AC024
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC088
 * Size:	00002C
 */
void Tyre::Mgr::doLoadBmd(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x21240030@ha
	mr       r3, r4
	stw      r0, 0x14(r1)
	addi     r4, r5, 0x21240030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC0B4
 * Size:	0000B0
 */
Tyre::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803AC148
	lis      r3, __vt__Q34Game4Tyre3Mgr@ha
	addi     r3, r3, __vt__Q34Game4Tyre3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803AC138
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803AC138
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_803AC138
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_803AC138:
	extsh.   r0, r31
	ble      lbl_803AC148
	mr       r3, r30
	bl       __dl__FPv

lbl_803AC148:
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
 * Address:	803AC164
 * Size:	000008
 */
u32 Tyre::Mgr::getEnemyTypeID(void) { return 0x62; }

/*
 * --INFO--
 * Address:	803AC16C
 * Size:	000060
 */
void Tyre::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x354
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game4Tyre3ObjFv@ha
	lis      r5, __dt__Q34Game4Tyre3ObjFv@ha
	addi     r4, r4, __ct__Q34Game4Tyre3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game4Tyre3ObjFv@l
	li       r6, 0x354
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
 * Address:	803AC1CC
 * Size:	0000BC
 */
Tyre::Obj::~Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_803AC26C
	lis      r3, __vt__Q34Game4Tyre3Obj@ha
	addi     r0, r31, 0x344
	addi     r4, r3, __vt__Q34Game4Tyre3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2fc
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_803AC25C
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

lbl_803AC25C:
	extsh.   r0, r30
	ble      lbl_803AC26C
	mr       r3, r31
	bl       __dl__FPv

lbl_803AC26C:
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
 * Address:	803AC288
 * Size:	000010
 */
void Tyre::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x354
	lwz      r3, 0x44(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC298
 * Size:	000050
 */
void Tyre::Parms::read(Stream&)
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
 * Address:	803AC2E8
 * Size:	000008
 */
@4 @Game::Tyre::Mgr::~Mgr(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game4Tyre3MgrFv
	*/
}
} // namespace Game
