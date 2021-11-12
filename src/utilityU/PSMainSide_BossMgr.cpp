#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049D9A8
    lbl_8049D9A8:
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F42
        .4byte 0x6F73734D
        .4byte 0x67722E63
        .4byte 0x70700000
    .global lbl_8049D9C0
    lbl_8049D9C0:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss
    __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss:
        .4byte 0
        .4byte 0
        .4byte update__Q33PSM12BossBgmFader17TypedProc_MidBossFv
    .global __vt__Q33PSM12BossBgmFader9TypedProc
    __vt__Q33PSM12BossBgmFader9TypedProc:
        .4byte 0
        .4byte 0
        .4byte update__Q33PSM12BossBgmFader9TypedProcFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520CB8
    lbl_80520CB8:
        .float 0.5
    .global lbl_80520CBC
    lbl_80520CBC:
        .4byte 0x4E6E6B28
    .global lbl_80520CC0
    lbl_80520CC0:
        .4byte 0x00000000
    .global lbl_80520CC4
    lbl_80520CC4:
        .4byte 0x4B095440
    .global lbl_80520CC8
    lbl_80520CC8:
        .4byte 0x4CBEBC20
    .global lbl_80520CCC
    lbl_80520CCC:
        .float 1.0
    .global lbl_80520CD0
    lbl_80520CD0:
        .4byte 0x447A0000
    .global lbl_80520CD4
    lbl_80520CD4:
        .4byte 0x44160000
    .global lbl_80520CD8
    lbl_80520CD8:
        .4byte 0x43C80000
        .4byte 0x00000000
*/

namespace PSM {

/*
 * --INFO--
 * Address:	8046C6B8
 * Size:	0001D8
 */
void BossBgmFader::TypedProc::update()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r30, r3
	li       r0, 0
	lfs      f1, 0x2c(r3)
	lfs      f31, lbl_80520CBC@sda21(r2)
	stw      r0, 0x28(r3)
	lwz      r3, 0(r3)
	b        lbl_8046C724

lbl_8046C6FC:
	lwz      r4, 0(r3)
	lbz      r0, 0xfc(r4)
	cmplwi   r0, 0
	beq      lbl_8046C720
	lfs      f0, 0xe0(r4)
	fcmpo    cr0, f0, f31
	bge      lbl_8046C720
	fmr      f31, f0
	stw      r4, 0x28(r30)

lbl_8046C720:
	lwz      r3, 0xc(r3)

lbl_8046C724:
	cmplwi   r3, 0
	bne      lbl_8046C6FC
	lfs      f0, lbl_80520CC4@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8046C73C
	fmr      f31, f1

lbl_8046C73C:
	lfs      f30, lbl_80520CC8@sda21(r2)
	li       r31, 0
	lwz      r29, 0(r30)
	b        lbl_8046C790

lbl_8046C74C:
	lwz      r3, 0(r29)
	lwz      r12, 0x28(r3)
	lwz      r12, 0xdc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r29)
	bl       isOnDisappearing__Q23PSM9EnemyBossFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046C78C
	lwz      r3, 0(r29)
	lfs      f0, 0xe0(r3)
	fcmpo    cr0, f0, f30
	cror     2, 0, 2
	bne      lbl_8046C78C
	fmr      f30, f0
	mr       r31, r3

lbl_8046C78C:
	lwz      r29, 0xc(r29)

lbl_8046C790:
	cmplwi   r29, 0
	bne      lbl_8046C74C
	lwz      r0, 0x28(r30)
	cmplwi   r0, 0
	beq      lbl_8046C81C
	lfs      f0, 0x1c(r30)
	fcmpo    cr0, f31, f0
	bge      lbl_8046C7C8
	li       r0, 0
	stw      r0, 0x20(r30)
	lwz      r0, 0x20(r30)
	ori      r0, r0, 3
	stw      r0, 0x20(r30)
	b        lbl_8046C824

lbl_8046C7C8:
	lfs      f0, 0x14(r30)
	fcmpo    cr0, f31, f0
	bge      lbl_8046C7EC
	li       r0, 0
	stw      r0, 0x20(r30)
	lwz      r0, 0x20(r30)
	ori      r0, r0, 2
	stw      r0, 0x20(r30)
	b        lbl_8046C824

lbl_8046C7EC:
	lfs      f0, 0x10(r30)
	fcmpo    cr0, f31, f0
	bge      lbl_8046C810
	li       r0, 0
	stw      r0, 0x20(r30)
	lwz      r0, 0x20(r30)
	ori      r0, r0, 1
	stw      r0, 0x20(r30)
	b        lbl_8046C824

lbl_8046C810:
	li       r0, 0
	stw      r0, 0x20(r30)
	b        lbl_8046C824

lbl_8046C81C:
	li       r0, 0
	stw      r0, 0x20(r30)

