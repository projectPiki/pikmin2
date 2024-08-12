.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj j3dDefaultTexCoordInfo, global
	.4byte 0x01043C00
	.4byte 0x01053C00
	.4byte 0x01063C00
	.4byte 0x01073C00
	.4byte 0x01083C00
	.4byte 0x01093C00
	.4byte 0x010A3C00
	.4byte 0x010B3C00
.endobj j3dDefaultTexCoordInfo
.obj j3dDefaultTexMtxInfo, global
	.4byte 0x0100FFFF
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
	.float 1.0
	.2byte 0x0000
.balign 4
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
.endobj j3dDefaultTexMtxInfo
.obj j3dDefaultIndTexMtxInfo, global
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.0
	.float 0.5
	.float 0.0
	.4byte 0x01000000
.endobj j3dDefaultIndTexMtxInfo
.obj j3dDefaultTevStageInfo, global
	.4byte 0x040A0F0F
	.4byte 0x00000000
	.4byte 0x01000507
	.4byte 0x07000000
	.4byte 0x00010000
.endobj j3dDefaultTevStageInfo
.obj j3dDefaultIndTevStageInfo, global
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
.endobj j3dDefaultIndTevStageInfo
.obj j3dDefaultFogInfo, global
	.byte 0x00, 0x00
	.2byte 0x0140
	.float 0.0
	.float 0.0
	.float 0.1
	.float 10000.0
	.4byte 0xFFFFFF00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj j3dDefaultFogInfo
.obj j3dDefaultNBTScaleInfo, global
	.byte 0
.balign 4
	.float 1.0
	.float 1.0
	.float 1.0
.endobj j3dDefaultNBTScaleInfo
.obj lbl_804789A4, local
	.4byte 0x1E212427
	.4byte 0x2A2D3033
	.2byte 0x3639
	.byte 0x3C
.endobj lbl_804789A4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj qMtx$1682, local
	.float 0.5
	.float 0.0
	.float 0.5
	.float 0.0
	.float 0.0
	.float -0.5
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
.endobj qMtx$1682
.obj qMtx2$1683, local
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.5
	.float 0.0
	.float -0.5
	.float 0.0
	.float 0.5
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
.endobj qMtx2$1683
.obj lbl_804A1870, local
	.4byte .L_80064FB8
	.4byte .L_80064EDC
	.4byte .L_80064F20
	.4byte .L_80064F20
	.4byte .L_80064F74
	.4byte .L_80064F20
	.4byte .L_80064E84
	.4byte .L_80064DC4
	.4byte .L_80064D5C
	.4byte .L_80064D5C
	.4byte .L_80064E1C
	.4byte .L_80064D5C
.endobj lbl_804A1870
.obj qMtx$1744, local
	.float 0.5
	.float 0.0
	.float 0.5
	.float 0.0
	.float 0.0
	.float -0.5
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
.endobj qMtx$1744
.obj qMtx2$1745, local
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.5
	.float 0.0
	.float -0.5
	.float 0.0
	.float 0.5
	.float 0.0
	.float 0.0
	.float 1.0
	.float 0.0
.endobj qMtx2$1745
.obj lbl_804A1900, local
	.4byte .L_80065310
	.4byte .L_80065200
	.4byte .L_80065234
	.4byte .L_80065288
	.4byte .L_800652CC
	.4byte .L_80065234
	.4byte .L_800651B8
	.4byte .L_80065108
	.4byte .L_80065048
	.4byte .L_800650B0
	.4byte .L_80065150
	.4byte .L_80065048
.endobj lbl_804A1900

.section .bss  # 0x804EFC20 - 0x8051467C
.comm j3dTexCoordTable, 0x2528, 4
.comm j3dTevSwapTableTable, 0x400, 4
.comm j3dAlphaCmpTable, 0x300, 4
.comm j3dZModeTable, 0x60, 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805169B0, local
	.float 0.125
.endobj lbl_805169B0
.obj lbl_805169B4, local
	.float 0.01
.endobj lbl_805169B4
.balign 8
.obj lbl_805169B8, local
	.8byte 0x4330000080000000
.endobj lbl_805169B8
.obj j3dDefaultColInfo, global
	.4byte 0xFFFFFFFF
.endobj j3dDefaultColInfo
.obj j3dDefaultAmbInfo, global
	.4byte 0x32323232
.endobj j3dDefaultAmbInfo
.obj j3dDefaultColorChanNum, global
	.byte 0x01
.endobj j3dDefaultColorChanNum
.balign 4
.obj j3dDefaultTevOrderInfoNull, global
	.4byte 0xFFFFFF00
.endobj j3dDefaultTevOrderInfoNull
.obj j3dDefaultIndTexOrderNull, global
	.4byte 0xFFFF0000
.endobj j3dDefaultIndTexOrderNull
.obj j3dDefaultTevColor, global
	.4byte 0x00FF00FF
	.4byte 0x00FF00FF
.endobj j3dDefaultTevColor
.obj j3dDefaultIndTexCoordScaleInfo, global
	.4byte 0x00000000
.endobj j3dDefaultIndTexCoordScaleInfo
.obj j3dDefaultTevKColor, global
	.4byte 0xFFFFFFFF
.endobj j3dDefaultTevKColor
.obj j3dDefaultTevSwapMode, global
	.4byte 0x00000000
.endobj j3dDefaultTevSwapMode
.obj j3dDefaultTevSwapModeTable, global
	.4byte 0x00010203
.endobj j3dDefaultTevSwapModeTable
.obj j3dDefaultBlendInfo, global
	.4byte 0x01040505
.endobj j3dDefaultBlendInfo
.obj j3dDefaultColorChanInfo, global
	.4byte 0x00000002
	.4byte 0x0200FFFF
.endobj j3dDefaultColorChanInfo
.obj j3dDefaultTevSwapTableID, global
	.byte 0x1B
.endobj j3dDefaultTevSwapTableID
.balign 2
.obj j3dDefaultAlphaCmpID, global
	.2byte 0x00E7
.endobj j3dDefaultAlphaCmpID
.obj j3dDefaultZModeID, global
	.2byte 0x0017
.endobj j3dDefaultZModeID

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn load__11J3DLightObjCFUl, global
/* 80063B24 00060A64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80063B28 00060A68  7C 08 02 A6 */	mflr r0
/* 80063B2C 00060A6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80063B30 00060A70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80063B34 00060A74  7C 9F 23 78 */	mr r31, r4
/* 80063B38 00060A78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80063B3C 00060A7C  7C 7E 1B 78 */	mr r30, r3
/* 80063B40 00060A80  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063B44 00060A84  80 65 00 08 */	lwz r3, 8(r5)
/* 80063B48 00060A88  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80063B4C 00060A8C  38 63 00 48 */	addi r3, r3, 0x48
/* 80063B50 00060A90  7C 03 00 40 */	cmplw r3, r0
/* 80063B54 00060A94  40 81 00 08 */	ble .L_80063B5C
/* 80063B58 00060A98  48 07 E0 E9 */	bl GDOverflowed
.L_80063B5C:
/* 80063B5C 00060A9C  38 00 00 01 */	li r0, 1
/* 80063B60 00060AA0  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80063B64 00060AA4  7C 1F F8 30 */	slw r31, r0, r31
/* 80063B68 00060AA8  C0 5E 00 04 */	lfs f2, 4(r30)
/* 80063B6C 00060AAC  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80063B70 00060AB0  7F E3 FB 78 */	mr r3, r31
/* 80063B74 00060AB4  48 01 0F C1 */	bl J3DGDSetLightPos__F10_GXLightIDfff
/* 80063B78 00060AB8  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80063B7C 00060ABC  7F E3 FB 78 */	mr r3, r31
/* 80063B80 00060AC0  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 80063B84 00060AC4  C0 7E 00 24 */	lfs f3, 0x24(r30)
/* 80063B88 00060AC8  C0 9E 00 28 */	lfs f4, 0x28(r30)
/* 80063B8C 00060ACC  C0 BE 00 2C */	lfs f5, 0x2c(r30)
/* 80063B90 00060AD0  C0 DE 00 30 */	lfs f6, 0x30(r30)
/* 80063B94 00060AD4  48 01 0B 79 */	bl J3DGDSetLightAttn__F10_GXLightIDffffff
/* 80063B98 00060AD8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80063B9C 00060ADC  7F E3 FB 78 */	mr r3, r31
/* 80063BA0 00060AE0  38 81 00 08 */	addi r4, r1, 8
/* 80063BA4 00060AE4  90 01 00 08 */	stw r0, 8(r1)
/* 80063BA8 00060AE8  48 01 0E 7D */	bl J3DGDSetLightColor__F10_GXLightID8_GXColor
/* 80063BAC 00060AEC  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80063BB0 00060AF0  7F E3 FB 78 */	mr r3, r31
/* 80063BB4 00060AF4  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 80063BB8 00060AF8  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 80063BBC 00060AFC  48 01 11 65 */	bl J3DGDSetLightDir__F10_GXLightIDfff
/* 80063BC0 00060B00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80063BC4 00060B04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80063BC8 00060B08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80063BCC 00060B0C  7C 08 03 A6 */	mtlr r0
/* 80063BD0 00060B10  38 21 00 20 */	addi r1, r1, 0x20
/* 80063BD4 00060B14  4E 80 00 20 */	blr 
.endfn load__11J3DLightObjCFUl

