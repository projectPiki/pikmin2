#include "types.h"
#include "Game/Entities/Egg.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490808
    lbl_80490808:
        .4byte 0x835E837D
        .4byte 0x8353837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
        .4byte 0x456E656D
        .4byte 0x79506172
        .4byte 0x6D734261
        .4byte 0x73650000
        .4byte 0x96A8838C
        .4byte 0x815B8367
        .4byte 0x00000000
        .4byte 0x96A87832
        .4byte 0x838C815B
        .4byte 0x83670000
        .4byte 0x835E837D
        .4byte 0x83538380
        .4byte 0x83567831
        .4byte 0x30838C81
        .4byte 0x5B836700
        .4byte 0x90D48368
        .4byte 0x815B8373
        .4byte 0x8393834F
        .4byte 0x838C815B
        .4byte 0x83670000
        .4byte 0x8D958368
        .4byte 0x815B8373
        .4byte 0x8393834F
        .4byte 0x838C815B
        .4byte 0x83670000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x3A3A5072
        .4byte 0x6F706572
        .4byte 0x74790000
        .4byte 0x66726963
        .4byte 0x74696F6E
        .4byte 0x286E6F74
        .4byte 0x20757365
        .4byte 0x64290000
        .4byte 0x77616C6C
        .4byte 0x5265666C
        .4byte 0x65637469
        .4byte 0x6F6E0000
        .4byte 0x66616365
        .4byte 0x44697241
        .4byte 0x646A7573
        .4byte 0x74000000
        .4byte 0x626F756E
        .4byte 0x63654661
        .4byte 0x63746F72
        .4byte 0x00000000
        .4byte 0x83898343
        .4byte 0x837482CC
        .4byte 0x8D8282B3
        .4byte 0x00000000
        .4byte 0x83898343
        .4byte 0x837489F1
        .4byte 0x959C97A6
        .4byte 0x00000000
        .4byte 0x8C7889FA
        .4byte 0x83898343
        .4byte 0x83740000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC9396
        .4byte 0x82E80000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC82A0
        .4byte 0x82BD82E8
        .4byte 0x837C838A
        .4byte 0x83538393
        .4byte 0x82CC9149
        .4byte 0x92E80000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82C682CC
        .4byte 0x82A082BD
        .4byte 0x82E80000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x585A0000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x59000000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x8374838C
        .4byte 0x815B8380
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x91AC9378
        .4byte 0x97A60000
        .4byte 0x89F1935D
        .4byte 0x8DC591E5
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x8365838A
        .4byte 0x8367838A
        .4byte 0x815B0000
        .4byte 0x837A815B
        .4byte 0x838094CD
        .4byte 0x88CD0000
        .4byte 0x83768389
        .4byte 0x83438378
        .4byte 0x815B8367
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97CD0000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97A60000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x836794CD
        .4byte 0x88CD0000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x83678A70
        .4byte 0x93780000
        .4byte 0x8C7889FA
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x90CE89BB
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x83718362
        .4byte 0x83768368
        .4byte 0x838D8362
        .4byte 0x8376835F
        .4byte 0x8381815B
        .4byte 0x83570000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8A6D97A7
        .4byte 0x00000000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82600000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82500000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82610000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82510000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82620000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82520000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82630000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game3Egg3Mgr
    __vt__Q34Game3Egg3Mgr:
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
        .4byte "@4@__dt__Q34Game3Egg3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game3Egg3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q34Game3Egg3MgrFRQ24Game13EnemyBirthArg
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
        .4byte createObj__Q34Game3Egg3MgrFi
        .4byte getEnemy__Q34Game3Egg3MgrFi
        .4byte doAlloc__Q34Game3Egg3MgrFv
        .4byte getEnemyTypeID__Q34Game3Egg3MgrFv
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
    .global __vt__Q34Game3Egg5Parms
    __vt__Q34Game3Egg5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game3Egg5ParmsFR6Stream
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E380
    lbl_8051E380:
        .float 1.0
    .global lbl_8051E384
    lbl_8051E384:
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8034B6B0
 * Size:	000050
 */
Egg::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game12EnemyMgrBaseFiUc
	lis      r3, __vt__Q34Game3Egg3Mgr@ha
	lis      r4, lbl_80490808@ha
	addi     r5, r3, __vt__Q34Game3Egg3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_80490808@l
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
 * Address:	8034B700
 * Size:	000048
 */
void Egg::Mgr::doAlloc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x8d4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8034B72C
	bl       __ct__Q34Game3Egg5ParmsFv
	mr       r4, r3

lbl_8034B72C:
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
 * Address:	8034B748
 * Size:	00018C
 */