lbl_8046C824:
	cmplwi   r31, 0
	beq      lbl_8046C860
	lfs      f0, 0x10(r30)
	fcmpo    cr0, f30, f0
	bge      lbl_8046C860
	lwz      r0, 0x20(r30)
	cmpwi    r0, 0
	bne      lbl_8046C860
	li       r0, 0
	fmr      f31, f30
	stw      r0, 0x20(r30)
	lwz      r0, 0x20(r30)
	ori      r0, r0, 4
	stw      r0, 0x20(r30)
	stw      r31, 0x28(r30)

lbl_8046C860:
	stfs     f31, 0x2c(r30)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046C890
 * Size:	00003C
 */
void BossBgmFader::TypedProc_MidBoss::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       update__Q33PSM12BossBgmFader9TypedProcFv
	lwz      r3, 0x30(r31)
	cmplwi   r3, 0
	beq      lbl_8046C8B8
	bl       frameEndWork__Q23PSM15DirectorUpdatorFv

lbl_8046C8B8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046C8CC
 * Size:	0000EC
 */
BossBgmFader::Mgr::Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@ha
	stw      r0, 0x14(r1)
	addi     r0, r4,
"__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@l stw      r31,
0xc(r1) mr       r31, r3 lis      r3, __vt__Q33PSM12BossBgmFader3Mgr@ha stw r30,
8(r1) addi     r30, r31, 4 stw      r0, 0(r31) addi     r0, r3,
__vt__Q33PSM12BossBgmFader3Mgr@l mr       r3, r30 stw      r31,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13) stw
r0, 0(r31) bl       initiate__10JSUPtrListFv lis      r3,
__vt__Q33PSM12BossBgmFader9TypedProc@ha lfs      f2, lbl_80520CD0@sda21(r2) addi
r0, r3, __vt__Q33PSM12BossBgmFader9TypedProc@l lfs      f1,
lbl_80520CD4@sda21(r2) stw      r0, 0xc(r30) li       r0, 0 lfs      f0,
lbl_80520CD8@sda21(r2) stfs     f2, 0x10(r30) lfs      f2,
lbl_80520CB8@sda21(r2) stfs     f1, 0x14(r30) lfs      f1,
lbl_80520CBC@sda21(r2) stfs     f0, 0x18(r30) lfs      f0,
lbl_80520CC0@sda21(r2) lfs      f3, 0x14(r30) fmuls    f2, f3, f2 stfs     f2,
0x1c(r30) stw      r0, 0x20(r30) stw      r0, 0x24(r30) stw      r0, 0x28(r30)
	stfs     f1, 0x2c(r30)
	lfs      f1, 0x18(r30)
	fcmpo    cr0, f1, f0
	bgt      lbl_8046C984
	lis      r3, lbl_8049D9A8@ha
	lis      r5, lbl_8049D9C0@ha
	addi     r3, r3, lbl_8049D9A8@l
	li       r4, 0x2f
	addi     r5, r5, lbl_8049D9C0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046C984:
	lis      r3, __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss@ha
	li       r0, 0
	addi     r4, r3, __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss@l
	mr       r3, r31
	stw      r4, 0xc(r30)
	stw      r0, 0x30(r30)
	stb      r0, 0x38(r31)
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
 * Address:	8046C9B8
 * Size:	000024
 */