.fn loadTexCoordGens__FUlP11J3DTexCoord, global
/* 80063BD8 00060B18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80063BDC 00060B1C  7C 08 02 A6 */	mflr r0
/* 80063BE0 00060B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80063BE4 00060B24  BF 41 00 08 */	stmw r26, 8(r1)
/* 80063BE8 00060B28  7C 7A 1B 78 */	mr r26, r3
/* 80063BEC 00060B2C  7C 9B 23 78 */	mr r27, r4
/* 80063BF0 00060B30  54 63 18 38 */	slwi r3, r3, 3
/* 80063BF4 00060B34  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063BF8 00060B38  80 85 00 08 */	lwz r4, 8(r5)
/* 80063BFC 00060B3C  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80063C00 00060B40  7C 63 22 14 */	add r3, r3, r4
/* 80063C04 00060B44  38 63 00 0A */	addi r3, r3, 0xa
/* 80063C08 00060B48  7C 03 00 40 */	cmplw r3, r0
/* 80063C0C 00060B4C  40 81 00 08 */	ble .L_80063C14
/* 80063C10 00060B50  48 07 E0 31 */	bl GDOverflowed
.L_80063C14:
/* 80063C14 00060B54  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063C18 00060B58  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 80063C1C 00060B5C  38 C3 FF FF */	addi r6, r3, -1
/* 80063C20 00060B60  38 E0 00 10 */	li r7, 0x10
/* 80063C24 00060B64  80 64 00 08 */	lwz r3, 8(r4)
/* 80063C28 00060B68  54 DE C6 3E */	rlwinm r30, r6, 0x18, 0x18, 0x1f
/* 80063C2C 00060B6C  38 A0 00 40 */	li r5, 0x40
/* 80063C30 00060B70  7F 7F DB 78 */	mr r31, r27
/* 80063C34 00060B74  38 03 00 01 */	addi r0, r3, 1
/* 80063C38 00060B78  54 DD 06 3E */	clrlwi r29, r6, 0x18
/* 80063C3C 00060B7C  90 04 00 08 */	stw r0, 8(r4)
/* 80063C40 00060B80  3B 80 00 00 */	li r28, 0
/* 80063C44 00060B84  98 E3 00 00 */	stb r7, 0(r3)
/* 80063C48 00060B88  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063C4C 00060B8C  80 64 00 08 */	lwz r3, 8(r4)
/* 80063C50 00060B90  38 03 00 01 */	addi r0, r3, 1
/* 80063C54 00060B94  90 04 00 08 */	stw r0, 8(r4)
/* 80063C58 00060B98  9B C3 00 00 */	stb r30, 0(r3)
/* 80063C5C 00060B9C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063C60 00060BA0  80 64 00 08 */	lwz r3, 8(r4)
/* 80063C64 00060BA4  38 03 00 01 */	addi r0, r3, 1
/* 80063C68 00060BA8  90 04 00 08 */	stw r0, 8(r4)
/* 80063C6C 00060BAC  98 C3 00 00 */	stb r6, 0(r3)
/* 80063C70 00060BB0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063C74 00060BB4  80 64 00 08 */	lwz r3, 8(r4)
/* 80063C78 00060BB8  38 03 00 01 */	addi r0, r3, 1
/* 80063C7C 00060BBC  90 04 00 08 */	stw r0, 8(r4)
/* 80063C80 00060BC0  98 E3 00 00 */	stb r7, 0(r3)
/* 80063C84 00060BC4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063C88 00060BC8  80 64 00 08 */	lwz r3, 8(r4)
/* 80063C8C 00060BCC  38 03 00 01 */	addi r0, r3, 1
/* 80063C90 00060BD0  90 04 00 08 */	stw r0, 8(r4)
/* 80063C94 00060BD4  98 A3 00 00 */	stb r5, 0(r3)
/* 80063C98 00060BD8  48 00 00 18 */	b .L_80063CB0
.L_80063C9C:
/* 80063C9C 00060BDC  88 7F 00 00 */	lbz r3, 0(r31)
/* 80063CA0 00060BE0  88 9F 00 01 */	lbz r4, 1(r31)
/* 80063CA4 00060BE4  48 01 17 B1 */	bl J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc
/* 80063CA8 00060BE8  3B FF 00 06 */	addi r31, r31, 6
/* 80063CAC 00060BEC  3B 9C 00 01 */	addi r28, r28, 1
.L_80063CB0:
/* 80063CB0 00060BF0  7C 1C D0 40 */	cmplw r28, r26
/* 80063CB4 00060BF4  41 80 FF E8 */	blt .L_80063C9C
/* 80063CB8 00060BF8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063CBC 00060BFC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80063CC0 00060C00  38 E0 00 10 */	li r7, 0x10
/* 80063CC4 00060C04  38 C0 00 50 */	li r6, 0x50
/* 80063CC8 00060C08  80 85 00 08 */	lwz r4, 8(r5)
/* 80063CCC 00060C0C  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80063CD0 00060C10  38 04 00 01 */	addi r0, r4, 1
/* 80063CD4 00060C14  90 05 00 08 */	stw r0, 8(r5)
/* 80063CD8 00060C18  98 E4 00 00 */	stb r7, 0(r4)
/* 80063CDC 00060C1C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063CE0 00060C20  80 85 00 08 */	lwz r4, 8(r5)
/* 80063CE4 00060C24  38 04 00 01 */	addi r0, r4, 1
/* 80063CE8 00060C28  90 05 00 08 */	stw r0, 8(r5)
/* 80063CEC 00060C2C  9B C4 00 00 */	stb r30, 0(r4)
/* 80063CF0 00060C30  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063CF4 00060C34  80 85 00 08 */	lwz r4, 8(r5)
/* 80063CF8 00060C38  38 04 00 01 */	addi r0, r4, 1
/* 80063CFC 00060C3C  90 05 00 08 */	stw r0, 8(r5)
/* 80063D00 00060C40  9B A4 00 00 */	stb r29, 0(r4)
/* 80063D04 00060C44  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063D08 00060C48  80 85 00 08 */	lwz r4, 8(r5)
/* 80063D0C 00060C4C  38 04 00 01 */	addi r0, r4, 1
/* 80063D10 00060C50  90 05 00 08 */	stw r0, 8(r5)
/* 80063D14 00060C54  98 E4 00 00 */	stb r7, 0(r4)
/* 80063D18 00060C58  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80063D1C 00060C5C  80 85 00 08 */	lwz r4, 8(r5)
/* 80063D20 00060C60  38 04 00 01 */	addi r0, r4, 1
/* 80063D24 00060C64  90 05 00 08 */	stw r0, 8(r5)
/* 80063D28 00060C68  98 C4 00 00 */	stb r6, 0(r4)
/* 80063D2C 00060C6C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80063D30 00060C70  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 80063D34 00060C74  41 82 00 98 */	beq .L_80063DCC
/* 80063D38 00060C78  7F 69 DB 78 */	mr r9, r27
/* 80063D3C 00060C7C  39 40 00 00 */	li r10, 0
/* 80063D40 00060C80  7F 49 03 A6 */	mtctr r26
/* 80063D44 00060C84  28 1A 00 00 */	cmplwi r26, 0
/* 80063D48 00060C88  40 81 03 AC */	ble .L_800640F4
.L_80063D4C:
/* 80063D4C 00060C8C  88 09 00 02 */	lbz r0, 2(r9)
/* 80063D50 00060C90  39 00 00 3D */	li r8, 0x3d
/* 80063D54 00060C94  28 00 00 3C */	cmplwi r0, 0x3c
/* 80063D58 00060C98  41 82 00 08 */	beq .L_80063D60
/* 80063D5C 00060C9C  7D 48 53 78 */	mr r8, r10
.L_80063D60:
/* 80063D60 00060CA0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063D64 00060CA4  55 07 46 3E */	srwi r7, r8, 0x18
/* 80063D68 00060CA8  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 80063D6C 00060CAC  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 80063D70 00060CB0  80 64 00 08 */	lwz r3, 8(r4)
/* 80063D74 00060CB4  39 29 00 06 */	addi r9, r9, 6
/* 80063D78 00060CB8  39 4A 00 03 */	addi r10, r10, 3
/* 80063D7C 00060CBC  38 03 00 01 */	addi r0, r3, 1
/* 80063D80 00060CC0  90 04 00 08 */	stw r0, 8(r4)
/* 80063D84 00060CC4  98 E3 00 00 */	stb r7, 0(r3)
/* 80063D88 00060CC8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063D8C 00060CCC  80 64 00 08 */	lwz r3, 8(r4)
/* 80063D90 00060CD0  38 03 00 01 */	addi r0, r3, 1
/* 80063D94 00060CD4  90 04 00 08 */	stw r0, 8(r4)
/* 80063D98 00060CD8  98 C3 00 00 */	stb r6, 0(r3)
/* 80063D9C 00060CDC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063DA0 00060CE0  80 64 00 08 */	lwz r3, 8(r4)
/* 80063DA4 00060CE4  38 03 00 01 */	addi r0, r3, 1
/* 80063DA8 00060CE8  90 04 00 08 */	stw r0, 8(r4)
/* 80063DAC 00060CEC  98 A3 00 00 */	stb r5, 0(r3)
/* 80063DB0 00060CF0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80063DB4 00060CF4  80 64 00 08 */	lwz r3, 8(r4)
/* 80063DB8 00060CF8  38 03 00 01 */	addi r0, r3, 1
/* 80063DBC 00060CFC  90 04 00 08 */	stw r0, 8(r4)
/* 80063DC0 00060D00  99 03 00 00 */	stb r8, 0(r3)
/* 80063DC4 00060D04  42 00 FF 88 */	bdnz .L_80063D4C
/* 80063DC8 00060D08  48 00 03 2C */	b .L_800640F4
.L_80063DCC:
/* 80063DCC 00060D0C  28 1A 00 00 */	cmplwi r26, 0
/* 80063DD0 00060D10  38 80 00 00 */	li r4, 0
/* 80063DD4 00060D14  40 81 03 20 */	ble .L_800640F4
/* 80063DD8 00060D18  28 1A 00 08 */	cmplwi r26, 8
/* 80063DDC 00060D1C  38 7A FF F8 */	addi r3, r26, -8
/* 80063DE0 00060D20  40 81 02 A8 */	ble .L_80064088
/* 80063DE4 00060D24  38 03 00 07 */	addi r0, r3, 7
/* 80063DE8 00060D28  54 00 E8 FE */	srwi r0, r0, 3
/* 80063DEC 00060D2C  7C 09 03 A6 */	mtctr r0
/* 80063DF0 00060D30  28 03 00 00 */	cmplwi r3, 0
/* 80063DF4 00060D34  40 81 02 94 */	ble .L_80064088
.L_80063DF8:
/* 80063DF8 00060D38  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063DFC 00060D3C  38 60 00 00 */	li r3, 0
/* 80063E00 00060D40  38 00 00 3D */	li r0, 0x3d
/* 80063E04 00060D44  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E08 00060D48  38 A6 00 01 */	addi r5, r6, 1
/* 80063E0C 00060D4C  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E10 00060D50  98 66 00 00 */	stb r3, 0(r6)
/* 80063E14 00060D54  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E18 00060D58  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E1C 00060D5C  38 A6 00 01 */	addi r5, r6, 1
/* 80063E20 00060D60  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E24 00060D64  98 66 00 00 */	stb r3, 0(r6)
/* 80063E28 00060D68  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E2C 00060D6C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E30 00060D70  38 A6 00 01 */	addi r5, r6, 1
/* 80063E34 00060D74  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E38 00060D78  98 66 00 00 */	stb r3, 0(r6)
/* 80063E3C 00060D7C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E40 00060D80  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E44 00060D84  38 A6 00 01 */	addi r5, r6, 1
/* 80063E48 00060D88  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E4C 00060D8C  98 06 00 00 */	stb r0, 0(r6)
/* 80063E50 00060D90  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E54 00060D94  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E58 00060D98  38 A6 00 01 */	addi r5, r6, 1
/* 80063E5C 00060D9C  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E60 00060DA0  98 66 00 00 */	stb r3, 0(r6)
/* 80063E64 00060DA4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E68 00060DA8  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E6C 00060DAC  38 A6 00 01 */	addi r5, r6, 1
/* 80063E70 00060DB0  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E74 00060DB4  98 66 00 00 */	stb r3, 0(r6)
/* 80063E78 00060DB8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E7C 00060DBC  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E80 00060DC0  38 A6 00 01 */	addi r5, r6, 1
/* 80063E84 00060DC4  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E88 00060DC8  98 66 00 00 */	stb r3, 0(r6)
/* 80063E8C 00060DCC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063E90 00060DD0  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063E94 00060DD4  38 A6 00 01 */	addi r5, r6, 1
/* 80063E98 00060DD8  90 A7 00 08 */	stw r5, 8(r7)
/* 80063E9C 00060DDC  98 06 00 00 */	stb r0, 0(r6)
/* 80063EA0 00060DE0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063EA4 00060DE4  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063EA8 00060DE8  38 A6 00 01 */	addi r5, r6, 1
/* 80063EAC 00060DEC  90 A7 00 08 */	stw r5, 8(r7)
/* 80063EB0 00060DF0  98 66 00 00 */	stb r3, 0(r6)
/* 80063EB4 00060DF4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063EB8 00060DF8  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063EBC 00060DFC  38 A6 00 01 */	addi r5, r6, 1
/* 80063EC0 00060E00  90 A7 00 08 */	stw r5, 8(r7)
/* 80063EC4 00060E04  98 66 00 00 */	stb r3, 0(r6)
/* 80063EC8 00060E08  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063ECC 00060E0C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063ED0 00060E10  38 A6 00 01 */	addi r5, r6, 1
/* 80063ED4 00060E14  90 A7 00 08 */	stw r5, 8(r7)
/* 80063ED8 00060E18  98 66 00 00 */	stb r3, 0(r6)
/* 80063EDC 00060E1C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063EE0 00060E20  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063EE4 00060E24  38 A6 00 01 */	addi r5, r6, 1
/* 80063EE8 00060E28  90 A7 00 08 */	stw r5, 8(r7)
/* 80063EEC 00060E2C  98 06 00 00 */	stb r0, 0(r6)
/* 80063EF0 00060E30  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063EF4 00060E34  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063EF8 00060E38  38 A6 00 01 */	addi r5, r6, 1
/* 80063EFC 00060E3C  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F00 00060E40  98 66 00 00 */	stb r3, 0(r6)
/* 80063F04 00060E44  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F08 00060E48  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F0C 00060E4C  38 A6 00 01 */	addi r5, r6, 1
/* 80063F10 00060E50  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F14 00060E54  98 66 00 00 */	stb r3, 0(r6)
/* 80063F18 00060E58  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F1C 00060E5C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F20 00060E60  38 A6 00 01 */	addi r5, r6, 1
/* 80063F24 00060E64  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F28 00060E68  98 66 00 00 */	stb r3, 0(r6)
/* 80063F2C 00060E6C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F30 00060E70  38 84 00 08 */	addi r4, r4, 8
/* 80063F34 00060E74  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F38 00060E78  38 A6 00 01 */	addi r5, r6, 1
/* 80063F3C 00060E7C  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F40 00060E80  98 06 00 00 */	stb r0, 0(r6)
/* 80063F44 00060E84  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F48 00060E88  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F4C 00060E8C  38 A6 00 01 */	addi r5, r6, 1
/* 80063F50 00060E90  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F54 00060E94  98 66 00 00 */	stb r3, 0(r6)
/* 80063F58 00060E98  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F5C 00060E9C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F60 00060EA0  38 A6 00 01 */	addi r5, r6, 1
/* 80063F64 00060EA4  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F68 00060EA8  98 66 00 00 */	stb r3, 0(r6)
/* 80063F6C 00060EAC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F70 00060EB0  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F74 00060EB4  38 A6 00 01 */	addi r5, r6, 1
/* 80063F78 00060EB8  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F7C 00060EBC  98 66 00 00 */	stb r3, 0(r6)
/* 80063F80 00060EC0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F84 00060EC4  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F88 00060EC8  38 A6 00 01 */	addi r5, r6, 1
/* 80063F8C 00060ECC  90 A7 00 08 */	stw r5, 8(r7)
/* 80063F90 00060ED0  98 06 00 00 */	stb r0, 0(r6)
/* 80063F94 00060ED4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063F98 00060ED8  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063F9C 00060EDC  38 A6 00 01 */	addi r5, r6, 1
/* 80063FA0 00060EE0  90 A7 00 08 */	stw r5, 8(r7)
/* 80063FA4 00060EE4  98 66 00 00 */	stb r3, 0(r6)
/* 80063FA8 00060EE8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063FAC 00060EEC  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063FB0 00060EF0  38 A6 00 01 */	addi r5, r6, 1
/* 80063FB4 00060EF4  90 A7 00 08 */	stw r5, 8(r7)
/* 80063FB8 00060EF8  98 66 00 00 */	stb r3, 0(r6)
/* 80063FBC 00060EFC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063FC0 00060F00  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063FC4 00060F04  38 A6 00 01 */	addi r5, r6, 1
/* 80063FC8 00060F08  90 A7 00 08 */	stw r5, 8(r7)
/* 80063FCC 00060F0C  98 66 00 00 */	stb r3, 0(r6)
/* 80063FD0 00060F10  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063FD4 00060F14  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063FD8 00060F18  38 A6 00 01 */	addi r5, r6, 1
/* 80063FDC 00060F1C  90 A7 00 08 */	stw r5, 8(r7)
/* 80063FE0 00060F20  98 06 00 00 */	stb r0, 0(r6)
/* 80063FE4 00060F24  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063FE8 00060F28  80 C7 00 08 */	lwz r6, 8(r7)
/* 80063FEC 00060F2C  38 A6 00 01 */	addi r5, r6, 1
/* 80063FF0 00060F30  90 A7 00 08 */	stw r5, 8(r7)
/* 80063FF4 00060F34  98 66 00 00 */	stb r3, 0(r6)
/* 80063FF8 00060F38  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80063FFC 00060F3C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80064000 00060F40  38 A6 00 01 */	addi r5, r6, 1
/* 80064004 00060F44  90 A7 00 08 */	stw r5, 8(r7)
/* 80064008 00060F48  98 66 00 00 */	stb r3, 0(r6)
/* 8006400C 00060F4C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80064010 00060F50  80 C7 00 08 */	lwz r6, 8(r7)
/* 80064014 00060F54  38 A6 00 01 */	addi r5, r6, 1
/* 80064018 00060F58  90 A7 00 08 */	stw r5, 8(r7)
/* 8006401C 00060F5C  98 66 00 00 */	stb r3, 0(r6)
/* 80064020 00060F60  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80064024 00060F64  80 C7 00 08 */	lwz r6, 8(r7)
/* 80064028 00060F68  38 A6 00 01 */	addi r5, r6, 1
/* 8006402C 00060F6C  90 A7 00 08 */	stw r5, 8(r7)
/* 80064030 00060F70  98 06 00 00 */	stb r0, 0(r6)
/* 80064034 00060F74  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80064038 00060F78  80 C7 00 08 */	lwz r6, 8(r7)
/* 8006403C 00060F7C  38 A6 00 01 */	addi r5, r6, 1
/* 80064040 00060F80  90 A7 00 08 */	stw r5, 8(r7)
/* 80064044 00060F84  98 66 00 00 */	stb r3, 0(r6)
/* 80064048 00060F88  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8006404C 00060F8C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80064050 00060F90  38 A6 00 01 */	addi r5, r6, 1
/* 80064054 00060F94  90 A7 00 08 */	stw r5, 8(r7)
/* 80064058 00060F98  98 66 00 00 */	stb r3, 0(r6)
/* 8006405C 00060F9C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80064060 00060FA0  80 C7 00 08 */	lwz r6, 8(r7)
/* 80064064 00060FA4  38 A6 00 01 */	addi r5, r6, 1
/* 80064068 00060FA8  90 A7 00 08 */	stw r5, 8(r7)
/* 8006406C 00060FAC  98 66 00 00 */	stb r3, 0(r6)
/* 80064070 00060FB0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064074 00060FB4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80064078 00060FB8  38 65 00 01 */	addi r3, r5, 1
/* 8006407C 00060FBC  90 66 00 08 */	stw r3, 8(r6)
/* 80064080 00060FC0  98 05 00 00 */	stb r0, 0(r5)
/* 80064084 00060FC4  42 00 FD 74 */	bdnz .L_80063DF8
.L_80064088:
/* 80064088 00060FC8  7C 04 D0 50 */	subf r0, r4, r26
/* 8006408C 00060FCC  7C 09 03 A6 */	mtctr r0
/* 80064090 00060FD0  7C 04 D0 40 */	cmplw r4, r26
/* 80064094 00060FD4  40 80 00 60 */	bge .L_800640F4
/* 80064098 00060FD8  38 C0 00 00 */	li r6, 0
/* 8006409C 00060FDC  38 A0 00 3D */	li r5, 0x3d
.L_800640A0:
/* 800640A0 00060FE0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800640A4 00060FE4  80 64 00 08 */	lwz r3, 8(r4)
/* 800640A8 00060FE8  38 03 00 01 */	addi r0, r3, 1
/* 800640AC 00060FEC  90 04 00 08 */	stw r0, 8(r4)
/* 800640B0 00060FF0  98 C3 00 00 */	stb r6, 0(r3)
/* 800640B4 00060FF4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800640B8 00060FF8  80 64 00 08 */	lwz r3, 8(r4)
/* 800640BC 00060FFC  38 03 00 01 */	addi r0, r3, 1
/* 800640C0 00061000  90 04 00 08 */	stw r0, 8(r4)
/* 800640C4 00061004  98 C3 00 00 */	stb r6, 0(r3)
/* 800640C8 00061008  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800640CC 0006100C  80 64 00 08 */	lwz r3, 8(r4)
/* 800640D0 00061010  38 03 00 01 */	addi r0, r3, 1
/* 800640D4 00061014  90 04 00 08 */	stw r0, 8(r4)
/* 800640D8 00061018  98 C3 00 00 */	stb r6, 0(r3)
/* 800640DC 0006101C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800640E0 00061020  80 64 00 08 */	lwz r3, 8(r4)
/* 800640E4 00061024  38 03 00 01 */	addi r0, r3, 1
/* 800640E8 00061028  90 04 00 08 */	stw r0, 8(r4)
/* 800640EC 0006102C  98 A3 00 00 */	stb r5, 0(r3)
/* 800640F0 00061030  42 00 FF B0 */	bdnz .L_800640A0
.L_800640F4:
/* 800640F4 00061034  BB 41 00 08 */	lmw r26, 8(r1)
/* 800640F8 00061038  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800640FC 0006103C  7C 08 03 A6 */	mtlr r0
/* 80064100 00061040  38 21 00 20 */	addi r1, r1, 0x20
/* 80064104 00061044  4E 80 00 20 */	blr 
.endfn loadTexCoordGens__FUlP11J3DTexCoord

.fn load__9J3DTexMtxCFUl, global
/* 80064108 00061048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006410C 0006104C  7C 08 02 A6 */	mflr r0
/* 80064110 00061050  3C A0 80 51 */	lis r5, j3dSys@ha
/* 80064114 00061054  90 01 00 14 */	stw r0, 0x14(r1)
/* 80064118 00061058  38 A5 F2 30 */	addi r5, r5, j3dSys@l
/* 8006411C 0006105C  80 05 00 34 */	lwz r0, 0x34(r5)
/* 80064120 00061060  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 80064124 00061064  41 82 00 0C */	beq .L_80064130
/* 80064128 00061068  48 00 06 01 */	bl loadPostTexMtx__9J3DTexMtxCFUl
/* 8006412C 0006106C  48 00 00 08 */	b .L_80064134
.L_80064130:
/* 80064130 00061070  48 00 00 15 */	bl loadTexMtx__9J3DTexMtxCFUl
.L_80064134:
/* 80064134 00061074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80064138 00061078  7C 08 03 A6 */	mtlr r0
/* 8006413C 0006107C  38 21 00 10 */	addi r1, r1, 0x10
/* 80064140 00061080  4E 80 00 20 */	blr 
.endfn load__9J3DTexMtxCFUl

.fn loadTexMtx__9J3DTexMtxCFUl, weak
/* 80064144 00061084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80064148 00061088  7C 08 02 A6 */	mflr r0
/* 8006414C 0006108C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80064150 00061090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80064154 00061094  7C 9F 23 78 */	mr r31, r4
/* 80064158 00061098  93 C1 00 08 */	stw r30, 8(r1)
/* 8006415C 0006109C  7C 7E 1B 78 */	mr r30, r3
/* 80064160 000610A0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064164 000610A4  80 65 00 08 */	lwz r3, 8(r5)
/* 80064168 000610A8  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8006416C 000610AC  38 63 00 35 */	addi r3, r3, 0x35
/* 80064170 000610B0  7C 03 00 40 */	cmplw r3, r0
/* 80064174 000610B4  40 81 00 08 */	ble .L_8006417C
/* 80064178 000610B8  48 07 DA C9 */	bl GDOverflowed
.L_8006417C:
/* 8006417C 000610BC  1C 9F 00 03 */	mulli r4, r31, 3
/* 80064180 000610C0  88 BE 00 00 */	lbz r5, 0(r30)
/* 80064184 000610C4  38 7E 00 64 */	addi r3, r30, 0x64
/* 80064188 000610C8  38 84 00 1E */	addi r4, r4, 0x1e
/* 8006418C 000610CC  48 00 00 1D */	bl J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType
/* 80064190 000610D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80064194 000610D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80064198 000610D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8006419C 000610DC  7C 08 03 A6 */	mtlr r0
/* 800641A0 000610E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800641A4 000610E4  4E 80 00 20 */	blr 
.endfn loadTexMtx__9J3DTexMtxCFUl

