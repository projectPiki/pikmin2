#include "JSystem/J3D/J3DSys.h"
#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_J3DSys_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80478700
    lbl_80478700:
        .4byte 0x00008000
        .4byte 0x00020000
        .4byte 0x00080000
        .4byte 0x00000000
        .4byte 0x00000008
        .4byte 0x00000004
        .4byte 0x00000001
        .4byte 0x00000000
        .float 0.5
        .float 0.0
        .float 0.0
        .float 0.0
        .float 0.5
        .float 0.0
    .global lbl_80478738
    lbl_80478738:
        .asciz "Success\n"
        .skip 3
    .global lbl_80478744
    lbl_80478744:
        .asciz "J3DErrType : Material has No Material Animation\n"
        .skip 3
    .global lbl_80478778
    lbl_80478778:
        .asciz "J3DErrType : Model Data is Locked\n"
        .skip 1
    .global lbl_8047879C
    lbl_8047879C:
        .asciz "J3DErrType : Binary Resource is Null\n"
        .skip 2
    .global lbl_804787C4
    lbl_804787C4:
        .asciz "J3DErrType : Out Of Memory\n"
    .global lbl_804787E0
    lbl_804787E0:
        .asciz "J3DErrType : Argument is Invalid\n"
        .skip 2
    .global lbl_80478804
    lbl_80478804:
        .asciz "J3DErrType : Data is Invalid\n"
        .skip 2
        .4byte lbl_80478738
        .4byte lbl_80478744
        .4byte lbl_80478778
        .4byte lbl_8047879C
        .4byte lbl_804787C4
        .4byte lbl_804787E0
        .4byte lbl_80478804

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global NullTexData
    NullTexData:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global j3dIdentityMtx
    j3dIdentityMtx:
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global IndMtx
    IndMtx:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global j3dSys
    j3dSys:
        .skip 0x1A4
    .global mCurrentMtx__6J3DSys
    mCurrentMtx__6J3DSys:
        .skip 0x30
    .global mCurrentS__6J3DSys
    mCurrentS__6J3DSys:
        .skip 0xC
    .global mParentS__6J3DSys
    mParentS__6J3DSys:
        .skip 0xC
    .global sTexCoordScaleTable__6J3DSys
    sTexCoordScaleTable__6J3DSys:
        .skip 0x40

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global ColorBlack
    ColorBlack:
        .4byte 0
    .global ColorWhite
    ColorWhite:
        .4byte 0xffffffff

    .section .sbss # 0x80514D80 - 0x80516360
    .global j3dDefaultViewNo
    j3dDefaultViewNo:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516988
    lbl_80516988:
        .4byte 0x00000000
    .global lbl_8051698C
    lbl_8051698C:
        .float 1.0
    .global lbl_80516990
    lbl_80516990:
        .float 0.1
        .4byte 0x00000000
*/

static GXColor ColorBlack = { 0x00, 0x00, 0x00, 0x00 };
static GXColor ColorWhite = { 0xFF, 0xFF, 0xFF, 0xFF };

static u8 NullTexData[0x10] = { 0x0 };

/*
 * --INFO--
 * Address:	8005DAAC
 * Size:	000114
 */