void BossBgmFader::Mgr::appendTarget(JSULink<PSM::EnemyBoss>*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 4
	stw      r0, 0x14(r1)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046C9DC
 * Size:	000768
 */
void BossBgmFader::Mgr::exec()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	mr       r27, r3
	lis      r4, lbl_8049D9A8@ha
	addi     r3, r27, 4
	lwz      r12, 0x10(r27)
	addi     r31, r4, lbl_8049D9A8@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	bl       PSGetDirectedMainBgmA__Fv
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r30, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8046CA54
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA54:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_8046CA74
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA74:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_8046CA94
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA94:
	lwz      r3, 4(r28)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CAAC
	li       r3, 0
	b        lbl_8046CAB0

lbl_8046CAAC:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CAB0:
	cmplwi   r3, 0
	beq      lbl_8046CAD0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0(r3)
	b        lbl_8046CAD4

lbl_8046CAD0:
	li       r29, 0

lbl_8046CAD4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r28, 0
	cmplwi   r0, 0
	bne      lbl_8046CAF8
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CAF8:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CB18
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB18:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CB38
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB38:
	lwz      r3, 4(r26)
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	bne      lbl_8046CB5C
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB5C:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046CB7C
	b        lbl_8046CB80

lbl_8046CB7C:
	li       r26, 0

lbl_8046CB80:
	cmplwi   r26, 0
	beq      lbl_8046CC54
	mr       r3, r26
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 6
	bne      lbl_8046CC54
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CBBC
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBBC:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CBDC
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBDC:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CBFC
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBFC:
	lwz      r3, 4(r26)
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	bne      lbl_8046CC20
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CC20:
	addi     r3, r26, 0x10
	li       r4, 2
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	cmplwi   r3, 0
	beq      lbl_8046CC4C
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	b        lbl_8046CC50

lbl_8046CC4C:
	li       r0, 0

lbl_8046CC50:
	mr       r28, r0

lbl_8046CC54:
	lwz      r0, 0x24(r27)
	cmpwi    r0, 3
	bne      lbl_8046CC90
	lwz      r0, 0x28(r27)
	cmpwi    r0, 3
	beq      lbl_8046CCBC
	li       r3, 1
	bl       PSMGetBattleDirector__FUc
	cmplwi   r3, 0
	beq      lbl_8046CCBC
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8046CCBC

lbl_8046CC90:
	lwz      r0, 0x28(r27)
	cmpwi    r0, 3
	bne      lbl_8046CCBC
	li       r3, 1
	bl       PSMGetBattleDirector__FUc
	cmplwi   r3, 0
	beq      lbl_8046CCBC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8046CCBC:
	lbz      r0, 0x38(r27)
	cmplwi   r0, 0
	bne      lbl_8046CE40
	lwz      r3, 0x24(r27)
	cmpwi    r3, 0
	bne      lbl_8046CD80
	lwz      r0, 0x28(r27)
	cmpwi    r0, 0
	beq      lbl_8046CD80
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CD00
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD00:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CD20
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD20:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CD40
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD40:
	lwz      r3, 4(r26)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CD58
	li       r3, 0
	b        lbl_8046CD5C

lbl_8046CD58:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CD5C:
	lhz      r0, 0x130(r3)
	cmplwi   r0, 0
	beq      lbl_8046CE40
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	b        lbl_8046CE40

lbl_8046CD80:
	cmpwi    r3, 3
	beq      lbl_8046CD90
	cmpwi    r3, 2
	bne      lbl_8046CE40

lbl_8046CD90:
	lwz      r0, 0x28(r27)
	cmpwi    r0, 1
	beq      lbl_8046CDA4
	cmpwi    r0, 0
	bne      lbl_8046CE40

lbl_8046CDA4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CDC4
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CDC4:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CDE4
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CDE4:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CE04
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CE04:
	lwz      r3, 4(r26)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CE1C
	li       r3, 0
	b        lbl_8046CE20

lbl_8046CE1C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CE20:
	lhz      r0, 0x130(r3)
	cmplwi   r0, 0
	bne      lbl_8046CE40
	lwz      r12, 0x10(r3)
	li       r4, 1
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl

lbl_8046CE40:
	lwz      r0, 0x24(r27)
	cmpwi    r0, 1
	beq      lbl_8046CEE4
	bge      lbl_8046CE5C
	cmpwi    r0, 0
	bge      lbl_8046D01C
	b        lbl_8046D110

lbl_8046CE5C:
	cmpwi    r0, 4
	beq      lbl_8046D098
	bge      lbl_8046D110
	cmplwi   r30, 0
	beq      lbl_8046CE90
	mr       r3, r30
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CE90:
	cmplwi   r28, 0
	beq      lbl_8046CEB8
	mr       r3, r28
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CEB8:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046CEE4:
	lfs      f2, 0x30(r27)
	li       r0, 0
	lfs      f1, 0x18(r27)
	lfs      f0, lbl_80520CC0@sda21(r2)
	fsubs    f31, f2, f1
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8046CF18
	lfs      f0, 0x1c(r27)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8046CF18
	li       r0, 1

lbl_8046CF18:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046CF34
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0xa7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CF34:
	lfs      f2, lbl_80520CC0@sda21(r2)
	fmr      f1, f31
	lfs      f3, 0x1c(r27)
	li       r3, 0
	fmr      f5, f2
	lfs      f4, lbl_80520CCC@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	fmr      f31, f1
	lfs      f0, lbl_80520CC0@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8046CF7C
	lfs      f0, lbl_80520CCC@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8046CF7C
	li       r0, 1

lbl_8046CF7C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046CF98
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0xac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CF98:
	lfs      f0, lbl_80520CCC@sda21(r2)
	cmplwi   r30, 0
	fsubs    f30, f0, f31
	beq      lbl_8046CFC8
	mr       r3, r30
	fmr      f1, f30
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CFC8:
	cmplwi   r28, 0
	beq      lbl_8046CFF0
	mr       r3, r28
	fmr      f1, f30
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CFF0:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	fmr      f1, f31
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046D01C:
	cmplwi   r30, 0
	beq      lbl_8046D044
	mr       r3, r30
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D044:
	cmplwi   r28, 0
	beq      lbl_8046D06C
	mr       r3, r28
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D06C:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046D098:
	cmplwi   r30, 0
	beq      lbl_8046D0C0
	mr       r3, r30
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D0C0:
	cmplwi   r28, 0
	beq      lbl_8046D0E8
	mr       r3, r28
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D0E8:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D110:
	lwz      r3, 0x24(r27)
	li       r0, 0
	stw      r3, 0x28(r27)
	stb      r0, 0x38(r27)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
} // namespace PSM