.fn J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType, weak
/* 800641A8 000610E8  2C 05 00 01 */	cmpwi r5, 1
/* 800641AC 000610EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800641B0 000610F0  54 8B 14 3A */	rlwinm r11, r4, 2, 0x10, 0x1d
/* 800641B4 000610F4  38 00 00 0C */	li r0, 0xc
/* 800641B8 000610F8  40 82 00 08 */	bne .L_800641C0
/* 800641BC 000610FC  38 00 00 08 */	li r0, 8
.L_800641C0:
/* 800641C0 00061100  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800641C4 00061104  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 800641C8 00061108  39 24 FF FF */	addi r9, r4, -1
/* 800641CC 0006110C  39 40 00 10 */	li r10, 0x10
/* 800641D0 00061110  80 86 00 08 */	lwz r4, 8(r6)
/* 800641D4 00061114  55 28 C6 3E */	rlwinm r8, r9, 0x18, 0x18, 0x1f
/* 800641D8 00061118  55 67 C6 3E */	rlwinm r7, r11, 0x18, 0x18, 0x1f
/* 800641DC 0006111C  38 04 00 01 */	addi r0, r4, 1
/* 800641E0 00061120  90 06 00 08 */	stw r0, 8(r6)
/* 800641E4 00061124  99 44 00 00 */	stb r10, 0(r4)
/* 800641E8 00061128  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800641EC 0006112C  80 86 00 08 */	lwz r4, 8(r6)
/* 800641F0 00061130  38 04 00 01 */	addi r0, r4, 1
/* 800641F4 00061134  90 06 00 08 */	stw r0, 8(r6)
/* 800641F8 00061138  99 04 00 00 */	stb r8, 0(r4)
/* 800641FC 0006113C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064200 00061140  80 86 00 08 */	lwz r4, 8(r6)
/* 80064204 00061144  38 04 00 01 */	addi r0, r4, 1
/* 80064208 00061148  90 06 00 08 */	stw r0, 8(r6)
/* 8006420C 0006114C  99 24 00 00 */	stb r9, 0(r4)
/* 80064210 00061150  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064214 00061154  80 86 00 08 */	lwz r4, 8(r6)
/* 80064218 00061158  38 04 00 01 */	addi r0, r4, 1
/* 8006421C 0006115C  90 06 00 08 */	stw r0, 8(r6)
/* 80064220 00061160  98 E4 00 00 */	stb r7, 0(r4)
/* 80064224 00061164  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064228 00061168  80 86 00 08 */	lwz r4, 8(r6)
/* 8006422C 0006116C  38 04 00 01 */	addi r0, r4, 1
/* 80064230 00061170  90 06 00 08 */	stw r0, 8(r6)
/* 80064234 00061174  99 64 00 00 */	stb r11, 0(r4)
/* 80064238 00061178  C0 03 00 00 */	lfs f0, 0(r3)
/* 8006423C 0006117C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064240 00061180  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80064244 00061184  80 86 00 08 */	lwz r4, 8(r6)
/* 80064248 00061188  81 21 00 34 */	lwz r9, 0x34(r1)
/* 8006424C 0006118C  38 04 00 01 */	addi r0, r4, 1
/* 80064250 00061190  90 06 00 08 */	stw r0, 8(r6)
/* 80064254 00061194  55 20 46 3E */	srwi r0, r9, 0x18
/* 80064258 00061198  55 28 86 3E */	rlwinm r8, r9, 0x10, 0x18, 0x1f
/* 8006425C 0006119C  55 27 C6 3E */	rlwinm r7, r9, 0x18, 0x18, 0x1f
/* 80064260 000611A0  98 04 00 00 */	stb r0, 0(r4)
/* 80064264 000611A4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064268 000611A8  80 86 00 08 */	lwz r4, 8(r6)
/* 8006426C 000611AC  38 04 00 01 */	addi r0, r4, 1
/* 80064270 000611B0  90 06 00 08 */	stw r0, 8(r6)
/* 80064274 000611B4  99 04 00 00 */	stb r8, 0(r4)
/* 80064278 000611B8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8006427C 000611BC  80 86 00 08 */	lwz r4, 8(r6)
/* 80064280 000611C0  38 04 00 01 */	addi r0, r4, 1
/* 80064284 000611C4  90 06 00 08 */	stw r0, 8(r6)
/* 80064288 000611C8  98 E4 00 00 */	stb r7, 0(r4)
/* 8006428C 000611CC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064290 000611D0  80 86 00 08 */	lwz r4, 8(r6)
/* 80064294 000611D4  38 04 00 01 */	addi r0, r4, 1
/* 80064298 000611D8  90 06 00 08 */	stw r0, 8(r6)
/* 8006429C 000611DC  99 24 00 00 */	stb r9, 0(r4)
/* 800642A0 000611E0  C0 03 00 04 */	lfs f0, 4(r3)
/* 800642A4 000611E4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800642A8 000611E8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 800642AC 000611EC  80 86 00 08 */	lwz r4, 8(r6)
/* 800642B0 000611F0  81 21 00 30 */	lwz r9, 0x30(r1)
/* 800642B4 000611F4  38 04 00 01 */	addi r0, r4, 1
/* 800642B8 000611F8  90 06 00 08 */	stw r0, 8(r6)
/* 800642BC 000611FC  55 20 46 3E */	srwi r0, r9, 0x18
/* 800642C0 00061200  55 28 86 3E */	rlwinm r8, r9, 0x10, 0x18, 0x1f
/* 800642C4 00061204  55 27 C6 3E */	rlwinm r7, r9, 0x18, 0x18, 0x1f
/* 800642C8 00061208  98 04 00 00 */	stb r0, 0(r4)
/* 800642CC 0006120C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800642D0 00061210  80 86 00 08 */	lwz r4, 8(r6)
/* 800642D4 00061214  38 04 00 01 */	addi r0, r4, 1
/* 800642D8 00061218  90 06 00 08 */	stw r0, 8(r6)
/* 800642DC 0006121C  99 04 00 00 */	stb r8, 0(r4)
/* 800642E0 00061220  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800642E4 00061224  80 86 00 08 */	lwz r4, 8(r6)
/* 800642E8 00061228  38 04 00 01 */	addi r0, r4, 1
/* 800642EC 0006122C  90 06 00 08 */	stw r0, 8(r6)
/* 800642F0 00061230  98 E4 00 00 */	stb r7, 0(r4)
/* 800642F4 00061234  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800642F8 00061238  80 86 00 08 */	lwz r4, 8(r6)
/* 800642FC 0006123C  38 04 00 01 */	addi r0, r4, 1
/* 80064300 00061240  90 06 00 08 */	stw r0, 8(r6)
/* 80064304 00061244  99 24 00 00 */	stb r9, 0(r4)
/* 80064308 00061248  C0 03 00 08 */	lfs f0, 8(r3)
/* 8006430C 0006124C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064310 00061250  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80064314 00061254  80 86 00 08 */	lwz r4, 8(r6)
/* 80064318 00061258  81 21 00 2C */	lwz r9, 0x2c(r1)
/* 8006431C 0006125C  38 04 00 01 */	addi r0, r4, 1
/* 80064320 00061260  90 06 00 08 */	stw r0, 8(r6)
/* 80064324 00061264  55 20 46 3E */	srwi r0, r9, 0x18
/* 80064328 00061268  55 28 86 3E */	rlwinm r8, r9, 0x10, 0x18, 0x1f
/* 8006432C 0006126C  55 27 C6 3E */	rlwinm r7, r9, 0x18, 0x18, 0x1f
/* 80064330 00061270  98 04 00 00 */	stb r0, 0(r4)
/* 80064334 00061274  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064338 00061278  80 86 00 08 */	lwz r4, 8(r6)
/* 8006433C 0006127C  38 04 00 01 */	addi r0, r4, 1
/* 80064340 00061280  90 06 00 08 */	stw r0, 8(r6)
/* 80064344 00061284  99 04 00 00 */	stb r8, 0(r4)
/* 80064348 00061288  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8006434C 0006128C  80 86 00 08 */	lwz r4, 8(r6)
/* 80064350 00061290  38 04 00 01 */	addi r0, r4, 1
/* 80064354 00061294  90 06 00 08 */	stw r0, 8(r6)
/* 80064358 00061298  98 E4 00 00 */	stb r7, 0(r4)
/* 8006435C 0006129C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064360 000612A0  80 86 00 08 */	lwz r4, 8(r6)
/* 80064364 000612A4  38 04 00 01 */	addi r0, r4, 1
/* 80064368 000612A8  90 06 00 08 */	stw r0, 8(r6)
/* 8006436C 000612AC  99 24 00 00 */	stb r9, 0(r4)
/* 80064370 000612B0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80064374 000612B4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064378 000612B8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8006437C 000612BC  80 86 00 08 */	lwz r4, 8(r6)
/* 80064380 000612C0  81 21 00 28 */	lwz r9, 0x28(r1)
/* 80064384 000612C4  38 04 00 01 */	addi r0, r4, 1
/* 80064388 000612C8  90 06 00 08 */	stw r0, 8(r6)
/* 8006438C 000612CC  55 20 46 3E */	srwi r0, r9, 0x18
/* 80064390 000612D0  55 28 86 3E */	rlwinm r8, r9, 0x10, 0x18, 0x1f
/* 80064394 000612D4  55 27 C6 3E */	rlwinm r7, r9, 0x18, 0x18, 0x1f
/* 80064398 000612D8  98 04 00 00 */	stb r0, 0(r4)
/* 8006439C 000612DC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800643A0 000612E0  80 86 00 08 */	lwz r4, 8(r6)
/* 800643A4 000612E4  38 04 00 01 */	addi r0, r4, 1
/* 800643A8 000612E8  90 06 00 08 */	stw r0, 8(r6)
/* 800643AC 000612EC  99 04 00 00 */	stb r8, 0(r4)
/* 800643B0 000612F0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800643B4 000612F4  80 86 00 08 */	lwz r4, 8(r6)
/* 800643B8 000612F8  38 04 00 01 */	addi r0, r4, 1
/* 800643BC 000612FC  90 06 00 08 */	stw r0, 8(r6)
/* 800643C0 00061300  98 E4 00 00 */	stb r7, 0(r4)
/* 800643C4 00061304  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800643C8 00061308  80 86 00 08 */	lwz r4, 8(r6)
/* 800643CC 0006130C  38 04 00 01 */	addi r0, r4, 1
/* 800643D0 00061310  90 06 00 08 */	stw r0, 8(r6)
/* 800643D4 00061314  99 24 00 00 */	stb r9, 0(r4)
/* 800643D8 00061318  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 800643DC 0006131C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800643E0 00061320  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 800643E4 00061324  80 86 00 08 */	lwz r4, 8(r6)
/* 800643E8 00061328  81 01 00 24 */	lwz r8, 0x24(r1)
/* 800643EC 0006132C  38 04 00 01 */	addi r0, r4, 1
/* 800643F0 00061330  90 06 00 08 */	stw r0, 8(r6)
/* 800643F4 00061334  55 00 46 3E */	srwi r0, r8, 0x18
/* 800643F8 00061338  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800643FC 0006133C  98 04 00 00 */	stb r0, 0(r4)
/* 80064400 00061340  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064404 00061344  80 86 00 08 */	lwz r4, 8(r6)
/* 80064408 00061348  38 04 00 01 */	addi r0, r4, 1
/* 8006440C 0006134C  90 06 00 08 */	stw r0, 8(r6)
/* 80064410 00061350  98 E4 00 00 */	stb r7, 0(r4)
/* 80064414 00061354  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80064418 00061358  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8006441C 0006135C  2C 05 00 00 */	cmpwi r5, 0
/* 80064420 00061360  80 86 00 08 */	lwz r4, 8(r6)
/* 80064424 00061364  38 04 00 01 */	addi r0, r4, 1
/* 80064428 00061368  90 06 00 08 */	stw r0, 8(r6)
/* 8006442C 0006136C  98 E4 00 00 */	stb r7, 0(r4)
/* 80064430 00061370  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064434 00061374  80 85 00 08 */	lwz r4, 8(r5)
/* 80064438 00061378  38 04 00 01 */	addi r0, r4, 1
/* 8006443C 0006137C  90 05 00 08 */	stw r0, 8(r5)
/* 80064440 00061380  99 04 00 00 */	stb r8, 0(r4)
/* 80064444 00061384  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80064448 00061388  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006444C 0006138C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80064450 00061390  80 85 00 08 */	lwz r4, 8(r5)
/* 80064454 00061394  81 01 00 20 */	lwz r8, 0x20(r1)
/* 80064458 00061398  38 04 00 01 */	addi r0, r4, 1
/* 8006445C 0006139C  90 05 00 08 */	stw r0, 8(r5)
/* 80064460 000613A0  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064464 000613A4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064468 000613A8  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8006446C 000613AC  98 04 00 00 */	stb r0, 0(r4)
/* 80064470 000613B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064474 000613B4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064478 000613B8  38 04 00 01 */	addi r0, r4, 1
/* 8006447C 000613BC  90 05 00 08 */	stw r0, 8(r5)
/* 80064480 000613C0  98 E4 00 00 */	stb r7, 0(r4)
/* 80064484 000613C4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064488 000613C8  80 85 00 08 */	lwz r4, 8(r5)
/* 8006448C 000613CC  38 04 00 01 */	addi r0, r4, 1
/* 80064490 000613D0  90 05 00 08 */	stw r0, 8(r5)
/* 80064494 000613D4  98 C4 00 00 */	stb r6, 0(r4)
/* 80064498 000613D8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006449C 000613DC  80 85 00 08 */	lwz r4, 8(r5)
/* 800644A0 000613E0  38 04 00 01 */	addi r0, r4, 1
/* 800644A4 000613E4  90 05 00 08 */	stw r0, 8(r5)
/* 800644A8 000613E8  99 04 00 00 */	stb r8, 0(r4)
/* 800644AC 000613EC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 800644B0 000613F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800644B4 000613F4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 800644B8 000613F8  80 85 00 08 */	lwz r4, 8(r5)
/* 800644BC 000613FC  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 800644C0 00061400  38 04 00 01 */	addi r0, r4, 1
/* 800644C4 00061404  90 05 00 08 */	stw r0, 8(r5)
/* 800644C8 00061408  55 00 46 3E */	srwi r0, r8, 0x18
/* 800644CC 0006140C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800644D0 00061410  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800644D4 00061414  98 04 00 00 */	stb r0, 0(r4)
/* 800644D8 00061418  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800644DC 0006141C  80 85 00 08 */	lwz r4, 8(r5)
/* 800644E0 00061420  38 04 00 01 */	addi r0, r4, 1
/* 800644E4 00061424  90 05 00 08 */	stw r0, 8(r5)
/* 800644E8 00061428  98 E4 00 00 */	stb r7, 0(r4)
/* 800644EC 0006142C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800644F0 00061430  80 85 00 08 */	lwz r4, 8(r5)
/* 800644F4 00061434  38 04 00 01 */	addi r0, r4, 1
/* 800644F8 00061438  90 05 00 08 */	stw r0, 8(r5)
/* 800644FC 0006143C  98 C4 00 00 */	stb r6, 0(r4)
/* 80064500 00061440  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064504 00061444  80 85 00 08 */	lwz r4, 8(r5)
/* 80064508 00061448  38 04 00 01 */	addi r0, r4, 1
/* 8006450C 0006144C  90 05 00 08 */	stw r0, 8(r5)
/* 80064510 00061450  99 04 00 00 */	stb r8, 0(r4)
/* 80064514 00061454  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80064518 00061458  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006451C 0006145C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80064520 00061460  80 85 00 08 */	lwz r4, 8(r5)
/* 80064524 00061464  81 01 00 18 */	lwz r8, 0x18(r1)
/* 80064528 00061468  38 04 00 01 */	addi r0, r4, 1
/* 8006452C 0006146C  90 05 00 08 */	stw r0, 8(r5)
/* 80064530 00061470  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064534 00061474  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064538 00061478  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8006453C 0006147C  98 04 00 00 */	stb r0, 0(r4)
/* 80064540 00061480  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064544 00061484  80 85 00 08 */	lwz r4, 8(r5)
/* 80064548 00061488  38 04 00 01 */	addi r0, r4, 1
/* 8006454C 0006148C  90 05 00 08 */	stw r0, 8(r5)
/* 80064550 00061490  98 E4 00 00 */	stb r7, 0(r4)
/* 80064554 00061494  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064558 00061498  80 85 00 08 */	lwz r4, 8(r5)
/* 8006455C 0006149C  38 04 00 01 */	addi r0, r4, 1
/* 80064560 000614A0  90 05 00 08 */	stw r0, 8(r5)
/* 80064564 000614A4  98 C4 00 00 */	stb r6, 0(r4)
/* 80064568 000614A8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006456C 000614AC  80 85 00 08 */	lwz r4, 8(r5)
/* 80064570 000614B0  38 04 00 01 */	addi r0, r4, 1
/* 80064574 000614B4  90 05 00 08 */	stw r0, 8(r5)
/* 80064578 000614B8  99 04 00 00 */	stb r8, 0(r4)
/* 8006457C 000614BC  40 82 01 A4 */	bne .L_80064720
/* 80064580 000614C0  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80064584 000614C4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064588 000614C8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8006458C 000614CC  80 85 00 08 */	lwz r4, 8(r5)
/* 80064590 000614D0  81 01 00 14 */	lwz r8, 0x14(r1)
/* 80064594 000614D4  38 04 00 01 */	addi r0, r4, 1
/* 80064598 000614D8  90 05 00 08 */	stw r0, 8(r5)
/* 8006459C 000614DC  55 00 46 3E */	srwi r0, r8, 0x18
/* 800645A0 000614E0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800645A4 000614E4  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800645A8 000614E8  98 04 00 00 */	stb r0, 0(r4)
/* 800645AC 000614EC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800645B0 000614F0  80 85 00 08 */	lwz r4, 8(r5)
/* 800645B4 000614F4  38 04 00 01 */	addi r0, r4, 1
/* 800645B8 000614F8  90 05 00 08 */	stw r0, 8(r5)
/* 800645BC 000614FC  98 E4 00 00 */	stb r7, 0(r4)
/* 800645C0 00061500  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800645C4 00061504  80 85 00 08 */	lwz r4, 8(r5)
/* 800645C8 00061508  38 04 00 01 */	addi r0, r4, 1
/* 800645CC 0006150C  90 05 00 08 */	stw r0, 8(r5)
/* 800645D0 00061510  98 C4 00 00 */	stb r6, 0(r4)
/* 800645D4 00061514  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800645D8 00061518  80 85 00 08 */	lwz r4, 8(r5)
/* 800645DC 0006151C  38 04 00 01 */	addi r0, r4, 1
/* 800645E0 00061520  90 05 00 08 */	stw r0, 8(r5)
/* 800645E4 00061524  99 04 00 00 */	stb r8, 0(r4)
/* 800645E8 00061528  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 800645EC 0006152C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800645F0 00061530  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 800645F4 00061534  80 85 00 08 */	lwz r4, 8(r5)
/* 800645F8 00061538  81 01 00 10 */	lwz r8, 0x10(r1)
/* 800645FC 0006153C  38 04 00 01 */	addi r0, r4, 1
/* 80064600 00061540  90 05 00 08 */	stw r0, 8(r5)
/* 80064604 00061544  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064608 00061548  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8006460C 0006154C  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064610 00061550  98 04 00 00 */	stb r0, 0(r4)
/* 80064614 00061554  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064618 00061558  80 85 00 08 */	lwz r4, 8(r5)
/* 8006461C 0006155C  38 04 00 01 */	addi r0, r4, 1
/* 80064620 00061560  90 05 00 08 */	stw r0, 8(r5)
/* 80064624 00061564  98 E4 00 00 */	stb r7, 0(r4)
/* 80064628 00061568  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006462C 0006156C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064630 00061570  38 04 00 01 */	addi r0, r4, 1
/* 80064634 00061574  90 05 00 08 */	stw r0, 8(r5)
/* 80064638 00061578  98 C4 00 00 */	stb r6, 0(r4)
/* 8006463C 0006157C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064640 00061580  80 85 00 08 */	lwz r4, 8(r5)
/* 80064644 00061584  38 04 00 01 */	addi r0, r4, 1
/* 80064648 00061588  90 05 00 08 */	stw r0, 8(r5)
/* 8006464C 0006158C  99 04 00 00 */	stb r8, 0(r4)
/* 80064650 00061590  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80064654 00061594  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064658 00061598  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8006465C 0006159C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064660 000615A0  81 01 00 0C */	lwz r8, 0xc(r1)
/* 80064664 000615A4  38 04 00 01 */	addi r0, r4, 1
/* 80064668 000615A8  90 05 00 08 */	stw r0, 8(r5)
/* 8006466C 000615AC  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064670 000615B0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064674 000615B4  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064678 000615B8  98 04 00 00 */	stb r0, 0(r4)
/* 8006467C 000615BC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064680 000615C0  80 85 00 08 */	lwz r4, 8(r5)
/* 80064684 000615C4  38 04 00 01 */	addi r0, r4, 1
/* 80064688 000615C8  90 05 00 08 */	stw r0, 8(r5)
/* 8006468C 000615CC  98 E4 00 00 */	stb r7, 0(r4)
/* 80064690 000615D0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064694 000615D4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064698 000615D8  38 04 00 01 */	addi r0, r4, 1
/* 8006469C 000615DC  90 05 00 08 */	stw r0, 8(r5)
/* 800646A0 000615E0  98 C4 00 00 */	stb r6, 0(r4)
/* 800646A4 000615E4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800646A8 000615E8  80 85 00 08 */	lwz r4, 8(r5)
/* 800646AC 000615EC  38 04 00 01 */	addi r0, r4, 1
/* 800646B0 000615F0  90 05 00 08 */	stw r0, 8(r5)
/* 800646B4 000615F4  99 04 00 00 */	stb r8, 0(r4)
/* 800646B8 000615F8  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 800646BC 000615FC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800646C0 00061600  D0 01 00 08 */	stfs f0, 8(r1)
/* 800646C4 00061604  80 64 00 08 */	lwz r3, 8(r4)
/* 800646C8 00061608  80 E1 00 08 */	lwz r7, 8(r1)
/* 800646CC 0006160C  38 03 00 01 */	addi r0, r3, 1
/* 800646D0 00061610  90 04 00 08 */	stw r0, 8(r4)
/* 800646D4 00061614  54 E0 46 3E */	srwi r0, r7, 0x18
/* 800646D8 00061618  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 800646DC 0006161C  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 800646E0 00061620  98 03 00 00 */	stb r0, 0(r3)
/* 800646E4 00061624  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800646E8 00061628  80 64 00 08 */	lwz r3, 8(r4)
/* 800646EC 0006162C  38 03 00 01 */	addi r0, r3, 1
/* 800646F0 00061630  90 04 00 08 */	stw r0, 8(r4)
/* 800646F4 00061634  98 C3 00 00 */	stb r6, 0(r3)
/* 800646F8 00061638  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800646FC 0006163C  80 64 00 08 */	lwz r3, 8(r4)
/* 80064700 00061640  38 03 00 01 */	addi r0, r3, 1
/* 80064704 00061644  90 04 00 08 */	stw r0, 8(r4)
/* 80064708 00061648  98 A3 00 00 */	stb r5, 0(r3)
/* 8006470C 0006164C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80064710 00061650  80 64 00 08 */	lwz r3, 8(r4)
/* 80064714 00061654  38 03 00 01 */	addi r0, r3, 1
/* 80064718 00061658  90 04 00 08 */	stw r0, 8(r4)
/* 8006471C 0006165C  98 E3 00 00 */	stb r7, 0(r3)
.L_80064720:
/* 80064720 00061660  38 21 00 40 */	addi r1, r1, 0x40
/* 80064724 00061664  4E 80 00 20 */	blr 
.endfn J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType

