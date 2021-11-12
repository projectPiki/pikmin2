#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496378
    lbl_80496378:
        .4byte 0x65667854
        .4byte 0x506B4566
        .4byte 0x66656374
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_8049638C
    lbl_8049638C:
        .4byte 0x756E6B6E
        .4byte 0x6F776E20
        .4byte 0x636F6C6F
        .4byte 0x72000000
    .global lbl_8049639C
    lbl_8049639C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x6B6F7572
        .4byte 0x696E2063
        .4byte 0x6F6C6F72
        .4byte 0x2025640A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E7AC8
    lbl_804E7AC8:
        .4byte lbl_803C715C
        .4byte lbl_803C70CC
        .4byte lbl_803C70E0
        .4byte lbl_803C70F4
        .4byte lbl_803C7108
        .4byte lbl_803C711C
        .4byte lbl_803C7130
        .4byte lbl_803C7130
    .global lbl_804E7AE8
    lbl_804E7AE8:
        .4byte lbl_803C7224
        .4byte lbl_803C71B0
        .4byte lbl_803C71C4
        .4byte lbl_803C71D8
        .4byte lbl_803C71EC
        .4byte lbl_803C7200
        .4byte lbl_803C7214
        .4byte lbl_803C7214
    .global __vt__Q23efx12TPkEffectMgr
    __vt__Q23efx12TPkEffectMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23efx12TPkEffectMgrFv
    .global __vt__Q23efx19TPkOneEmitterSimple
    __vt__Q23efx19TPkOneEmitterSimple:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx19TPkOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx19TPkOneEmitterSimpleFv
        .4byte fade__Q23efx19TPkOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx19TPkOneEmitterSimpleFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx19TPkOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx19TPkOneEmitterSimpleFP14JPABaseEmitter
        .4byte __dt__Q23efx19TPkOneEmitterSimpleFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global pkEffectMgr
    pkEffectMgr:
        .skip 0x4
    .global _instance__Q23efx12TPkEffectMgr
    _instance__Q23efx12TPkEffectMgr:
        .skip 0x4
*/