Egg::Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80490808@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80490808@l
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r3, __vt__Q34Game3Egg5Parms@ha
	lis      r5, 0x66703031@ha
	addi     r0, r3, __vt__Q34Game3Egg5Parms@l
	addi     r4, r30, 0x8cc
	stw      r0, 0xd8(r30)
	li       r7, 0
	addi     r0, r31, 0x14
	addi     r3, r30, 0x804
	stw      r4, 0x7f8(r30)
	addi     r4, r30, 0x7f8
	addi     r5, r5, 0x66703031@l
	addi     r6, r31, 0x24
	stw      r7, 0x7fc(r30)
	stw      r0, 0x800(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051E380@sda21(r2)
	stw      r0, 0x804(r30)
	addi     r3, r30, 0x82c
	lfs      f0, lbl_8051E384@sda21(r2)
	addi     r4, r30, 0x7f8
	stfs     f1, 0x81c(r30)
	addi     r5, r5, 0x66703032@l
	addi     r6, r31, 0x30
	stfs     f0, 0x824(r30)
	stfs     f1, 0x828(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051E380@sda21(r2)
	stw      r0, 0x82c(r30)
	addi     r3, r30, 0x854
	lfs      f0, lbl_8051E384@sda21(r2)
	addi     r4, r30, 0x7f8
	stfs     f1, 0x844(r30)
	addi     r5, r5, 0x66703033@l
	addi     r6, r31, 0x3c
	stfs     f0, 0x84c(r30)
	stfs     f1, 0x850(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051E380@sda21(r2)
	stw      r0, 0x854(r30)
	addi     r3, r30, 0x87c
	lfs      f0, lbl_8051E384@sda21(r2)
	addi     r4, r30, 0x7f8
	stfs     f1, 0x86c(r30)
	addi     r5, r5, 0x66703034@l
	addi     r6, r31, 0x50
	stfs     f0, 0x874(r30)
	stfs     f1, 0x878(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051E380@sda21(r2)
	stw      r0, 0x87c(r30)
	addi     r3, r30, 0x8a4
	lfs      f0, lbl_8051E384@sda21(r2)
	addi     r4, r30, 0x7f8
	stfs     f1, 0x894(r30)
	addi     r5, r5, 0x66703035@l
	addi     r6, r31, 0x64
	stfs     f0, 0x89c(r30)
	stfs     f1, 0x8a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f1, lbl_8051E380@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051E384@sda21(r2)
	stw      r0, 0x8a4(r30)
	li       r4, 0
	li       r0, 1
	mr       r3, r30
	stfs     f1, 0x8bc(r30)
	stfs     f0, 0x8c4(r30)
	stfs     f1, 0x8c8(r30)
	stb      r4, 0x8d0(r30)
	stb      r0, 0x8d1(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B8D4
 * Size:	000020
 */
void Egg::Mgr::birth(Game::EnemyBirthArg&)
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
 * Address:	8034B8F4
 * Size:	0000B0
 */
Egg::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8034B988
	lis      r3, __vt__Q34Game3Egg3Mgr@ha
	addi     r3, r3, __vt__Q34Game3Egg3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8034B978
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8034B978
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8034B978
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8034B978:
	extsh.   r0, r31
	ble      lbl_8034B988
	mr       r3, r30
	bl       __dl__FPv

lbl_8034B988:
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
 * Address:	8034B9A4
 * Size:	000008
 */
u32 Egg::Mgr::getEnemyTypeID(void) { return EnemyID_Egg; }

/*
 * --INFO--
 * Address:	8034B9AC
 * Size:	000060
 */
void Egg::Mgr::createObj(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x2d4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game3Egg3ObjFv@ha
	lis      r5, __dt__Q34Game3Egg3ObjFv@ha
	addi     r4, r4, __ct__Q34Game3Egg3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game3Egg3ObjFv@l
	li       r6, 0x2d4
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
 * Address:	8034BA0C
 * Size:	0000BC
 */
Egg::Obj::~Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_8034BAAC
	lis      r3, __vt__Q34Game3Egg3Obj@ha
	addi     r0, r31, 0x2c4
	addi     r4, r3, __vt__Q34Game3Egg3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2fc
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8034BA9C
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

lbl_8034BA9C:
	extsh.   r0, r30
	ble      lbl_8034BAAC
	mr       r3, r31
	bl       __dl__FPv

lbl_8034BAAC:
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
 * Address:	8034BAC8
 * Size:	000010
 */
void Egg::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2d4
	lwz      r3, 0x44(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034BAD8
 * Size:	000050
 */
void Egg::Parms::read(Stream&)
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
 * Address:	8034BB28
 * Size:	000008
 */
@4 @Game::Egg::Mgr::~Mgr(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game3Egg3MgrFv
	*/
}
} // namespace Game