.fn loadPostTexMtx__9J3DTexMtxCFUl, weak
/* 80064728 00061668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006472C 0006166C  7C 08 02 A6 */	mflr r0
/* 80064730 00061670  90 01 00 14 */	stw r0, 0x14(r1)
/* 80064734 00061674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80064738 00061678  7C 9F 23 78 */	mr r31, r4
/* 8006473C 0006167C  93 C1 00 08 */	stw r30, 8(r1)
/* 80064740 00061680  7C 7E 1B 78 */	mr r30, r3
/* 80064744 00061684  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064748 00061688  80 65 00 08 */	lwz r3, 8(r5)
/* 8006474C 0006168C  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80064750 00061690  38 63 00 35 */	addi r3, r3, 0x35
/* 80064754 00061694  7C 03 00 40 */	cmplw r3, r0
/* 80064758 00061698  40 81 00 08 */	ble .L_80064760
/* 8006475C 0006169C  48 07 D4 E5 */	bl GDOverflowed
.L_80064760:
/* 80064760 000616A0  1C 9F 00 03 */	mulli r4, r31, 3
/* 80064764 000616A4  38 7E 00 64 */	addi r3, r30, 0x64
/* 80064768 000616A8  38 84 00 40 */	addi r4, r4, 0x40
/* 8006476C 000616AC  48 00 00 1D */	bl J3DGDLoadPostTexMtxImm__FPA4_fUl
/* 80064770 000616B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80064774 000616B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80064778 000616B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8006477C 000616BC  7C 08 03 A6 */	mtlr r0
/* 80064780 000616C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80064784 000616C4  4E 80 00 20 */	blr 
.endfn loadPostTexMtx__9J3DTexMtxCFUl

.fn J3DGDLoadPostTexMtxImm__FPA4_fUl, weak
/* 80064788 000616C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8006478C 000616CC  38 04 FF C0 */	addi r0, r4, -64
/* 80064790 000616D0  54 04 10 3A */	slwi r4, r0, 2
/* 80064794 000616D4  39 60 00 10 */	li r11, 0x10
/* 80064798 000616D8  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8006479C 000616DC  38 E4 05 00 */	addi r7, r4, 0x500
/* 800647A0 000616E0  39 20 00 00 */	li r9, 0
/* 800647A4 000616E4  39 00 00 0B */	li r8, 0xb
/* 800647A8 000616E8  80 AA 00 08 */	lwz r5, 8(r10)
/* 800647AC 000616EC  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 800647B0 000616F0  38 05 00 01 */	addi r0, r5, 1
/* 800647B4 000616F4  90 0A 00 08 */	stw r0, 8(r10)
/* 800647B8 000616F8  99 65 00 00 */	stb r11, 0(r5)
/* 800647BC 000616FC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800647C0 00061700  80 85 00 08 */	lwz r4, 8(r5)
/* 800647C4 00061704  38 04 00 01 */	addi r0, r4, 1
/* 800647C8 00061708  90 05 00 08 */	stw r0, 8(r5)
/* 800647CC 0006170C  99 24 00 00 */	stb r9, 0(r4)
/* 800647D0 00061710  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800647D4 00061714  80 85 00 08 */	lwz r4, 8(r5)
/* 800647D8 00061718  38 04 00 01 */	addi r0, r4, 1
/* 800647DC 0006171C  90 05 00 08 */	stw r0, 8(r5)
/* 800647E0 00061720  99 04 00 00 */	stb r8, 0(r4)
/* 800647E4 00061724  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800647E8 00061728  80 85 00 08 */	lwz r4, 8(r5)
/* 800647EC 0006172C  38 04 00 01 */	addi r0, r4, 1
/* 800647F0 00061730  90 05 00 08 */	stw r0, 8(r5)
/* 800647F4 00061734  98 C4 00 00 */	stb r6, 0(r4)
/* 800647F8 00061738  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800647FC 0006173C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064800 00061740  38 04 00 01 */	addi r0, r4, 1
/* 80064804 00061744  90 05 00 08 */	stw r0, 8(r5)
/* 80064808 00061748  98 E4 00 00 */	stb r7, 0(r4)
/* 8006480C 0006174C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80064810 00061750  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064814 00061754  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80064818 00061758  80 85 00 08 */	lwz r4, 8(r5)
/* 8006481C 0006175C  81 01 00 34 */	lwz r8, 0x34(r1)
/* 80064820 00061760  38 04 00 01 */	addi r0, r4, 1
/* 80064824 00061764  90 05 00 08 */	stw r0, 8(r5)
/* 80064828 00061768  55 00 46 3E */	srwi r0, r8, 0x18
/* 8006482C 0006176C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064830 00061770  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064834 00061774  98 04 00 00 */	stb r0, 0(r4)
/* 80064838 00061778  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006483C 0006177C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064840 00061780  38 04 00 01 */	addi r0, r4, 1
/* 80064844 00061784  90 05 00 08 */	stw r0, 8(r5)
/* 80064848 00061788  98 E4 00 00 */	stb r7, 0(r4)
/* 8006484C 0006178C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064850 00061790  80 85 00 08 */	lwz r4, 8(r5)
/* 80064854 00061794  38 04 00 01 */	addi r0, r4, 1
/* 80064858 00061798  90 05 00 08 */	stw r0, 8(r5)
/* 8006485C 0006179C  98 C4 00 00 */	stb r6, 0(r4)
/* 80064860 000617A0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064864 000617A4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064868 000617A8  38 04 00 01 */	addi r0, r4, 1
/* 8006486C 000617AC  90 05 00 08 */	stw r0, 8(r5)
/* 80064870 000617B0  99 04 00 00 */	stb r8, 0(r4)
/* 80064874 000617B4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80064878 000617B8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006487C 000617BC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80064880 000617C0  80 85 00 08 */	lwz r4, 8(r5)
/* 80064884 000617C4  81 01 00 30 */	lwz r8, 0x30(r1)
/* 80064888 000617C8  38 04 00 01 */	addi r0, r4, 1
/* 8006488C 000617CC  90 05 00 08 */	stw r0, 8(r5)
/* 80064890 000617D0  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064894 000617D4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064898 000617D8  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8006489C 000617DC  98 04 00 00 */	stb r0, 0(r4)
/* 800648A0 000617E0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800648A4 000617E4  80 85 00 08 */	lwz r4, 8(r5)
/* 800648A8 000617E8  38 04 00 01 */	addi r0, r4, 1
/* 800648AC 000617EC  90 05 00 08 */	stw r0, 8(r5)
/* 800648B0 000617F0  98 E4 00 00 */	stb r7, 0(r4)
/* 800648B4 000617F4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800648B8 000617F8  80 85 00 08 */	lwz r4, 8(r5)
/* 800648BC 000617FC  38 04 00 01 */	addi r0, r4, 1
/* 800648C0 00061800  90 05 00 08 */	stw r0, 8(r5)
/* 800648C4 00061804  98 C4 00 00 */	stb r6, 0(r4)
/* 800648C8 00061808  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800648CC 0006180C  80 85 00 08 */	lwz r4, 8(r5)
/* 800648D0 00061810  38 04 00 01 */	addi r0, r4, 1
/* 800648D4 00061814  90 05 00 08 */	stw r0, 8(r5)
/* 800648D8 00061818  99 04 00 00 */	stb r8, 0(r4)
/* 800648DC 0006181C  C0 03 00 08 */	lfs f0, 8(r3)
/* 800648E0 00061820  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800648E4 00061824  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 800648E8 00061828  80 85 00 08 */	lwz r4, 8(r5)
/* 800648EC 0006182C  81 01 00 2C */	lwz r8, 0x2c(r1)
/* 800648F0 00061830  38 04 00 01 */	addi r0, r4, 1
/* 800648F4 00061834  90 05 00 08 */	stw r0, 8(r5)
/* 800648F8 00061838  55 00 46 3E */	srwi r0, r8, 0x18
/* 800648FC 0006183C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064900 00061840  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064904 00061844  98 04 00 00 */	stb r0, 0(r4)
/* 80064908 00061848  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006490C 0006184C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064910 00061850  38 04 00 01 */	addi r0, r4, 1
/* 80064914 00061854  90 05 00 08 */	stw r0, 8(r5)
/* 80064918 00061858  98 E4 00 00 */	stb r7, 0(r4)
/* 8006491C 0006185C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064920 00061860  80 85 00 08 */	lwz r4, 8(r5)
/* 80064924 00061864  38 04 00 01 */	addi r0, r4, 1
/* 80064928 00061868  90 05 00 08 */	stw r0, 8(r5)
/* 8006492C 0006186C  98 C4 00 00 */	stb r6, 0(r4)
/* 80064930 00061870  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064934 00061874  80 85 00 08 */	lwz r4, 8(r5)
/* 80064938 00061878  38 04 00 01 */	addi r0, r4, 1
/* 8006493C 0006187C  90 05 00 08 */	stw r0, 8(r5)
/* 80064940 00061880  99 04 00 00 */	stb r8, 0(r4)
/* 80064944 00061884  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80064948 00061888  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006494C 0006188C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80064950 00061890  80 85 00 08 */	lwz r4, 8(r5)
/* 80064954 00061894  81 01 00 28 */	lwz r8, 0x28(r1)
/* 80064958 00061898  38 04 00 01 */	addi r0, r4, 1
/* 8006495C 0006189C  90 05 00 08 */	stw r0, 8(r5)
/* 80064960 000618A0  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064964 000618A4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064968 000618A8  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8006496C 000618AC  98 04 00 00 */	stb r0, 0(r4)
/* 80064970 000618B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064974 000618B4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064978 000618B8  38 04 00 01 */	addi r0, r4, 1
/* 8006497C 000618BC  90 05 00 08 */	stw r0, 8(r5)
/* 80064980 000618C0  98 E4 00 00 */	stb r7, 0(r4)
/* 80064984 000618C4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064988 000618C8  80 85 00 08 */	lwz r4, 8(r5)
/* 8006498C 000618CC  38 04 00 01 */	addi r0, r4, 1
/* 80064990 000618D0  90 05 00 08 */	stw r0, 8(r5)
/* 80064994 000618D4  98 C4 00 00 */	stb r6, 0(r4)
/* 80064998 000618D8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8006499C 000618DC  80 85 00 08 */	lwz r4, 8(r5)
/* 800649A0 000618E0  38 04 00 01 */	addi r0, r4, 1
/* 800649A4 000618E4  90 05 00 08 */	stw r0, 8(r5)
/* 800649A8 000618E8  99 04 00 00 */	stb r8, 0(r4)
/* 800649AC 000618EC  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 800649B0 000618F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800649B4 000618F4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 800649B8 000618F8  80 85 00 08 */	lwz r4, 8(r5)
/* 800649BC 000618FC  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 800649C0 00061900  38 04 00 01 */	addi r0, r4, 1
/* 800649C4 00061904  90 05 00 08 */	stw r0, 8(r5)
/* 800649C8 00061908  54 E0 46 3E */	srwi r0, r7, 0x18
/* 800649CC 0006190C  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 800649D0 00061910  98 04 00 00 */	stb r0, 0(r4)
/* 800649D4 00061914  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800649D8 00061918  80 85 00 08 */	lwz r4, 8(r5)
/* 800649DC 0006191C  38 04 00 01 */	addi r0, r4, 1
/* 800649E0 00061920  90 05 00 08 */	stw r0, 8(r5)
/* 800649E4 00061924  98 C4 00 00 */	stb r6, 0(r4)
/* 800649E8 00061928  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800649EC 0006192C  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 800649F0 00061930  80 85 00 08 */	lwz r4, 8(r5)
/* 800649F4 00061934  38 04 00 01 */	addi r0, r4, 1
/* 800649F8 00061938  90 05 00 08 */	stw r0, 8(r5)
/* 800649FC 0006193C  98 C4 00 00 */	stb r6, 0(r4)
/* 80064A00 00061940  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A04 00061944  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A08 00061948  38 04 00 01 */	addi r0, r4, 1
/* 80064A0C 0006194C  90 05 00 08 */	stw r0, 8(r5)
/* 80064A10 00061950  98 E4 00 00 */	stb r7, 0(r4)
/* 80064A14 00061954  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80064A18 00061958  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A1C 0006195C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80064A20 00061960  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A24 00061964  81 01 00 20 */	lwz r8, 0x20(r1)
/* 80064A28 00061968  38 04 00 01 */	addi r0, r4, 1
/* 80064A2C 0006196C  90 05 00 08 */	stw r0, 8(r5)
/* 80064A30 00061970  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064A34 00061974  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064A38 00061978  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064A3C 0006197C  98 04 00 00 */	stb r0, 0(r4)
/* 80064A40 00061980  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A44 00061984  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A48 00061988  38 04 00 01 */	addi r0, r4, 1
/* 80064A4C 0006198C  90 05 00 08 */	stw r0, 8(r5)
/* 80064A50 00061990  98 E4 00 00 */	stb r7, 0(r4)
/* 80064A54 00061994  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A58 00061998  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A5C 0006199C  38 04 00 01 */	addi r0, r4, 1
/* 80064A60 000619A0  90 05 00 08 */	stw r0, 8(r5)
/* 80064A64 000619A4  98 C4 00 00 */	stb r6, 0(r4)
/* 80064A68 000619A8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A6C 000619AC  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A70 000619B0  38 04 00 01 */	addi r0, r4, 1
/* 80064A74 000619B4  90 05 00 08 */	stw r0, 8(r5)
/* 80064A78 000619B8  99 04 00 00 */	stb r8, 0(r4)
/* 80064A7C 000619BC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80064A80 000619C0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064A84 000619C4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80064A88 000619C8  80 85 00 08 */	lwz r4, 8(r5)
/* 80064A8C 000619CC  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 80064A90 000619D0  38 04 00 01 */	addi r0, r4, 1
/* 80064A94 000619D4  90 05 00 08 */	stw r0, 8(r5)
/* 80064A98 000619D8  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064A9C 000619DC  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064AA0 000619E0  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064AA4 000619E4  98 04 00 00 */	stb r0, 0(r4)
/* 80064AA8 000619E8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064AAC 000619EC  80 85 00 08 */	lwz r4, 8(r5)
/* 80064AB0 000619F0  38 04 00 01 */	addi r0, r4, 1
/* 80064AB4 000619F4  90 05 00 08 */	stw r0, 8(r5)
/* 80064AB8 000619F8  98 E4 00 00 */	stb r7, 0(r4)
/* 80064ABC 000619FC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064AC0 00061A00  80 85 00 08 */	lwz r4, 8(r5)
/* 80064AC4 00061A04  38 04 00 01 */	addi r0, r4, 1
/* 80064AC8 00061A08  90 05 00 08 */	stw r0, 8(r5)
/* 80064ACC 00061A0C  98 C4 00 00 */	stb r6, 0(r4)
/* 80064AD0 00061A10  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064AD4 00061A14  80 85 00 08 */	lwz r4, 8(r5)
/* 80064AD8 00061A18  38 04 00 01 */	addi r0, r4, 1
/* 80064ADC 00061A1C  90 05 00 08 */	stw r0, 8(r5)
/* 80064AE0 00061A20  99 04 00 00 */	stb r8, 0(r4)
/* 80064AE4 00061A24  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80064AE8 00061A28  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064AEC 00061A2C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80064AF0 00061A30  80 85 00 08 */	lwz r4, 8(r5)
/* 80064AF4 00061A34  81 01 00 18 */	lwz r8, 0x18(r1)
/* 80064AF8 00061A38  38 04 00 01 */	addi r0, r4, 1
/* 80064AFC 00061A3C  90 05 00 08 */	stw r0, 8(r5)
/* 80064B00 00061A40  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064B04 00061A44  98 04 00 00 */	stb r0, 0(r4)
/* 80064B08 00061A48  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B0C 00061A4C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064B10 00061A50  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064B14 00061A54  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B18 00061A58  38 04 00 01 */	addi r0, r4, 1
/* 80064B1C 00061A5C  90 05 00 08 */	stw r0, 8(r5)
/* 80064B20 00061A60  98 E4 00 00 */	stb r7, 0(r4)
/* 80064B24 00061A64  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B28 00061A68  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B2C 00061A6C  38 04 00 01 */	addi r0, r4, 1
/* 80064B30 00061A70  90 05 00 08 */	stw r0, 8(r5)
/* 80064B34 00061A74  98 C4 00 00 */	stb r6, 0(r4)
/* 80064B38 00061A78  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B3C 00061A7C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B40 00061A80  38 04 00 01 */	addi r0, r4, 1
/* 80064B44 00061A84  90 05 00 08 */	stw r0, 8(r5)
/* 80064B48 00061A88  99 04 00 00 */	stb r8, 0(r4)
/* 80064B4C 00061A8C  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80064B50 00061A90  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B54 00061A94  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80064B58 00061A98  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B5C 00061A9C  81 01 00 14 */	lwz r8, 0x14(r1)
/* 80064B60 00061AA0  38 04 00 01 */	addi r0, r4, 1
/* 80064B64 00061AA4  90 05 00 08 */	stw r0, 8(r5)
/* 80064B68 00061AA8  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064B6C 00061AAC  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064B70 00061AB0  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064B74 00061AB4  98 04 00 00 */	stb r0, 0(r4)
/* 80064B78 00061AB8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B7C 00061ABC  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B80 00061AC0  38 04 00 01 */	addi r0, r4, 1
/* 80064B84 00061AC4  90 05 00 08 */	stw r0, 8(r5)
/* 80064B88 00061AC8  98 E4 00 00 */	stb r7, 0(r4)
/* 80064B8C 00061ACC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064B90 00061AD0  80 85 00 08 */	lwz r4, 8(r5)
/* 80064B94 00061AD4  38 04 00 01 */	addi r0, r4, 1
/* 80064B98 00061AD8  90 05 00 08 */	stw r0, 8(r5)
/* 80064B9C 00061ADC  98 C4 00 00 */	stb r6, 0(r4)
/* 80064BA0 00061AE0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064BA4 00061AE4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064BA8 00061AE8  38 04 00 01 */	addi r0, r4, 1
/* 80064BAC 00061AEC  90 05 00 08 */	stw r0, 8(r5)
/* 80064BB0 00061AF0  99 04 00 00 */	stb r8, 0(r4)
/* 80064BB4 00061AF4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80064BB8 00061AF8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064BBC 00061AFC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80064BC0 00061B00  80 85 00 08 */	lwz r4, 8(r5)
/* 80064BC4 00061B04  81 01 00 10 */	lwz r8, 0x10(r1)
/* 80064BC8 00061B08  38 04 00 01 */	addi r0, r4, 1
/* 80064BCC 00061B0C  90 05 00 08 */	stw r0, 8(r5)
/* 80064BD0 00061B10  55 00 46 3E */	srwi r0, r8, 0x18
/* 80064BD4 00061B14  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80064BD8 00061B18  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80064BDC 00061B1C  98 04 00 00 */	stb r0, 0(r4)
/* 80064BE0 00061B20  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064BE4 00061B24  80 85 00 08 */	lwz r4, 8(r5)
/* 80064BE8 00061B28  38 04 00 01 */	addi r0, r4, 1
/* 80064BEC 00061B2C  90 05 00 08 */	stw r0, 8(r5)
/* 80064BF0 00061B30  98 E4 00 00 */	stb r7, 0(r4)
/* 80064BF4 00061B34  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064BF8 00061B38  80 85 00 08 */	lwz r4, 8(r5)
/* 80064BFC 00061B3C  38 04 00 01 */	addi r0, r4, 1
/* 80064C00 00061B40  90 05 00 08 */	stw r0, 8(r5)
/* 80064C04 00061B44  98 C4 00 00 */	stb r6, 0(r4)
/* 80064C08 00061B48  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064C0C 00061B4C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064C10 00061B50  38 04 00 01 */	addi r0, r4, 1
/* 80064C14 00061B54  90 05 00 08 */	stw r0, 8(r5)
/* 80064C18 00061B58  99 04 00 00 */	stb r8, 0(r4)
/* 80064C1C 00061B5C  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80064C20 00061B60  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80064C24 00061B64  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064C28 00061B68  81 21 00 0C */	lwz r9, 0xc(r1)
/* 80064C2C 00061B6C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064C30 00061B70  55 28 46 3E */	srwi r8, r9, 0x18
/* 80064C34 00061B74  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 80064C38 00061B78  38 04 00 01 */	addi r0, r4, 1
/* 80064C3C 00061B7C  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 80064C40 00061B80  90 05 00 08 */	stw r0, 8(r5)
/* 80064C44 00061B84  99 04 00 00 */	stb r8, 0(r4)
/* 80064C48 00061B88  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064C4C 00061B8C  80 85 00 08 */	lwz r4, 8(r5)
/* 80064C50 00061B90  38 04 00 01 */	addi r0, r4, 1
/* 80064C54 00061B94  90 05 00 08 */	stw r0, 8(r5)
/* 80064C58 00061B98  98 E4 00 00 */	stb r7, 0(r4)
/* 80064C5C 00061B9C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064C60 00061BA0  80 85 00 08 */	lwz r4, 8(r5)
/* 80064C64 00061BA4  38 04 00 01 */	addi r0, r4, 1
/* 80064C68 00061BA8  90 05 00 08 */	stw r0, 8(r5)
/* 80064C6C 00061BAC  98 C4 00 00 */	stb r6, 0(r4)
/* 80064C70 00061BB0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80064C74 00061BB4  80 85 00 08 */	lwz r4, 8(r5)
/* 80064C78 00061BB8  38 04 00 01 */	addi r0, r4, 1
/* 80064C7C 00061BBC  90 05 00 08 */	stw r0, 8(r5)
/* 80064C80 00061BC0  99 24 00 00 */	stb r9, 0(r4)
/* 80064C84 00061BC4  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80064C88 00061BC8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80064C8C 00061BCC  D0 01 00 08 */	stfs f0, 8(r1)
/* 80064C90 00061BD0  80 64 00 08 */	lwz r3, 8(r4)
/* 80064C94 00061BD4  80 E1 00 08 */	lwz r7, 8(r1)
/* 80064C98 00061BD8  38 03 00 01 */	addi r0, r3, 1
/* 80064C9C 00061BDC  90 04 00 08 */	stw r0, 8(r4)
/* 80064CA0 00061BE0  54 E0 46 3E */	srwi r0, r7, 0x18
/* 80064CA4 00061BE4  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80064CA8 00061BE8  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80064CAC 00061BEC  98 03 00 00 */	stb r0, 0(r3)
/* 80064CB0 00061BF0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80064CB4 00061BF4  80 64 00 08 */	lwz r3, 8(r4)
/* 80064CB8 00061BF8  38 03 00 01 */	addi r0, r3, 1
/* 80064CBC 00061BFC  90 04 00 08 */	stw r0, 8(r4)
/* 80064CC0 00061C00  98 C3 00 00 */	stb r6, 0(r3)
/* 80064CC4 00061C04  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80064CC8 00061C08  80 64 00 08 */	lwz r3, 8(r4)
/* 80064CCC 00061C0C  38 03 00 01 */	addi r0, r3, 1
/* 80064CD0 00061C10  90 04 00 08 */	stw r0, 8(r4)
/* 80064CD4 00061C14  98 A3 00 00 */	stb r5, 0(r3)
/* 80064CD8 00061C18  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80064CDC 00061C1C  80 64 00 08 */	lwz r3, 8(r4)
/* 80064CE0 00061C20  38 03 00 01 */	addi r0, r3, 1
/* 80064CE4 00061C24  90 04 00 08 */	stw r0, 8(r4)
/* 80064CE8 00061C28  98 E3 00 00 */	stb r7, 0(r3)
/* 80064CEC 00061C2C  38 21 00 40 */	addi r1, r1, 0x40
/* 80064CF0 00061C30  4E 80 00 20 */	blr 
.endfn J3DGDLoadPostTexMtxImm__FPA4_fUl