namespace efx {

/*
 * --INFO--
 * Address:	803C4E0C
 * Size:	0000B4
 */
void TPkOneEmitterSimple::create(efx::Arg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_803C4E34
	li       r3, 0
	b        lbl_803C4EAC

lbl_803C4E34:
	lis      r4, "zero__10Vector3<f>"@ha
	lwz      r3, particleMgr@sda21(r13)
	addi     r5, r4, "zero__10Vector3<f>"@l
	lhz      r4, 0xc(r31)
	li       r6, 0
	bl       "create__11ParticleMgrFUsR10Vector3<f>Uc"
	stw      r3, 8(r31)
	lwz      r4, 8(r31)
	cmplwi   r4, 0
	beq      lbl_803C4E9C
	lwz      r3, 0xf4(r4)
	cmplwi   r31, 0
	li       r0, 0
	mr       r5, r31
	ori      r3, r3, 0x40
	stw      r3, 0xf4(r4)
	lwz      r4, 8(r31)
	lwz      r3, 0xf4(r4)
	ori      r3, r3, 1
	stw      r3, 0xf4(r4)
	lwz      r3, 8(r31)
	stw      r0, 0x24(r3)
	beq      lbl_803C4E94
	addi     r5, r31, 4

lbl_803C4E94:
	lwz      r3, 8(r31)
	stw      r5, 0xec(r3)

lbl_803C4E9C:
	lwz      r3, 8(r31)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_803C4EAC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C4EC0
 * Size:	0000D4
 */
void TPkOneEmitterSimple::executeAfter(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r3, particleMgr@sda21(r13)
	bl       setGlobalColor__11ParticleMgrFP14JPABaseEmitter
	lwz      r31, 0x10(r27)
	b        lbl_803C4F78

lbl_803C4EE8:
	lwz      r5, 0(r31)
	mr       r4, r31
	addi     r3, r27, 0x10
	lfs      f0, 0x10(r5)
	stfs     f0, 8(r1)
	lfs      f0, 0x14(r5)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x18(r5)
	stfs     f0, 0x10(r1)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r3, particleMgr@sda21(r13)
	addi     r4, r1, 8
	lhz      r5, 0xc(r27)
	bl       "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803C4F74
	lfs      f0, 0x28(r28)
	li       r29, 0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r30, 0x1c(r1)
	b        lbl_803C4F6C

lbl_803C4F40:
	mr       r3, r28
	bl       createParticle__14JPABaseEmitterFv
	cmplwi   r3, 0
	beq      lbl_803C4F68
	lfs      f2, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f2, 0x20(r3)

lbl_803C4F68:
	addi     r29, r29, 1

lbl_803C4F6C:
	cmpw     r29, r30
	blt      lbl_803C4F40

lbl_803C4F74:
	lwz      r31, 0xc(r31)

lbl_803C4F78:
	cmplwi   r31, 0
	bne      lbl_803C4EE8
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void add__Q23efx19TPkOneEmitterSimpleFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C4F94
 * Size:	000024
 */
void TPkEffectMgr::globalInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       Instance__Q23efx12TPkEffectMgrFv
	stw      r3, pkEffectMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C4FB8
 * Size:	000050
 */
void TPkEffectMgr::deleteInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, _instance__Q23efx12TPkEffectMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803C4FF0
	beq      lbl_803C4FE8
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803C4FE8:
	li       r0, 0
	stw      r0, _instance__Q23efx12TPkEffectMgr@sda21(r13)

lbl_803C4FF0:
	li       r0, 0
	stw      r0, pkEffectMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C5008
 * Size:	000048
 */
void TPkEffectMgr::Instance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, _instance__Q23efx12TPkEffectMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803C503C
	li       r3, 0x644
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803C5038
	bl       __ct__Q23efx12TPkEffectMgrFv
	mr       r0, r3

lbl_803C5038:
	stw      r0, _instance__Q23efx12TPkEffectMgr@sda21(r13)

lbl_803C503C:
	lwz      r0, 0x14(r1)
	lwz      r3, _instance__Q23efx12TPkEffectMgr@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C5050
 * Size:	0013BC
 */
TPkEffectMgr::TPkEffectMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q23efx12TPkEffectMgr@ha
	lis      r4, __ct__Q23efx11TOEContextSFv@ha
	addi     r0, r3, __vt__Q23efx12TPkEffectMgr@l
	li       r6, 0x1c
	lis      r3, __dt__Q23efx11TOEContextSFv@ha
	stw      r0, 0(r31)
	addi     r5, r3, __dt__Q23efx11TOEContextSFv@l
	addi     r4, r4, __ct__Q23efx11TOEContextSFv@l
	addi     r3, r31, 0xc8
	li       r7, 0x32
	bl       __construct_array
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5128
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	addi     r29, r30, 8
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x16a
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r30)
	sth      r0, 0x28(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0x14(r30)
	stw      r3, 0x10(r30)
	stw      r3, 0xc(r30)

lbl_803C5128:
	stw      r30, 0x18(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C51B8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r29, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r28, r29, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r28
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x16b
	stw      r4, 0(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)
	stw      r3, 8(r28)
	stw      r3, 4(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x24(r29)
	sth      r0, 0x28(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x14(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)

lbl_803C51B8:
	stw      r30, 0x1c(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5248
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x16d
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5248:
	stw      r30, 0x20(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C52D8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x169
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C52D8:
	stw      r30, 0x24(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5368
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x16c
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5368:
	stw      r30, 0x28(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C53F8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x281
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C53F8:
	stw      r30, 0x2c(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5488
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x15b
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5488:
	stw      r30, 0x30(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5518
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x177
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5518:
	stw      r30, 0x34(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C55A8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x178
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C55A8:
	stw      r30, 0x58(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5638
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x170
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5638:
	stw      r30, 0x38(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C56C8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x171
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C56C8:
	stw      r30, 0x3c(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5758
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x152
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5758:
	stw      r30, 0x40(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C57E8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x17c
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C57E8:
	stw      r30, 0x44(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5878
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x17d
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5878:
	stw      r30, 0x48(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5908
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x161
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5908:
	stw      r30, 0x4c(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5998
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x162
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5998:
	stw      r30, 0x50(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5A28
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addi     r29, r28, 8
	stw      r0, 4(r30)
	addi     r4, r3, __vt__Q23efx19TOneEmitterChasePos@l
	addi     r0, r4, 0x14
	mr       r3, r29
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23efx15ContextChasePos@l
	li       r0, 0x16e
	stw      r4, 0(r29)
	stw      r3, 0x10(r29)
	stw      r3, 0xc(r29)
	stw      r3, 8(r29)
	stw      r3, 4(r29)
	stw      r3, 0x18(r29)
	stw      r3, 0x24(r28)
	sth      r0, 0x28(r28)
	stw      r3, 0x18(r28)
	stw      r3, 0x14(r28)
	stw      r3, 0x10(r28)
	stw      r3, 0xc(r28)

lbl_803C5A28:
	stw      r30, 0x54(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5A84
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x154
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5A84:
	stw      r30, 0x5c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5AE0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x155
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5AE0:
	stw      r30, 0x60(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5B3C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x157
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5B3C:
	stw      r30, 0x64(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5B98
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x153
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5B98:
	stw      r30, 0x68(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5BF4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x156
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5BF4:
	stw      r30, 0x6c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5C50
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x148
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5C50:
	stw      r30, 0x70(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5CAC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x149
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5CAC:
	stw      r30, 0x74(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5D08
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x165
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5D08:
	stw      r30, 0x78(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5D64
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x166
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5D64:
	stw      r30, 0x7c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5DC0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x168
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5DC0:
	stw      r30, 0x84(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5E1C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x167
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5E1C:
	stw      r30, 0x80(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5E78
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x14e
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5E78:
	stw      r30, 0x88(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5ED4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x14f
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5ED4:
	stw      r30, 0x8c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5F30
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x15c
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5F30:
	stw      r30, 0x90(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5F8C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x15d
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5F8C:
	stw      r30, 0x94(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C5FE8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x17a
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C5FE8:
	stw      r30, 0x98(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C6044
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x17b
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C6044:
	stw      r30, 0x9c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C60A0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x159
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C60A0:
	stw      r30, 0xa0(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C60FC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x15a
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C60FC:
	stw      r30, 0xa4(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C6158
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x150
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C6158:
	stw      r30, 0xa8(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C61B4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x163
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C61B4:
	stw      r30, 0xac(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C6210
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x179
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C6210:
	stw      r30, 0xb0(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C626C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x158
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C626C:
	stw      r30, 0xb4(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C62C8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x151
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C62C8:
	stw      r30, 0xb8(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C6324
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x7e
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C6324:
	stw      r30, 0xbc(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C6380
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x292
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C6380:
	stw      r30, 0xc0(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803C63DC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r28, r30
	stw      r0, 0(r30)
	addi     r0, r3, __vt__18JPAEmitterCallBack@l
	lis      r4, __vt__Q23efx19TPkOneEmitterSimple@ha
	addi     r3, r28, 0x10
	stw      r0, 4(r30)
	addi     r4, r4, __vt__Q23efx19TPkOneEmitterSimple@l
	addi     r0, r4, 0x14
	stw      r4, 0(r30)
	stw      r0, 4(r30)
	bl       initiate__10JSUPtrListFv
	li       r3, 0
	li       r0, 0x293
	stw      r3, 8(r28)
	sth      r0, 0xc(r28)

lbl_803C63DC:
	stw      r30, 0xc4(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x640(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<efx::TOEContextS>::~JSUList()
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C640C
 * Size:	000058
 */
TOEContextS::~TOEContextS(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803C6448
	beq      lbl_803C6438
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_803C6438:
	extsh.   r0, r31
	ble      lbl_803C6448
	mr       r3, r30
	bl       __dl__FPv

lbl_803C6448:
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
 * Address:	803C6464
 * Size:	000034
 */
TOEContextS::TOEContextS(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	bl       __ct__10JSUPtrLinkFPv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<efx::TOEContextS>::~JSULink()
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C6498
 * Size:	000108
 */
TPkEffectMgr::~TPkEffectMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	or.      r28, r3, r3
	beq      lbl_803C657C
	lis      r3, __vt__Q23efx12TPkEffectMgr@ha
	mr       r31, r28
	addi     r0, r3, __vt__Q23efx12TPkEffectMgr@l
	li       r30, 0
	stw      r0, 0(r28)

lbl_803C64D4:
	lwz      r3, 0x18(r31)
	cmplwi   r3, 0
	beq      lbl_803C64F4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_803C64F4:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x11
	blt      lbl_803C64D4
	li       r30, 0
	mr       r31, r28

lbl_803C650C:
	lwz      r3, 0x5c(r31)
	cmplwi   r3, 0
	beq      lbl_803C652C
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_803C652C:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x1b
	blt      lbl_803C650C
	li       r0, 0
	lis      r3, __dt__Q23efx11TOEContextSFv@ha
	stw      r0, _instance__Q23efx12TPkEffectMgr@sda21(r13)
	addi     r4, r3, __dt__Q23efx11TOEContextSFv@l
	addi     r3, r28, 0xc8
	li       r5, 0x1c
	stw      r0, pkEffectMgr@sda21(r13)
	li       r6, 0x32
	bl       __destroy_arr
	mr       r3, r28
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r29
	ble      lbl_803C657C
	mr       r3, r28
	bl       __dl__FPv

lbl_803C657C:
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C65A0
 * Size:	000080
 */
TPkOneEmitterSimple::~TPkOneEmitterSimple(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803C6604
	lis      r3, __vt__Q23efx19TPkOneEmitterSimple@ha
	addic.   r0, r30, 0x10
	addi     r3, r3, __vt__Q23efx19TPkOneEmitterSimple@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803C65E8
	addi     r3, r30, 0x10
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_803C65E8:
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__18JPAEmitterCallBackFv
	extsh.   r0, r31
	ble      lbl_803C6604
	mr       r3, r30
	bl       __dl__FPv

lbl_803C6604:
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
 * Address:	803C6620
 * Size:	000098
 */
void TPkEffectMgr::startMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29

lbl_803C6644:
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x11
	blt      lbl_803C6644
	li       r30, 0
	mr       r31, r29

lbl_803C6674:
	lwz      r3, 0x5c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x1b
	blt      lbl_803C6674
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C66B8
 * Size:	000090
 */
void TPkEffectMgr::exitMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29

lbl_803C66DC:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x11
	blt      lbl_803C66DC
	li       r30, 0
	mr       r31, r29

lbl_803C6708:
	lwz      r3, 0x5c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x1b
	blt      lbl_803C6708
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6748
 * Size:	000044
 */
void TPkOneEmitterSimple::forceKill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_803C6778
	lwz      r3, particleMgr@sda21(r13)
	bl       forceKill__11ParticleMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 8(r31)

lbl_803C6778:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C678C
 * Size:	00000C
 */
void TPkEffectMgr::resetContextS(void)
{
	// Generated from stw r0, 0x640(r3)
	_640 = 0;
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C6798
 * Size:	00021C
 */
void createS_Dead__Q23efx12TPkEffectMgrFR10Vector3f l(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r5, 3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	beq      lbl_803C68DC
	bge      lbl_803C67CC
	cmpwi    r5, 1
	beq      lbl_803C6834
	bge      lbl_803C6888
	cmpwi    r5, 0
	bge      lbl_803C67E0
	b        lbl_803C6984

lbl_803C67CC:
	cmpwi    r5, 7
	bge      lbl_803C6984
	cmpwi    r5, 5
	bge      lbl_803C69A0
	b        lbl_803C6930

lbl_803C67E0:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x5c(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C69A0
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)
	b        lbl_803C69A0

lbl_803C6834:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x60(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C69A0
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)
	b        lbl_803C69A0

lbl_803C6888:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x64(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C69A0
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)
	b        lbl_803C69A0

lbl_803C68DC:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x68(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C69A0
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)
	b        lbl_803C69A0

lbl_803C6930:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x6c(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C69A0
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)
	b        lbl_803C69A0

lbl_803C6984:
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049638C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0xe8
	addi     r5, r5, lbl_8049638C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C69A0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void createS_Attack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void createS_AttackDp__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void createS_Kanden__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C69B4
 * Size:	0000C8
 */
void createS_Chinka__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x88(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6A18
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6A18:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x8c(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6A64
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6A64:
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
 * Address:	803C6A7C
 * Size:	0000C8
 */
void createS_Gedoku__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x90(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6AE0
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6AE0:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x94(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6B2C
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6B2C:
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
 * Address:	803C6B44
 * Size:	0000C8
 */
void createS_WaterOff__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x98(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6BA8
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6BA8:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0x9c(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6BF4
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6BF4:
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
 * Address:	803C6C0C
 * Size:	0000C8
 */
void createS_Dive__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xa0(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6C70
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6C70:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xa4(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6CBC
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6CBC:
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
 * Address:	803C6CD4
 * Size:	000074
 */
void createS_Chiru__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xa8(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6D34
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6D34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6D48
 * Size:	000074
 */
void createS_Inattack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xac(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6DA8
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6DA8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6DBC
 * Size:	000074
 */
void createS_Walksmoke__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xb0(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6E1C
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6E1C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6E30
 * Size:	000074
 */
void createS_Dig__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xb4(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6E90
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6E90:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6EA4
 * Size:	000074
 */
void createS_ChiruRed__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xb8(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6F04
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6F04:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6F18
 * Size:	000074
 */
void createS_Gate3Attack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xbc(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6F78
	mulli    r5, r0, 0x1c
	lfs      f0, 0(r4)
	addi     r3, r3, 0x10
	addi     r5, r5, 0xc8
	add      r5, r31, r5
	stfs     f0, 0x10(r5)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 8(r4)
	mr       r4, r5
	stfs     f0, 0x18(r5)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6F78:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C6F8C
 * Size:	0000C8
 */
void createS_Walkwater__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xc0(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C6FF0
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C6FF0:
	lwz      r31, pkEffectMgr@sda21(r13)
	lwz      r0, 0x640(r31)
	lwz      r3, 0xc4(r31)
	cmpwi    r0, 0x31
	bge      lbl_803C703C
	mulli    r4, r0, 0x1c
	lfs      f0, 0(r30)
	addi     r3, r3, 0x10
	addi     r4, r4, 0xc8
	add      r4, r31, r4
	stfs     f0, 0x10(r4)
	lfs      f0, 4(r30)
	stfs     f0, 0x14(r4)
	lfs      f0, 8(r30)
	stfs     f0, 0x18(r4)
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x640(r31)
	addi     r0, r3, 1
	stw      r0, 0x640(r31)

lbl_803C703C:
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
 * Address:	803C7054
 * Size:	000128
 */
void create__Q23efx9ToeKourinFP10Vector3f l(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_80496378@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_80496378@l
	bne      lbl_803C709C
	addi     r3, r31, 0
	addi     r5, r31, 0x24
	li       r4, 0x140
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C709C:
	stw      r30, 0x1c(r28)
	stw      r29, 0x18(r28)
	lwz      r3, 0x1c(r28)
	addi     r0, r3, 1
	cmplwi   r0, 7
	bgt      lbl_803C7144
	lis      r3, lbl_804E7AC8@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804E7AC8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803C70CC

lbl_803C70CC:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x18(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C
	.global  lbl_803C70E0

lbl_803C70E0:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x1c(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C
	.global  lbl_803C70F4

lbl_803C70F4:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x20(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C
	.global  lbl_803C7108

lbl_803C7108:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x24(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C
	.global  lbl_803C711C

lbl_803C711C:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x28(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C
	.global  lbl_803C7130

lbl_803C7130:
	lwz      r3, pkEffectMgr@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x2c(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C715C

lbl_803C7144:
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x30
	li       r4, 0x15c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	.global  lbl_803C715C

lbl_803C715C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C717C
 * Size:	0000B8
 */
void ToeKourin::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x1c(r3)
	addi     r0, r4, 1
	cmplwi   r0, 7
	bgt      lbl_803C7224
	lis      r4, lbl_804E7AE8@ha
	slwi     r0, r0, 2
	addi     r4, r4, lbl_804E7AE8@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_803C71B0

lbl_803C71B0:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x18(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C7224
	.global  lbl_803C71C4

lbl_803C71C4:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x1c(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C7224
	.global  lbl_803C71D8

lbl_803C71D8:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x20(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C7224
	.global  lbl_803C71EC

lbl_803C71EC:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x24(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C7224
	.global  lbl_803C7200

lbl_803C7200:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x28(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	b        lbl_803C7224
	.global  lbl_803C7214

lbl_803C7214:
	lwz      r5, pkEffectMgr@sda21(r13)
	mr       r4, r3
	lwz      r3, 0x2c(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	.global  lbl_803C7224

lbl_803C7224:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7234
 * Size:	000068
 */
void create__Q23efx9ToeDopingFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C7270
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x181
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C7270:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x30(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C729C
 * Size:	00002C
 */
void ToeDoping::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x30(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C72C8
 * Size:	000068
 */
void create__Q23efx11ToeNagekiraFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C7304
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x18f
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C7304:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x34(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7330
 * Size:	00002C
 */
void ToeNagekira::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x34(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C735C
 * Size:	00007C
 */
void create__Q23efx8ToeMoeBCFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C7398
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x19c
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C7398:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x38(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	stw      r31, 0x34(r30)
	addi     r4, r30, 0x1c
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x3c(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C73D8
 * Size:	000048
 */
void ToeMoeBC::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x38(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r3, pkEffectMgr@sda21(r13)
	addi     r4, r31, 0x1c
	lwz      r3, 0x3c(r3)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7420
 * Size:	000068
 */
void create__Q23efx10ToeChudokuFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C745C
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1ad
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C745C:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x40(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7488
 * Size:	00002C
 */
void ToeChudoku::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x40(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C74B4
 * Size:	00007C
 */
void create__Q23efx8ToeWaterFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C74F0
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1bc
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C74F0:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x44(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	stw      r31, 0x34(r30)
	addi     r4, r30, 0x1c
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x48(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7530
 * Size:	000048
 */
void ToeWater::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x44(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r3, pkEffectMgr@sda21(r13)
	addi     r4, r31, 0x1c
	lwz      r3, 0x48(r3)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7578
 * Size:	000074
 */
void create__Q23efx9ToeHamonAFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C75B4
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1cd
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C75B4:
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_803C75D4
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x4c(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos

lbl_803C75D4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C75EC
 * Size:	00002C
 */
void ToeHamonA::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x4c(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7618
 * Size:	000074
 */
void create__Q23efx9ToeHamonBFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C7654
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1de
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C7654:
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_803C7674
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x50(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos

lbl_803C7674:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C768C
 * Size:	00002C
 */
void ToeHamonB::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x50(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C76B8
 * Size:	000068
 */
void create__Q23efx11ToeMoeSmokeFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C76F4
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1ef
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C76F4:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x54(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7720
 * Size:	00002C
 */
void ToeMoeSmoke::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x54(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C774C
 * Size:	000068
 */
void create__Q23efx11ToeTanekiraFP10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C7788
	lis      r3, lbl_80496378@ha
	lis      r5, lbl_8049639C@ha
	addi     r3, r3, lbl_80496378@l
	li       r4, 0x1fc
	addi     r5, r5, lbl_8049639C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C7788:
	stw      r31, 0x18(r30)
	mr       r4, r30
	lwz      r3, pkEffectMgr@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C77B4
 * Size:	00002C
 */
void ToeTanekira::kill(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, pkEffectMgr@sda21(r13)
	lwz      r3, 0x58(r5)
	bl       del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C77E0
 * Size:	000044
 */
void TPkOneEmitterSimple::fade(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_803C7810
	lwz      r3, particleMgr@sda21(r13)
	bl       fade__11ParticleMgrFP14JPABaseEmitter
	li       r0, 0
	stw      r0, 8(r31)

lbl_803C7810:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7824
 * Size:	000008
 */
void @4 @efx::TPkOneEmitterSimple::executeAfter(JPABaseEmitter*)
{
	/*
	addi     r3, r3, -4
	b        executeAfter__Q23efx19TPkOneEmitterSimpleFP14JPABaseEmitter
	*/
}

/*
 * --INFO--
 * Address:	803C782C
 * Size:	000008
 */
@4 @efx::TPkOneEmitterSimple::~TPkOneEmitterSimple(void)
{
	/*
	addi     r3, r3, -4
	b        __dt__Q23efx19TPkOneEmitterSimpleFv
	*/
}
