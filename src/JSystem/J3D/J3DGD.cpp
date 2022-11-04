#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGD.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A2048
    lbl_804A2048:
        .4byte lbl_80075010
        .4byte lbl_8007502C
        .4byte lbl_80075068
        .4byte lbl_8007507C
        .4byte lbl_80075090
        .4byte lbl_800750AC
        .4byte lbl_800750C8
        .4byte lbl_800750E0
        .4byte lbl_800750F0
        .4byte lbl_80075100
        .4byte lbl_80075110
        .4byte lbl_80075120
        .4byte lbl_8007512C
        .4byte lbl_8007512C
        .4byte lbl_8007512C
        .4byte lbl_8007512C
        .4byte lbl_8007502C
    .global lbl_804A208C
    lbl_804A208C:
        .4byte lbl_80075488
        .4byte lbl_80075494
        .4byte lbl_800754A0
        .4byte lbl_800754AC
        .4byte lbl_800754C8
        .4byte lbl_800754D0
        .4byte lbl_800754D8
        .4byte lbl_800754E0
        .4byte lbl_800754E8
        .4byte lbl_800754F0
        .4byte lbl_800754F8
        .4byte lbl_80075500
        .4byte lbl_80075508
        .4byte lbl_80075510
        .4byte lbl_80075518
        .4byte lbl_80075520
        .4byte lbl_80075528
        .4byte lbl_80075530
        .4byte lbl_80075538
        .4byte lbl_800754B8
        .4byte lbl_800754C0
    .global c2r$1298
    c2r$1298:
        .4byte 0x00010001
        .4byte 0x00010705
        .4byte 0x06000000
        .4byte 0x00000007

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global cm2hw$551
    cm2hw$551:
        .4byte 0x00020103
    .global J3DGDTexMode0Ids
    J3DGDTexMode0Ids:
        .4byte 0x80818283
        .4byte 0xa0a1a2a3
    .global J3DGDTexMode1Ids
    J3DGDTexMode1Ids:
        .4byte 0x84858687
        .4byte 0xa4a5a6a7
    .global J3DGDTexImage0Ids
    J3DGDTexImage0Ids:
        .4byte 0x88898a8b
        .4byte 0xa8a9aaab
    .global J3DGDTexImage3Ids
    J3DGDTexImage3Ids:
        .4byte 0x94959697
        .4byte 0xb4b5b6b7
    .global J3DGDTexTlutIds
    J3DGDTexTlutIds:
        .4byte 0x98999a9b
        .4byte 0xb8b9babb
    .global GX2HWFiltConv
    GX2HWFiltConv:
        .4byte 0x00040105
        .4byte 0x02060000
    .global J3DTexImage1Ids
    J3DTexImage1Ids:
        .4byte 0x8c8d8e8f
        .4byte 0xacadaeaf
    .global J3DTexImage2Ids
    J3DTexImage2Ids:
        .4byte 0x90919293
        .4byte 0xb0b1b2b3

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A98
    lbl_80516A98:
        .4byte 0x42000000
    .global lbl_80516A9C
    lbl_80516A9C:
        .4byte 0x41800000
    .global lbl_80516AA0
    lbl_80516AA0:
        .4byte 0x44800000
    .global lbl_80516AA4
    lbl_80516AA4:
        .4byte 0x00000000
    .global lbl_80516AA8
    lbl_80516AA8:
        .float 0.5
        .4byte 0x00000000
    .global lbl_80516AB0
    lbl_80516AB0:
        .4byte 0x3FF00000
        .4byte 0x00000000
    .global lbl_80516AB8
    lbl_80516AB8:
        .4byte 0x40000000
        .4byte 0x00000000
    .global lbl_80516AC0
    lbl_80516AC0:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516AC8
    lbl_80516AC8:
        .4byte 0x4B00001E
        .4byte 0x00000000
    .global lbl_80516AD0
    lbl_80516AD0:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	80074440
 * Size:	000170
 */
void J3DGDSetGenMode(unsigned char, unsigned char, unsigned char, unsigned char, GXCullMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r27, r5
	  mr        r30, r6
	  mr        r31, r7
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  lwz       r0, 0xC(r8)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  bl        0x6D7C4

	.loc_0x40:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r3,r27,0,24,31
	  subi      r5, r3, 0x1
	  li        r0, 0x61
	  lwz       r6, 0x8(r4)
	  rlwinm    r5,r5,10,0,21
	  li        r27, 0xFE
	  li        r11, 0x7
	  addi      r3, r6, 0x1
	  li        r10, 0xFC
	  stw       r3, 0x8(r4)
	  rlwinm    r4,r28,0,24,31
	  rlwinm    r3,r29,4,20,27
	  li        r9, 0x3F
	  stb       r0, 0x0(r6)
	  or        r3, r4, r3
	  or        r6, r5, r3
	  subi      r7, r13, 0x7F98
	  lwz       r12, -0x7158(r13)
	  rlwinm    r8,r30,16,8,15
	  lwz       r4, 0x8(r12)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r12)
	  stb       r27, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lbzx      r3, r7, r31
	  lwz       r4, 0x8(r5)
	  rlwinm    r7,r3,14,0,17
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  or        r3, r7, r6
	  or        r8, r8, r3
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800745B0
 * Size:	00015C
 */
void J3DGDSetGenMode_3Param(unsigned char texGenNum, unsigned char tevStageNum, unsigned char indTexStageNum)
{
	if (__GDCurrentDL->pDisplayListData + 10 > __GDCurrentDL->end) {
		GDOverflowed();
	}
	u32 v1 = (tevStageNum - 1) * 0x400;
	__GDWrite(0x61);
	__GDWrite(0xFE);
	__GDWrite(0x07);
	__GDWrite(0x3C);
	__GDWrite(0x0F);
	__GDWrite(0x61);
	__GDWrite(((u8*)&v1)[0]);
	__GDWrite(indTexStageNum | ((u8*)&v1)[1]);
	__GDWrite(((u8*)&v1)[2]);
	__GDWrite(texGenNum);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r5
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r6)
	lwz      r0, 0xc(r6)
	addi     r3, r3, 0xa
	cmplw    r3, r0
	ble      lbl_800745F0
	bl       GDOverflowed

lbl_800745F0:
	lwz      r6, __GDCurrentDL@sda21(r13)
	clrlwi   r3, r30, 0x18
	addi     r3, r3, -1
	li       r0, 0x61
	lwz      r5, 8(r6)
	slwi     r3, r3, 0xa
	rlwimi   r3, r31, 0, 0x18, 0x1f
	li       r30, 0xfe
	addi     r4, r5, 1
	li       r12, 7
	stw      r4, 8(r6)
	rlwinm   r4, r29, 0x10, 8, 0xf
	or       r3, r4, r3
	li       r11, 0x3c
	stb      r0, 0(r5)
	li       r10, 0xf
	srwi     r8, r3, 0x18
	rlwinm   r7, r3, 0x10, 0x18, 0x1f
	lwz      r9, __GDCurrentDL@sda21(r13)
	rlwinm   r6, r3, 0x18, 0x18, 0x1f
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r30, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r12, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r11, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r10, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r0, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
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
 * Address:	8007470C
 * Size:	000318
 */