.fn calc__9J3DTexMtxFPA4_Cf, global
/* 80064CF4 00061C34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80064CF8 00061C38  7C 08 02 A6 */	mflr r0
/* 80064CFC 00061C3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80064D00 00061C40  48 00 00 15 */	bl calcTexMtx__9J3DTexMtxFPA4_Cf
/* 80064D04 00061C44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80064D08 00061C48  7C 08 03 A6 */	mtlr r0
/* 80064D0C 00061C4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80064D10 00061C50  4E 80 00 20 */	blr 
.endfn calc__9J3DTexMtxFPA4_Cf

.fn calcTexMtx__9J3DTexMtxFPA4_Cf, global
/* 80064D14 00061C54  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80064D18 00061C58  7C 08 02 A6 */	mflr r0
/* 80064D1C 00061C5C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80064D20 00061C60  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80064D24 00061C64  7C 9F 23 78 */	mr r31, r4
/* 80064D28 00061C68  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80064D2C 00061C6C  7C 7E 1B 78 */	mr r30, r3
/* 80064D30 00061C70  88 63 00 01 */	lbz r3, 1(r3)
/* 80064D34 00061C74  54 60 06 BE */	clrlwi r0, r3, 0x1a
/* 80064D38 00061C78  54 64 CF FE */	rlwinm r4, r3, 0x19, 0x1f, 0x1f
/* 80064D3C 00061C7C  28 00 00 0B */	cmplwi r0, 0xb
/* 80064D40 00061C80  41 81 02 78 */	bgt .L_80064FB8
/* 80064D44 00061C84  3C 60 80 4A */	lis r3, lbl_804A1870@ha
/* 80064D48 00061C88  54 00 10 3A */	slwi r0, r0, 2
/* 80064D4C 00061C8C  38 63 18 70 */	addi r3, r3, lbl_804A1870@l
/* 80064D50 00061C90  7C 03 00 2E */	lwzx r0, r3, r0
/* 80064D54 00061C94  7C 09 03 A6 */	mtctr r0
/* 80064D58 00061C98  4E 80 04 20 */	bctr 
.L_80064D5C:
/* 80064D5C 00061C9C  28 04 00 00 */	cmplwi r4, 0
/* 80064D60 00061CA0  40 82 00 18 */	bne .L_80064D78
/* 80064D64 00061CA4  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064D68 00061CA8  38 9E 00 04 */	addi r4, r30, 4
/* 80064D6C 00061CAC  38 A1 00 08 */	addi r5, r1, 8
/* 80064D70 00061CB0  4B FF A5 5D */	bl J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064D74 00061CB4  48 00 00 18 */	b .L_80064D8C
.L_80064D78:
/* 80064D78 00061CB8  28 04 00 01 */	cmplwi r4, 1
/* 80064D7C 00061CBC  40 82 00 10 */	bne .L_80064D8C
/* 80064D80 00061CC0  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064D84 00061CC4  38 81 00 08 */	addi r4, r1, 8
/* 80064D88 00061CC8  4B FF A6 9D */	bl J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f
.L_80064D8C:
/* 80064D8C 00061CCC  3C 80 80 4A */	lis r4, qMtx$1682@ha
/* 80064D90 00061CD0  38 61 00 08 */	addi r3, r1, 8
/* 80064D94 00061CD4  38 84 18 10 */	addi r4, r4, qMtx$1682@l
/* 80064D98 00061CD8  7C 65 1B 78 */	mr r5, r3
/* 80064D9C 00061CDC  48 08 55 65 */	bl PSMTXConcat
/* 80064DA0 00061CE0  38 61 00 08 */	addi r3, r1, 8
/* 80064DA4 00061CE4  38 9E 00 24 */	addi r4, r30, 0x24
/* 80064DA8 00061CE8  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064DAC 00061CEC  4B FF A8 81 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80064DB0 00061CF0  7F E4 FB 78 */	mr r4, r31
/* 80064DB4 00061CF4  38 61 00 48 */	addi r3, r1, 0x48
/* 80064DB8 00061CF8  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064DBC 00061CFC  48 08 55 45 */	bl PSMTXConcat
/* 80064DC0 00061D00  48 00 02 28 */	b .L_80064FE8
.L_80064DC4:
/* 80064DC4 00061D04  28 04 00 00 */	cmplwi r4, 0
/* 80064DC8 00061D08  40 82 00 18 */	bne .L_80064DE0
/* 80064DCC 00061D0C  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064DD0 00061D10  38 9E 00 04 */	addi r4, r30, 4
/* 80064DD4 00061D14  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064DD8 00061D18  4B FF A4 F5 */	bl J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064DDC 00061D1C  48 00 00 18 */	b .L_80064DF4
.L_80064DE0:
/* 80064DE0 00061D20  28 04 00 01 */	cmplwi r4, 1
/* 80064DE4 00061D24  40 82 00 10 */	bne .L_80064DF4
/* 80064DE8 00061D28  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064DEC 00061D2C  38 81 00 48 */	addi r4, r1, 0x48
/* 80064DF0 00061D30  4B FF A6 35 */	bl J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f
.L_80064DF4:
/* 80064DF4 00061D34  3C 80 80 4A */	lis r4, qMtx$1682@ha
/* 80064DF8 00061D38  38 61 00 48 */	addi r3, r1, 0x48
/* 80064DFC 00061D3C  38 84 18 10 */	addi r4, r4, qMtx$1682@l
/* 80064E00 00061D40  7C 65 1B 78 */	mr r5, r3
/* 80064E04 00061D44  48 08 54 FD */	bl PSMTXConcat
/* 80064E08 00061D48  7F E4 FB 78 */	mr r4, r31
/* 80064E0C 00061D4C  38 61 00 48 */	addi r3, r1, 0x48
/* 80064E10 00061D50  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064E14 00061D54  48 08 54 ED */	bl PSMTXConcat
/* 80064E18 00061D58  48 00 01 D0 */	b .L_80064FE8
.L_80064E1C:
/* 80064E1C 00061D5C  28 04 00 00 */	cmplwi r4, 0
/* 80064E20 00061D60  40 82 00 18 */	bne .L_80064E38
/* 80064E24 00061D64  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064E28 00061D68  38 9E 00 04 */	addi r4, r30, 4
/* 80064E2C 00061D6C  38 A1 00 08 */	addi r5, r1, 8
/* 80064E30 00061D70  4B FF A5 49 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064E34 00061D74  48 00 00 18 */	b .L_80064E4C
.L_80064E38:
/* 80064E38 00061D78  28 04 00 01 */	cmplwi r4, 1
/* 80064E3C 00061D7C  40 82 00 10 */	bne .L_80064E4C
/* 80064E40 00061D80  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064E44 00061D84  38 81 00 08 */	addi r4, r1, 8
/* 80064E48 00061D88  4B FF A6 85 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064E4C:
/* 80064E4C 00061D8C  3C 80 80 4A */	lis r4, qMtx2$1683@ha
/* 80064E50 00061D90  38 61 00 08 */	addi r3, r1, 8
/* 80064E54 00061D94  38 84 18 40 */	addi r4, r4, qMtx2$1683@l
/* 80064E58 00061D98  7C 65 1B 78 */	mr r5, r3
/* 80064E5C 00061D9C  48 08 54 A5 */	bl PSMTXConcat
/* 80064E60 00061DA0  38 61 00 08 */	addi r3, r1, 8
/* 80064E64 00061DA4  38 9E 00 24 */	addi r4, r30, 0x24
/* 80064E68 00061DA8  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064E6C 00061DAC  4B FF A7 C1 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80064E70 00061DB0  7F E4 FB 78 */	mr r4, r31
/* 80064E74 00061DB4  38 61 00 48 */	addi r3, r1, 0x48
/* 80064E78 00061DB8  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064E7C 00061DBC  48 08 54 85 */	bl PSMTXConcat
/* 80064E80 00061DC0  48 00 01 68 */	b .L_80064FE8
.L_80064E84:
/* 80064E84 00061DC4  28 04 00 00 */	cmplwi r4, 0
/* 80064E88 00061DC8  40 82 00 18 */	bne .L_80064EA0
/* 80064E8C 00061DCC  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064E90 00061DD0  38 9E 00 04 */	addi r4, r30, 4
/* 80064E94 00061DD4  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064E98 00061DD8  4B FF A4 E1 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064E9C 00061DDC  48 00 00 18 */	b .L_80064EB4
.L_80064EA0:
/* 80064EA0 00061DE0  28 04 00 01 */	cmplwi r4, 1
/* 80064EA4 00061DE4  40 82 00 10 */	bne .L_80064EB4
/* 80064EA8 00061DE8  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064EAC 00061DEC  38 81 00 48 */	addi r4, r1, 0x48
/* 80064EB0 00061DF0  4B FF A6 1D */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064EB4:
/* 80064EB4 00061DF4  3C 80 80 4A */	lis r4, qMtx2$1683@ha
/* 80064EB8 00061DF8  38 61 00 48 */	addi r3, r1, 0x48
/* 80064EBC 00061DFC  38 84 18 40 */	addi r4, r4, qMtx2$1683@l
/* 80064EC0 00061E00  7C 65 1B 78 */	mr r5, r3
/* 80064EC4 00061E04  48 08 54 3D */	bl PSMTXConcat
/* 80064EC8 00061E08  7F E4 FB 78 */	mr r4, r31
/* 80064ECC 00061E0C  38 61 00 48 */	addi r3, r1, 0x48
/* 80064ED0 00061E10  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064ED4 00061E14  48 08 54 2D */	bl PSMTXConcat
/* 80064ED8 00061E18  48 00 01 10 */	b .L_80064FE8
.L_80064EDC:
/* 80064EDC 00061E1C  28 04 00 00 */	cmplwi r4, 0
/* 80064EE0 00061E20  40 82 00 18 */	bne .L_80064EF8
/* 80064EE4 00061E24  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064EE8 00061E28  38 9E 00 04 */	addi r4, r30, 4
/* 80064EEC 00061E2C  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064EF0 00061E30  4B FF A4 89 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064EF4 00061E34  48 00 00 18 */	b .L_80064F0C
.L_80064EF8:
/* 80064EF8 00061E38  28 04 00 01 */	cmplwi r4, 1
/* 80064EFC 00061E3C  40 82 00 10 */	bne .L_80064F0C
/* 80064F00 00061E40  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064F04 00061E44  38 81 00 48 */	addi r4, r1, 0x48
/* 80064F08 00061E48  4B FF A5 C5 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064F0C:
/* 80064F0C 00061E4C  7F E4 FB 78 */	mr r4, r31
/* 80064F10 00061E50  38 61 00 48 */	addi r3, r1, 0x48
/* 80064F14 00061E54  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064F18 00061E58  48 08 53 E9 */	bl PSMTXConcat
/* 80064F1C 00061E5C  48 00 00 CC */	b .L_80064FE8
.L_80064F20:
/* 80064F20 00061E60  28 04 00 00 */	cmplwi r4, 0
/* 80064F24 00061E64  40 82 00 18 */	bne .L_80064F3C
/* 80064F28 00061E68  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064F2C 00061E6C  38 9E 00 04 */	addi r4, r30, 4
/* 80064F30 00061E70  38 A1 00 08 */	addi r5, r1, 8
/* 80064F34 00061E74  4B FF A4 45 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064F38 00061E78  48 00 00 18 */	b .L_80064F50
.L_80064F3C:
/* 80064F3C 00061E7C  28 04 00 01 */	cmplwi r4, 1
/* 80064F40 00061E80  40 82 00 10 */	bne .L_80064F50
/* 80064F44 00061E84  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064F48 00061E88  38 81 00 08 */	addi r4, r1, 8
/* 80064F4C 00061E8C  4B FF A5 81 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064F50:
/* 80064F50 00061E90  38 61 00 08 */	addi r3, r1, 8
/* 80064F54 00061E94  38 9E 00 24 */	addi r4, r30, 0x24
/* 80064F58 00061E98  38 A1 00 48 */	addi r5, r1, 0x48
/* 80064F5C 00061E9C  4B FF A6 D1 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80064F60 00061EA0  7F E4 FB 78 */	mr r4, r31
/* 80064F64 00061EA4  38 61 00 48 */	addi r3, r1, 0x48
/* 80064F68 00061EA8  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064F6C 00061EAC  48 08 53 95 */	bl PSMTXConcat
/* 80064F70 00061EB0  48 00 00 78 */	b .L_80064FE8
.L_80064F74:
/* 80064F74 00061EB4  28 04 00 00 */	cmplwi r4, 0
/* 80064F78 00061EB8  40 82 00 18 */	bne .L_80064F90
/* 80064F7C 00061EBC  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064F80 00061EC0  38 9E 00 04 */	addi r4, r30, 4
/* 80064F84 00061EC4  38 A1 00 08 */	addi r5, r1, 8
/* 80064F88 00061EC8  4B FF A3 F1 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064F8C 00061ECC  48 00 00 18 */	b .L_80064FA4
.L_80064F90:
/* 80064F90 00061ED0  28 04 00 01 */	cmplwi r4, 1
/* 80064F94 00061ED4  40 82 00 10 */	bne .L_80064FA4
/* 80064F98 00061ED8  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064F9C 00061EDC  38 81 00 08 */	addi r4, r1, 8
/* 80064FA0 00061EE0  4B FF A5 2D */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064FA4:
/* 80064FA4 00061EE4  38 61 00 08 */	addi r3, r1, 8
/* 80064FA8 00061EE8  38 9E 00 24 */	addi r4, r30, 0x24
/* 80064FAC 00061EEC  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064FB0 00061EF0  4B FF A6 7D */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80064FB4 00061EF4  48 00 00 34 */	b .L_80064FE8
.L_80064FB8:
/* 80064FB8 00061EF8  28 04 00 00 */	cmplwi r4, 0
/* 80064FBC 00061EFC  40 82 00 18 */	bne .L_80064FD4
/* 80064FC0 00061F00  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064FC4 00061F04  38 9E 00 04 */	addi r4, r30, 4
/* 80064FC8 00061F08  38 BE 00 64 */	addi r5, r30, 0x64
/* 80064FCC 00061F0C  4B FF A3 AD */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80064FD0 00061F10  48 00 00 18 */	b .L_80064FE8
.L_80064FD4:
/* 80064FD4 00061F14  28 04 00 01 */	cmplwi r4, 1
/* 80064FD8 00061F18  40 82 00 10 */	bne .L_80064FE8
/* 80064FDC 00061F1C  38 7E 00 10 */	addi r3, r30, 0x10
/* 80064FE0 00061F20  38 9E 00 64 */	addi r4, r30, 0x64
/* 80064FE4 00061F24  4B FF A4 E9 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80064FE8:
/* 80064FE8 00061F28  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80064FEC 00061F2C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80064FF0 00061F30  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 80064FF4 00061F34  7C 08 03 A6 */	mtlr r0
/* 80064FF8 00061F38  38 21 00 90 */	addi r1, r1, 0x90
/* 80064FFC 00061F3C  4E 80 00 20 */	blr 
.endfn calcTexMtx__9J3DTexMtxFPA4_Cf

