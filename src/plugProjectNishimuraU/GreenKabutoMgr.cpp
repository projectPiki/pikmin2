#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D810
    lbl_8048D810:
        .asciz "/enemy/data/Kabuto/babykabuto_green_s3tc.bti"
        .skip 3
    .global lbl_8048D840
    lbl_8048D840:
        .4byte 0x834F838A
        .4byte 0x815B8393
        .4byte 0x834A8375
        .4byte 0x8367837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_8048D85C
    lbl_8048D85C:
        .asciz "EnemyParmsBase"
        .skip 1
    .global lbl_8048D86C
    lbl_8048D86C:
        .asciz "GreenKabutoMgr.cpp"
        .skip 1
    .global lbl_8048D880
    lbl_8048D880:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game11GreenKabuto3Mgr
    __vt__Q34Game11GreenKabuto3Mgr:
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
        .4byte "@4@__dt__Q34Game11GreenKabuto3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game11GreenKabuto3MgrFv
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
        .4byte createObj__Q34Game11GreenKabuto3MgrFi
        .4byte getEnemy__Q34Game11GreenKabuto3MgrFi
        .4byte doAlloc__Q34Game11GreenKabuto3MgrFv
        .4byte getEnemyTypeID__Q34Game11GreenKabuto3MgrFv
        .4byte createModel__Q34Game6Kabuto3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game6Kabuto3MgrFv
        .4byte loadAnimData__Q34Game6Kabuto3MgrFv
        .4byte loadTexData__Q34Game11GreenKabuto3MgrFv
        .4byte doLoadBmd__Q34Game6Kabuto3MgrFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte getChangeTexture__Q34Game11GreenKabuto3MgrFv
    .global __vt__Q34Game6Kabuto5Parms
    __vt__Q34Game6Kabuto5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game6Kabuto5ParmsFR6Stream

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global
   "cKabutoChangeTexName__Q34Game11GreenKabuto28@unnamed@GreenKabutoMgr_cpp@"
    "cKabutoChangeTexName__Q34Game11GreenKabuto28@unnamed@GreenKabutoMgr_cpp@":
        .4byte lbl_8048D810
*/

namespace Game {

/*
 * --INFO--
 * Address:	802FF7CC
 * Size:	000050
 */
GreenKabuto::Mgr::Mgr(int, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game6Kabuto3MgrFiUc
	lis      r3, __vt__Q34Game11GreenKabuto3Mgr@ha
	lis      r4, lbl_8048D840@ha
	addi     r5, r3, __vt__Q34Game11GreenKabuto3Mgr@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r5, r5, 0x38
	addi     r0, r4, lbl_8048D840@l
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
 * Address:	802FF81C
 * Size:	000048
 */
void GreenKabuto::Mgr::doAlloc()
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
	beq      lbl_802FF848
	bl       __ct__Q34Game6Kabuto5ParmsFv
	mr       r4, r3

lbl_802FF848:
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
 * Address:	802FF864
 * Size:	000058
 */
Kabuto::Parms::Parms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r4, __vt__Q34Game6Kabuto5Parms@ha
	lis      r3, lbl_8048D85C@ha
	addi     r0, r4, __vt__Q34Game6Kabuto5Parms@l
	addi     r5, r31, 0x804
	stw      r0, 0xd8(r31)
	li       r4, 0
	addi     r0, r3, lbl_8048D85C@l
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
 * Address:	802FF8BC
 * Size:	000060
 */
void GreenKabuto::Mgr::createObj(int)
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
	lis      r4, __ct__Q34Game11GreenKabuto3ObjFv@ha
	lis      r5, __dt__Q34Game11GreenKabuto3ObjFv@ha
	addi     r4, r4, __ct__Q34Game11GreenKabuto3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game11GreenKabuto3ObjFv@l
	li       r6, 0x2f4
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
 * Address:	802FF91C
 * Size:	0000EC
 */
GreenKabuto::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802FF9EC
	lis      r3, __vt__Q34Game11GreenKabuto3Obj@ha
	addi     r5, r30, 0x2e4
	addi     r4, r3, __vt__Q34Game11GreenKabuto3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x31c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_802FF9DC
	lis      r3, __vt__Q34Game6Kabuto3Obj@ha
	addi     r4, r3, __vt__Q34Game6Kabuto3Obj@l
	stw      r4, 0(r30)
	addi     r3, r4, 0x1b0
	addi     r0, r4, 0x31c
	stw      r3, 0x178(r30)
	lwz      r3, 0x17c(r30)
	stw      r0, 0(r3)
	lwz      r3, 0x17c(r30)
	subf     r0, r3, r5
	stw      r0, 0xc(r3)
	beq      lbl_802FF9DC
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

lbl_802FF9DC:
	extsh.   r0, r31
	ble      lbl_802FF9EC
	mr       r3, r30
	bl       __dl__FPv

lbl_802FF9EC:
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
 * Address:	802FFA08
 * Size:	000010
 */
void GreenKabuto::Mgr::getEnemy(int)
{
	/*
	mulli    r0, r4, 0x2f4
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FFA18
 * Size:	000080
 */
void GreenKabuto::Mgr::loadTexData()
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
"cKabutoChangeTexName__Q34Game11GreenKabuto28@unnamed@GreenKabutoMgr_cpp@"@sda21(r13)
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       load__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_802FFA5C
	lwz      r0, 0x30(r3)
	stw      r0, 0x44(r31)

lbl_802FFA5C:
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_802FFA84
	lis      r3, lbl_8048D86C@ha
	lis      r5, lbl_8048D880@ha
	addi     r3, r3, lbl_8048D86C@l
	li       r4, 0x52
	addi     r5, r5, lbl_8048D880@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FFA84:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FFA98
 * Size:	0000C8
 */
GreenKabuto::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802FFB44
	lis      r3, __vt__Q34Game11GreenKabuto3Mgr@ha
	addi     r3, r3, __vt__Q34Game11GreenKabuto3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802FFB34
	lis      r3, __vt__Q34Game6Kabuto3Mgr@ha
	addi     r3, r3, __vt__Q34Game6Kabuto3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802FFB34
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802FFB34
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_802FFB34
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_802FFB34:
	extsh.   r0, r31
	ble      lbl_802FFB44
	mr       r3, r30
	bl       __dl__FPv

lbl_802FFB44:
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
 * Address:	802FFB60
 * Size:	000008
 */
u32 GreenKabuto::Mgr::getEnemyTypeID() { return 0x4B; }

/*
 * --INFO--
 * Address:	802FFB68
 * Size:	000008
 */
void GreenKabuto::Mgr::getChangeTexture()
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FFB70
 * Size:	000050
 */
void Kabuto::Parms::read(Stream&)
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
 * Address:	802FFBC0
 * Size:	000008
 */
GreenKabuto::Mgr::@4 @~Mgr()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q34Game11GreenKabuto3MgrFv
	*/
}
} // namespace Game