void J3DGDSetLightAttn(_GXLightID id, float p2, float p3, float p4, float p5, float p6, float p7)
{
	if (GX_MAX_LIGHT < id) {
		id = GX_LIGHT_NULL;
	}
	u16 v1 = (id & 0xFFF) * 0x10 + 0x604;
	__GDWrite(0x10);
	__GDWrite(0x00);
	__GDWrite(0x05);
	__GDWriteU16(v1);
	__GDWriteF32(p2);
	__GDWriteF32(p3);
	__GDWriteF32(p4);
	__GDWriteF32(p5);
	__GDWriteF32(p6);
	__GDWriteF32(p7);
	/*
	stwu     r1, -0x30(r1)
	cntlzw   r0, r3
	subfic   r0, r0, 0x1f
	stw      r31, 0x2c(r1)
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 7
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	ble      lbl_80074738
	li       r0, 0

lbl_80074738:
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r0, 4, 0x10, 0x1b
	addi     r29, r3, 0x604
	stfs     f1, 0x1c(r1)
	lwz      r3, 8(r4)
	li       r5, 0x10
	lwz      r12, 0x1c(r1)
	li       r31, 0
	addi     r0, r3, 1
	stfs     f2, 0x18(r1)
	li       r30, 5
	rlwinm   r28, r29, 0x18, 0x18, 0x1f
	stw      r0, 8(r4)
	srwi     r11, r12, 0x18
	lwz      r8, 0x18(r1)
	rlwinm   r10, r12, 0x10, 0x18, 0x1f
	stb      r5, 0(r3)
	rlwinm   r9, r12, 0x18, 0x18, 0x1f
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r31, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r28, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r29, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r12, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f3, 0x14(r1)
	lwz      r3, 8(r4)
	lwz      r28, 0x14(r1)
	addi     r0, r3, 1
	stfs     f4, 0x10(r1)
	srwi     r29, r28, 0x18
	rlwinm   r30, r28, 0x10, 0x18, 0x1f
	stw      r0, 8(r4)
	rlwinm   r31, r28, 0x18, 0x18, 0x1f
	lwz      r12, 0x10(r1)
	stb      r8, 0(r3)
	srwi     r11, r12, 0x18
	rlwinm   r10, r12, 0x10, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r8, r12, 0x18, 0x18, 0x1f
	stfs     f5, 0xc(r1)
	lwz      r3, 8(r4)
	lwz      r9, 0xc(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r7, r9, 0x18
	rlwinm   r6, r9, 0x10, 0x18, 0x1f
	rlwinm   r5, r9, 0x18, 0x18, 0x1f
	stb      r29, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r31, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r28, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r12, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f6, 8(r1)
	lwz      r3, 8(r4)
	lwz      r8, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074A24
 * Size:	000110
 */
void J3DGDSetLightColor(_GXLightID, _GXColor)
{
	/*
	cntlzw   r0, r3
	lbz      r3, 1(r4)
	subfic   r0, r0, 0x1f
	lbz      r5, 0(r4)
	clrlwi   r7, r0, 0x10
	lbz      r6, 2(r4)
	lbz      r0, 3(r4)
	cmplwi   r7, 7
	slwi     r3, r3, 0x10
	rlwimi   r3, r5, 0x18, 0, 7
	rlwimi   r3, r6, 8, 0x10, 0x17
	or       r0, r0, r3
	ble      lbl_80074A5C
	li       r7, 0

lbl_80074A5C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r7, 4, 0x10, 0x1b
	addi     r10, r3, 0x603
	li       r12, 0x10
	lwz      r4, 8(r5)
	li       r11, 0
	rlwinm   r9, r10, 0x18, 0x18, 0x1f
	srwi     r8, r0, 0x18
	addi     r3, r4, 1
	rlwinm   r7, r0, 0x10, 0x18, 0x1f
	stw      r3, 8(r5)
	rlwinm   r6, r0, 0x18, 0x18, 0x1f
	stb      r12, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r11, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r11, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074B34
 * Size:	0001EC
 */
void J3DGDSetLightPos(_GXLightID, float, float, float)
{
	/*
	stwu     r1, -0x30(r1)
	cntlzw   r0, r3
	subfic   r0, r0, 0x1f
	stw      r31, 0x2c(r1)
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 7
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	ble      lbl_80074B60
	li       r0, 0

lbl_80074B60:
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r0, 4, 0x10, 0x1b
	addi     r30, r3, 0x60a
	stfs     f1, 0x10(r1)
	lwz      r3, 8(r4)
	li       r5, 0x10
	lwz      r12, 0x10(r1)
	li       r28, 0
	addi     r0, r3, 1
	stfs     f2, 0xc(r1)
	li       r29, 2
	rlwinm   r31, r30, 0x18, 0x18, 0x1f
	stw      r0, 8(r4)
	srwi     r11, r12, 0x18
	lwz      r9, 0xc(r1)
	rlwinm   r10, r12, 0x10, 0x18, 0x1f
	stb      r5, 0(r3)
	rlwinm   r8, r12, 0x18, 0x18, 0x1f
	srwi     r7, r9, 0x18
	rlwinm   r6, r9, 0x10, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r5, r9, 0x18, 0x18, 0x1f
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r28, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r29, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r31, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r12, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f3, 8(r1)
	lwz      r3, 8(r4)
	lwz      r8, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074D20
 * Size:	0001EC
 */
void J3DGDSetLightDir(_GXLightID, float, float, float)
{
	/*
	stwu     r1, -0x30(r1)
	cntlzw   r0, r3
	subfic   r0, r0, 0x1f
	stw      r31, 0x2c(r1)
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 7
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	ble      lbl_80074D4C
	li       r0, 0

lbl_80074D4C:
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r0, 4, 0x10, 0x1b
	addi     r30, r3, 0x60d
	stfs     f1, 0x10(r1)
	lwz      r3, 8(r4)
	li       r5, 0x10
	lwz      r12, 0x10(r1)
	li       r28, 0
	addi     r0, r3, 1
	stfs     f2, 0xc(r1)
	li       r29, 2
	rlwinm   r31, r30, 0x18, 0x18, 0x1f
	stw      r0, 8(r4)
	srwi     r11, r12, 0x18
	lwz      r9, 0xc(r1)
	rlwinm   r10, r12, 0x10, 0x18, 0x1f
	stb      r5, 0(r3)
	rlwinm   r8, r12, 0x18, 0x18, 0x1f
	srwi     r7, r9, 0x18
	rlwinm   r6, r9, 0x10, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	rlwinm   r5, r9, 0x18, 0x18, 0x1f
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r28, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r29, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r31, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r12, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f3, 8(r1)
	lwz      r3, 8(r4)
	lwz      r8, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074F0C
 * Size:	000548
 */
void J3DGDSetVtxAttrFmtv(_GXVtxFmt, const _GXVtxAttrFmtList*, bool)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	li       r0, 1
	stmw     r14, 0x58(r1)
	li       r31, 0
	li       r30, 0
	li       r14, 0
	stw      r0, 0x48(r1)
	li       r0, 4
	li       r29, 1
	li       r28, 4
	stw      r0, 0x44(r1)
	li       r0, 0
	li       r27, 0
	li       r26, 1
	stw      r0, 0x40(r1)
	li       r0, 4
	li       r25, 4
	li       r24, 0
	stw      r0, 0x3c(r1)
	li       r0, 1
	li       r23, 1
	li       r22, 4
	stw      r0, 0x38(r1)
	li       r0, 5
	li       r21, 0
	li       r20, 1
	stw      r0, 0x34(r1)
	li       r0, 1
	li       r19, 4
	li       r18, 0
	stw      r0, 0x30(r1)
	li       r0, 5
	li       r17, 1
	li       r16, 4
	stw      r0, 0x2c(r1)
	li       r0, 1
	li       r15, 0
	stw      r0, 0x28(r1)
	li       r0, 4
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r0, 0x20(r1)
	li       r0, 1
	stw      r0, 0x1c(r1)
	li       r0, 4
	stw      r0, 0x18(r1)
	li       r0, 0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r0, 0x10(r1)
	li       r0, 4
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	b        lbl_80075130

lbl_80074FEC:
	addi     r0, r3, -9
	cmplwi   r0, 0x10
	bgt      lbl_8007512C
	lis      r3, lbl_804A2048@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A2048@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80075010

lbl_80075010:
	lwz      r0, 4(r4)
	stw      r0, 0x48(r1)
	lwz      r0, 8(r4)
	stw      r0, 0x44(r1)
	lbz      r0, 0xc(r4)
	stw      r0, 0x40(r1)
	b        lbl_8007512C
	.global  lbl_8007502C

lbl_8007502C:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	cmpwi    r6, 2
	stw      r0, 0x3c(r1)
	bne      lbl_8007504C
	li       r31, 1
	li       r30, 1
	b        lbl_8007512C

lbl_8007504C:
	clrlwi.  r0, r5, 0x18
	li       r3, 1
	bne      lbl_8007505C
	mr       r3, r6

lbl_8007505C:
	mr       r31, r3
	li       r30, 0
	b        lbl_8007512C
	.global  lbl_80075068

lbl_80075068:
	lwz      r0, 4(r4)
	stw      r0, 0x38(r1)
	lwz      r0, 8(r4)
	stw      r0, 0x34(r1)
	b        lbl_8007512C
	.global  lbl_8007507C

lbl_8007507C:
	lwz      r0, 4(r4)
	stw      r0, 0x30(r1)
	lwz      r0, 8(r4)
	stw      r0, 0x2c(r1)
	b        lbl_8007512C
	.global  lbl_80075090

lbl_80075090:
	lwz      r0, 4(r4)
	stw      r0, 0x28(r1)
	lwz      r0, 8(r4)
	stw      r0, 0x24(r1)
	lbz      r0, 0xc(r4)
	stw      r0, 0x20(r1)
	b        lbl_8007512C
	.global  lbl_800750AC

lbl_800750AC:
	lwz      r0, 4(r4)
	stw      r0, 0x1c(r1)
	lwz      r0, 8(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0xc(r4)
	stw      r0, 0x14(r1)
	b        lbl_8007512C
	.global  lbl_800750C8

lbl_800750C8:
	lwz      r0, 4(r4)
	lbz      r14, 0xc(r4)
	stw      r0, 0x10(r1)
	lwz      r0, 8(r4)
	stw      r0, 0xc(r1)
	b        lbl_8007512C
	.global  lbl_800750E0

lbl_800750E0:
	lwz      r29, 4(r4)
	lwz      r28, 8(r4)
	lbz      r27, 0xc(r4)
	b        lbl_8007512C
	.global  lbl_800750F0

lbl_800750F0:
	lwz      r26, 4(r4)
	lwz      r25, 8(r4)
	lbz      r24, 0xc(r4)
	b        lbl_8007512C
	.global  lbl_80075100

lbl_80075100:
	lwz      r23, 4(r4)
	lwz      r22, 8(r4)
	lbz      r21, 0xc(r4)
	b        lbl_8007512C
	.global  lbl_80075110

lbl_80075110:
	lwz      r20, 4(r4)
	lwz      r19, 8(r4)
	lbz      r18, 0xc(r4)
	b        lbl_8007512C
	.global  lbl_80075120

lbl_80075120:
	lwz      r17, 4(r4)
	lwz      r16, 8(r4)
	lbz      r15, 0xc(r4)
	.global  lbl_8007512C

lbl_8007512C:
	addi     r4, r4, 0x10

lbl_80075130:
	lwz      r3, 0(r4)
	cmpwi    r3, 0xff
	bne      lbl_80074FEC
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x12
	cmplw    r3, r0
	ble      lbl_80075158
	bl       GDOverflowed

lbl_80075158:
	lwz      r0, 0x44(r1)
	li       r5, 8
	lwz      r4, 8(r1)
	slwi     r3, r0, 1
	lwz      r10, __GDCurrentDL@sda21(r13)
	addi     r0, r4, 0x70
	lwz      r4, 0x18(r1)
	lwz      r9, 8(r10)
	slwi     r6, r4, 1
	lwz      r4, 8(r1)
	lwz      r11, 0x48(r1)
	addi     r8, r9, 1
	addi     r7, r4, 0x80
	lwz      r4, 0x40(r1)
	stw      r8, 8(r10)
	or       r3, r11, r3
	slwi     r4, r4, 4
	slwi     r8, r31, 9
	or       r4, r4, r3
	lwz      r3, 0x3c(r1)
	stb      r5, 0(r9)
	or       r9, r8, r4
	lwz      r4, 0x38(r1)
	slwi     r3, r3, 0xa
	or       r3, r3, r9
	lwz      r11, 0x28(r1)
	slwi     r10, r4, 0xd
	lwz      r4, 0x34(r1)
	or       r10, r10, r3
	lwz      r3, 0x30(r1)
	slwi     r8, r4, 0xe
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r9, r3, 0x11
	slwi     r11, r11, 0x15
	or       r8, r8, r10
	lwz      r3, 8(r4)
	lwz      r10, 0x2c(r1)
	or       r8, r9, r8
	addi     r12, r3, 1
	stw      r12, 8(r4)
	slwi     r10, r10, 0x12
	lwz      r4, 0x24(r1)
	or       r8, r10, r8
	stb      r0, 0(r3)
	or       r0, r11, r8
	slwi     r9, r4, 0x16
	lwz      r4, 0x20(r1)
	or       r0, r9, r0
	lwz      r3, __GDCurrentDL@sda21(r13)
	slwi     r4, r4, 0x19
	slwi     r9, r30, 0x1f
	or       r0, r4, r0
	lwz      r4, 8(r3)
	oris     r8, r0, 0x4000
	lwz      r0, 0x14(r1)
	addi     r11, r4, 1
	slwi     r12, r28, 0x13
	slwi     r10, r0, 4
	stw      r11, 8(r3)
	or       r9, r9, r8
	lwz      r0, 0x1c(r1)
	slwi     r11, r29, 0x12
	or       r8, r0, r6
	srwi     r6, r9, 0x18
	stb      r6, 0(r4)
	or       r10, r10, r8
	lwz      r0, 0x10(r1)
	rlwinm   r8, r9, 0x10, 0x18, 0x1f
	lwz      r4, 0xc(r1)
	rlwinm   r3, r9, 0x18, 0x18, 0x1f
	slwi     r0, r0, 9
	lwz      r6, __GDCurrentDL@sda21(r13)
	or       r0, r0, r10
	slwi     r4, r4, 0xa
	or       r0, r4, r0
	slwi     r10, r14, 0xd
	or       r0, r10, r0
	lwz      r4, 8(r6)
	or       r0, r11, r0
	slwi     r10, r27, 0x16
	addi     r14, r4, 1
	slwi     r11, r26, 0x1b
	stw      r14, 8(r6)
	or       r0, r12, r0
	or       r0, r10, r0
	slwi     r6, r25, 0x1c
	stb      r8, 0(r4)
	or       r0, r11, r0
	or       r0, r6, r0
	lwz      r10, __GDCurrentDL@sda21(r13)
	oris     r4, r0, 0x8000
	srwi     r8, r4, 0x18
	lwz      r6, 8(r10)
	addi     r0, r6, 1
	stw      r0, 8(r10)
	stb      r3, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r6)
	addi     r0, r3, 1
	stw      r0, 8(r6)
	stb      r9, 0(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r6)
	addi     r0, r3, 1
	stw      r0, 8(r6)
	stb      r5, 0(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r6)
	addi     r0, r3, 1
	stw      r0, 8(r6)
	stb      r7, 0(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r6)
	addi     r0, r3, 1
	stw      r0, 8(r6)
	stb      r8, 0(r3)
	lwz      r11, __GDCurrentDL@sda21(r13)
	slwi     r6, r23, 5
	lwz      r3, 8(r1)
	rlwinm   r12, r4, 0x10, 0x18, 0x1f
	lwz      r10, 8(r11)
	slwi     r7, r22, 6
	or       r6, r24, r6
	addi     r0, r3, 0x90
	addi     r9, r10, 1
	slwi     r8, r21, 9
	stw      r9, 8(r11)
	or       r6, r7, r6
	or       r6, r8, r6
	slwi     r7, r20, 0xe
	stb      r12, 0(r10)
	or       r6, r7, r6
	slwi     r9, r19, 0xf
	slwi     r7, r18, 0x12
	lwz      r11, __GDCurrentDL@sda21(r13)
	or       r6, r9, r6
	or       r6, r7, r6
	slwi     r8, r17, 0x17
	lwz      r10, 8(r11)
	or       r6, r8, r6
	slwi     r9, r16, 0x18
	rlwinm   r3, r4, 0x18, 0x18, 0x1f
	addi     r8, r10, 1
	slwi     r7, r15, 0x1b
	stw      r8, 8(r11)
	or       r6, r9, r6
	or       r6, r7, r6
	stb      r3, 0(r10)
	srwi     r9, r6, 0x18
	rlwinm   r8, r6, 0x10, 0x18, 0x1f
	rlwinm   r7, r6, 0x18, 0x18, 0x1f
	lwz      r11, __GDCurrentDL@sda21(r13)
	lwz      r10, 8(r11)
	addi     r3, r10, 1
	stw      r3, 8(r11)
	stb      r4, 0(r10)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r10)
	addi     r3, r4, 1
	stw      r3, 8(r10)
	stb      r5, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lmw      r14, 0x58(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075454
 * Size:	0001D0
 */
void J3DGDSetTexCoordGen(_GXTexGenType, _GXTexGenSrc)
{
	/*
	cmplwi   r4, 0x14
	li       r7, 0
	li       r8, 0
	li       r9, 5
	li       r10, 5
	li       r11, 0
	bgt      lbl_8007553C
	lis      r5, lbl_804A208C@ha
	slwi     r0, r4, 2
	addi     r5, r5, lbl_804A208C@l
	lwzx     r0, r5, r0
	mtctr    r0
	bctr
	.global  lbl_80075488

lbl_80075488:
	li       r9, 0
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_80075494

lbl_80075494:
	li       r9, 1
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754A0

lbl_800754A0:
	li       r9, 3
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754AC

lbl_800754AC:
	li       r9, 4
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754B8

lbl_800754B8:
	li       r9, 2
	b        lbl_8007553C
	.global  lbl_800754C0

lbl_800754C0:
	li       r9, 2
	b        lbl_8007553C
	.global  lbl_800754C8

lbl_800754C8:
	li       r9, 5
	b        lbl_8007553C
	.global  lbl_800754D0

lbl_800754D0:
	li       r9, 6
	b        lbl_8007553C
	.global  lbl_800754D8

lbl_800754D8:
	li       r9, 7
	b        lbl_8007553C
	.global  lbl_800754E0

lbl_800754E0:
	li       r9, 8
	b        lbl_8007553C
	.global  lbl_800754E8

lbl_800754E8:
	li       r9, 9
	b        lbl_8007553C
	.global  lbl_800754F0

lbl_800754F0:
	li       r9, 0xa
	b        lbl_8007553C
	.global  lbl_800754F8

lbl_800754F8:
	li       r9, 0xb
	b        lbl_8007553C
	.global  lbl_80075500

lbl_80075500:
	li       r9, 0xc
	b        lbl_8007553C
	.global  lbl_80075508

lbl_80075508:
	li       r10, 0
	b        lbl_8007553C
	.global  lbl_80075510

lbl_80075510:
	li       r10, 1
	b        lbl_8007553C
	.global  lbl_80075518

lbl_80075518:
	li       r10, 2
	b        lbl_8007553C
	.global  lbl_80075520

lbl_80075520:
	li       r10, 3
	b        lbl_8007553C
	.global  lbl_80075528

lbl_80075528:
	li       r10, 4
	b        lbl_8007553C
	.global  lbl_80075530

lbl_80075530:
	li       r10, 5
	b        lbl_8007553C
	.global  lbl_80075538

lbl_80075538:
	li       r10, 6

lbl_8007553C:
	cmpwi    r3, 1
	beq      lbl_80075564
	bge      lbl_80075554
	cmpwi    r3, 0
	bge      lbl_8007556C
	b        lbl_80075598

lbl_80075554:
	cmpwi    r3, 0xa
	beq      lbl_80075584
	bge      lbl_80075598
	b        lbl_80075578

lbl_80075564:
	li       r6, 0
	b        lbl_80075598

lbl_8007556C:
	li       r6, 0
	li       r8, 1
	b        lbl_80075598

lbl_80075578:
	addi     r11, r3, -2
	li       r6, 1
	b        lbl_80075598

lbl_80075584:
	cmpwi    r4, 0x13
	bne      lbl_80075594
	li       r6, 2
	b        lbl_80075598

lbl_80075594:
	li       r6, 3

lbl_80075598:
	slwi     r0, r7, 2
	slwi     r3, r8, 1
	slwi     r5, r6, 4
	lwz      r4, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	slwi     r6, r9, 7
	or       r5, r5, r0
	lwz      r3, 8(r4)
	or       r5, r6, r5
	slwi     r7, r10, 0xc
	addi     r0, r3, 1
	slwi     r6, r11, 0xf
	or       r5, r7, r5
	stw      r0, 8(r4)
	or       r7, r6, r5
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075624
 * Size:	0001FC
 */
void J3DGDSetTexCoordScale2(_GXTexCoordID, unsigned short, unsigned char, unsigned char, unsigned short, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r27, r7
	  mr        r30, r8
	  mr        r31, r9
	  lwz       r10, -0x7158(r13)
	  lwz       r3, 0x8(r10)
	  lwz       r0, 0xC(r10)
	  addi      r3, r3, 0xF
	  cmplw     r3, r0
	  ble-      .loc_0x48
	  bl        0x6C5D8

	.loc_0x48:
	  lwz       r3, -0x7158(r13)
	  rlwinm    r4,r25,1,0,30
	  addi      r7, r4, 0x30
	  rlwinm    r8,r26,0,16,31
	  lwz       r10, 0x8(r3)
	  addi      r6, r4, 0x31
	  subi      r9, r8, 0x1
	  rlwinm    r8,r28,16,8,15
	  addi      r0, r10, 0x1
	  rlwinm    r5,r27,0,16,31
	  stw       r0, 0x8(r3)
	  li        r4, 0x61
	  or        r8, r9, r8
	  li        r27, 0xFE
	  stb       r4, 0x0(r10)
	  rlwinm    r10,r29,17,7,14
	  or        r9, r10, r8
	  rlwinm    r7,r7,24,0,7
	  lwz       r11, -0x7158(r13)
	  subi      r8, r5, 0x1
	  or        r5, r9, r7
	  rlwinm    r7,r30,16,8,15
	  lwz       r28, 0x8(r11)
	  rlwinm    r9,r31,17,7,14
	  or        r7, r8, r7
	  li        r3, 0x3
	  addi      r10, r28, 0x1
	  li        r0, 0xFF
	  stw       r10, 0x8(r11)
	  or        r7, r9, r7
	  rlwinm    r6,r6,24,0,7
	  rlwinm    r12,r5,8,24,31
	  stb       r27, 0x0(r28)
	  or        r6, r7, r6
	  rlwinm    r11,r5,16,24,31
	  rlwinm    r10,r5,24,24,31
	  lwz       r28, -0x7158(r13)
	  rlwinm    r7,r6,8,24,31
	  lwz       r9, 0x8(r28)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r28)
	  stb       r3, 0x0(r9)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r3, r8, 0x1
	  stw       r3, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r3, r8, 0x1
	  stw       r3, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r12, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r11, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r10, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r5, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r4, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r6,16,24,31
	  rlwinm    r5,r6,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075820
 * Size:	0001AC
 */
void J3DGDSetTexLookupMode(_GXTexMapID, _GXTexWrapMode, _GXTexWrapMode, _GXTexFilter, _GXTexFilter, float, float, float, unsigned char,
                           unsigned char, _GXAnisotropy)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  rlwinm    r5,r5,2,0,29
	  lfs       f0, -0x78C8(r2)
	  subi      r11, r13, 0x7F94
	  stw       r31, 0x2C(r1)
	  subfic    r0, r7, 0x1
	  fmuls     f0, f0, f3
	  lfs       f4, -0x78C4(r2)
	  stw       r30, 0x28(r1)
	  subi      r30, r13, 0x7F6C
	  fmuls     f1, f4, f1
	  cntlzw    r31, r0
	  lwz       r12, -0x7158(r13)
	  fctiwz    f0, f0
	  lbzx      r30, r30, r6
	  rlwinm    r6,r9,0,24,31
	  lwz       r7, 0x8(r12)
	  cntlzw    r9, r6
	  lbzx      r11, r11, r3
	  addi      r0, r7, 0x1
	  stfd      f0, 0x8(r1)
	  or        r4, r4, r5
	  rlwinm    r6,r31,31,20,27
	  stw       r0, 0x8(r12)
	  li        r0, 0x61
	  fmuls     f0, f4, f2
	  lwz       r12, 0xC(r1)
	  stb       r0, 0x0(r7)
	  or        r4, r6, r4
	  rlwinm    r5,r30,5,0,26
	  rlwinm    r7,r9,3,16,23
	  or        r4, r5, r4
	  lwz       r6, -0x7158(r13)
	  rlwinm    r9,r12,9,15,22
	  rlwinm    r10,r10,19,0,12
	  or        r4, r7, r4
	  lwz       r5, 0x8(r6)
	  or        r4, r9, r4
	  rlwinm    r8,r8,21,3,10
	  or        r7, r10, r4
	  rlwinm    r9,r11,24,0,7
	  addi      r4, r5, 0x1
	  fctiwz    f0, f0
	  stw       r4, 0x8(r6)
	  or        r4, r8, r7
	  or        r11, r9, r4
	  fctiwz    f1, f1
	  rlwinm    r4,r11,8,24,31
	  stb       r4, 0x0(r5)
	  rlwinm    r8,r11,16,24,31
	  rlwinm    r10,r11,24,24,31
	  subi      r6, r13, 0x7F8C
	  lwz       r7, -0x7158(r13)
	  stfd      f0, 0x18(r1)
	  lwz       r5, 0x8(r7)
	  stfd      f1, 0x10(r1)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r7)
	  lwz       r4, 0x1C(r1)
	  stb       r8, 0x0(r5)
	  lwz       r5, 0x14(r1)
	  rlwinm    r4,r4,8,16,23
	  lwz       r9, -0x7158(r13)
	  rlwimi    r4,r5,0,24,31
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r5, r7, 0x1
	  stw       r5, 0x8(r8)
	  stb       r11, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lbzx      r3, r6, r3
	  lwz       r5, 0x8(r7)
	  rlwimi    r4,r3,24,0,7
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r7)
	  rlwinm    r6,r4,8,24,31
	  stb       r0, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  rlwinm    r7,r4,16,24,31
	  rlwinm    r6,r4,24,24,31
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r4, 0x0(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800759CC
 * Size:	0000A8
 */
void J3DGDSetTexImgAttr(_GXTexMapID, unsigned short, unsigned short, _GXTexFmt)
{
	/*
	lwz      r7, __GDCurrentDL@sda21(r13)
	addi     r8, r13, J3DGDTexImage0Ids@sda21
	lbzx     r9, r8, r3
	clrlwi   r8, r4, 0x10
	lwz      r3, 8(r7)
	clrlwi   r5, r5, 0x10
	li       r4, 0x61
	addi     r8, r8, -1
	addi     r0, r3, 1
	addi     r5, r5, -1
	stw      r0, 8(r7)
	slwi     r0, r5, 0xa
	slwi     r5, r6, 0x14
	slwi     r6, r9, 0x18
	stb      r4, 0(r3)
	or       r0, r8, r0
	or       r0, r5, r0
	lwz      r4, __GDCurrentDL@sda21(r13)
	or       r8, r6, r0
	srwi     r7, r8, 0x18
	lwz      r3, 8(r4)
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075A74
 * Size:	000090
 */
void J3DGDSetTexImgPtr(_GXTexMapID, void*)
{
	/*
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r6, r13, J3DGDTexImage3Ids@sda21
	lbzx     r0, r6, r3
	addis    r6, r4, 0x8000
	lwz      r3, 8(r5)
	srwi     r7, r6, 5
	slwi     r6, r0, 0x18
	li       r4, 0x61
	addi     r0, r3, 1
	stw      r0, 8(r5)
	or       r8, r7, r6
	srwi     r7, r8, 0x18
	stb      r4, 0(r3)
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075B04
 * Size:	0000D4
 */
void J3DGDSetTexImgPtrRaw(_GXTexMapID, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r5)
	lwz      r0, 0xc(r5)
	addi     r3, r3, 5
	cmplw    r3, r0
	ble      lbl_80075B3C
	bl       GDOverflowed

lbl_80075B3C:
	lwz      r4, __GDCurrentDL@sda21(r13)
	addi     r3, r13, J3DGDTexImage3Ids@sda21
	lbzx     r0, r3, r30
	li       r5, 0x61
	lwz      r3, 8(r4)
	slwi     r6, r0, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r4)
	or       r8, r31, r6
	srwi     r7, r8, 0x18
	stb      r5, 0(r3)
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
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
 * Address:	80075BD8
 * Size:	000098
 */
void J3DGDSetTexTlut(_GXTexMapID, unsigned long, _GXTlutFmt)
{
	/*
	lwz      r6, __GDCurrentDL@sda21(r13)
	addi     r7, r13, J3DGDTexTlutIds@sda21
	lbzx     r8, r7, r3
	addis    r0, r4, 0xfff8
	lwz      r3, 8(r6)
	srwi     r7, r0, 9
	li       r4, 0x61
	slwi     r5, r5, 0xa
	addi     r0, r3, 1
	slwi     r8, r8, 0x18
	stw      r0, 8(r6)
	or       r0, r7, r5
	or       r8, r8, r0
	stb      r4, 0(r3)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075C70
 * Size:	0002C8
 */
void J3DGDLoadTlut(void*, unsigned long, _GXTlutSize)
{
	/*
	stwu     r1, -0x20(r1)
	addis    r0, r3, 0x8000
	srwi     r0, r0, 5
	li       r8, 0x61
	stw      r31, 0x1c(r1)
	oris     r9, r0, 0x6400
	li       r7, 0xfe
	li       r6, 0xff
	stw      r30, 0x18(r1)
	li       r3, 0
	rlwinm   r30, r9, 0x10, 0x18, 0x1f
	rlwinm   r31, r9, 0x18, 0x18, 0x1f
	stw      r29, 0x14(r1)
	srwi     r29, r9, 0x18
	lwz      r11, __GDCurrentDL@sda21(r13)
	lwz      r10, 8(r11)
	addi     r0, r10, 1
	stw      r0, 8(r11)
	li       r0, 0xf
	stb      r8, 0(r10)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r7, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r6, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r6, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r3, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r8, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r0, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r3, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r3, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r3, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r8, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r29, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r30, 0(r11)
	lwz      r12, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r12)
	addi     r10, r11, 1
	stw      r10, 8(r12)
	stb      r31, 0(r11)
	lwz      r11, __GDCurrentDL@sda21(r13)
	addis    r4, r4, 0xfff8
	srwi     r10, r4, 9
	slwi     r4, r5, 0xa
	lwz      r5, 8(r11)
	or       r4, r10, r4
	oris     r29, r4, 0x6500
	addi     r4, r5, 1
	stw      r4, 8(r11)
	srwi     r12, r29, 0x18
	rlwinm   r11, r29, 0x10, 0x18, 0x1f
	rlwinm   r10, r29, 0x18, 0x18, 0x1f
	stb      r9, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r8, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r12, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r11, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r10, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r29, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r8, 0(r5)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r7, 0(r5)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r7)
	addi     r4, r5, 1
	stw      r4, 8(r7)
	stb      r6, 0(r5)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r7)
	addi     r4, r5, 1
	stw      r4, 8(r7)
	stb      r6, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r3, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80075F38
 * Size:	0002D8
 */
void J3DGDSetIndTexMtx(_GXIndTexMtxID, float (*)[3], char)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	cmpwi    r3, 8
	stw      r0, 0x64(r1)
	stmw     r24, 0x40(r1)
	mr       r27, r5
	beq      lbl_80075F94
	bge      lbl_80075F70
	cmpwi    r3, 4
	beq      lbl_80075F94
	bge      lbl_80075F84
	cmpwi    r3, 1
	bge      lbl_80075F7C
	b        lbl_80075F94

lbl_80075F70:
	cmpwi    r3, 0xc
	bge      lbl_80075F94
	b        lbl_80075F8C

lbl_80075F7C:
	addi     r28, r3, -1
	b        lbl_80075F98

lbl_80075F84:
	addi     r28, r3, -5
	b        lbl_80075F98

lbl_80075F8C:
	addi     r28, r3, -9
	b        lbl_80075F98

lbl_80075F94:
	li       r28, 0

lbl_80075F98:
	lfs      f6, lbl_80516AA0@sda21(r2)
	lfs      f2, 0(r4)
	lfs      f1, 0xc(r4)
	lfs      f0, 4(r4)
	fmuls    f5, f6, f2
	lfs      f2, 0x10(r4)
	fmuls    f4, f6, f1
	lwz      r5, __GDCurrentDL@sda21(r13)
	fmuls    f3, f6, f0
	lfs      f1, 8(r4)
	lfs      f0, 0x14(r4)
	fmuls    f2, f6, f2
	fmuls    f1, f6, f1
	lwz      r3, 8(r5)
	fmuls    f0, f6, f0
	lwz      r0, 0xc(r5)
	fctiwz   f5, f5
	fctiwz   f4, f4
	fctiwz   f3, f3
	addi     r3, r3, 0xf
	fctiwz   f2, f2
	stfd     f5, 8(r1)
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f4, 0x10(r1)
	cmplw    r3, r0
	lwz      r3, 0xc(r1)
	stfd     f3, 0x18(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r31, r3, 0x15
	stfd     f2, 0x20(r1)
	lwz      r3, 0x1c(r1)
	clrlwi   r26, r0, 0x15
	stfd     f1, 0x28(r1)
	lwz      r0, 0x24(r1)
	clrlwi   r30, r3, 0x15
	stfd     f0, 0x30(r1)
	lwz      r3, 0x2c(r1)
	clrlwi   r25, r0, 0x15
	lwz      r0, 0x34(r1)
	clrlwi   r29, r3, 0x15
	clrlwi   r24, r0, 0x15
	ble      lbl_80076048
	bl       GDOverflowed

lbl_80076048:
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r0, r27, 0x11
	extsb    r3, r0
	slwi     r8, r25, 0xb
	lwz      r4, 8(r5)
	mulli    r6, r28, 3
	slwi     r10, r26, 0xb
	addi     r0, r4, 1
	stw      r0, 8(r5)
	li       r0, 0x61
	addi     r5, r6, 7
	addi     r9, r6, 6
	stb      r0, 0(r4)
	rlwinm   r11, r3, 0x16, 8, 9
	or       r4, r31, r10
	or       r8, r30, r8
	lwz      r12, __GDCurrentDL@sda21(r13)
	or       r10, r11, r4
	slwi     r4, r9, 0x18
	rlwinm   r9, r3, 0x14, 8, 9
	lwz      r11, 8(r12)
	or       r4, r10, r4
	srwi     r27, r4, 0x18
	slwi     r7, r24, 0xb
	addi     r10, r11, 1
	slwi     r5, r5, 0x18
	stw      r10, 8(r12)
	or       r8, r9, r8
	or       r5, r8, r5
	addi     r6, r6, 8
	stb      r27, 0(r11)
	rlwinm   r8, r3, 0x12, 8, 9
	or       r3, r29, r7
	rlwinm   r30, r4, 0x10, 0x18, 0x1f
	lwz      r28, __GDCurrentDL@sda21(r13)
	or       r7, r8, r3
	slwi     r3, r6, 0x18
	rlwinm   r12, r4, 0x18, 0x18, 0x1f
	lwz      r27, 8(r28)
	or       r3, r7, r3
	srwi     r11, r5, 0x18
	rlwinm   r10, r5, 0x10, 0x18, 0x1f
	addi     r6, r27, 1
	rlwinm   r9, r5, 0x18, 0x18, 0x1f
	stw      r6, 8(r28)
	stb      r30, 0(r27)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r6, r7, 1
	stw      r6, 8(r8)
	stb      r12, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r6, r7, 1
	stw      r6, 8(r8)
	stb      r4, 0(r7)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r4, r6, 1
	stw      r4, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r4, r6, 1
	stw      r4, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r4, r6, 1
	stw      r4, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r4, r6, 1
	stw      r4, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r4, r6, 1
	stw      r4, 8(r7)
	stb      r5, 0(r6)
	lwz      r9, __GDCurrentDL@sda21(r13)
	srwi     r8, r3, 0x18
	rlwinm   r7, r3, 0x10, 0x18, 0x1f
	rlwinm   r6, r3, 0x18, 0x18, 0x1f
	lwz      r5, 8(r9)
	addi     r4, r5, 1
	stw      r4, 8(r9)
	stb      r0, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lmw      r24, 0x40(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80076210
 * Size:	0000F0
 */
void J3DGDSetIndTexCoordScale(_GXIndTexStageID, _GXIndTexScale, _GXIndTexScale, _GXIndTexScale, _GXIndTexScale)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  lwz       r0, 0xC(r8)
	  addi      r3, r3, 0x5
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  bl        0x6B9F4

	.loc_0x40:
	  lwz       r8, -0x7158(r13)
	  rlwinm    r0,r29,4,0,27
	  srawi     r3, r27, 0x1
	  li        r9, 0x61
	  lwz       r7, 0x8(r8)
	  addi      r5, r3, 0x25
	  rlwinm    r3,r30,8,0,23
	  or        r0, r28, r0
	  addi      r6, r7, 0x1
	  rlwinm    r4,r31,12,0,19
	  stw       r6, 0x8(r8)
	  or        r0, r3, r0
	  or        r0, r4, r0
	  rlwinm    r3,r5,24,0,7
	  stb       r9, 0x0(r7)
	  or        r8, r3, r0
	  rlwinm    r7,r8,8,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076300
 * Size:	0001F8
 */
void J3DGDSetIndTexOrder(unsigned long, _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID, _GXTexCoordID,
                         _GXTexMapID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r31, r3
	  lwz       r30, 0x38(r1)
	  mr        r23, r4
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  mr        r27, r8
	  mr        r28, r9
	  mr        r29, r10
	  lwz       r11, -0x7158(r13)
	  lwz       r3, 0x8(r11)
	  lwz       r0, 0xC(r11)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  ble-      .loc_0x50
	  bl        0x6B8F4

	.loc_0x50:
	  lwz       r6, -0x7158(r13)
	  rlwinm    r8,r23,3,26,28
	  rlwimi    r8,r24,0,29,31
	  li        r7, 0x61
	  lwz       r5, 0x8(r6)
	  rlwimi    r8,r26,6,23,25
	  rlwimi    r8,r25,9,20,22
	  rlwinm    r3,r30,0,29,31
	  addi      r0, r5, 0x1
	  li        r4, 0x1
	  stw       r0, 0x8(r6)
	  rlwimi    r8,r28,12,17,19
	  rlwimi    r8,r27,15,14,16
	  rlwinm    r10,r24,0,29,31
	  stb       r7, 0x0(r5)
	  rlwimi    r8,r30,18,11,13
	  rlwimi    r8,r29,21,8,10
	  rlwinm    r0,r28,0,29,31
	  lwz       r7, -0x7158(r13)
	  oris      r12, r8, 0x2700
	  rlwinm    r9,r12,16,24,31
	  rlwinm    r11,r26,0,29,31
	  lwz       r6, 0x8(r7)
	  slw       r10, r4, r10
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  rlwinm    r5,r12,8,24,31
	  stb       r5, 0x0(r6)
	  rlwinm    r5,r12,24,24,31
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  slw       r6, r4, r11
	  slw       r8, r4, r0
	  slw       r11, r4, r3
	  stb       r9, 0x0(r7)
	  li        r7, 0
	  li        r9, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  mtctr     r31
	  cmplwi    r31, 0
	  ble-      .loc_0x16C

	.loc_0x120:
	  cmpwi     r9, 0x2
	  beq-      .loc_0x158
	  bge-      .loc_0x13C
	  cmpwi     r9, 0
	  beq-      .loc_0x148
	  bge-      .loc_0x150
	  b         .loc_0x164

	.loc_0x13C:
	  cmpwi     r9, 0x4
	  bge-      .loc_0x164
	  b         .loc_0x160

	.loc_0x148:
	  or        r7, r7, r10
	  b         .loc_0x164

	.loc_0x150:
	  or        r7, r7, r6
	  b         .loc_0x164

	.loc_0x158:
	  or        r7, r7, r8
	  b         .loc_0x164

	.loc_0x160:
	  or        r7, r7, r11

	.loc_0x164:
	  addi      r9, r9, 0x1
	  bdnz+     .loc_0x120

	.loc_0x16C:
	  lwz       r4, -0x7158(r13)
	  oris      r9, r7, 0xF00
	  li        r8, 0x61
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  rlwinm    r5,r9,24,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800764F8
 * Size:	000188
 */
void J3DGDSetTevOrder(_GXTevStageID, _GXTexCoordID, _GXTexMapID, _GXChannelID, _GXTexCoordID, _GXTexMapID, _GXChannelID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  cmpwi     r4, 0x8
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r8
	  mr        r26, r9
	  mr        r30, r4
	  blt-      .loc_0x34
	  li        r30, 0

	.loc_0x34:
	  cmpwi     r7, 0x8
	  mr        r31, r7
	  blt-      .loc_0x44
	  li        r31, 0

	.loc_0x44:
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x5
	  cmplw     r3, r0
	  ble-      .loc_0x60
	  bl        0x6B6EC

	.loc_0x60:
	  rlwinm    r0,r25,1,31,31
	  lis       r3, 0x804A
	  add       r4, r0, r25
	  rlwinm    r0,r26,0,28,31
	  addi      r3, r3, 0x20E0
	  cmpwi     r29, 0xFF
	  srawi     r4, r4, 0x1
	  lbzx      r0, r3, r0
	  addi      r3, r4, 0x28
	  li        r6, 0
	  rlwinm    r3,r3,24,0,7
	  rlwinm    r0,r0,19,0,12
	  beq-      .loc_0xA0
	  rlwinm.   r4,r29,0,23,23
	  bne-      .loc_0xA0
	  li        r6, 0x1

	.loc_0xA0:
	  lis       r4, 0x804A
	  rlwinm    r7,r30,3,0,28
	  rlwinm    r5,r28,0,28,31
	  cmpwi     r27, 0xFF
	  addi      r4, r4, 0x20E0
	  rlwinm    r11,r6,18,6,13
	  lbzx      r4, r4, r5
	  rlwinm    r10,r31,15,0,16
	  rlwinm    r9,r29,12,17,19
	  rlwimi    r7,r27,0,29,31
	  rlwinm    r8,r4,7,0,24
	  li        r5, 0
	  beq-      .loc_0xE0
	  rlwinm.   r4,r27,0,23,23
	  bne-      .loc_0xE0
	  li        r5, 0x1

	.loc_0xE0:
	  lwz       r6, -0x7158(r13)
	  rlwinm    r4,r5,6,18,25
	  or        r4, r7, r4
	  li        r7, 0x61
	  lwz       r5, 0x8(r6)
	  or        r4, r8, r4
	  or        r8, r9, r4
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  or        r4, r10, r8
	  or        r4, r11, r4
	  stb       r7, 0x0(r5)
	  or        r0, r0, r4
	  or        r8, r3, r0
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076680
 * Size:	000168
 */
void J3DGDSetTevKColor(_GXTevKColorID, _GXColor)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	slwi     r5, r3, 1
	lbz      r8, 0(r4)
	stw      r0, 0x14(r1)
	addi     r7, r5, 0xe0
	lbz      r0, 3(r4)
	addi     r5, r5, 0xe1
	stw      r31, 0xc(r1)
	lbz      r6, 2(r4)
	rlwimi   r8, r0, 0xc, 0xc, 0x13
	stw      r30, 8(r1)
	oris     r8, r8, 0x80
	lbz      r4, 1(r4)
	lwz      r9, __GDCurrentDL@sda21(r13)
	rlwimi   r6, r4, 0xc, 0xc, 0x13
	slwi     r4, r7, 0x18
	lwz      r3, 8(r9)
	or       r31, r8, r4
	lwz      r0, 0xc(r9)
	addi     r3, r3, 0xa
	cmplw    r3, r0
	slwi     r0, r5, 0x18
	oris     r3, r6, 0x80
	or       r30, r3, r0
	ble      lbl_800766EC
	bl       GDOverflowed

lbl_800766EC:
	lwz      r4, __GDCurrentDL@sda21(r13)
	li       r11, 0x61
	srwi     r10, r31, 0x18
	rlwinm   r9, r31, 0x10, 0x18, 0x1f
	lwz      r3, 8(r4)
	rlwinm   r8, r31, 0x18, 0x18, 0x1f
	srwi     r7, r30, 0x18
	rlwinm   r6, r30, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r30, 0x18, 0x18, 0x1f
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r9, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r31, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r11, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
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
 * Address:	800767E8
 * Size:	000234
 */
void J3DGDSetTevColorS10(_GXTevRegID, _GXColorS10)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	slwi     r5, r3, 1
	lha      r6, 2(r4)
	stw      r0, 0x14(r1)
	addi     r7, r5, 0xe0
	lha      r0, 6(r4)
	addi     r5, r5, 0xe1
	stw      r31, 0xc(r1)
	rlwinm   r6, r6, 0xc, 9, 0x13
	lha      r9, 0(r4)
	rlwinm   r8, r0, 0xc, 9, 0x13
	stw      r30, 8(r1)
	lha      r4, 4(r4)
	rlwimi   r8, r9, 0, 0x15, 0x1f
	lwz      r10, __GDCurrentDL@sda21(r13)
	mr       r31, r8
	rlwimi   r6, r4, 0, 0x15, 0x1f
	lwz      r3, 8(r10)
	mr       r30, r6
	lwz      r0, 0xc(r10)
	rlwimi   r31, r7, 0x18, 0, 7
	addi     r3, r3, 0x14
	rlwimi   r30, r5, 0x18, 0, 7
	cmplw    r3, r0
	ble      lbl_80076854
	bl       GDOverflowed

lbl_80076854:
	lwz      r8, __GDCurrentDL@sda21(r13)
	li       r0, 0x61
	srwi     r12, r31, 0x18
	rlwinm   r11, r31, 0x10, 0x18, 0x1f
	lwz      r7, 8(r8)
	rlwinm   r10, r31, 0x18, 0x18, 0x1f
	srwi     r3, r30, 0x18
	rlwinm   r4, r30, 0x10, 0x18, 0x1f
	addi     r6, r7, 1
	rlwinm   r5, r30, 0x18, 0x18, 0x1f
	stw      r6, 8(r8)
	clrlwi   r6, r30, 0x18
	stb      r0, 0(r7)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r11, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r31, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r3, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r30, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r3, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r6, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r0, r7, 1
	stw      r0, 8(r8)
	stb      r3, 0(r7)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r7)
	addi     r0, r3, 1
	stw      r0, 8(r7)
	stb      r4, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
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
 * Address:	80076A1C
 * Size:	000360
 */
void J3DGDSetFog(_GXFogType, float, float, float, float, _GXColor)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	fcmpu    cr0, f4, f3
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r3
	mr       r29, r4
	beq      lbl_80076A44
	fcmpu    cr0, f2, f1
	bne      lbl_80076A54

lbl_80076A44:
	lfs      f3, lbl_80516AA4@sda21(r2)
	lfs      f4, lbl_80516AA8@sda21(r2)
	stfs     f3, 0xc(r1)
	b        lbl_80076A74

lbl_80076A54:
	fsubs    f0, f4, f3
	fsubs    f5, f2, f1
	fmuls    f3, f4, f3
	fdivs    f4, f4, f0
	fmuls    f2, f0, f5
	fdivs    f0, f1, f5
	fdivs    f3, f3, f2
	stfs     f0, 0xc(r1)

lbl_80076A74:
	lfs      f1, lbl_80516AA8@sda21(r2)
	li       r31, 1
	lfd      f0, lbl_80516AB0@sda21(r2)
	b        lbl_80076A8C

lbl_80076A84:
	fmuls    f4, f4, f1
	addi     r31, r31, 1

lbl_80076A8C:
	fcmpo    cr0, f4, f0
	bgt      lbl_80076A84
	lfd      f0, lbl_80516AC0@sda21(r2)
	lfs      f2, lbl_80516AB8@sda21(r2)
	lfs      f1, lbl_80516AA4@sda21(r2)
	b        lbl_80076AAC

lbl_80076AA4:
	fmuls    f4, f4, f2
	addi     r31, r31, -1

lbl_80076AAC:
	fcmpo    cr0, f4, f1
	ble      lbl_80076ABC
	fcmpo    cr0, f4, f0
	blt      lbl_80076AA4

lbl_80076ABC:
	li       r3, 1
	lis      r0, 0x4330
	slw      r3, r3, r31
	lfs      f0, lbl_80516AC8@sda21(r2)
	xoris    r3, r3, 0x8000
	stw      r0, 0x10(r1)
	fmuls    f1, f0, f4
	lfd      f2, lbl_80516AD0@sda21(r2)
	stw      r3, 0x14(r1)
	li       r7, 0x61
	lwz      r4, __GDCurrentDL@sda21(r13)
	lfd      f0, 0x10(r1)
	lwz      r3, 8(r4)
	fsubs    f0, f0, f2
	lwz      r30, 0xc(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	fdivs    f0, f3, f0
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stfs     f0, 8(r1)
	lwz      r0, 8(r1)
	srwi     r0, r0, 0xc
	oris     r8, r0, 0xee00
	srwi     r0, r8, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	bl       __cvt_fp2unsigned
	lwz      r7, __GDCurrentDL@sda21(r13)
	oris     r3, r3, 0xef00
	oris     r4, r31, 0xf000
	slwi     r0, r28, 0x15
	lwz      r6, 8(r7)
	srwi     r8, r3, 0x18
	rlwimi   r0, r30, 0x14, 0xc, 0x1f
	rlwinm   r27, r3, 0x10, 0x18, 0x1f
	addi     r5, r6, 1
	rlwinm   r31, r3, 0x18, 0x18, 0x1f
	stw      r5, 8(r7)
	oris     r5, r0, 0xf100
	li       r0, 0x61
	srwi     r28, r4, 0x18
	stb      r8, 0(r6)
	rlwinm   r12, r4, 0x10, 0x18, 0x1f
	rlwinm   r11, r4, 0x18, 0x18, 0x1f
	srwi     r9, r5, 0x18
	lwz      r30, __GDCurrentDL@sda21(r13)
	rlwinm   r8, r5, 0x10, 0x18, 0x1f
	rlwinm   r7, r5, 0x18, 0x18, 0x1f
	lwz      r10, 8(r30)
	addi     r6, r10, 1
	stw      r6, 8(r30)
	stb      r27, 0(r10)
	lwz      r30, __GDCurrentDL@sda21(r13)
	lwz      r10, 8(r30)
	addi     r6, r10, 1
	stw      r6, 8(r30)
	stb      r31, 0(r10)
	lwz      r30, __GDCurrentDL@sda21(r13)
	lwz      r10, 8(r30)
	addi     r6, r10, 1
	stw      r6, 8(r30)
	stb      r3, 0(r10)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r10)
	addi     r3, r6, 1
	stw      r3, 8(r10)
	stb      r0, 0(r6)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r10)
	addi     r3, r6, 1
	stw      r3, 8(r10)
	stb      r28, 0(r6)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r10)
	addi     r3, r6, 1
	stw      r3, 8(r10)
	stb      r12, 0(r6)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r10)
	addi     r3, r6, 1
	stw      r3, 8(r10)
	stb      r11, 0(r6)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r10)
	addi     r3, r6, 1
	stw      r3, 8(r10)
	stb      r4, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r3, r4, 1
	stw      r3, 8(r6)
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r3, r4, 1
	stw      r3, 8(r6)
	stb      r9, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r3, r4, 1
	stw      r3, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r3, r4, 1
	stw      r3, 8(r6)
	stb      r7, 0(r4)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lbz      r3, 1(r29)
	lwz      r8, 8(r9)
	lbz      r4, 2(r29)
	rlwimi   r4, r3, 8, 0x10, 0x17
	addi     r7, r8, 1
	lbz      r6, 0(r29)
	stw      r7, 8(r9)
	rlwimi   r4, r6, 0x10, 8, 0xf
	stb      r5, 0(r8)
	oris     r9, r4, 0xf200
	srwi     r7, r9, 0x18
	lwz      r8, __GDCurrentDL@sda21(r13)
	rlwinm   r6, r9, 0x10, 0x18, 0x1f
	rlwinm   r5, r9, 0x18, 0x18, 0x1f
	lwz      r4, 8(r8)
	addi     r3, r4, 1
	stw      r3, 8(r8)
	stb      r0, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r9, 0(r3)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80076D7C
 * Size:	00013C
 */
void J3DGDSetFogRangeAdj(unsigned char, unsigned short, _GXFogAdjTable*)
{
	/*
	clrlwi.  r0, r3, 0x18
	beq      lbl_80076E2C
	li       r0, 5
	li       r6, 0
	mtctr    r0

lbl_80076D90:
	lwz      r8, __GDCurrentDL@sda21(r13)
	addi     r10, r6, 0xe9
	lhz      r0, 2(r5)
	slwi     r12, r10, 0x18
	lwz      r7, 8(r8)
	li       r9, 0x61
	lhz      r10, 0(r5)
	slwi     r11, r0, 0xc
	addi     r0, r7, 1
	addi     r5, r5, 4
	stw      r0, 8(r8)
	or       r0, r12, r11
	or       r12, r0, r10
	addi     r6, r6, 1
	stb      r9, 0(r7)
	srwi     r11, r12, 0x18
	rlwinm   r10, r12, 0x10, 0x18, 0x1f
	rlwinm   r9, r12, 0x18, 0x18, 0x1f
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r0, r7, 1
	stw      r0, 8(r8)
	stb      r11, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r0, r7, 1
	stw      r0, 8(r8)
	stb      r10, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r0, r7, 1
	stw      r0, 8(r8)
	stb      r9, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r0, r7, 1
	stw      r0, 8(r8)
	stb      r12, 0(r7)
	bdnz     lbl_80076D90

lbl_80076E2C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	clrlwi   r4, r4, 0x10
	addi     r0, r4, 0x156
	li       r6, 0x61
	lwz      r4, 8(r5)
	oris     r7, r0, 0xe800
	rlwinm   r3, r3, 0xa, 0xe, 0x15
	addi     r0, r4, 1
	stw      r0, 8(r5)
	or       r8, r7, r3
	srwi     r7, r8, 0x18
	stb      r6, 0(r4)
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80076EB8
 * Size:	000080
 */
void J3DFifoLoadPosMtxImm(float (*)[4], unsigned long)
{
	/*
	li       r0, 0x10
	lis      r6, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r6)
	li       r5, 0xb
	rlwinm   r0, r4, 2, 0x10, 0x1d
	sth      r5, -0x8000(r6)
	sth      r0, -0x8000(r6)
	lwz      r0, 0(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 4(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 8(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0xc(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x10(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x14(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x18(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x1c(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x20(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x24(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x28(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x2c(r3)
	stw      r0, -0x8000(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80076F38
 * Size:	00006C
 */
void J3DFifoLoadNrmMtxImm(float (*)[4], unsigned long)
{
	/*
	li       r0, 0x10
	lis      r5, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r5)
	mulli    r4, r4, 3
	li       r0, 8
	sth      r0, -0x8000(r5)
	addi     r0, r4, 0x400
	sth      r0, -0x8000(r5)
	lwz      r0, 0(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 4(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 8(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x10(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x14(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x18(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x20(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x24(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x28(r3)
	stw      r0, -0x8000(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80076FA4
 * Size:	00006C
 */
void J3DFifoLoadNrmMtxImm3x3(float (*)[3], unsigned long)
{
	/*
	li       r0, 0x10
	lis      r5, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r5)
	mulli    r4, r4, 3
	li       r0, 8
	sth      r0, -0x8000(r5)
	addi     r0, r4, 0x400
	sth      r0, -0x8000(r5)
	lwz      r0, 0(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 4(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 8(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0xc(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x10(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x14(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x18(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x1c(r3)
	stw      r0, -0x8000(r5)
	lwz      r0, 0x20(r3)
	stw      r0, -0x8000(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80077010
 * Size:	000098
 */
void J3DFifoLoadNrmMtxToTexMtx(float (*)[4], unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	li       r0, 0x10
	lis      r6, 0xCC008000@ha
	lfs      f0, lbl_80516AA4@sda21(r2)
	stb      r0, 0xCC008000@l(r6)
	li       r5, 0xb
	rlwinm   r0, r4, 2, 0x10, 0x1d
	sth      r5, -0x8000(r6)
	sth      r0, -0x8000(r6)
	lwz      r0, 0(r3)
	stfs     f0, 0x10(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 4(r3)
	stfs     f0, 0xc(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 8(r3)
	stfs     f0, 8(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x10(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x10(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x14(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x18(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0xc(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x20(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x24(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x28(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 8(r1)
	stw      r0, -0x8000(r6)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800770A8
 * Size:	000098
 */
void J3DFifoLoadNrmMtxToTexMtx3x3(float (*)[3], unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	li       r0, 0x10
	lis      r6, 0xCC008000@ha
	lfs      f0, lbl_80516AA4@sda21(r2)
	stb      r0, 0xCC008000@l(r6)
	li       r5, 0xb
	rlwinm   r0, r4, 2, 0x10, 0x1d
	sth      r5, -0x8000(r6)
	sth      r0, -0x8000(r6)
	lwz      r0, 0(r3)
	stfs     f0, 0x10(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 4(r3)
	stfs     f0, 0xc(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 8(r3)
	stfs     f0, 8(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x10(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0xc(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x10(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x14(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0xc(r1)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x18(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x1c(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 0x20(r3)
	stw      r0, -0x8000(r6)
	lwz      r0, 8(r1)
	stw      r0, -0x8000(r6)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80077140
 * Size:	000080
 */
void J3DFifoLoadTexCached(_GXTexMapID, unsigned long, _GXTexCacheSize, unsigned long, _GXTexCacheSize)
{
	/*
	.loc_0x0:
	  li        r10, 0x61
	  lis       r9, 0xCC01
	  stb       r10, -0x8000(r9)
	  addi      r11, r5, 0x3
	  subi      r5, r13, 0x7F64
	  rlwinm    r4,r4,27,5,31
	  rlwinm    r0,r11,15,0,16
	  lbzx      r8, r5, r3
	  rlwinm    r5,r11,18,0,13
	  cmpwi     r7, 0x3
	  or        r0, r4, r0
	  rlwinm    r4,r8,24,0,7
	  or        r0, r5, r0
	  or        r0, r4, r0
	  stw       r0, -0x8000(r9)
	  beqlr-
	  lis       r0, 0x10
	  cmplw     r6, r0
	  bgelr-
	  stb       r10, -0x8000(r9)
	  addi      r7, r7, 0x3
	  subi      r5, r13, 0x7F5C
	  rlwinm    r4,r6,27,5,31
	  rlwinm    r0,r7,15,0,16
	  lbzx      r5, r5, r3
	  rlwinm    r3,r7,18,0,13
	  or        r0, r4, r0
	  rlwinm    r4,r5,24,0,7
	  or        r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, -0x8000(r9)
	  blr
	*/
}
