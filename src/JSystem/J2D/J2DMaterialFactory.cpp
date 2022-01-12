#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805168D8
    lbl_805168D8:
        .4byte 0xFFFFFFFF
    .global lbl_805168DC
    lbl_805168DC:
        .4byte 0xFFFFFFFF

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520E40
    lbl_80520E40:
        .skip 0x4
    .global lbl_80520E44
    lbl_80520E44:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	800532E8
 * Size:	0001C4
 */
J2DMaterialFactory::J2DMaterialFactory(const J2DMaterialBlock&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lhz      r0, 8(r4)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r4, 0xc(r4)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	sth      r0, 0(r30)
	bl       "JSUConvertOffsetToPtr<19J2DMaterialInitData>__FPCvPCv"
	stw      r3, 4(r30)
	mr       r3, r31
	lwz      r4, 0x10(r31)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	lwz      r4, 0x18(r31)
	stw      r3, 8(r30)
	cmplwi   r4, 0
	beq      lbl_80053358
	lwz      r0, 0x14(r31)
	subf     r0, r0, r4
	cmplwi   r0, 4
	ble      lbl_80053358
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<14J2DIndInitData>__FPCvPCv"
	stw      r3, 0xc(r30)
	b        lbl_80053360

lbl_80053358:
	li       r0, 0
	stw      r0, 0xc(r30)

lbl_80053360:
	lwz      r4, 0x1c(r31)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<11_GXCullMode>__FPCvPCv"
	stw      r3, 0x30(r30)
	mr       r3, r31
	lwz      r4, 0x20(r31)
	bl       "JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv"
	stw      r3, 0x10(r30)
	mr       r3, r31
	lwz      r4, 0x24(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x14(r30)
	mr       r3, r31
	lwz      r4, 0x28(r31)
	bl       "JSUConvertOffsetToPtr<16J2DColorChanInfo>__FPCvPCv"
	stw      r3, 0x18(r30)
	mr       r3, r31
	lwz      r4, 0x2c(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x1c(r30)
	mr       r3, r31
	lwz      r4, 0x30(r31)
	bl       "JSUConvertOffsetToPtr<15J2DTexCoordInfo>__FPCvPCv"
	stw      r3, 0x20(r30)
	mr       r3, r31
	lwz      r4, 0x34(r31)
	bl       "JSUConvertOffsetToPtr<13J2DTexMtxInfo>__FPCvPCv"
	stw      r3, 0x24(r30)
	mr       r3, r31
	lwz      r4, 0x38(r31)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	stw      r3, 0x28(r30)
	mr       r3, r31
	lwz      r4, 0x3c(r31)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	stw      r3, 0x2c(r30)
	mr       r3, r31
	lwz      r4, 0x40(r31)
	bl       "JSUConvertOffsetToPtr<15J2DTevOrderInfo>__FPCvPCv"
	stw      r3, 0x34(r30)
	mr       r3, r31
	lwz      r4, 0x44(r31)
	bl       "JSUConvertOffsetToPtr<11_GXColorS10>__FPCvPCv"
	stw      r3, 0x38(r30)
	mr       r3, r31
	lwz      r4, 0x48(r31)
	bl       "JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv"
	stw      r3, 0x3c(r30)
	mr       r3, r31
	lwz      r4, 0x4c(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x40(r30)
	mr       r3, r31
	lwz      r4, 0x50(r31)
	bl       "JSUConvertOffsetToPtr<15J2DTevStageInfo>__FPCvPCv"
	stw      r3, 0x44(r30)
	mr       r3, r31
	lwz      r4, 0x54(r31)
	bl       "JSUConvertOffsetToPtr<18J2DTevSwapModeInfo>__FPCvPCv"
	stw      r3, 0x48(r30)
	mr       r3, r31
	lwz      r4, 0x58(r31)
	bl       "JSUConvertOffsetToPtr<23J2DTevSwapModeTableInfo>__FPCvPCv"
	stw      r3, 0x4c(r30)
	mr       r3, r31
	lwz      r4, 0x5c(r31)
	bl       "JSUConvertOffsetToPtr<16J2DAlphaCompInfo>__FPCvPCv"
	stw      r3, 0x50(r30)
	mr       r3, r31
	lwz      r4, 0x60(r31)
	bl       "JSUConvertOffsetToPtr<12J2DBlendInfo>__FPCvPCv"
	stw      r3, 0x54(r30)
	mr       r3, r31
	lwz      r4, 0x64(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x58(r30)
	mr       r3, r30
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
 * Address:	800534AC
 * Size:	0009C8
 */
void J2DMaterialFactory::create(J2DMaterial*, int, unsigned long, J2DResReference*, J2DResReference*, JKRArchive*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x3D0(r1)
	  mflr      r0
	  li        r10, 0
	  stw       r0, 0x3D4(r1)
	  stmw      r19, 0x39C(r1)
	  mr        r30, r3
	  lwz       r3, 0x8(r3)
	  rlwinm    r24,r5,1,0,30
	  mr        r29, r5
	  lwz       r5, 0x4(r30)
	  mr        r31, r4
	  mr        r27, r7
	  mr        r23, r8
	  mr        r26, r9
	  lhzx      r0, r3, r24
	  mr        r3, r10
	  mulli     r0, r0, 0xE8
	  add       r4, r5, r0
	  lbz       r0, 0x4(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x5C
	  lwz       r3, 0x40(r30)
	  lbzx      r3, r3, r0

	.loc_0x5C:
	  lhz       r0, 0x38(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x6C
	  li        r10, 0x1

	.loc_0x6C:
	  lhz       r0, 0x3A(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x7C
	  addi      r10, r10, 0x1

	.loc_0x7C:
	  lhz       r0, 0x3C(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x8C
	  addi      r10, r10, 0x1

	.loc_0x8C:
	  lhz       r0, 0x3E(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x9C
	  addi      r10, r10, 0x1

	.loc_0x9C:
	  lhz       r0, 0x40(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xAC
	  addi      r10, r10, 0x1

	.loc_0xAC:
	  lhz       r0, 0x42(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xBC
	  addi      r10, r10, 0x1

	.loc_0xBC:
	  lhz       r0, 0x44(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xCC
	  addi      r10, r10, 0x1

	.loc_0xCC:
	  lhz       r0, 0x46(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xDC
	  addi      r10, r10, 0x1

	.loc_0xDC:
	  cmplw     r3, r10
	  beq-      .loc_0xFC
	  cmplwi    r10, 0
	  beq-      .loc_0xFC
	  cmplw     r3, r10
	  ble-      .loc_0x100
	  mr        r10, r3
	  b         .loc_0x100

	.loc_0xFC:
	  mr        r10, r3

	.loc_0x100:
	  rlwinm    r0,r6,16,27,31
	  rlwinm    r4,r6,0,11,15
	  cmplw     r10, r0
	  mr        r28, r0
	  ble-      .loc_0x118
	  mr        r28, r10

	.loc_0x118:
	  cmplwi    r28, 0x8
	  li        r25, 0x8
	  bgt-      .loc_0x128
	  mr        r25, r28

	.loc_0x128:
	  neg       r0, r4
	  rlwinm    r5,r6,8,31,31
	  or        r0, r0, r4
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r0,1,31,31
	  srawi     r0, r0, 0x1F
	  mr        r19, r4
	  and       r20, r5, r0
	  bl        -0x1328
	  stw       r3, 0x70(r31)
	  mr        r3, r20
	  mr        r4, r19
	  bl        -0x1184
	  stw       r3, 0x74(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0xC(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r24
	  mulli     r0, r0, 0xE8
	  lbzx      r0, r6, r0
	  stw       r0, 0x8(r31)
	  bl        0x8E0
	  stb       r3, 0x18(r31)
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xAF4
	  stb       r3, 0x22(r31)
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x94C
	  stw       r3, 0x28(r31)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  bl        0x120C
	  lwz       r0, 0x4C(r1)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x44
	  stw       r0, 0x50(r1)
	  lhz       r0, 0x50(r1)
	  lbz       r6, 0x52(r1)
	  sth       r0, 0x78(r31)
	  lbz       r0, 0x53(r1)
	  stb       r6, 0x7A(r31)
	  stb       r0, 0x7B(r31)
	  bl        0x1258
	  lwz       r0, 0x44(r1)
	  mr        r3, r30
	  mr        r4, r29
	  stw       r0, 0x48(r1)
	  lbz       r5, 0x48(r1)
	  lbz       r0, 0x49(r1)
	  stb       r5, 0x7C(r31)
	  lbz       r5, 0x4A(r1)
	  stb       r0, 0x7D(r31)
	  lbz       r0, 0x4B(r1)
	  stb       r5, 0x7E(r31)
	  stb       r0, 0x7F(r31)
	  bl        0x12A0
	  stb       r3, 0x80(r31)
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r19, 0x70(r31)
	  bl        0xCC8
	  lwz       r12, 0x0(r19)
	  mr        r4, r3
	  mr        r3, r19
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  lwz       r4, 0x4(r30)
	  li        r22, 0
	  lhzx      r3, r3, r24
	  mulli     r3, r3, 0xE8
	  add       r3, r4, r3
	  lbz       r3, 0x6(r3)
	  stb       r3, 0xF(r31)
	  stb       r0, 0x294(r1)
	  b         .loc_0x360

	.loc_0x278:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xA48
	  mr        r0, r3
	  mr        r3, r27
	  mr        r21, r0
	  mr        r4, r21
	  bl        -0x9DB8
	  mr.       r19, r3
	  li        r5, 0
	  beq-      .loc_0x324
	  lis       r5, 0x5449
	  mr        r4, r19
	  mr        r6, r26
	  addi      r3, r1, 0x294
	  addi      r5, r5, 0x4D47
	  bl        -0x21234
	  mr.       r5, r3
	  bne-      .loc_0x2E8
	  cmplwi    r26, 0
	  beq-      .loc_0x2E8
	  lis       r5, 0x5449
	  mr        r4, r19
	  addi      r3, r1, 0x294
	  li        r6, 0
	  addi      r5, r5, 0x4D47
	  bl        -0x2125C
	  mr        r5, r3

	.loc_0x2E8:
	  cmplwi    r5, 0
	  bne-      .loc_0x324
	  lwz       r0, -0x76B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x324
	  mr        r3, r27
	  mr        r4, r21
	  bl        -0x9DF4
	  mr        r4, r3
	  addi      r3, r1, 0x190
	  bl        0x7709C
	  lwz       r3, -0x76B0(r13)
	  addi      r4, r1, 0x190
	  bl        -0x9F6C
	  mr        r5, r3

	.loc_0x324:
	  lwz       r3, 0x70(r31)
	  rlwinm    r19,r22,0,24,31
	  mr        r4, r19
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x70(r31)
	  mr        r4, r19
	  mr        r5, r21
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x1

	.loc_0x360:
	  rlwinm    r5,r22,0,24,31
	  cmplw     r5, r25
	  blt+      .loc_0x278
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x99C
	  mr        r0, r3
	  lwz       r3, 0x70(r31)
	  mr        r4, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r23
	  bl        -0x9ED4
	  mr.       r19, r3
	  li        r4, 0
	  beq-      .loc_0x454
	  lis       r5, 0x464F
	  mr        r4, r19
	  mr        r6, r26
	  addi      r3, r1, 0x294
	  addi      r5, r5, 0x4E54
	  bl        -0x21350
	  mr.       r4, r3
	  bne-      .loc_0x404
	  cmplwi    r26, 0
	  beq-      .loc_0x404
	  lis       r5, 0x464F
	  mr        r4, r19
	  addi      r3, r1, 0x294
	  li        r6, 0
	  addi      r5, r5, 0x4E54
	  bl        -0x21378
	  mr        r4, r3

	.loc_0x404:
	  cmplwi    r4, 0
	  bne-      .loc_0x454
	  lwz       r0, -0x76B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x454
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r23
	  bl        -0x9F24
	  mr        r4, r3
	  addi      r3, r1, 0x8C
	  bl        0x76F6C
	  lwz       r3, -0x76B0(r13)
	  addi      r4, r1, 0x8C
	  bl        -0xA09C
	  mr        r4, r3

	.loc_0x454:
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x4A8

	.loc_0x470:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  bl        0x8D4
	  lwz       r0, 0x3C(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x40
	  stw       r0, 0x40(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x4A8:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x470
	  lwz       r22, 0x4(r30)
	  li        r26, 0
	  lwz       r21, 0x8(r30)
	  b         .loc_0x59C

	.loc_0x4C4:
	  lhzx      r0, r24, r21
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x60
	  mulli     r0, r0, 0xE8
	  add       r27, r22, r0
	  bl        0xA54
	  lwz       r3, 0x60(r1)
	  rlwinm    r23,r26,0,24,31
	  lwz       r0, 0x64(r1)
	  mr        r4, r23
	  stw       r3, 0x68(r1)
	  addi      r5, r1, 0x68
	  stw       r0, 0x6C(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r23,1,0,30
	  addi      r25, r3, 0xBA
	  lhzx      r0, r27, r25
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x598
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x48(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r23
	  lbzx      r19, r5, r0
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r19,2,22,29
	  lwz       r5, 0x48(r30)
	  mr        r4, r23
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x70(r31)
	  lhzx      r0, r27, r25
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x60(r12)
	  lbzx      r19, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r19
	  stb       r0, 0x7(r3)

	.loc_0x598:
	  addi      r26, r26, 0x1

	.loc_0x59C:
	  rlwinm    r6,r26,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x4C4
	  li        r19, 0
	  b         .loc_0x5EC

	.loc_0x5B0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r19,0,24,31
	  bl        0x89C
	  lwz       r0, 0x34(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x38
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x5EC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5B0
	  li        r21, 0
	  b         .loc_0x638

	.loc_0x600:
	  lwz       r19, 0x70(r31)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x58
	  rlwinm    r6,r21,0,24,31
	  bl        0x7B0
	  mr        r3, r19
	  rlwinm    r4,r21,0,24,31
	  lwz       r12, 0x0(r19)
	  addi      r5, r1, 0x58
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x638:
	  rlwinm    r0,r21,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x600
	  li        r19, 0
	  b         .loc_0x688

	.loc_0x64C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r19,0,24,31
	  bl        0x994
	  lbz       r0, 0x8(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0xC
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x688:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x64C
	  li        r19, 0
	  b         .loc_0x6E4

	.loc_0x69C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r19,0,24,31
	  bl        .loc_0x9C8
	  lwz       r3, 0x2C(r1)
	  rlwinm    r0,r19,2,22,29
	  add       r4, r31, r0
	  addi      r19, r19, 0x1
	  stw       r3, 0x30(r1)
	  lbz       r3, 0x30(r1)
	  lbz       r0, 0x31(r1)
	  stb       r3, 0x10(r4)
	  lbz       r3, 0x32(r1)
	  stb       r0, 0x11(r4)
	  lbz       r0, 0x33(r1)
	  stb       r3, 0x12(r4)
	  stb       r0, 0x13(r4)

	.loc_0x6E4:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x69C
	  li        r19, 0
	  b         .loc_0x720

	.loc_0x6F8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x1C
	  rlwinm    r6,r19,0,24,31
	  bl        0x394
	  rlwinm    r0,r19,1,23,30
	  lhz       r4, 0x1C(r1)
	  add       r3, r31, r0
	  addi      r19, r19, 0x1
	  sth       r4, 0x1A(r3)

	.loc_0x720:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x6F8
	  li        r19, 0
	  b         .loc_0x774

	.loc_0x734:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x28
	  rlwinm    r6,r19,0,24,31
	  bl        0x3E4
	  lwz       r3, 0x28(r1)
	  rlwinm    r0,r19,2,22,29
	  add       r4, r31, r0
	  addi      r19, r19, 0x1
	  stw       r3, 0x54(r1)
	  lbz       r0, 0x54(r1)
	  lbz       r3, 0x55(r1)
	  stb       r0, 0x2C(r4)
	  lbz       r0, 0x56(r1)
	  stb       r3, 0x2D(r4)
	  stb       r0, 0x2E(r4)

	.loc_0x774:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x734
	  li        r19, 0
	  b         .loc_0x7A8

	.loc_0x788:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0x408
	  rlwinm    r0,r19,2,22,29
	  addi      r19, r19, 0x1
	  add       r4, r31, r0
	  stw       r3, 0x4C(r4)

	.loc_0x7A8:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x788
	  lwz       r3, 0x8(r30)
	  li        r21, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r24
	  mulli     r0, r0, 0xE8
	  add       r19, r4, r0
	  b         .loc_0x7F4

	.loc_0x7D0:
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r0, r4, 0x52
	  lwz       r12, 0x0(r3)
	  lbzx      r5, r19, r0
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x7F4:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x7D0
	  li        r21, 0
	  b         .loc_0x82C

	.loc_0x808:
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r0, r4, 0x62
	  lwz       r12, 0x0(r3)
	  lbzx      r5, r19, r0
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x82C:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x808
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84C
	  cmpwi     r20, 0
	  beq-      .loc_0x9B0

	.loc_0x84C:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x838
	  mr        r0, r3
	  lwz       r3, 0x74(r31)
	  mr        r19, r0
	  lwz       r12, 0x0(r3)
	  mr        r4, r19
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r19,0,24,31
	  li        r21, 0
	  b         .loc_0x8B8

	.loc_0x884:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x70
	  rlwinm    r6,r21,0,24,31
	  bl        0x890
	  lwz       r3, 0x74(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r5, r1, 0x70
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x8B8:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x884
	  rlwinm    r20,r19,0,24,31
	  li        r21, 0
	  b         .loc_0x90C

	.loc_0x8D0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  rlwinm    r6,r21,0,24,31
	  bl        0x7DC
	  lhz       r0, 0x14(r1)
	  rlwinm    r4,r21,0,24,31
	  addi      r5, r1, 0x18
	  sth       r0, 0x18(r1)
	  lwz       r3, 0x74(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x90C:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8D0
	  rlwinm    r20,r19,0,24,31
	  li        r19, 0
	  b         .loc_0x958

	.loc_0x924:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x10
	  rlwinm    r6,r19,0,24,31
	  bl        0xA28
	  lwz       r3, 0x74(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x10
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x958:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x924
	  li        r19, 0
	  b         .loc_0x9A4

	.loc_0x96C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  bl        0x898
	  lwz       r0, 0x20(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x24
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x9A4:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x96C

	.loc_0x9B0:
	  mr        r3, r31
	  lmw       r19, 0x39C(r1)
	  lwz       r0, 0x3D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x3D0
	  blr

	.loc_0x9C8:
	*/
}

/*
 * --INFO--
 * Address:	80053E74
 * Size:	00009C
 */
void J2DMaterialFactory::newMatColor(int, int) const
{
	/*
	stwu     r1, -0x20(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_805168D8@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 0xc(r1)
	mulli    r5, r5, 0xe8
	lwz      r6, 4(r4)
	lbz      r9, 0xc(r1)
	lbz      r8, 0xd(r1)
	addi     r5, r5, 8
	lbz      r7, 0xe(r1)
	add      r0, r5, r0
	lbz      r5, 0xf(r1)
	lhzx     r0, r6, r0
	stb      r9, 0x10(r1)
	cmplwi   r0, 0xffff
	stb      r8, 0x11(r1)
	stb      r7, 0x12(r1)
	stb      r5, 0x13(r1)
	beq      lbl_80053F00
	lwz      r4, 0x10(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lwzx     r0, r4, r0
	stw      r0, 8(r1)
	lbz      r4, 8(r1)
	lbz      r0, 9(r1)
	stb      r4, 0(r3)
	lbz      r4, 0xa(r1)
	stb      r0, 1(r3)
	lbz      r0, 0xb(r1)
	stb      r4, 2(r3)
	stb      r0, 3(r3)
	b        lbl_80053F08

lbl_80053F00:
	lwz      r0, 0x10(r1)
	stw      r0, 0(r3)

lbl_80053F08:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80053F10
 * Size:	000038
 */
void J2DMaterialFactory::newColorChanNum(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 2
	lbzx     r0, r6, r0
	cmplwi   r0, 0xff
	beq      lbl_80053F40
	lwz      r3, 0x14(r3)
	lbzx     r3, r3, r0
	blr

lbl_80053F40:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80053F48
 * Size:	000054
 */
void J2DMaterialFactory::newColorChan(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0xc
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80053F8C
	rlwinm   r5, r0, 2, 0xe, 0x1d
	lwz      r4, 0x18(r4)
	addi     r0, r5, 1
	lbzx     r0, r4, r0
	sth      r0, 0(r3)
	blr

lbl_80053F8C:
	addi     r4, r2, j2dDefaultColorChanInfo@sda21
	lbz      r0, 1(r4)
	sth      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80053F9C
 * Size:	000038
 */
void J2DMaterialFactory::newTexGenNum(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 3
	lbzx     r0, r6, r0
	cmplwi   r0, 0xff
	beq      lbl_80053FCC
	lwz      r3, 0x1c(r3)
	lbzx     r3, r3, r0
	blr

lbl_80053FCC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80053FD4
 * Size:	000074
 */
void J2DMaterialFactory::newTexCoord(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0x14
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80054028
	lwz      r4, 0x20(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr

lbl_80054028:
	lis      r4, j2dDefaultTexCoordInfo@ha
	lbzu     r0, j2dDefaultTexCoordInfo@l(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054048
 * Size:	0000EC
 */
void J2DMaterialFactory::newTexMtx(int, int) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	slwi     r0, r5, 1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	slwi     r3, r4, 1
	lwz      r4, 8(r28)
	lwz      r31, 4(r28)
	lhzx     r3, r4, r3
	mulli    r3, r3, 0xe8
	addi     r3, r3, 0x24
	add      r30, r3, r0
	lhzx     r0, r31, r30
	cmplwi   r0, 0xffff
	beq      lbl_80054110
	li       r3, 0x54
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80054108
	lhzx     r0, r31, r30
	lwz      r4, 0x24(r28)
	mulli    r0, r0, 0x24
	add      r4, r4, r0
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x20(r3)

lbl_80054108:
	mr       r29, r3
	bl       calc__9J2DTexMtxFv

lbl_80054110:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	80054134
 * Size:	000040
 */
void J2DMaterialFactory::newCullMode(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 1
	lbzx     r0, r6, r0
	cmplwi   r0, 0xff
	beq      lbl_8005416C
	lwz      r3, 0x30(r3)
	rlwinm   r0, r0, 2, 0x16, 0x1d
	lwzx     r0, r3, r0
	clrlwi   r3, r0, 0x18
	blr

lbl_8005416C:
	li       r3, 0xff
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054174
 * Size:	000048
 */
void J2DMaterialFactory::newTexNo(int, int) const
{
	/*
	lwz      r6, 8(r3)
	slwi     r4, r4, 1
	slwi     r0, r5, 1
	lwz      r5, 4(r3)
	lhzx     r4, r6, r4
	mulli    r4, r4, 0xe8
	addi     r4, r4, 0x38
	add      r0, r4, r0
	lhzx     r0, r5, r0
	cmplwi   r0, 0xffff
	beq      lbl_800541B0
	lwz      r3, 0x28(r3)
	rlwinm   r0, r0, 1, 0xf, 0x1e
	lhzx     r3, r3, r0
	blr

lbl_800541B0:
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	800541BC
 * Size:	000040
 */
void J2DMaterialFactory::newFontNo(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 0x48
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_800541F0
	lwz      r3, 0x2c(r3)
	rlwinm   r0, r0, 1, 0xf, 0x1e
	lhzx     r3, r3, r0
	blr

lbl_800541F0:
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	800541FC
 * Size:	000074
 */
void J2DMaterialFactory::newTevOrder(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0x72
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80054250
	lwz      r4, 0x34(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr

lbl_80054250:
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	addi     r4, r2, j2dDefaultTevOrderInfoNull@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054270
 * Size:	000098
 */
void J2DMaterialFactory::newTevColor(int, int) const
{
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80520E40@sda21(r2)
	lhzx     r5, r7, r5
	lwz      r7, lbl_80520E44@sda21(r2)
	mulli    r5, r5, 0xe8
	lwz      r6, 4(r4)
	stw      r8, 8(r1)
	addi     r5, r5, 0x92
	stw      r7, 0xc(r1)
	add      r0, r5, r0
	lha      r7, 0xa(r1)
	lhzx     r0, r6, r0
	lha      r5, 0xc(r1)
	cmplwi   r0, 0xffff
	lha      r6, 0xe(r1)
	beq      lbl_800542EC
	lwz      r4, 0x38(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r4, r4, r0
	lha      r0, 0(r4)
	sth      r0, 0(r3)
	lha      r0, 2(r4)
	sth      r0, 2(r3)
	lha      r0, 4(r4)
	sth      r0, 4(r3)
	lha      r0, 6(r4)
	sth      r0, 6(r3)
	b        lbl_80054300

lbl_800542EC:
	lha      r0, 8(r1)
	sth      r0, 0(r3)
	sth      r7, 2(r3)
	sth      r5, 4(r3)
	sth      r6, 6(r3)

lbl_80054300:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054308
 * Size:	00009C
 */
void J2DMaterialFactory::newTevKColor(int, int) const
{
	/*
	stwu     r1, -0x20(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_805168DC@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 0xc(r1)
	mulli    r5, r5, 0xe8
	lwz      r6, 4(r4)
	lbz      r9, 0xc(r1)
	lbz      r8, 0xd(r1)
	addi     r5, r5, 0x4a
	lbz      r7, 0xe(r1)
	add      r0, r5, r0
	lbz      r5, 0xf(r1)
	lhzx     r0, r6, r0
	stb      r9, 0x10(r1)
	cmplwi   r0, 0xffff
	stb      r8, 0x11(r1)
	stb      r7, 0x12(r1)
	stb      r5, 0x13(r1)
	beq      lbl_80054394
	lwz      r4, 0x3c(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	lwzx     r0, r4, r0
	stw      r0, 8(r1)
	lbz      r4, 8(r1)
	lbz      r0, 9(r1)
	stb      r4, 0(r3)
	lbz      r4, 0xa(r1)
	stb      r0, 1(r3)
	lbz      r0, 0xb(r1)
	stb      r4, 2(r3)
	stb      r0, 3(r3)
	b        lbl_8005439C

lbl_80054394:
	lwz      r0, 0x10(r1)
	stw      r0, 0(r3)

lbl_8005439C:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800543A4
 * Size:	000038
 */
void J2DMaterialFactory::newTevStageNum(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 4
	lbzx     r0, r6, r0
	cmplwi   r0, 0xff
	beq      lbl_800543D4
	lwz      r3, 0x40(r3)
	lbzx     r3, r3, r0
	blr

lbl_800543D4:
	li       r3, 0xff
	blr
	*/
}

/*
 * --INFO--
 * Address:	800543DC
 * Size:	000060
 */
void J2DMaterialFactory::newTevStage(int, int) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	stw      r0, 0x14(r1)
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0x9a
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80054428
	mulli    r0, r0, 0x14
	lwz      r4, 0x44(r4)
	add      r4, r4, r0
	bl       __ct__11J2DTevStageFRC15J2DTevStageInfo
	b        lbl_8005442C

lbl_80054428:
	bl       __ct__11J2DTevStageFv

lbl_8005442C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005443C
 * Size:	000060
 */
J2DTevStage::J2DTevStage(const J2DTevStageInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setTevStageInfo__11J2DTevStageFRC15J2DTevStageInfo
	addi     r3, r2, j2dDefaultTevSwapMode@sda21
	lbz      r4, 7(r31)
	lbz      r0, 1(r3)
	mr       r3, r31
	rlwinm   r4, r4, 0, 0x1e, 0x1b
	slwi     r0, r0, 2
	or       r0, r4, r0
	stb      r0, 7(r31)
	lbz      r4, 7(r31)
	lbz      r0, j2dDefaultTevSwapMode@sda21(r2)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r0, r4, r0
	stb      r0, 7(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005449C
 * Size:	00009C
 */
void J2DMaterialFactory::newTevSwapModeTable(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0xda
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80054504
	lwz      r4, 0x4c(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r6, r4, r0
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	lbz      r4, 0(r6)
	slwi     r5, r5, 2
	slwi     r0, r0, 4
	lbz      r6, 3(r6)
	add      r0, r0, r5
	slwi     r4, r4, 6
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr

lbl_80054504:
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	lbz      r4, j2dDefaultTevSwapModeTable@sda21(r2)
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	slwi     r4, r4, 6
	slwi     r5, r5, 2
	lbz      r6, 3(r6)
	slwi     r0, r0, 4
	add      r0, r0, r5
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054538
 * Size:	000030
 */
void J2DMaterialFactory::newIndTexStageNum(int) const
{
	/*
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_80054560
	mulli    r4, r4, 0x128
	lbzx     r0, r3, r4
	cmplwi   r0, 1
	bne      lbl_80054560
	add      r3, r3, r4
	lbz      r3, 1(r3)
	blr

lbl_80054560:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054568
 * Size:	000068
 */
void J2DMaterialFactory::newIndTexOrder(int, int) const
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r8, 0xc(r4)
	addi     r4, r2, j2dDefaultIndTexOrderNull@sda21
	lbz      r7, j2dDefaultIndTexOrderNull@sda21(r2)
	lbz      r0, 1(r4)
	cmplwi   r8, 0
	stb      r7, 8(r1)
	stb      r0, 9(r1)
	beq      lbl_800545C0
	mulli    r0, r5, 0x128
	add      r5, r8, r0
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_800545C0
	slwi     r4, r6, 1
	addi     r4, r4, 4
	add      r4, r5, r4
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	b        lbl_800545C8

lbl_800545C0:
	lhz      r0, 8(r1)
	sth      r0, 0(r3)

lbl_800545C8:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800545D0
 * Size:	0000EC
 */
void J2DMaterialFactory::newIndTexMtx(int, int) const
{
	/*
	stwu     r1, -0x30(r1)
	lis      r7, j2dDefaultIndTexMtxInfo@ha
	lwz      r8, 0xc(r4)
	addi     r4, r7, j2dDefaultIndTexMtxInfo@l
	lfs      f2, 0(r4)
	lfs      f1, 4(r4)
	cmplwi   r8, 0
	lfs      f0, 8(r4)
	stfs     f2, 8(r1)
	lfs      f2, 0xc(r4)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x10(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x14(r4)
	lbz      r0, 0x18(r4)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r0, 0x20(r1)
	beq      lbl_8005467C
	mulli    r0, r5, 0x128
	add      r5, r8, r0
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_8005467C
	mulli    r4, r6, 0x1c
	addi     r4, r4, 0xc
	add      r4, r5, r4
	lfs      f0, 0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	b        lbl_800546B4

lbl_8005467C:
	lwz      r0, 8(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	lwz      r4, 0x14(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x18(r1)
	stw      r4, 0xc(r3)
	lwz      r4, 0x1c(r1)
	stw      r0, 0x10(r3)
	lwz      r0, 0x20(r1)
	stw      r4, 0x14(r3)
	stw      r0, 0x18(r3)

lbl_800546B4:
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800546BC
 * Size:	00014C
 */
void J2DMaterialFactory::newIndTevStage(int, int) const
{
	/*
	stwu     r1, -0x30(r1)
	lis      r7, j2dDefaultIndTevStageInfo@ha
	lwz      r0, 0xc(r4)
	addi     r8, r7, j2dDefaultIndTevStageInfo@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	lwz      r7, 4(r8)
	lwz      r4, 8(r8)
	stw      r7, 0x18(r1)
	lwz      r7, 0(r8)
	stw      r4, 0x1c(r1)
	lbz      r4, 0x1b(r1)
	stw      r7, 0x14(r1)
	lbz      r7, 0x1c(r1)
	slwi     r4, r4, 0x15
	lbz      r8, 0x1a(r1)
	slwi     r7, r7, 0x16
	lbz      r9, 0x17(r1)
	or       r4, r7, r4
	slwi     r8, r8, 0x14
	lbz      r10, 0x19(r1)
	or       r4, r8, r4
	slwi     r7, r9, 0x10
	lbz      r11, 0x18(r1)
	lbz      r12, 0x16(r1)
	or       r4, r7, r4
	slwi     r8, r10, 0xb
	lbz      r31, 0x15(r1)
	or       r4, r8, r4
	slwi     r9, r11, 8
	or       r4, r9, r4
	slwi     r7, r12, 4
	slwi     r8, r31, 2
	lbz      r9, 0x14(r1)
	or       r4, r7, r4
	or       r4, r8, r4
	or       r7, r9, r4
	beq      lbl_800547F8
	mulli    r4, r5, 0x128
	add      r5, r0, r4
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_800547F8
	mulli    r4, r6, 0xc
	addi     r0, r4, 0x68
	add      r5, r5, r0
	lwz      r4, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0xc(r1)
	lwz      r4, 0(r5)
	stw      r0, 0x10(r1)
	lbz      r0, 0xf(r1)
	stw      r4, 8(r1)
	lbz      r4, 0x10(r1)
	slwi     r0, r0, 0x15
	lbz      r5, 0xe(r1)
	slwi     r4, r4, 0x16
	lbz      r6, 0xb(r1)
	lbz      r7, 0xd(r1)
	slwi     r5, r5, 0x14
	or       r0, r4, r0
	lbz      r8, 0xc(r1)
	lbz      r9, 0xa(r1)
	slwi     r4, r6, 0x10
	or       r0, r5, r0
	lbz      r10, 9(r1)
	slwi     r5, r7, 0xb
	slwi     r6, r8, 8
	or       r0, r4, r0
	slwi     r4, r9, 4
	or       r0, r5, r0
	slwi     r5, r10, 2
	or       r0, r6, r0
	lbz      r6, 8(r1)
	or       r0, r4, r0
	or       r0, r5, r0
	or       r0, r6, r0
	stw      r0, 0(r3)
	b        lbl_800547FC

lbl_800547F8:
	stw      r7, 0(r3)

lbl_800547FC:
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054808
 * Size:	000068
 */
void J2DMaterialFactory::newIndTexCoordScale(int, int) const
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r8, 0xc(r4)
	addi     r4, r2, j2dDefaultIndTexCoordScaleInfo@sda21
	lbz      r7, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	lbz      r0, 1(r4)
	cmplwi   r8, 0
	stb      r7, 8(r1)
	stb      r0, 9(r1)
	beq      lbl_80054860
	mulli    r0, r5, 0x128
	add      r5, r8, r0
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_80054860
	slwi     r4, r6, 1
	addi     r4, r4, 0x60
	add      r4, r5, r4
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	b        lbl_80054868

lbl_80054860:
	lhz      r0, 8(r1)
	sth      r0, 0(r3)

lbl_80054868:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054870
 * Size:	00007C
 */
void J2DMaterialFactory::newAlphaComp(int) const
{
	/*
	lwz      r6, 8(r4)
	slwi     r0, r5, 1
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	mulli    r5, r0, 0xe8
	addi     r0, r5, 0xe2
	lhzx     r0, r7, r0
	cmplwi   r0, 0xffff
	beq      lbl_800548D4
	lwz      r4, 0x50(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r6, r4, r0
	lbz      r4, 0(r6)
	lbz      r0, 2(r6)
	slwi     r4, r4, 5
	lbz      r5, 3(r6)
	slwi     r0, r0, 3
	or       r0, r4, r0
	or       r0, r5, r0
	sth      r0, 0(r3)
	lbz      r0, 1(r6)
	stb      r0, 2(r3)
	lbz      r0, 4(r6)
	stb      r0, 3(r3)
	blr

lbl_800548D4:
	lhz      r4, j2dDefaultAlphaCmp@sda21(r2)
	li       r0, 0
	sth      r4, 0(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800548EC
 * Size:	00007C
 */
void J2DMaterialFactory::newBlend(int) const
{
	/*
	lwz      r6, 8(r4)
	slwi     r0, r5, 1
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	mulli    r5, r0, 0xe8
	addi     r0, r5, 0xe4
	lhzx     r0, r7, r0
	cmplwi   r0, 0xffff
	beq      lbl_80054940
	lwz      r4, 0x54(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	blr

lbl_80054940:
	lbz      r0, j2dDefaultBlendInfo@sda21(r2)
	addi     r4, r2, j2dDefaultBlendInfo@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054968
 * Size:	000038
 */
void J2DMaterialFactory::newDither(int) const
{
	/*
	lwz      r5, 8(r3)
	slwi     r0, r4, 1
	lwz      r6, 4(r3)
	lhzx     r0, r5, r0
	mulli    r4, r0, 0xe8
	addi     r0, r4, 5
	lbzx     r0, r6, r0
	cmplwi   r0, 0xff
	beq      lbl_80054998
	lwz      r3, 0x58(r3)
	lbzx     r3, r3, r0
	blr

lbl_80054998:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800549A0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DBlendInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800549B0
	li       r3, 0
	blr

lbl_800549B0:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800549B8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DAlphaCompInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800549C8
	li       r3, 0
	blr

lbl_800549C8:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800549D0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTevSwapModeTableInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800549E0
	li       r3, 0
	blr

lbl_800549E0:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800549E8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTevSwapModeInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800549F8
	li       r3, 0
	blr

lbl_800549F8:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A00
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTevStageInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A10
	li       r3, 0
	blr

lbl_80054A10:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A18
 * Size:	000018
 */
void JSUConvertOffsetToPtr<_GXColorS10>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A28
	li       r3, 0
	blr

lbl_80054A28:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A30
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTevOrderInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A40
	li       r3, 0
	blr

lbl_80054A40:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A48
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTexMtxInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A58
	li       r3, 0
	blr

lbl_80054A58:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A60
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DTexCoordInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A70
	li       r3, 0
	blr

lbl_80054A70:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A78
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DColorChanInfo>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054A88
	li       r3, 0
	blr

lbl_80054A88:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054A90
 * Size:	000018
 */
void JSUConvertOffsetToPtr<_GXColor>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054AA0
	li       r3, 0
	blr

lbl_80054AA0:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054AA8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<_GXCullMode>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054AB8
	li       r3, 0
	blr

lbl_80054AB8:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054AC0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DIndInitData>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054AD0
	li       r3, 0
	blr

lbl_80054AD0:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80054AD8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J2DMaterialInitData>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80054AE8
	li       r3, 0
	blr

lbl_80054AE8:
	add      r3, r3, r4
	blr
	*/
}