.fn calcPostTexMtx__9J3DTexMtxFPA4_Cf, global
/* 80065000 00061F40  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80065004 00061F44  7C 08 02 A6 */	mflr r0
/* 80065008 00061F48  90 01 00 94 */	stw r0, 0x94(r1)
/* 8006500C 00061F4C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80065010 00061F50  7C 7F 1B 78 */	mr r31, r3
/* 80065014 00061F54  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80065018 00061F58  7C 9E 23 78 */	mr r30, r4
/* 8006501C 00061F5C  88 63 00 01 */	lbz r3, 1(r3)
/* 80065020 00061F60  54 60 06 BE */	clrlwi r0, r3, 0x1a
/* 80065024 00061F64  54 64 CF FE */	rlwinm r4, r3, 0x19, 0x1f, 0x1f
/* 80065028 00061F68  28 00 00 0B */	cmplwi r0, 0xb
/* 8006502C 00061F6C  41 81 02 E4 */	bgt .L_80065310
/* 80065030 00061F70  3C 60 80 4A */	lis r3, lbl_804A1900@ha
/* 80065034 00061F74  54 00 10 3A */	slwi r0, r0, 2
/* 80065038 00061F78  38 63 19 00 */	addi r3, r3, lbl_804A1900@l
/* 8006503C 00061F7C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80065040 00061F80  7C 09 03 A6 */	mtctr r0
/* 80065044 00061F84  4E 80 04 20 */	bctr 
.L_80065048:
/* 80065048 00061F88  28 04 00 00 */	cmplwi r4, 0
/* 8006504C 00061F8C  40 82 00 18 */	bne .L_80065064
/* 80065050 00061F90  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065054 00061F94  38 9F 00 04 */	addi r4, r31, 4
/* 80065058 00061F98  38 A1 00 08 */	addi r5, r1, 8
/* 8006505C 00061F9C  4B FF A2 71 */	bl J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80065060 00061FA0  48 00 00 18 */	b .L_80065078
.L_80065064:
/* 80065064 00061FA4  28 04 00 01 */	cmplwi r4, 1
/* 80065068 00061FA8  40 82 00 10 */	bne .L_80065078
/* 8006506C 00061FAC  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065070 00061FB0  38 81 00 08 */	addi r4, r1, 8
/* 80065074 00061FB4  4B FF A3 B1 */	bl J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f
.L_80065078:
/* 80065078 00061FB8  3C 80 80 4A */	lis r4, qMtx$1744@ha
/* 8006507C 00061FBC  38 61 00 08 */	addi r3, r1, 8
/* 80065080 00061FC0  38 84 18 A0 */	addi r4, r4, qMtx$1744@l
/* 80065084 00061FC4  7C 65 1B 78 */	mr r5, r3
/* 80065088 00061FC8  48 08 52 79 */	bl PSMTXConcat
/* 8006508C 00061FCC  38 61 00 08 */	addi r3, r1, 8
/* 80065090 00061FD0  38 9F 00 24 */	addi r4, r31, 0x24
/* 80065094 00061FD4  38 A1 00 48 */	addi r5, r1, 0x48
/* 80065098 00061FD8  4B FF A5 95 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 8006509C 00061FDC  7F C4 F3 78 */	mr r4, r30
/* 800650A0 00061FE0  38 61 00 48 */	addi r3, r1, 0x48
/* 800650A4 00061FE4  38 BF 00 64 */	addi r5, r31, 0x64
/* 800650A8 00061FE8  48 08 52 59 */	bl PSMTXConcat
/* 800650AC 00061FEC  48 00 02 94 */	b .L_80065340
.L_800650B0:
/* 800650B0 00061FF0  28 04 00 00 */	cmplwi r4, 0
/* 800650B4 00061FF4  40 82 00 18 */	bne .L_800650CC
/* 800650B8 00061FF8  38 7F 00 10 */	addi r3, r31, 0x10
/* 800650BC 00061FFC  38 9F 00 04 */	addi r4, r31, 4
/* 800650C0 00062000  38 A1 00 08 */	addi r5, r1, 8
/* 800650C4 00062004  4B FF A2 09 */	bl J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 800650C8 00062008  48 00 00 18 */	b .L_800650E0
.L_800650CC:
/* 800650CC 0006200C  28 04 00 01 */	cmplwi r4, 1
/* 800650D0 00062010  40 82 00 10 */	bne .L_800650E0
/* 800650D4 00062014  38 7F 00 10 */	addi r3, r31, 0x10
/* 800650D8 00062018  38 81 00 08 */	addi r4, r1, 8
/* 800650DC 0006201C  4B FF A3 49 */	bl J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f
.L_800650E0:
/* 800650E0 00062020  3C 80 80 4A */	lis r4, qMtx$1744@ha
/* 800650E4 00062024  38 61 00 08 */	addi r3, r1, 8
/* 800650E8 00062028  38 84 18 A0 */	addi r4, r4, qMtx$1744@l
/* 800650EC 0006202C  7C 65 1B 78 */	mr r5, r3
/* 800650F0 00062030  48 08 52 11 */	bl PSMTXConcat
/* 800650F4 00062034  38 61 00 08 */	addi r3, r1, 8
/* 800650F8 00062038  38 9F 00 24 */	addi r4, r31, 0x24
/* 800650FC 0006203C  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065100 00062040  4B FF A5 2D */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80065104 00062044  48 00 02 3C */	b .L_80065340
.L_80065108:
/* 80065108 00062048  28 04 00 00 */	cmplwi r4, 0
/* 8006510C 0006204C  40 82 00 18 */	bne .L_80065124
/* 80065110 00062050  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065114 00062054  38 9F 00 04 */	addi r4, r31, 4
/* 80065118 00062058  38 A1 00 48 */	addi r5, r1, 0x48
/* 8006511C 0006205C  4B FF A1 B1 */	bl J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80065120 00062060  48 00 00 18 */	b .L_80065138
.L_80065124:
/* 80065124 00062064  28 04 00 01 */	cmplwi r4, 1
/* 80065128 00062068  40 82 00 10 */	bne .L_80065138
/* 8006512C 0006206C  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065130 00062070  38 81 00 48 */	addi r4, r1, 0x48
/* 80065134 00062074  4B FF A2 F1 */	bl J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f
.L_80065138:
/* 80065138 00062078  3C 80 80 4A */	lis r4, qMtx$1744@ha
/* 8006513C 0006207C  38 61 00 48 */	addi r3, r1, 0x48
/* 80065140 00062080  38 84 18 A0 */	addi r4, r4, qMtx$1744@l
/* 80065144 00062084  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065148 00062088  48 08 51 B9 */	bl PSMTXConcat
/* 8006514C 0006208C  48 00 01 F4 */	b .L_80065340
.L_80065150:
/* 80065150 00062090  28 04 00 00 */	cmplwi r4, 0
/* 80065154 00062094  40 82 00 18 */	bne .L_8006516C
/* 80065158 00062098  38 7F 00 10 */	addi r3, r31, 0x10
/* 8006515C 0006209C  38 9F 00 04 */	addi r4, r31, 4
/* 80065160 000620A0  38 A1 00 08 */	addi r5, r1, 8
/* 80065164 000620A4  4B FF A2 15 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80065168 000620A8  48 00 00 18 */	b .L_80065180
.L_8006516C:
/* 8006516C 000620AC  28 04 00 01 */	cmplwi r4, 1
/* 80065170 000620B0  40 82 00 10 */	bne .L_80065180
/* 80065174 000620B4  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065178 000620B8  38 81 00 08 */	addi r4, r1, 8
/* 8006517C 000620BC  4B FF A3 51 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80065180:
/* 80065180 000620C0  3C 80 80 4A */	lis r4, qMtx2$1745@ha
/* 80065184 000620C4  38 61 00 08 */	addi r3, r1, 8
/* 80065188 000620C8  38 84 18 D0 */	addi r4, r4, qMtx2$1745@l
/* 8006518C 000620CC  7C 65 1B 78 */	mr r5, r3
/* 80065190 000620D0  48 08 51 71 */	bl PSMTXConcat
/* 80065194 000620D4  38 61 00 08 */	addi r3, r1, 8
/* 80065198 000620D8  38 9F 00 24 */	addi r4, r31, 0x24
/* 8006519C 000620DC  38 A1 00 48 */	addi r5, r1, 0x48
/* 800651A0 000620E0  4B FF A4 8D */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 800651A4 000620E4  7F C4 F3 78 */	mr r4, r30
/* 800651A8 000620E8  38 61 00 48 */	addi r3, r1, 0x48
/* 800651AC 000620EC  38 BF 00 64 */	addi r5, r31, 0x64
/* 800651B0 000620F0  48 08 51 51 */	bl PSMTXConcat
/* 800651B4 000620F4  48 00 01 8C */	b .L_80065340
.L_800651B8:
/* 800651B8 000620F8  28 04 00 00 */	cmplwi r4, 0
/* 800651BC 000620FC  40 82 00 18 */	bne .L_800651D4
/* 800651C0 00062100  38 7F 00 10 */	addi r3, r31, 0x10
/* 800651C4 00062104  38 9F 00 04 */	addi r4, r31, 4
/* 800651C8 00062108  38 A1 00 48 */	addi r5, r1, 0x48
/* 800651CC 0006210C  4B FF A1 AD */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 800651D0 00062110  48 00 00 18 */	b .L_800651E8
.L_800651D4:
/* 800651D4 00062114  28 04 00 01 */	cmplwi r4, 1
/* 800651D8 00062118  40 82 00 10 */	bne .L_800651E8
/* 800651DC 0006211C  38 7F 00 10 */	addi r3, r31, 0x10
/* 800651E0 00062120  38 81 00 48 */	addi r4, r1, 0x48
/* 800651E4 00062124  4B FF A2 E9 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_800651E8:
/* 800651E8 00062128  3C 80 80 4A */	lis r4, qMtx2$1745@ha
/* 800651EC 0006212C  38 61 00 48 */	addi r3, r1, 0x48
/* 800651F0 00062130  38 84 18 D0 */	addi r4, r4, qMtx2$1745@l
/* 800651F4 00062134  38 BF 00 64 */	addi r5, r31, 0x64
/* 800651F8 00062138  48 08 51 09 */	bl PSMTXConcat
/* 800651FC 0006213C  48 00 01 44 */	b .L_80065340
.L_80065200:
/* 80065200 00062140  28 04 00 00 */	cmplwi r4, 0
/* 80065204 00062144  40 82 00 18 */	bne .L_8006521C
/* 80065208 00062148  38 7F 00 10 */	addi r3, r31, 0x10
/* 8006520C 0006214C  38 9F 00 04 */	addi r4, r31, 4
/* 80065210 00062150  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065214 00062154  4B FF A1 65 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80065218 00062158  48 00 01 28 */	b .L_80065340
.L_8006521C:
/* 8006521C 0006215C  28 04 00 01 */	cmplwi r4, 1
/* 80065220 00062160  40 82 01 20 */	bne .L_80065340
/* 80065224 00062164  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065228 00062168  38 9F 00 64 */	addi r4, r31, 0x64
/* 8006522C 0006216C  4B FF A2 A1 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
/* 80065230 00062170  48 00 01 10 */	b .L_80065340
.L_80065234:
/* 80065234 00062174  28 04 00 00 */	cmplwi r4, 0
/* 80065238 00062178  40 82 00 18 */	bne .L_80065250
/* 8006523C 0006217C  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065240 00062180  38 9F 00 04 */	addi r4, r31, 4
/* 80065244 00062184  38 A1 00 08 */	addi r5, r1, 8
/* 80065248 00062188  4B FF A1 31 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 8006524C 0006218C  48 00 00 18 */	b .L_80065264
.L_80065250:
/* 80065250 00062190  28 04 00 01 */	cmplwi r4, 1
/* 80065254 00062194  40 82 00 10 */	bne .L_80065264
/* 80065258 00062198  38 7F 00 10 */	addi r3, r31, 0x10
/* 8006525C 0006219C  38 81 00 08 */	addi r4, r1, 8
/* 80065260 000621A0  4B FF A2 6D */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80065264:
/* 80065264 000621A4  38 61 00 08 */	addi r3, r1, 8
/* 80065268 000621A8  38 9F 00 24 */	addi r4, r31, 0x24
/* 8006526C 000621AC  38 A1 00 48 */	addi r5, r1, 0x48
/* 80065270 000621B0  4B FF A3 BD */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 80065274 000621B4  7F C4 F3 78 */	mr r4, r30
/* 80065278 000621B8  38 61 00 48 */	addi r3, r1, 0x48
/* 8006527C 000621BC  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065280 000621C0  48 08 50 81 */	bl PSMTXConcat
/* 80065284 000621C4  48 00 00 BC */	b .L_80065340
.L_80065288:
/* 80065288 000621C8  28 04 00 00 */	cmplwi r4, 0
/* 8006528C 000621CC  40 82 00 18 */	bne .L_800652A4
/* 80065290 000621D0  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065294 000621D4  38 9F 00 04 */	addi r4, r31, 4
/* 80065298 000621D8  38 A1 00 08 */	addi r5, r1, 8
/* 8006529C 000621DC  4B FF A0 DD */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 800652A0 000621E0  48 00 00 18 */	b .L_800652B8
.L_800652A4:
/* 800652A4 000621E4  28 04 00 01 */	cmplwi r4, 1
/* 800652A8 000621E8  40 82 00 10 */	bne .L_800652B8
/* 800652AC 000621EC  38 7F 00 10 */	addi r3, r31, 0x10
/* 800652B0 000621F0  38 81 00 08 */	addi r4, r1, 8
/* 800652B4 000621F4  4B FF A2 19 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_800652B8:
/* 800652B8 000621F8  38 61 00 08 */	addi r3, r1, 8
/* 800652BC 000621FC  38 9F 00 24 */	addi r4, r31, 0x24
/* 800652C0 00062200  38 BF 00 64 */	addi r5, r31, 0x64
/* 800652C4 00062204  4B FF A3 69 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 800652C8 00062208  48 00 00 78 */	b .L_80065340
.L_800652CC:
/* 800652CC 0006220C  28 04 00 00 */	cmplwi r4, 0
/* 800652D0 00062210  40 82 00 18 */	bne .L_800652E8
/* 800652D4 00062214  38 7F 00 10 */	addi r3, r31, 0x10
/* 800652D8 00062218  38 9F 00 04 */	addi r4, r31, 4
/* 800652DC 0006221C  38 A1 00 08 */	addi r5, r1, 8
/* 800652E0 00062220  4B FF A0 99 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 800652E4 00062224  48 00 00 18 */	b .L_800652FC
.L_800652E8:
/* 800652E8 00062228  28 04 00 01 */	cmplwi r4, 1
/* 800652EC 0006222C  40 82 00 10 */	bne .L_800652FC
/* 800652F0 00062230  38 7F 00 10 */	addi r3, r31, 0x10
/* 800652F4 00062234  38 81 00 08 */	addi r4, r1, 8
/* 800652F8 00062238  4B FF A1 D5 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_800652FC:
/* 800652FC 0006223C  38 61 00 08 */	addi r3, r1, 8
/* 80065300 00062240  38 9F 00 24 */	addi r4, r31, 0x24
/* 80065304 00062244  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065308 00062248  4B FF A3 25 */	bl J3DMtxProjConcat__FPA4_fPA4_fPA4_f
/* 8006530C 0006224C  48 00 00 34 */	b .L_80065340
.L_80065310:
/* 80065310 00062250  28 04 00 00 */	cmplwi r4, 0
/* 80065314 00062254  40 82 00 18 */	bne .L_8006532C
/* 80065318 00062258  38 7F 00 10 */	addi r3, r31, 0x10
/* 8006531C 0006225C  38 9F 00 04 */	addi r4, r31, 4
/* 80065320 00062260  38 BF 00 64 */	addi r5, r31, 0x64
/* 80065324 00062264  4B FF A0 55 */	bl J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
/* 80065328 00062268  48 00 00 18 */	b .L_80065340
.L_8006532C:
/* 8006532C 0006226C  28 04 00 01 */	cmplwi r4, 1
/* 80065330 00062270  40 82 00 10 */	bne .L_80065340
/* 80065334 00062274  38 7F 00 10 */	addi r3, r31, 0x10
/* 80065338 00062278  38 9F 00 64 */	addi r4, r31, 0x64
/* 8006533C 0006227C  4B FF A1 91 */	bl J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
.L_80065340:
/* 80065340 00062280  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80065344 00062284  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80065348 00062288  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8006534C 0006228C  7C 08 03 A6 */	mtlr r0
/* 80065350 00062290  38 21 00 90 */	addi r1, r1, 0x90
/* 80065354 00062294  4E 80 00 20 */	blr 
.endfn calcPostTexMtx__9J3DTexMtxFPA4_Cf

