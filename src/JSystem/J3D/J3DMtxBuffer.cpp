#include "types.h"

/*
    Generated from dpostproc

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sNoUseDrawMtx__12J3DMtxBuffer
    sNoUseDrawMtx__12J3DMtxBuffer:
        .skip 0x54
    .global sNoUseNrmMtx__12J3DMtxBuffer
    sNoUseNrmMtx__12J3DMtxBuffer:
        .skip 0x24

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sNoUseDrawMtxPtr__12J3DMtxBuffer
    sNoUseDrawMtxPtr__12J3DMtxBuffer:
        .4byte sNoUseDrawMtx__12J3DMtxBuffer
    .global sNoUseNrmMtxPtr__12J3DMtxBuffer
    sNoUseNrmMtxPtr__12J3DMtxBuffer:
        .4byte sNoUseNrmMtx__12J3DMtxBuffer
    .global J3DUnit01
    J3DUnit01:
        .4byte 0x00000000
        .float 1.0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516AF8
    lbl_80516AF8:
        .float 1.0
    .global lbl_80516AFC
    lbl_80516AFC:
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800888D8
 * Size:	000040
 */
void J3DMtxBuffer::initialize()
{
	/*
	li       r4, 0
	li       r0, 1
	stw      r4, 0(r3)
	stw      r4, 4(r3)
	stw      r4, 8(r3)
	stw      r4, 0xc(r3)
	stw      r4, 0x10(r3)
	stw      r4, 0x14(r3)
	stw      r4, 0x18(r3)
	stw      r4, 0x1c(r3)
	stw      r4, 0x20(r3)
	stw      r4, 0x24(r3)
	stw      r4, 0x28(r3)
	stw      r0, 0x2c(r3)
	stw      r4, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088918
 * Size:	00011C
 */
void J3DMtxBuffer::create(J3DModelData*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	addi     r0, r29, 0x10
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r30, 0x2c(r3)
	stw      r0, 0(r3)
	bl       createAnmMtx__12J3DMtxBufferFP12J3DModelData
	cmpwi    r3, 0
	beq      lbl_8008895C
	b        lbl_80088A14

lbl_8008895C:
	mr       r3, r28
	mr       r4, r29
	bl       createWeightEnvelopeMtx__12J3DMtxBufferFP12J3DModelData
	or.      r31, r3, r3
	beq      lbl_80088974
	b        lbl_80088A14

lbl_80088974:
	lwz      r3, 8(r29)
	rlwinm.  r0, r3, 0x18, 0x1f, 0x1f
	beq      lbl_8008898C
	mr       r3, r28
	bl       setNoUseDrawMtx__12J3DMtxBufferFv
	b        lbl_800889CC

lbl_8008898C:
	rlwinm   r0, r3, 0, 0x1b, 0x1b
	cmpwi    r0, 0x10
	beq      lbl_800889A8
	bge      lbl_800889B8
	cmpwi    r0, 0
	beq      lbl_800889B8
	b        lbl_800889B8

lbl_800889A8:
	mr       r3, r28
	bl       setNoUseDrawMtx__12J3DMtxBufferFv
	mr       r31, r3
	b        lbl_800889CC

lbl_800889B8:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       createDoubleDrawMtx__12J3DMtxBufferFP12J3DModelDataUl
	mr       r31, r3

lbl_800889CC:
	cmpwi    r31, 0
	beq      lbl_800889DC
	mr       r3, r31
	b        lbl_80088A14

lbl_800889DC:
	lwz      r0, 8(r29)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800889F4
	li       r0, 0
	sth      r0, 0xc(r29)
	b        lbl_80088A10

lbl_800889F4:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       createBumpMtxArray__12J3DMtxBufferFP12J3DModelDataUl
	or.      r31, r3, r3
	beq      lbl_80088A10
	b        lbl_80088A14

lbl_80088A10:
	mr       r3, r31

lbl_80088A14:
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

/*
 * --INFO--
 * Address:	80088A34
 * Size:	00005C
 */
void J3DMtxBuffer::createAnmMtx(J3DModelData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r3, 0x2c(r4)
	cmplwi   r3, 0
	beq      lbl_80088A74
	bl       __nwa__FUl
	stw      r3, 4(r30)
	lhz      r0, 0x2c(r31)
	mulli    r3, r0, 0x30
	bl       __nwa__FUl
	stw      r3, 0xc(r30)

lbl_80088A74:
	lwz      r0, 0x14(r1)
	li       r3, 0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088A90
 * Size:	00005C
 */
void J3DMtxBuffer::createWeightEnvelopeMtx(J3DModelData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r3, 0x2e(r4)
	cmplwi   r3, 0
	beq      lbl_80088AD0
	bl       __nwa__FUl
	stw      r3, 8(r30)
	lhz      r0, 0x2e(r31)
	mulli    r3, r0, 0x30
	bl       __nwa__FUl
	stw      r3, 0x10(r30)

lbl_80088AD0:
	lwz      r0, 0x14(r1)
	li       r3, 0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088AEC
 * Size:	00002C
 */
void J3DMtxBuffer::setNoUseDrawMtx()
{
	/*
	addi     r5, r13, sNoUseDrawMtxPtr__12J3DMtxBuffer@sda21
	addi     r4, r13, sNoUseNrmMtxPtr__12J3DMtxBuffer@sda21
	stw      r5, 0x18(r3)
	li       r0, 0
	stw      r5, 0x14(r3)
	stw      r4, 0x20(r3)
	stw      r4, 0x1c(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088B18
 * Size:	0000E0
 */
void J3DMtxBuffer::createDoubleDrawMtx(J3DModelData*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	or.      r27, r5, r5
	mr       r25, r3
	mr       r26, r4
	beq      lbl_80088B74
	mr       r30, r25
	slwi     r29, r27, 2
	li       r28, 0
	li       r31, 0

lbl_80088B48:
	mr       r3, r29
	bl       __nwa__FUl
	stw      r3, 0x14(r30)
	mr       r3, r29
	bl       __nwa__FUl
	stw      r3, 0x1c(r30)
	addi     r28, r28, 1
	cmpwi    r28, 2
	stw      r31, 0x24(r30)
	addi     r30, r30, 4
	blt      lbl_80088B48

lbl_80088B74:
	li       r28, 0
	mr       r30, r25

lbl_80088B7C:
	li       r31, 0
	li       r29, 0
	b        lbl_80088BC8

lbl_80088B88:
	lhz      r0, 0x44(r26)
	cmplwi   r0, 0
	beq      lbl_80088BC0
	mulli    r3, r0, 0x30
	li       r4, 0x20
	bl       __nwa__FUli
	lwz      r5, 0x14(r30)
	li       r4, 0x20
	stwx     r3, r5, r29
	lhz      r0, 0x44(r26)
	mulli    r3, r0, 0x24
	bl       __nwa__FUli
	lwz      r4, 0x1c(r30)
	stwx     r3, r4, r29

lbl_80088BC0:
	addi     r29, r29, 4
	addi     r31, r31, 1

lbl_80088BC8:
	cmplw    r31, r27
	blt      lbl_80088B88
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 2
	blt      lbl_80088B7C
	lmw      r25, 0x14(r1)
	li       r3, 0
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088BF8
 * Size:	000214
 */
void J3DMtxBuffer::createBumpMtxArray(J3DModelData*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r20, 0x10(r1)
	mr       r26, r4
	mr       r25, r3
	mr       r27, r5
	lwz      r0, 0x1c(r4)
	cmplwi   r0, 0
	bne      lbl_80088DF4
	lhz      r28, 0x5c(r26)
	li       r20, 0
	li       r31, 0
	li       r21, 0
	b        lbl_80088C74

lbl_80088C34:
	lwz      r3, 0x60(r26)
	rlwinm   r0, r21, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	lwz      r3, 0x28(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_80088C70
	lwz      r3, 8(r29)
	bl       countBumpMtxNum__8J3DShapeCFv
	add      r20, r20, r3
	addi     r31, r31, 1

lbl_80088C70:
	addi     r21, r21, 1

lbl_80088C74:
	clrlwi   r0, r21, 0x10
	cmplw    r0, r28
	blt      lbl_80088C34
	clrlwi.  r0, r20, 0x10
	beq      lbl_80088CB8
	cmplwi   r27, 0
	beq      lbl_80088CB8
	mr       r23, r25
	rlwinm   r24, r31, 2, 0xe, 0x1d
	li       r20, 0

lbl_80088C9C:
	mr       r3, r24
	bl       __nwa__FUl
	addi     r20, r20, 1
	stw      r3, 0x24(r23)
	cmpwi    r20, 2
	addi     r23, r23, 4
	blt      lbl_80088C9C

lbl_80088CB8:
	slwi     r20, r27, 2
	mr       r21, r25
	li       r30, 0

lbl_80088CC4:
	lhz      r24, 0x5c(r26)
	li       r29, 0
	li       r28, 0
	li       r22, 0
	b        lbl_80088D28

lbl_80088CD8:
	lwz      r3, 0x60(r26)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r23, r3, r0
	lwz      r3, 0x28(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_80088D24
	mr       r3, r20
	bl       __nwa__FUl
	lwz      r4, 0x24(r21)
	stwx     r3, r4, r22
	addi     r22, r22, 4
	lwz      r3, 8(r23)
	stw      r29, 0x64(r3)
	addi     r29, r29, 1

lbl_80088D24:
	addi     r28, r28, 1

lbl_80088D28:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r24
	blt      lbl_80088CD8
	addi     r30, r30, 1
	addi     r21, r21, 4
	cmpwi    r30, 2
	blt      lbl_80088CC4
	li       r24, 0
	mr       r22, r25

lbl_80088D4C:
	lhz      r23, 0x5c(r26)
	li       r25, 0
	li       r21, 0
	b        lbl_80088DC8

lbl_80088D5C:
	lwz      r3, 0x60(r26)
	rlwinm   r0, r25, 2, 0xe, 0x1d
	lwzx     r3, r3, r0
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_80088DC4
	li       r28, 0
	li       r20, 0
	b        lbl_80088DB8

lbl_80088D94:
	lhz      r0, 0x44(r26)
	li       r4, 0x20
	mulli    r3, r0, 0x24
	bl       __nwa__FUli
	lwz      r0, 0x24(r22)
	addi     r28, r28, 1
	lwzx     r4, r21, r0
	stwx     r3, r4, r20
	addi     r20, r20, 4

lbl_80088DB8:
	cmplw    r28, r27
	blt      lbl_80088D94
	addi     r21, r21, 4

lbl_80088DC4:
	addi     r25, r25, 1

lbl_80088DC8:
	clrlwi   r0, r25, 0x10
	cmplw    r0, r23
	blt      lbl_80088D5C
	addi     r24, r24, 1
	addi     r22, r22, 4
	cmpwi    r24, 2
	blt      lbl_80088D4C
	clrlwi.  r0, r31, 0x10
	beq      lbl_80088DF4
	li       r0, 1
	sth      r0, 0xc(r26)

lbl_80088DF4:
	lmw      r20, 0x10(r1)
	li       r3, 0
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80088E0C
 * Size:	000220
 */
void J3DMtxBuffer::calcWeightEnvelopeMtx()
{
	/*
	stwu     r1, -0xa0(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stfd     f25, 0x30(r1)
	psq_st   f25, 56(r1), 0, qr0
	stfd     f24, 0x20(r1)
	psq_st   f24, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	addi     r4, r13, J3DUnit01@sda21
	lwz      r6, 0(r3)
	psq_l    f24, 0(r4), 0, qr0
	li       r31, -1
	lwz      r5, 0x24(r6)
	li       r8, -48
	lwz      r4, 0x28(r6)
	ps_merge00 f11, f24, f24
	ps_merge00 f13, f24, f24
	lhz      r7, 0x1e(r6)
	ps_merge00 f30, f24, f24
	addi     r30, r5, -2
	addi     r29, r4, -4
	b        lbl_80088FC8

lbl_80088E94:
	lwz      r6, 8(r3)
	li       r4, 1
	ps_merge00 f10, f24, f24
	clrlwi   r0, r31, 0x10
	stbx     r4, r6, r31
	ps_merge00 f12, f24, f24
	ps_merge00 f31, f24, f24
	li       r11, 0
	lwz      r4, 0(r3)
	lwz      r5, 0x10(r3)
	lwz      r4, 0x20(r4)
	add      r9, r5, r8
	lbzx     r12, r4, r0

lbl_80088EC8:
	lhzu     r10, 2(r30)
	addi     r11, r11, 1
	lwz      r5, 0(r3)
	cmpw     r11, r12
	mulli    r4, r10, 0x30
	lwz      r0, 0xc(r3)
	lwz      r5, 0x2c(r5)
	lfsu     f0, 4(r29)
	add      r5, r5, r4
	add      r4, r0, r4
	psq_l    f2, 0(r5), 0, qr0
	psq_l    f1, 0(r4), 0, qr0
	psq_l    f3, 16(r4), 0, qr0
	ps_muls0 f29, f2, f1
	psq_l    f8, 16(r5), 0, qr0
	ps_muls0 f27, f2, f3
	psq_l    f5, 32(r4), 0, qr0
	psq_l    f7, 8(r5), 0, qr0
	ps_muls0 f25, f2, f5
	ps_madds1 f29, f8, f1, f29
	psq_l    f9, 32(r5), 0, qr0
	psq_l    f2, 8(r4), 0, qr0
	ps_madds1 f27, f8, f3, f27
	psq_l    f4, 24(r4), 0, qr0
	ps_madds0 f29, f9, f2, f29
	ps_madds1 f25, f8, f5, f25
	psq_l    f6, 40(r4), 0, qr0
	ps_madds0 f27, f9, f4, f27
	psq_l    f8, 24(r5), 0, qr0
	ps_muls0 f28, f7, f1
	ps_muls0 f26, f7, f3
	ps_madds0 f25, f9, f6, f25
	psq_l    f9, 40(r5), 0, qr0
	ps_madds0 f10, f29, f0, f10
	ps_muls0 f7, f7, f5
	ps_madds1 f28, f8, f1, f28
	ps_madds1 f26, f8, f3, f26
	psq_st   f10, 0(r9), 0, qr0
	ps_madds0 f12, f27, f0, f12
	ps_madds1 f7, f8, f5, f7
	ps_madds0 f28, f9, f2, f28
	ps_madds0 f26, f9, f4, f26
	psq_st   f12, 16(r9), 0, qr0
	ps_madds0 f31, f25, f0, f31
	ps_madds0 f7, f9, f6, f7
	ps_madd  f28, f24, f2, f28
	psq_st   f31, 32(r9), 0, qr0
	ps_madd  f26, f24, f4, f26
	ps_madd  f7, f24, f6, f7
	lwz      r4, 4(r3)
	ps_madds0 f11, f28, f0, f11
	lbzx     r5, r6, r31
	ps_madds0 f13, f26, f0, f13
	lbzx     r0, r4, r10
	ps_madds0 f30, f7, f0, f30
	and      r0, r5, r0
	stbx     r0, r6, r31
	blt      lbl_80088EC8
	psq_st   f11, 8(r9), 0, qr0
	ps_merge00 f11, f24, f24
	psq_st   f13, 24(r9), 0, qr0
	ps_merge00 f13, f24, f24
	psq_st   f30, 40(r9), 0, qr0
	ps_merge00 f30, f24, f24

lbl_80088FC8:
	addi     r31, r31, 1
	addi     r8, r8, 0x30
	cmpw     r31, r7
	blt      lbl_80088E94
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	psq_l    f25, 56(r1), 0, qr0
	lfd      f25, 0x30(r1)
	psq_l    f24, 40(r1), 0, qr0
	lfd      f24, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008902C
 * Size:	000304
 */
void J3DMtxBuffer::calcDrawMtx(unsigned long, const Vec&, const float (&)[3][4])
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	cmpwi    r4, 1
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	mr       r28, r3
	beq      lbl_80089118
	bge      lbl_80089064
	cmpwi    r4, 0
	bge      lbl_80089070
	b        lbl_80089310

lbl_80089064:
	cmpwi    r4, 3
	bge      lbl_80089310
	b        lbl_800891D0

lbl_80089070:
	lwz      r3, 0(r28)
	lis      r4, j3dSys@ha
	addi     r0, r4, j3dSys@l
	li       r29, 0
	lhz      r31, 0x36(r3)
	mr       r30, r0
	b        lbl_800890D0

lbl_8008908C:
	lwz      r4, 0(r28)
	clrlwi   r0, r29, 0x10
	lwz      r3, 0x30(r28)
	rlwinm   r6, r29, 1, 0xf, 0x1e
	lwz      r7, 0x3c(r4)
	mulli    r0, r0, 0x30
	lwz      r5, 0x18(r28)
	slwi     r4, r3, 2
	lhzx     r6, r7, r6
	mr       r3, r30
	lwzx     r4, r5, r4
	mulli    r6, r6, 0x30
	lwz      r7, 0xc(r28)
	add      r5, r4, r0
	add      r4, r7, r6
	bl       PSMTXConcat
	addi     r29, r29, 1

lbl_800890D0:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r31
	blt      lbl_8008908C
	lwz      r7, 0(r28)
	lhz      r0, 0x34(r7)
	cmplw    r0, r31
	ble      lbl_80089310
	lwz      r4, 0x30(r28)
	mulli    r0, r31, 0x30
	lwz      r6, 0x18(r28)
	mr       r3, r30
	slwi     r5, r4, 2
	lwz      r4, 0x10(r28)
	lwzx     r5, r6, r5
	lhz      r6, 0x1e(r7)
	add      r5, r5, r0
	bl       J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl
	b        lbl_80089310

lbl_80089118:
	lwz      r3, 0(r28)
	li       r30, 0
	lhz      r29, 0x36(r3)
	b        lbl_80089168

lbl_80089128:
	lwz      r4, 0(r28)
	clrlwi   r0, r30, 0x10
	lwz      r3, 0x30(r28)
	rlwinm   r5, r30, 1, 0xf, 0x1e
	lwz      r6, 0x3c(r4)
	mulli    r0, r0, 0x30
	lwz      r4, 0x18(r28)
	slwi     r3, r3, 2
	lhzx     r5, r6, r5
	lwzx     r3, r4, r3
	mulli    r5, r5, 0x30
	lwz      r6, 0xc(r28)
	add      r4, r3, r0
	add      r3, r6, r5
	bl       PSMTXCopy
	addi     r30, r30, 1

lbl_80089168:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r29
	blt      lbl_80089128
	lwz      r3, 0(r28)
	li       r30, 0
	lhz      r29, 0x36(r3)
	b        lbl_800891C0

lbl_80089184:
	lwz      r3, 0(r28)
	clrlwi   r6, r30, 0x10
	lwz      r5, 0x30(r28)
	mulli    r0, r6, 0x30
	lhz      r4, 0x36(r3)
	lwz      r3, 0x10(r28)
	slwi     r5, r5, 2
	add      r4, r6, r4
	lwz      r6, 0x18(r28)
	mulli    r4, r4, 0x30
	add      r3, r3, r0
	lwzx     r0, r6, r5
	add      r4, r0, r4
	bl       PSMTXCopy
	addi     r30, r30, 1

lbl_800891C0:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r29
	blt      lbl_80089184
	b        lbl_80089310

lbl_800891D0:
	lfs      f2, 0(r5)
	lis      r3, j3dSys@ha
	lfs      f1, 0x10(r6)
	addi     r3, r3, j3dSys@l
	lfs      f3, 0(r6)
	addi     r4, r1, 8
	fmuls    f7, f1, f2
	lfs      f0, 0x20(r6)
	fmuls    f13, f3, f2
	lfs      f1, 4(r6)
	fmuls    f3, f0, f2
	lfs      f12, 4(r5)
	fmuls    f11, f1, f12
	lfs      f10, 8(r5)
	lfs      f2, 8(r6)
	addi     r5, r1, 0x38
	lfs      f1, 0x14(r6)
	fmuls    f9, f2, f10
	fmuls    f6, f1, f12
	lfs      f5, 0x18(r6)
	lfs      f2, 0x24(r6)
	lfs      f1, 0x28(r6)
	fmuls    f5, f5, f10
	fmuls    f2, f2, f12
	fmuls    f1, f1, f10
	lfs      f8, 0xc(r6)
	lfs      f4, 0x1c(r6)
	lfs      f0, 0x2c(r6)
	stfs     f13, 8(r1)
	stfs     f11, 0xc(r1)
	stfs     f9, 0x10(r1)
	stfs     f8, 0x14(r1)
	stfs     f7, 0x18(r1)
	stfs     f6, 0x1c(r1)
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       PSMTXConcat
	lwz      r3, 0(r28)
	li       r30, 0
	lhz      r29, 0x36(r3)
	b        lbl_800892C8

lbl_80089284:
	lwz      r4, 0(r28)
	clrlwi   r0, r30, 0x10
	lwz      r3, 0x30(r28)
	rlwinm   r6, r30, 1, 0xf, 0x1e
	lwz      r7, 0x3c(r4)
	mulli    r0, r0, 0x30
	lwz      r5, 0x18(r28)
	slwi     r4, r3, 2
	lhzx     r6, r7, r6
	addi     r3, r1, 0x38
	lwzx     r4, r5, r4
	mulli    r6, r6, 0x30
	lwz      r7, 0xc(r28)
	add      r5, r4, r0
	add      r4, r7, r6
	bl       PSMTXConcat
	addi     r30, r30, 1

lbl_800892C8:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r29
	blt      lbl_80089284
	lwz      r7, 0(r28)
	lhz      r3, 0x36(r7)
	lhz      r0, 0x34(r7)
	cmplw    r0, r3
	ble      lbl_80089310
	lwz      r4, 0x30(r28)
	mulli    r0, r3, 0x30
	lwz      r6, 0x18(r28)
	addi     r3, r1, 0x38
	slwi     r5, r4, 2
	lwz      r4, 0x10(r28)
	lwzx     r5, r6, r5
	lhz      r6, 0x1e(r7)
	add      r5, r5, r0
	bl       J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl

lbl_80089310:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80089330
 * Size:	0001BC
 */
void J3DMtxBuffer::calcNrmMtx()
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
	lwz      r3, 0(r3)
	lhz      r31, 0x34(r3)
	b        lbl_800894C4

lbl_8008935C:
	lwz      r4, 0(r29)
	clrlwi   r0, r30, 0x10
	lwz      r3, 0x38(r4)
	lbzx     r3, r3, r0
	cmplwi   r3, 0
	bne      lbl_8008941C
	lwz      r4, 0x3c(r4)
	slwi     r3, r0, 1
	lwz      r5, 4(r29)
	lhzx     r3, r4, r3
	lbzx     r3, r5, r3
	cmplwi   r3, 1
	bne      lbl_800893EC
	lwz      r3, 0x30(r29)
	mulli    r4, r0, 0x30
	lwz      r5, 0x18(r29)
	slwi     r6, r3, 2
	lwz      r3, 0x20(r29)
	lwzx     r5, r5, r6
	mulli    r0, r0, 0x24
	lwzx     r3, r3, r6
	add      r4, r5, r4
	psq_l    f5, 0(r4), 0, qr0
	add      r3, r3, r0
	lfs      f4, 8(r4)
	psq_l    f3, 16(r4), 0, qr0
	lfs      f2, 0x18(r4)
	psq_l    f1, 32(r4), 0, qr0
	lfs      f0, 0x28(r4)
	psq_st   f5, 0(r3), 0, qr0
	stfs     f4, 8(r3)
	psq_st   f3, 12(r3), 0, qr0
	stfs     f2, 0x14(r3)
	psq_st   f1, 24(r3), 0, qr0
	stfs     f0, 0x20(r3)
	b        lbl_800894C0

lbl_800893EC:
	lwz      r3, 0x30(r29)
	mulli    r5, r0, 0x30
	lwz      r4, 0x18(r29)
	slwi     r7, r3, 2
	lwz      r3, 0x20(r29)
	lwzx     r6, r4, r7
	mulli    r0, r0, 0x24
	lwzx     r4, r3, r7
	add      r3, r6, r5
	add      r4, r4, r0
	bl       J3DPSCalcInverseTranspose__FPA4_fPA3_f
	b        lbl_800894C0

lbl_8008941C:
	lwz      r4, 0x3c(r4)
	slwi     r3, r0, 1
	lwz      r5, 8(r29)
	lhzx     r3, r4, r3
	lbzx     r3, r5, r3
	cmplwi   r3, 1
	bne      lbl_80089494
	lwz      r3, 0x30(r29)
	mulli    r4, r0, 0x30
	lwz      r5, 0x18(r29)
	slwi     r6, r3, 2
	lwz      r3, 0x20(r29)
	lwzx     r5, r5, r6
	mulli    r0, r0, 0x24
	lwzx     r3, r3, r6
	add      r4, r5, r4
	psq_l    f5, 0(r4), 0, qr0
	add      r3, r3, r0
	lfs      f4, 8(r4)
	psq_l    f3, 16(r4), 0, qr0
	lfs      f2, 0x18(r4)
	psq_l    f1, 32(r4), 0, qr0
	lfs      f0, 0x28(r4)
	psq_st   f5, 0(r3), 0, qr0
	stfs     f4, 8(r3)
	psq_st   f3, 12(r3), 0, qr0
	stfs     f2, 0x14(r3)
	psq_st   f1, 24(r3), 0, qr0
	stfs     f0, 0x20(r3)
	b        lbl_800894C0

lbl_80089494:
	lwz      r3, 0x30(r29)
	mulli    r5, r0, 0x30
	lwz      r4, 0x18(r29)
	slwi     r7, r3, 2
	lwz      r3, 0x20(r29)
	lwzx     r6, r4, r7
	mulli    r0, r0, 0x24
	lwzx     r4, r3, r7
	add      r3, r6, r5
	add      r4, r4, r0
	bl       J3DPSCalcInverseTranspose__FPA4_fPA3_f

lbl_800894C0:
	addi     r30, r30, 1

lbl_800894C4:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_8008935C
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
 * Address:	800894EC
 * Size:	000178
 */
void J3DMtxBuffer::calcBBoardMtx()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r3
	li       r29, 0
	lwz      r3, 0(r3)
	lhz      r31, 0x34(r3)
	b        lbl_80089644

lbl_80089510:
	lwz      r4, 0(r28)
	clrlwi   r30, r29, 0x10
	lwz      r3, 0x38(r4)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80089640
	lwz      r3, 0x3c(r4)
	slwi     r0, r30, 1
	lwz      r4, 0x18(r4)
	lhzx     r0, r3, r0
	slwi     r0, r0, 2
	lwzx     r3, r4, r0
	lbz      r0, 0x16(r3)
	rlwinm   r0, r0, 0x1c, 0x1c, 0x1f
	cmplwi   r0, 1
	bne      lbl_800895F8
	lwz      r3, 0x30(r28)
	mulli    r0, r30, 0x30
	lwz      r4, 0x18(r28)
	slwi     r3, r3, 2
	lwzx     r3, r4, r3
	add      r27, r3, r0
	mr       r3, r27
	bl       J3DCalcBBoardMtx__FPA4_f
	lwz      r3, 0x30(r28)
	mulli    r0, r30, 0x24
	lwz      r4, 0x20(r28)
	slwi     r3, r3, 2
	lfs      f0, lbl_80516AFC@sda21(r2)
	lfs      f1, 0(r27)
	lwzx     r3, r4, r3
	fcmpu    cr0, f0, f1
	add      r3, r3, r0
	beq      lbl_800895A0
	lfs      f0, lbl_80516AF8@sda21(r2)
	fdivs    f0, f0, f1

lbl_800895A0:
	stfs     f0, 0(r3)
	lfs      f0, lbl_80516AFC@sda21(r2)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	lfs      f1, 0x14(r27)
	fcmpu    cr0, f0, f1
	beq      lbl_800895C8
	lfs      f0, lbl_80516AF8@sda21(r2)
	fdivs    f0, f0, f1

lbl_800895C8:
	stfs     f0, 0x10(r3)
	lfs      f0, lbl_80516AFC@sda21(r2)
	stfs     f0, 0x14(r3)
	stfs     f0, 0x18(r3)
	stfs     f0, 0x1c(r3)
	lfs      f1, 0x28(r27)
	fcmpu    cr0, f0, f1
	beq      lbl_800895F0
	lfs      f0, lbl_80516AF8@sda21(r2)
	fdivs    f0, f0, f1

lbl_800895F0:
	stfs     f0, 0x20(r3)
	b        lbl_80089640

lbl_800895F8:
	cmplwi   r0, 2
	bne      lbl_80089640
	lwz      r3, 0x30(r28)
	mulli    r0, r30, 0x30
	lwz      r4, 0x18(r28)
	slwi     r3, r3, 2
	lwzx     r3, r4, r3
	add      r27, r3, r0
	mr       r3, r27
	bl       J3DCalcYBBoardMtx__FPA4_f
	lwz      r4, 0x30(r28)
	mulli    r0, r30, 0x24
	lwz      r5, 0x20(r28)
	mr       r3, r27
	slwi     r4, r4, 2
	lwzx     r4, r5, r4
	add      r4, r4, r0
	bl       J3DPSCalcInverseTranspose__FPA4_fPA3_f

lbl_80089640:
	addi     r29, r29, 1

lbl_80089644:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r31
	blt      lbl_80089510
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