J3DSys::J3DSys()
{
	// makeTexCoordTable();
	// makeTevSwapTable();
	// makeAlphaCmpTable();
	// makeZModeTable();
	// _34 = 0;
	// PSMTXIdentity(_00);
	// _50           = 1;
	// _54           = 0;
	// _38           = nullptr;
	// _44           = 0;
	// _48           = nullptr;
	// _4C           = nullptr;
	// _58           = nullptr;
	// m_matPacket   = nullptr;
	// m_shapePacket = nullptr;
	// _104          = nullptr;
	// _108          = nullptr;
	// _10C          = 0;
	// _110          = 0;
	// _114          = 0;
	// for (int i = 0; i < 8; i++) {
	// 	sTexCoordScaleTable[i][0] = 1;
	// 	sTexCoordScaleTable[i][1] = 1;
	// 	sTexCoordScaleTable[i][2] = 0;
	// 	sTexCoordScaleTable[i][3] = 0;
	// }
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       makeTexCoordTable__Fv
	bl       makeTevSwapTable__Fv
	bl       makeAlphaCmpTable__Fv
	bl       makeZModeTable__Fv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x34(r31)
	bl       PSMTXIdentity
	li       r5, 1
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	stw      r5, 0x50(r31)
	li       r0, 0
	addi     r4, r3, sTexCoordScaleTable__6J3DSys@l
	mr       r3, r31
	stw      r0, 0x54(r31)
	stw      r0, 0x38(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x48(r31)
	stw      r0, 0x4c(r31)
	stw      r0, 0x58(r31)
	stw      r0, 0x3c(r31)
	stw      r0, 0x40(r31)
	stw      r0, 0x104(r31)
	stw      r0, 0x108(r31)
	stw      r0, 0x10c(r31)
	stw      r0, 0x110(r31)
	stw      r0, 0x114(r31)
	sth      r5, 0(r4)
	sth      r5, 2(r4)
	sth      r0, 4(r4)
	sth      r0, 6(r4)
	sth      r5, 8(r4)
	sth      r5, 0xa(r4)
	sth      r0, 0xc(r4)
	sth      r0, 0xe(r4)
	sth      r5, 0x10(r4)
	sth      r5, 0x12(r4)
	sth      r0, 0x14(r4)
	sth      r0, 0x16(r4)
	sth      r5, 0x18(r4)
	sth      r5, 0x1a(r4)
	sth      r0, 0x1c(r4)
	sth      r0, 0x1e(r4)
	sth      r5, 0x20(r4)
	sth      r5, 0x22(r4)
	sth      r0, 0x24(r4)
	sth      r0, 0x26(r4)
	sth      r5, 0x28(r4)
	sth      r5, 0x2a(r4)
	sth      r0, 0x2c(r4)
	sth      r0, 0x2e(r4)
	sth      r5, 0x30(r4)
	sth      r5, 0x32(r4)
	sth      r0, 0x34(r4)
	sth      r0, 0x36(r4)
	sth      r5, 0x38(r4)
	sth      r5, 0x3a(r4)
	sth      r0, 0x3c(r4)
	sth      r0, 0x3e(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005DBC0
 * Size:	000024
 */
void J3DSys::loadPosMtxIndx(int p1, unsigned short p2) const
{
	GXWGFifo.u8  = 0x20;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = (u16)(p1 * 0xC) | 0xB000;
}

/*
 * --INFO--
 * Address:	8005DBE4
 * Size:	000028
 */
void J3DSys::loadNrmMtxIndx(int p1, unsigned short p2) const
{
	GXWGFifo.u8  = 0x28;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = (u16)(p1 * 9 + 0x400) | 0x8000;
}

/*
 * --INFO--
 * Address:	8005DC0C
 * Size:	0007B8
 */
void J3DSys::drawInit()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lis      r4, lbl_80478700@ha
	stw      r0, 0x84(r1)
	stmw     r27, 0x6c(r1)
	mr       r30, r3
	addi     r31, r4, lbl_80478700@l
	bl       GXInvalidateVtxCache
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	bl       GXSetCoPlanar
	li       r3, 0
	bl       GXSetClipMode
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetDither
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 5
	bl       GXSetBlendMode
	li       r3, 7
	li       r4, 0
	li       r5, 0
	li       r6, 7
	li       r7, 0
	bl       GXSetAlphaCompare
	li       r3, 1
	li       r4, 3
	li       r5, 1
	bl       GXSetZMode
	li       r3, 1
	bl       GXSetZCompLoc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xa
	li       r5, 0
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xc
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xe
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xf
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0x10
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0x11
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0x12
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0x13
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0x14
	li       r5, 1
	li       r6, 3
	li       r7, 7
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetNumIndStages
	mr       r3, r30
	bl       reinitTexture__6J3DSysFv
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 2
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 3
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 5
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 6
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 7
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 8
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 9
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xa
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xb
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xc
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xd
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xe
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0xf
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	lis      r4, j3dIdentityMtx@ha
	li       r27, 0
	addi     r28, r4, j3dIdentityMtx@l
	li       r29, 0x1e

lbl_8005DF20:
	mr       r3, r28
	mr       r4, r29
	li       r5, 0
	bl       GXLoadTexMtxImm
	addi     r27, r27, 1
	addi     r29, r29, 3
	cmplwi   r27, 0xa
	blt      lbl_8005DF20
	lwz      r8, 0x20(r31)
	li       r27, 0
	lwz      r7, 0x24(r31)
	lwz      r6, 0x28(r31)
	lwz      r5, 0x2c(r31)
	lwz      r4, 0x30(r31)
	lwz      r0, 0x34(r31)
	stw      r8, 0x44(r1)
	stw      r7, 0x48(r1)
	stw      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r4, 0x54(r1)
	stw      r0, 0x58(r1)
	b        lbl_8005DF90

lbl_8005DF78:
	clrlwi   r5, r27, 0x18
	addi     r4, r1, 0x44
	addi     r3, r5, 1
	li       r5, 1
	bl       GXSetIndTexMtx
	addi     r27, r27, 1

lbl_8005DF90:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 3
	blt      lbl_8005DF78
	lwz      r0, j3dDefaultColInfo@sda21(r2)
	addi     r4, r1, 0x18
	li       r3, 4
	stw      r0, 0x18(r1)
	bl       GXSetChanMatColor
	lwz      r0, j3dDefaultColInfo@sda21(r2)
	addi     r4, r1, 0x14
	li       r3, 5
	stw      r0, 0x14(r1)
	bl       GXSetChanMatColor
	lbz      r3, j3dDefaultColorChanNum@sda21(r2)
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 5
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	lis      r4, j3dDefaultTexCoordInfo@ha
	li       r27, 0
	addi     r28, r4, j3dDefaultTexCoordInfo@l
	b        lbl_8005E054

lbl_8005E02C:
	rlwinm   r0, r27, 2, 0x16, 0x1d
	clrlwi   r3, r27, 0x18
	add      r6, r28, r0
	li       r7, 0
	lbz      r4, 0(r6)
	li       r8, 0x7d
	lbz      r5, 1(r6)
	lbz      r6, 2(r6)
	bl       GXSetTexCoordGen2
	addi     r27, r27, 1

lbl_8005E054:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 8
	blt      lbl_8005E02C
	li       r27, 0
	b        lbl_8005E07C

lbl_8005E068:
	clrlwi   r3, r27, 0x18
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	addi     r27, r27, 1

lbl_8005E07C:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 4
	blt      lbl_8005E068
	lwz      r28, j3dDefaultTevKColor@sda21(r2)
	li       r27, 0
	b        lbl_8005E0A8

lbl_8005E094:
	stw      r28, 0x10(r1)
	clrlwi   r3, r27, 0x18
	addi     r4, r1, 0x10
	bl       GXSetTevKColor
	addi     r27, r27, 1

lbl_8005E0A8:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 4
	blt      lbl_8005E094
	lwz      r29, j3dDefaultTevColor@sda21(r2)
	li       r27, 0
	lwz      r28, lbl_805169D8@sda21(r2)
	b        lbl_8005E0DC

lbl_8005E0C4:
	stw      r29, 0x1c(r1)
	clrlwi   r3, r27, 0x18
	addi     r4, r1, 0x1c
	stw      r28, 0x20(r1)
	bl       GXSetTevColorS10
	addi     r27, r27, 1

lbl_8005E0DC:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 4
	blt      lbl_8005E0C4
	li       r28, 0
	b        lbl_8005E160

lbl_8005E0F0:
	clrlwi   r27, r28, 0x18
	li       r4, 0xa
	mr       r3, r27
	li       r5, 0xf
	li       r6, 0xf
	li       r7, 0xf
	bl       GXSetTevColorIn
	mr       r3, r27
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	mr       r3, r27
	li       r4, 5
	li       r5, 7
	li       r6, 7
	li       r7, 7
	bl       GXSetTevAlphaIn
	mr       r3, r27
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	addi     r28, r28, 1

lbl_8005E160:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8005E0F0
	li       r27, 0
	b        lbl_8005E188

lbl_8005E174:
	clrlwi   r3, r27, 0x18
	li       r4, 0
	li       r5, 0
	bl       GXSetTevSwapMode
	addi     r27, r27, 1

lbl_8005E188:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8005E174
	li       r3, 0
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 3
	bl       GXSetTevSwapModeTable
	li       r3, 2
	li       r4, 1
	li       r5, 1
	li       r6, 1
	li       r7, 3
	bl       GXSetTevSwapModeTable
	li       r3, 3
	li       r4, 2
	li       r5, 2
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	li       r27, 0
	mr       r29, r27
	mr       r28, r27
	b        lbl_8005E234

lbl_8005E204:
	stw      r29, 8(r1)
	clrlwi   r3, r27, 0x18
	li       r4, 0
	li       r5, 0
	stw      r28, 0xc(r1)
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 0
	li       r10, 0
	bl       GXSetTevIndirect
	addi     r27, r27, 1

lbl_8005E234:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8005E204
	li       r3, 4
	oris     r3, r3, 4
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	lwz      r28, 0(r31)
	lwz      r9, 4(r31)
	lwz      r8, 8(r31)
	lwz      r7, 0xc(r31)
	lwz      r29, 0x10(r31)
	lwz      r6, 0x14(r31)
	lwz      r5, 0x18(r31)
	lwz      r4, 0x1c(r31)
	stw      r28, 0x24(r1)
	stw      r29, 0x60(r30)
	lwz      r0, 0x34(r30)
	stw      r9, 0x28(r1)
	rlwinm.  r0, r0, 0, 0, 0
	stw      r8, 0x2c(r1)
	stw      r7, 0x30(r1)
	stw      r29, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r5, 0x3c(r1)
	stw      r4, 0x40(r1)
	beq      lbl_8005E35C
	li       r31, 0
	mr       r27, r30
	mr       r30, r31
	b        lbl_8005E350

lbl_8005E2D0:
	clrlwi.  r0, r31, 0x1f
	beq      lbl_8005E310
	mr       r7, r30
	addi     r3, r27, 0x64
	addis    r5, r30, 8
	li       r4, 0
	li       r6, 0
	li       r8, 0
	bl       GXInitTexCacheRegion
	mr       r3, r31
	mr       r6, r30
	addis    r4, r30, 8
	li       r5, 0
	li       r7, 0
	bl
J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize b
lbl_8005E344

lbl_8005E310:
	mr       r5, r30
	addi     r3, r27, 0x64
	addis    r7, r30, 8
	li       r4, 0
	li       r6, 0
	li       r8, 0
	bl       GXInitTexCacheRegion
	mr       r3, r31
	mr       r4, r30
	addis    r6, r30, 8
	li       r5, 0
	li       r7, 0
	bl
J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize

lbl_8005E344:
	add      r30, r30, r28
	addi     r27, r27, 0x10
	addi     r31, r31, 1

lbl_8005E350:
	cmplw    r31, r29
	blt      lbl_8005E2D0
	b        lbl_8005E3B0

lbl_8005E35C:
	li       r31, 0
	mr       r27, r31
	b        lbl_8005E3A8

lbl_8005E368:
	mr       r5, r27
	addi     r3, r30, 0x64
	addis    r7, r27, 8
	li       r4, 0
	li       r6, 0
	li       r8, 0
	bl       GXInitTexCacheRegion
	mr       r3, r31
	mr       r4, r27
	addis    r6, r27, 8
	li       r5, 0
	li       r7, 0
	bl
J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize add
r27, r27, r28 addi     r30, r30, 0x10 addi     r31, r31, 1

lbl_8005E3A8:
	cmplw    r31, r29
	blt      lbl_8005E368

lbl_8005E3B0:
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005E3C4
 * Size:	00005C
 */
void J3DSys::reinitGX()
{
	reinitGenMode();
	reinitLighting();
	reinitTransform();
	reinitTexture();
	reinitTevStages();
	reinitIndStages();
	reinitPixelProc();
}

/*
 * --INFO--
 * Address:	8005E420
 * Size:	00004C
 */
void J3DSys::reinitGenMode()
{
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetNumTevStages(1);
	GXSetNumIndStages(0);
	GXSetCullMode(GX_CULL_BACK);
	// GXSetCoPlanar(0);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	stw      r0, 0x14(r1)
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	bl       GXSetCoPlanar
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005E46C
 * Size:	0000AC
 */
void J3DSys::reinitLighting()
{
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	// GXColor a = ColorBlack;
	// GXSetChanAmbColor(4, &a);
	// GXColor b = ColorBlack;
	// GXSetChanAmbColor(5, &b);
	// GXColor c = ColorWhite;
	// GXSetChanMatColor(4, &c);
	// GXColor d = ColorWhite;
	// GXSetChanMatColor(5, &d);
	GXSetChanAmbColor(GX_COLOR0A0, ColorBlack);
	GXSetChanAmbColor(GX_COLOR1A1, ColorBlack);
	GXSetChanMatColor(GX_COLOR0A0, ColorWhite);
	GXSetChanMatColor(GX_COLOR1A1, ColorWhite);
}

/*
 * --INFO--
 * Address:	8005E518
 * Size:	000104
 */
void J3DSys::reinitTransform()
{
	GXSetCurrentMtx(0);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX1, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD2, GX_TG_MTX3X4, GX_TG_TEX2, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD3, GX_TG_MTX3X4, GX_TG_TEX3, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD4, GX_TG_MTX3X4, GX_TG_TEX4, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD5, GX_TG_MTX3X4, GX_TG_TEX5, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD6, GX_TG_MTX3X4, GX_TG_TEX6, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD7, GX_TG_MTX3X4, GX_TG_TEX7, 0x3C, GX_FALSE, 0x7D);
}

/*
 * --INFO--
 * Address:	8005E61C
 * Size:	0000A4
 */
void J3DSys::reinitTexture()
{
	GXTexObj texObj;
	GXInitTexObj(&texObj, &NullTexData, 4, 4, GX_TF_IA8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXLoadTexObj(&texObj, GX_TEXMAP0);
	GXLoadTexObj(&texObj, GX_TEXMAP1);
	GXLoadTexObj(&texObj, GX_TEXMAP2);
	GXLoadTexObj(&texObj, GX_TEXMAP3);
	GXLoadTexObj(&texObj, GX_TEXMAP4);
	GXLoadTexObj(&texObj, GX_TEXMAP5);
	GXLoadTexObj(&texObj, GX_TEXMAP6);
	GXLoadTexObj(&texObj, GX_TEXMAP7);
}

/*
 * --INFO--
 * Address:	8005E6C0
 * Size:	000308
 */
void J3DSys::reinitTevStages()
{
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevColor(GX_TEVREG0, ColorWhite);
	GXSetTevColor(GX_TEVREG1, ColorWhite);
	GXSetTevColor(GX_TEVREG2, ColorWhite);
	GXSetTevKColor(GX_KCOLOR0, ColorWhite);
	GXSetTevKColor(GX_KCOLOR1, ColorWhite);
	GXSetTevKColor(GX_KCOLOR2, ColorWhite);
	GXSetTevKColor(GX_KCOLOR3, ColorWhite);
	for (u32 i = 0; i < 0x10; i++) {
		GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
		GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_ZERO, GX_ZERO, GX_ZERO);
		GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevKColorSel((GXTevStageID)i, GX_TEV_KCSEL_K2_R);
		GXSetTevKAlphaSel((GXTevStageID)i, 0);
		GXSetTevSwapMode((GXTevStageID)i, 0, 0);
	}
	GXSetTevSwapModeTable(GX_TEV_SWAP0, 0, 1, 2, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP1, 0, 0, 0, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP2, 1, 1, 1, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP3, 2, 2, 2, 3);
	GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
}

/*
 * --INFO--
 * Address:	8005E9C8
 * Size:	0000F8
 */
void J3DSys::reinitIndStages()
{
	// for (u32 i = 0; i < 0x10; i++) {
	// 	GXSetTevDirect((GXTevStageID)i);
	// }
	// GXSetIndTexOrder(0, 0, 0);
	// GXSetIndTexOrder(1, 1, 1);
	// GXSetIndTexOrder(2, 2, 2);
	// GXSetIndTexOrder(3, 3, 3);
	// GXSetIndTexCoordScale(0, 0, 0);
	// GXSetIndTexCoordScale(1, 0, 0);
	// GXSetIndTexCoordScale(2, 0, 0);
	// GXSetIndTexCoordScale(3, 0, 0);
	// GXSetIndTexMtx(1, IndMtx, 1);
	// GXSetIndTexMtx(2, IndMtx, 1);
	// GXSetIndTexMtx(3, IndMtx, 1);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0

lbl_8005E9DC:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmplwi   r31, 0x10
	blt      lbl_8005E9DC
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexOrder
	li       r3, 1
	li       r4, 1
	li       r5, 1
	bl       GXSetIndTexOrder
	li       r3, 2
	li       r4, 2
	li       r5, 2
	bl       GXSetIndTexOrder
	li       r3, 3
	li       r4, 3
	li       r5, 3
	bl       GXSetIndTexOrder
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	li       r3, 1
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	li       r3, 2
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	li       r3, 3
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	lis      r4, IndMtx@ha
	li       r3, 1
	addi     r4, r4, IndMtx@l
	li       r5, 1
	bl       GXSetIndTexMtx
	lis      r4, IndMtx@ha
	li       r3, 2
	addi     r4, r4, IndMtx@l
	li       r5, 1
	bl       GXSetIndTexMtx
	lis      r4, IndMtx@ha
	li       r3, 3
	addi     r4, r4, IndMtx@l
	li       r5, 1
	bl       GXSetIndTexMtx
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005EAC0
 * Size:	000094
 */
void J3DSys::reinitPixelProc()
{
	GXSetBlendMode(GX_BM_NONE, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDither(GX_TRUE);
	GXSetFog(GX_FOG_NONE, 1.0f, 0.1f, 1.0f, 0.0f, ColorBlack);
	GXSetFogRangeAdj(GX_FALSE, 0, nullptr);
	GXSetZMode(GX_TRUE, GX_LTEQUAL, GX_TRUE);
	GXSetZCompLoc(GX_TRUE);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	li       r4, 4
	stw      r0, 0x14(r1)
	li       r5, 5
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	bl       GXSetDither
	lfs      f2, lbl_8051698C@sda21(r2)
	addi     r4, r1, 8
	lwz      r0, ColorBlack@sda21(r13)
	li       r3, 0
	fmr      f4, f2
	lfs      f1, lbl_80516988@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80516990@sda21(r2)
	bl       GXSetFog
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetFogRangeAdj
	li       r3, 1
	li       r4, 3
	li       r5, 1
	bl       GXSetZMode
	li       r3, 1
	bl       GXSetZCompLoc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005EB54
 * Size:	000004
 */
void J3DSys::ErrorReport(J3DErrType) const { }

/*
 * --INFO--
 * Address:	8005EB58
 * Size:	000028
 */
void __sinit_J3DSys_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, j3dSys@l
	bl       __ct__6J3DSysFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