.fn isTexNoReg__FPv, global
/* 80065358 00062298  88 03 00 01 */	lbz r0, 1(r3)
/* 8006535C 0006229C  28 00 00 80 */	cmplwi r0, 0x80
/* 80065360 000622A0  41 80 00 14 */	blt .L_80065374
/* 80065364 000622A4  28 00 00 BB */	cmplwi r0, 0xbb
/* 80065368 000622A8  41 81 00 0C */	bgt .L_80065374
/* 8006536C 000622AC  38 60 00 01 */	li r3, 1
/* 80065370 000622B0  4E 80 00 20 */	blr 
.L_80065374:
/* 80065374 000622B4  38 60 00 00 */	li r3, 0
/* 80065378 000622B8  4E 80 00 20 */	blr 
.endfn isTexNoReg__FPv

.fn getTexNoReg__FPv, global
/* 8006537C 000622BC  80 03 00 01 */	lwz r0, 1(r3)
/* 80065380 000622C0  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 80065384 000622C4  4E 80 00 20 */	blr 
.endfn getTexNoReg__FPv

.fn loadTexNo__FUlRCUs, global
/* 80065388 000622C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8006538C 000622CC  7C 08 02 A6 */	mflr r0
/* 80065390 000622D0  3C A0 80 51 */	lis r5, j3dSys@ha
/* 80065394 000622D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80065398 000622D8  A0 04 00 00 */	lhz r0, 0(r4)
/* 8006539C 000622DC  38 85 F2 30 */	addi r4, r5, j3dSys@l
/* 800653A0 000622E0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800653A4 000622E4  54 00 28 34 */	slwi r0, r0, 5
/* 800653A8 000622E8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800653AC 000622EC  7C 7E 1B 78 */	mr r30, r3
/* 800653B0 000622F0  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 800653B4 000622F4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800653B8 000622F8  57 C6 18 38 */	slwi r6, r30, 3
/* 800653BC 000622FC  93 81 00 20 */	stw r28, 0x20(r1)
/* 800653C0 00062300  80 84 00 58 */	lwz r4, 0x58(r4)
/* 800653C4 00062304  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800653C8 00062308  80 A4 00 04 */	lwz r5, 4(r4)
/* 800653CC 0006230C  38 83 F4 1C */	addi r4, r3, sTexCoordScaleTable__6J3DSys@l
/* 800653D0 00062310  7C 64 32 14 */	add r3, r4, r6
/* 800653D4 00062314  7F E5 02 14 */	add r31, r5, r0
/* 800653D8 00062318  A0 1F 00 02 */	lhz r0, 2(r31)
/* 800653DC 0006231C  7C 04 33 2E */	sthx r0, r4, r6
/* 800653E0 00062320  A0 1F 00 04 */	lhz r0, 4(r31)
/* 800653E4 00062324  B0 03 00 02 */	sth r0, 2(r3)
/* 800653E8 00062328  80 67 00 08 */	lwz r3, 8(r7)
/* 800653EC 0006232C  80 07 00 0C */	lwz r0, 0xc(r7)
/* 800653F0 00062330  38 63 00 14 */	addi r3, r3, 0x14
/* 800653F4 00062334  7C 03 00 40 */	cmplw r3, r0
/* 800653F8 00062338  40 81 00 08 */	ble .L_80065400
/* 800653FC 0006233C  48 07 C8 45 */	bl GDOverflowed
.L_80065400:
/* 80065400 00062340  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80065404 00062344  7F C3 F3 78 */	mr r3, r30
/* 80065408 00062348  7C 9F 02 14 */	add r4, r31, r0
/* 8006540C 0006234C  48 01 06 69 */	bl J3DGDSetTexImgPtr__F11_GXTexMapIDPv
/* 80065410 00062350  88 1F 00 00 */	lbz r0, 0(r31)
/* 80065414 00062354  7F C3 F3 78 */	mr r3, r30
/* 80065418 00062358  A0 9F 00 02 */	lhz r4, 2(r31)
/* 8006541C 0006235C  A0 BF 00 04 */	lhz r5, 4(r31)
/* 80065420 00062360  54 06 07 3E */	clrlwi r6, r0, 0x1c
/* 80065424 00062364  48 01 05 A9 */	bl J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt
/* 80065428 00062368  88 DF 00 16 */	lbz r6, 0x16(r31)
/* 8006542C 0006236C  3C A0 43 30 */	lis r5, 0x4330
/* 80065430 00062370  88 9F 00 17 */	lbz r4, 0x17(r31)
/* 80065434 00062374  7F C3 F3 78 */	mr r3, r30
/* 80065438 00062378  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 8006543C 0006237C  7C C6 07 74 */	extsb r6, r6
/* 80065440 00062380  7C 84 07 74 */	extsb r4, r4
/* 80065444 00062384  90 A1 00 08 */	stw r5, 8(r1)
/* 80065448 00062388  6C C6 80 00 */	xoris r6, r6, 0x8000
/* 8006544C 0006238C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80065450 00062390  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80065454 00062394  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80065458 00062398  C8 82 86 58 */	lfd f4, lbl_805169B8@sda21(r2)
/* 8006545C 0006239C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80065460 000623A0  90 81 00 14 */	stw r4, 0x14(r1)
/* 80065464 000623A4  EC 20 20 28 */	fsubs f1, f0, f4
/* 80065468 000623A8  C0 A2 86 50 */	lfs f5, lbl_805169B0@sda21(r2)
/* 8006546C 000623AC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80065470 000623B0  C0 62 86 54 */	lfs f3, lbl_805169B4@sda21(r2)
/* 80065474 000623B4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80065478 000623B8  EC 25 00 72 */	fmuls f1, f5, f1
/* 8006547C 000623BC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80065480 000623C0  EC 40 20 28 */	fsubs f2, f0, f4
/* 80065484 000623C4  88 9F 00 06 */	lbz r4, 6(r31)
/* 80065488 000623C8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8006548C 000623CC  88 BF 00 07 */	lbz r5, 7(r31)
/* 80065490 000623D0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80065494 000623D4  EC 45 00 B2 */	fmuls f2, f5, f2
/* 80065498 000623D8  88 DF 00 14 */	lbz r6, 0x14(r31)
/* 8006549C 000623DC  EC 00 20 28 */	fsubs f0, f0, f4
/* 800654A0 000623E0  88 FF 00 15 */	lbz r7, 0x15(r31)
/* 800654A4 000623E4  89 1F 00 12 */	lbz r8, 0x12(r31)
/* 800654A8 000623E8  89 3F 00 11 */	lbz r9, 0x11(r31)
/* 800654AC 000623EC  EC 63 00 32 */	fmuls f3, f3, f0
/* 800654B0 000623F0  89 5F 00 13 */	lbz r10, 0x13(r31)
/* 800654B4 000623F4  48 01 03 6D */	bl J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy
/* 800654B8 000623F8  88 1F 00 08 */	lbz r0, 8(r31)
/* 800654BC 000623FC  28 00 00 01 */	cmplwi r0, 1
/* 800654C0 00062400  40 82 00 60 */	bne .L_80065520
/* 800654C4 00062404  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 800654C8 00062408  3B A0 00 01 */	li r29, 1
/* 800654CC 0006240C  28 00 00 10 */	cmplwi r0, 0x10
/* 800654D0 00062410  40 81 00 08 */	ble .L_800654D8
/* 800654D4 00062414  3B A0 00 10 */	li r29, 0x10
.L_800654D8:
/* 800654D8 00062418  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800654DC 0006241C  80 64 00 08 */	lwz r3, 8(r4)
/* 800654E0 00062420  80 04 00 0C */	lwz r0, 0xc(r4)
/* 800654E4 00062424  38 63 00 14 */	addi r3, r3, 0x14
/* 800654E8 00062428  7C 03 00 40 */	cmplw r3, r0
/* 800654EC 0006242C  40 81 00 08 */	ble .L_800654F4
/* 800654F0 00062430  48 07 C7 51 */	bl GDOverflowed
.L_800654F4:
/* 800654F4 00062434  57 C3 68 24 */	slwi r3, r30, 0xd
/* 800654F8 00062438  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 800654FC 0006243C  3F 83 00 0F */	addis r28, r3, 0xf
/* 80065500 00062440  7F A5 EB 78 */	mr r5, r29
/* 80065504 00062444  7F 84 E3 78 */	mr r4, r28
/* 80065508 00062448  7C 7F 02 14 */	add r3, r31, r0
/* 8006550C 0006244C  48 01 07 65 */	bl J3DGDLoadTlut__FPvUl11_GXTlutSize
/* 80065510 00062450  88 BF 00 09 */	lbz r5, 9(r31)
/* 80065514 00062454  7F C3 F3 78 */	mr r3, r30
/* 80065518 00062458  7F 84 E3 78 */	mr r4, r28
/* 8006551C 0006245C  48 01 06 BD */	bl J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt
.L_80065520:
/* 80065520 00062460  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80065524 00062464  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80065528 00062468  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8006552C 0006246C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80065530 00062470  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80065534 00062474  7C 08 03 A6 */	mtlr r0
/* 80065538 00062478  38 21 00 30 */	addi r1, r1, 0x30
/* 8006553C 0006247C  4E 80 00 20 */	blr 
.endfn loadTexNo__FUlRCUs

.fn patchTexNo_PtrToIdx__FUlRCUs, global
/* 80065540 00062480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80065544 00062484  7C 08 02 A6 */	mflr r0
/* 80065548 00062488  A0 84 00 00 */	lhz r4, 0(r4)
/* 8006554C 0006248C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80065550 00062490  48 01 05 B5 */	bl J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl
/* 80065554 00062494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80065558 00062498  7C 08 03 A6 */	mtlr r0
/* 8006555C 0006249C  38 21 00 10 */	addi r1, r1, 0x10
/* 80065560 000624A0  4E 80 00 20 */	blr 
.endfn patchTexNo_PtrToIdx__FUlRCUs

.fn loadNBTScale__FR11J3DNBTScale, global
/* 80065564 000624A4  88 03 00 00 */	lbz r0, 0(r3)
/* 80065568 000624A8  28 00 00 01 */	cmplwi r0, 1
/* 8006556C 000624AC  40 82 00 18 */	bne .L_80065584
/* 80065570 000624B0  3C 80 80 51 */	lis r4, j3dSys@ha
/* 80065574 000624B4  38 03 00 04 */	addi r0, r3, 4
/* 80065578 000624B8  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 8006557C 000624BC  90 03 01 18 */	stw r0, 0x118(r3)
/* 80065580 000624C0  4E 80 00 20 */	blr 
.L_80065584:
/* 80065584 000624C4  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80065588 000624C8  38 00 00 00 */	li r0, 0
/* 8006558C 000624CC  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80065590 000624D0  90 03 01 18 */	stw r0, 0x118(r3)
/* 80065594 000624D4  4E 80 00 20 */	blr 
.endfn loadNBTScale__FR11J3DNBTScale

.fn makeTexCoordTable__Fv, global
/* 80065598 000624D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8006559C 000624DC  3C 60 80 48 */	lis r3, lbl_804789A4@ha
/* 800655A0 000624E0  39 03 89 A4 */	addi r8, r3, lbl_804789A4@l
/* 800655A4 000624E4  3C 80 80 51 */	lis r4, j3dTexCoordTable@ha
/* 800655A8 000624E8  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 800655AC 000624EC  3B A4 F4 6C */	addi r29, r4, j3dTexCoordTable@l
/* 800655B0 000624F0  38 60 00 00 */	li r3, 0
/* 800655B4 000624F4  38 E0 00 00 */	li r7, 0
/* 800655B8 000624F8  80 C8 00 00 */	lwz r6, 0(r8)
/* 800655BC 000624FC  80 A8 00 04 */	lwz r5, 4(r8)
/* 800655C0 00062500  A0 88 00 08 */	lhz r4, 8(r8)
/* 800655C4 00062504  88 08 00 0A */	lbz r0, 0xa(r8)
/* 800655C8 00062508  90 C1 00 08 */	stw r6, 8(r1)
/* 800655CC 0006250C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 800655D0 00062510  B0 81 00 10 */	sth r4, 0x10(r1)
/* 800655D4 00062514  98 01 00 12 */	stb r0, 0x12(r1)
.L_800655D8:
/* 800655D8 00062518  38 80 00 00 */	li r4, 0
/* 800655DC 0006251C  3B 60 00 00 */	li r27, 0
.L_800655E0:
/* 800655E0 00062520  38 C0 00 02 */	li r6, 2
/* 800655E4 00062524  3B 81 00 08 */	addi r28, r1, 8
/* 800655E8 00062528  7C 1B 3A 14 */	add r0, r27, r7
/* 800655EC 0006252C  38 A0 00 00 */	li r5, 0
/* 800655F0 00062530  7C C9 03 A6 */	mtctr r6
.L_800655F4:
/* 800655F4 00062534  7F 05 02 14 */	add r24, r5, r0
/* 800655F8 00062538  8B DC 00 00 */	lbz r30, 0(r28)
/* 800655FC 0006253C  1C D8 00 03 */	mulli r6, r24, 3
/* 80065600 00062540  8B FC 00 01 */	lbz r31, 1(r28)
/* 80065604 00062544  39 18 00 01 */	addi r8, r24, 1
/* 80065608 00062548  89 7C 00 02 */	lbz r11, 2(r28)
/* 8006560C 0006254C  39 98 00 02 */	addi r12, r24, 2
/* 80065610 00062550  89 3C 00 03 */	lbz r9, 3(r28)
/* 80065614 00062554  7F 5D 32 14 */	add r26, r29, r6
/* 80065618 00062558  88 DC 00 04 */	lbz r6, 4(r28)
/* 8006561C 0006255C  98 7A 00 00 */	stb r3, 0(r26)
/* 80065620 00062560  1D 48 00 03 */	mulli r10, r8, 3
/* 80065624 00062564  39 18 00 04 */	addi r8, r24, 4
/* 80065628 00062568  98 9A 00 01 */	stb r4, 1(r26)
/* 8006562C 0006256C  3B 38 00 03 */	addi r25, r24, 3
/* 80065630 00062570  1D 8C 00 03 */	mulli r12, r12, 3
/* 80065634 00062574  3B 9C 00 05 */	addi r28, r28, 5
/* 80065638 00062578  9B DA 00 02 */	stb r30, 2(r26)
/* 8006563C 0006257C  7F 5D 52 14 */	add r26, r29, r10
/* 80065640 00062580  38 A5 00 05 */	addi r5, r5, 5
/* 80065644 00062584  98 7A 00 00 */	stb r3, 0(r26)
/* 80065648 00062588  1D 59 00 03 */	mulli r10, r25, 3
/* 8006564C 0006258C  7D 9D 62 14 */	add r12, r29, r12
/* 80065650 00062590  98 9A 00 01 */	stb r4, 1(r26)
/* 80065654 00062594  9B FA 00 02 */	stb r31, 2(r26)
/* 80065658 00062598  1D 08 00 03 */	mulli r8, r8, 3
/* 8006565C 0006259C  7D 5D 52 14 */	add r10, r29, r10
/* 80065660 000625A0  98 6C 00 00 */	stb r3, 0(r12)
/* 80065664 000625A4  7D 1D 42 14 */	add r8, r29, r8
/* 80065668 000625A8  98 8C 00 01 */	stb r4, 1(r12)
/* 8006566C 000625AC  99 6C 00 02 */	stb r11, 2(r12)
/* 80065670 000625B0  98 6A 00 00 */	stb r3, 0(r10)
/* 80065674 000625B4  98 8A 00 01 */	stb r4, 1(r10)
/* 80065678 000625B8  99 2A 00 02 */	stb r9, 2(r10)
/* 8006567C 000625BC  98 68 00 00 */	stb r3, 0(r8)
/* 80065680 000625C0  98 88 00 01 */	stb r4, 1(r8)
/* 80065684 000625C4  98 C8 00 02 */	stb r6, 2(r8)
/* 80065688 000625C8  42 00 FF 6C */	bdnz .L_800655F4
/* 8006568C 000625CC  39 21 00 08 */	addi r9, r1, 8
/* 80065690 000625D0  20 C5 00 0B */	subfic r6, r5, 0xb
/* 80065694 000625D4  7D 29 2A 14 */	add r9, r9, r5
/* 80065698 000625D8  7C C9 03 A6 */	mtctr r6
/* 8006569C 000625DC  2C 05 00 0B */	cmpwi r5, 0xb
/* 800656A0 000625E0  40 80 00 2C */	bge .L_800656CC
.L_800656A4:
/* 800656A4 000625E4  7D 05 02 14 */	add r8, r5, r0
/* 800656A8 000625E8  88 C9 00 00 */	lbz r6, 0(r9)
/* 800656AC 000625EC  1D 08 00 03 */	mulli r8, r8, 3
/* 800656B0 000625F0  39 29 00 01 */	addi r9, r9, 1
/* 800656B4 000625F4  38 A5 00 01 */	addi r5, r5, 1
/* 800656B8 000625F8  7D 1D 42 14 */	add r8, r29, r8
/* 800656BC 000625FC  98 68 00 00 */	stb r3, 0(r8)
/* 800656C0 00062600  98 88 00 01 */	stb r4, 1(r8)
/* 800656C4 00062604  98 C8 00 02 */	stb r6, 2(r8)
/* 800656C8 00062608  42 00 FF DC */	bdnz .L_800656A4
.L_800656CC:
/* 800656CC 0006260C  38 84 00 01 */	addi r4, r4, 1
/* 800656D0 00062610  3B 7B 00 0B */	addi r27, r27, 0xb
/* 800656D4 00062614  28 04 00 15 */	cmplwi r4, 0x15
/* 800656D8 00062618  41 80 FF 08 */	blt .L_800655E0
/* 800656DC 0006261C  38 63 00 01 */	addi r3, r3, 1
/* 800656E0 00062620  38 E7 00 E7 */	addi r7, r7, 0xe7
/* 800656E4 00062624  28 03 00 0B */	cmplwi r3, 0xb
/* 800656E8 00062628  41 80 FE F0 */	blt .L_800655D8
/* 800656EC 0006262C  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 800656F0 00062630  38 21 00 40 */	addi r1, r1, 0x40
/* 800656F4 00062634  4E 80 00 20 */	blr 
.endfn makeTexCoordTable__Fv

.fn makeAlphaCmpTable__Fv, global
/* 800656F8 00062638  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800656FC 0006263C  3C 80 80 51 */	lis r4, j3dAlphaCmpTable@ha
/* 80065700 00062640  38 60 00 00 */	li r3, 0
/* 80065704 00062644  38 A0 00 00 */	li r5, 0
/* 80065708 00062648  BF 41 00 08 */	stmw r26, 8(r1)
/* 8006570C 0006264C  3B C4 1D 94 */	addi r30, r4, j3dAlphaCmpTable@l
.L_80065710:
/* 80065710 00062650  38 00 00 04 */	li r0, 4
/* 80065714 00062654  38 80 00 00 */	li r4, 0
/* 80065718 00062658  38 C0 00 00 */	li r6, 0
/* 8006571C 0006265C  7C 09 03 A6 */	mtctr r0
.L_80065720:
/* 80065720 00062660  7D 65 32 14 */	add r11, r5, r6
/* 80065724 00062664  39 00 00 00 */	li r8, 0
/* 80065728 00062668  1C 0B 00 03 */	mulli r0, r11, 3
/* 8006572C 0006266C  39 40 00 01 */	li r10, 1
/* 80065730 00062670  38 EB 00 01 */	addi r7, r11, 1
/* 80065734 00062674  39 8B 00 02 */	addi r12, r11, 2
/* 80065738 00062678  7D 3E 02 14 */	add r9, r30, r0
/* 8006573C 0006267C  3B AB 00 03 */	addi r29, r11, 3
/* 80065740 00062680  98 69 00 00 */	stb r3, 0(r9)
/* 80065744 00062684  1C E7 00 03 */	mulli r7, r7, 3
/* 80065748 00062688  3B 8B 00 04 */	addi r28, r11, 4
/* 8006574C 0006268C  98 89 00 01 */	stb r4, 1(r9)
/* 80065750 00062690  3B E0 00 03 */	li r31, 3
/* 80065754 00062694  1C 0C 00 03 */	mulli r0, r12, 3
/* 80065758 00062698  3B 6B 00 05 */	addi r27, r11, 5
/* 8006575C 0006269C  99 09 00 02 */	stb r8, 2(r9)
/* 80065760 000626A0  7D 9E 3A 14 */	add r12, r30, r7
/* 80065764 000626A4  38 EB 00 07 */	addi r7, r11, 7
/* 80065768 000626A8  98 6C 00 00 */	stb r3, 0(r12)
/* 8006576C 000626AC  1D 1D 00 03 */	mulli r8, r29, 3
/* 80065770 000626B0  7F BE 02 14 */	add r29, r30, r0
/* 80065774 000626B4  98 8C 00 01 */	stb r4, 1(r12)
/* 80065778 000626B8  3B 4B 00 06 */	addi r26, r11, 6
/* 8006577C 000626BC  39 20 00 02 */	li r9, 2
/* 80065780 000626C0  99 4C 00 02 */	stb r10, 2(r12)
/* 80065784 000626C4  1C 1C 00 03 */	mulli r0, r28, 3
/* 80065788 000626C8  7F 9E 42 14 */	add r28, r30, r8
/* 8006578C 000626CC  98 7D 00 00 */	stb r3, 0(r29)
/* 80065790 000626D0  39 80 00 04 */	li r12, 4
/* 80065794 000626D4  39 40 00 05 */	li r10, 5
/* 80065798 000626D8  98 9D 00 01 */	stb r4, 1(r29)
/* 8006579C 000626DC  1D 7B 00 03 */	mulli r11, r27, 3
/* 800657A0 000626E0  7F 7E 02 14 */	add r27, r30, r0
/* 800657A4 000626E4  99 3D 00 02 */	stb r9, 2(r29)
/* 800657A8 000626E8  39 00 00 06 */	li r8, 6
/* 800657AC 000626EC  38 00 00 07 */	li r0, 7
/* 800657B0 000626F0  98 7C 00 00 */	stb r3, 0(r28)
/* 800657B4 000626F4  1D 3A 00 03 */	mulli r9, r26, 3
/* 800657B8 000626F8  7D 7E 5A 14 */	add r11, r30, r11
/* 800657BC 000626FC  98 9C 00 01 */	stb r4, 1(r28)
/* 800657C0 00062700  38 C6 00 08 */	addi r6, r6, 8
/* 800657C4 00062704  9B FC 00 02 */	stb r31, 2(r28)
/* 800657C8 00062708  1C E7 00 03 */	mulli r7, r7, 3
/* 800657CC 0006270C  7D 3E 4A 14 */	add r9, r30, r9
/* 800657D0 00062710  98 7B 00 00 */	stb r3, 0(r27)
/* 800657D4 00062714  7C FE 3A 14 */	add r7, r30, r7
/* 800657D8 00062718  98 9B 00 01 */	stb r4, 1(r27)
/* 800657DC 0006271C  99 9B 00 02 */	stb r12, 2(r27)
/* 800657E0 00062720  98 6B 00 00 */	stb r3, 0(r11)
/* 800657E4 00062724  98 8B 00 01 */	stb r4, 1(r11)
/* 800657E8 00062728  99 4B 00 02 */	stb r10, 2(r11)
/* 800657EC 0006272C  98 69 00 00 */	stb r3, 0(r9)
/* 800657F0 00062730  98 89 00 01 */	stb r4, 1(r9)
/* 800657F4 00062734  99 09 00 02 */	stb r8, 2(r9)
/* 800657F8 00062738  98 67 00 00 */	stb r3, 0(r7)
/* 800657FC 0006273C  98 87 00 01 */	stb r4, 1(r7)
/* 80065800 00062740  38 84 00 01 */	addi r4, r4, 1
/* 80065804 00062744  98 07 00 02 */	stb r0, 2(r7)
/* 80065808 00062748  42 00 FF 18 */	bdnz .L_80065720
/* 8006580C 0006274C  38 63 00 01 */	addi r3, r3, 1
/* 80065810 00062750  38 A5 00 20 */	addi r5, r5, 0x20
/* 80065814 00062754  28 03 00 08 */	cmplwi r3, 8
/* 80065818 00062758  41 80 FE F8 */	blt .L_80065710
/* 8006581C 0006275C  BB 41 00 08 */	lmw r26, 8(r1)
/* 80065820 00062760  38 21 00 20 */	addi r1, r1, 0x20
/* 80065824 00062764  4E 80 00 20 */	blr 
.endfn makeAlphaCmpTable__Fv

.fn makeZModeTable__Fv, global
/* 80065828 00062768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006582C 0006276C  3C 60 80 51 */	lis r3, j3dZModeTable@ha
/* 80065830 00062770  39 03 20 94 */	addi r8, r3, j3dZModeTable@l
/* 80065834 00062774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80065838 00062778  3B E0 00 00 */	li r31, 0
/* 8006583C 0006277C  38 60 00 00 */	li r3, 0
/* 80065840 00062780  93 C1 00 08 */	stw r30, 8(r1)
.L_80065844:
/* 80065844 00062784  39 20 00 00 */	li r9, 0
/* 80065848 00062788  38 00 00 02 */	li r0, 2
/* 8006584C 0006278C  7D 26 4B 78 */	mr r6, r9
/* 80065850 00062790  3B C0 00 00 */	li r30, 0
/* 80065854 00062794  38 80 00 01 */	li r4, 1
/* 80065858 00062798  7C 09 03 A6 */	mtctr r0
.L_8006585C:
/* 8006585C 0006279C  7D 69 1A 14 */	add r11, r9, r3
/* 80065860 000627A0  39 29 00 02 */	addi r9, r9, 2
/* 80065864 000627A4  1C EB 00 03 */	mulli r7, r11, 3
/* 80065868 000627A8  38 AB 00 01 */	addi r5, r11, 1
/* 8006586C 000627AC  7D 69 1A 14 */	add r11, r9, r3
/* 80065870 000627B0  7D 48 3A 14 */	add r10, r8, r7
/* 80065874 000627B4  39 29 00 02 */	addi r9, r9, 2
/* 80065878 000627B8  9B EA 00 00 */	stb r31, 0(r10)
/* 8006587C 000627BC  1C 05 00 03 */	mulli r0, r5, 3
/* 80065880 000627C0  38 AB 00 01 */	addi r5, r11, 1
/* 80065884 000627C4  9B CA 00 01 */	stb r30, 1(r10)
/* 80065888 000627C8  7D 88 02 14 */	add r12, r8, r0
/* 8006588C 000627CC  98 CA 00 02 */	stb r6, 2(r10)
/* 80065890 000627D0  1C EB 00 03 */	mulli r7, r11, 3
/* 80065894 000627D4  7D 69 1A 14 */	add r11, r9, r3
/* 80065898 000627D8  9B EC 00 00 */	stb r31, 0(r12)
/* 8006589C 000627DC  39 29 00 02 */	addi r9, r9, 2
/* 800658A0 000627E0  7D 48 3A 14 */	add r10, r8, r7
/* 800658A4 000627E4  9B CC 00 01 */	stb r30, 1(r12)
/* 800658A8 000627E8  1C 05 00 03 */	mulli r0, r5, 3
/* 800658AC 000627EC  3B DE 00 01 */	addi r30, r30, 1
/* 800658B0 000627F0  98 8C 00 02 */	stb r4, 2(r12)
/* 800658B4 000627F4  38 AB 00 01 */	addi r5, r11, 1
/* 800658B8 000627F8  7D 88 02 14 */	add r12, r8, r0
/* 800658BC 000627FC  9B EA 00 00 */	stb r31, 0(r10)
/* 800658C0 00062800  1C EB 00 03 */	mulli r7, r11, 3
/* 800658C4 00062804  7D 69 1A 14 */	add r11, r9, r3
/* 800658C8 00062808  9B CA 00 01 */	stb r30, 1(r10)
/* 800658CC 0006280C  39 29 00 02 */	addi r9, r9, 2
/* 800658D0 00062810  1C 05 00 03 */	mulli r0, r5, 3
/* 800658D4 00062814  38 AB 00 01 */	addi r5, r11, 1
/* 800658D8 00062818  98 CA 00 02 */	stb r6, 2(r10)
/* 800658DC 0006281C  7D 48 3A 14 */	add r10, r8, r7
/* 800658E0 00062820  9B EC 00 00 */	stb r31, 0(r12)
/* 800658E4 00062824  1C EB 00 03 */	mulli r7, r11, 3
/* 800658E8 00062828  9B CC 00 01 */	stb r30, 1(r12)
/* 800658EC 0006282C  3B DE 00 01 */	addi r30, r30, 1
/* 800658F0 00062830  98 8C 00 02 */	stb r4, 2(r12)
/* 800658F4 00062834  7D 88 02 14 */	add r12, r8, r0
/* 800658F8 00062838  1C 05 00 03 */	mulli r0, r5, 3
/* 800658FC 0006283C  9B EA 00 00 */	stb r31, 0(r10)
/* 80065900 00062840  9B CA 00 01 */	stb r30, 1(r10)
/* 80065904 00062844  98 CA 00 02 */	stb r6, 2(r10)
/* 80065908 00062848  7D 48 3A 14 */	add r10, r8, r7
/* 8006590C 0006284C  9B EC 00 00 */	stb r31, 0(r12)
/* 80065910 00062850  9B CC 00 01 */	stb r30, 1(r12)
/* 80065914 00062854  3B DE 00 01 */	addi r30, r30, 1
/* 80065918 00062858  98 8C 00 02 */	stb r4, 2(r12)
/* 8006591C 0006285C  7D 88 02 14 */	add r12, r8, r0
/* 80065920 00062860  9B EA 00 00 */	stb r31, 0(r10)
/* 80065924 00062864  9B CA 00 01 */	stb r30, 1(r10)
/* 80065928 00062868  98 CA 00 02 */	stb r6, 2(r10)
/* 8006592C 0006286C  9B EC 00 00 */	stb r31, 0(r12)
/* 80065930 00062870  9B CC 00 01 */	stb r30, 1(r12)
/* 80065934 00062874  3B DE 00 01 */	addi r30, r30, 1
/* 80065938 00062878  98 8C 00 02 */	stb r4, 2(r12)
/* 8006593C 0006287C  42 00 FF 20 */	bdnz .L_8006585C
/* 80065940 00062880  3B FF 00 01 */	addi r31, r31, 1
/* 80065944 00062884  38 63 00 10 */	addi r3, r3, 0x10
/* 80065948 00062888  2C 1F 00 02 */	cmpwi r31, 2
/* 8006594C 0006288C  41 80 FE F8 */	blt .L_80065844
/* 80065950 00062890  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80065954 00062894  83 C1 00 08 */	lwz r30, 8(r1)
/* 80065958 00062898  38 21 00 10 */	addi r1, r1, 0x10
/* 8006595C 0006289C  4E 80 00 20 */	blr 
.endfn makeZModeTable__Fv

.fn makeTevSwapTable__Fv, global
/* 80065960 000628A0  3C 60 80 51 */	lis r3, j3dTevSwapTableTable@ha
/* 80065964 000628A4  38 C0 00 00 */	li r6, 0
/* 80065968 000628A8  38 03 19 94 */	addi r0, r3, j3dTevSwapTableTable@l
/* 8006596C 000628AC  7C 05 03 78 */	mr r5, r0
.L_80065970:
/* 80065970 000628B0  7C C0 36 70 */	srawi r0, r6, 6
/* 80065974 000628B4  54 C4 E7 BE */	rlwinm r4, r6, 0x1c, 0x1e, 0x1f
/* 80065978 000628B8  98 05 00 00 */	stb r0, 0(r5)
/* 8006597C 000628BC  54 C3 F7 BE */	rlwinm r3, r6, 0x1e, 0x1e, 0x1f
/* 80065980 000628C0  54 C0 07 BE */	clrlwi r0, r6, 0x1e
/* 80065984 000628C4  38 C6 00 01 */	addi r6, r6, 1
/* 80065988 000628C8  98 85 00 01 */	stb r4, 1(r5)
/* 8006598C 000628CC  2C 06 01 00 */	cmpwi r6, 0x100
/* 80065990 000628D0  98 65 00 02 */	stb r3, 2(r5)
/* 80065994 000628D4  98 05 00 03 */	stb r0, 3(r5)
/* 80065998 000628D8  38 A5 00 04 */	addi r5, r5, 4
/* 8006599C 000628DC  41 80 FF D4 */	blt .L_80065970
/* 800659A0 000628E0  4E 80 00 20 */	blr 
.endfn makeTevSwapTable__Fv
