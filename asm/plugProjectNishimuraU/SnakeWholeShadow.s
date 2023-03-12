.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@", local
	.float 7.5
	.float 7.5
	.float 20.0
	.float 30.0
	.float 25.0
	.float 17.5
	.float 11.0
	.float 8.0
	.float 22.5
.endobj "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"
.obj "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@", local
	.float 7.5
	.float 7.5
	.float 20.0
	.float 27.5
	.float 22.5
	.float 15.0
	.float 9.0
	.float 8.0
	.float 10.0
.endobj "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"
.balign 4
.obj lbl_8048D348, local
	.asciz "foot_joint1"
.endobj lbl_8048D348
.balign 4
.obj lbl_8048D354, local
	.asciz "leg_joint2"
.endobj lbl_8048D354
.balign 4
.obj lbl_8048D360, local
	.asciz "leg_joint1"
.endobj lbl_8048D360
.balign 4
.obj lbl_8048D36C, local
	.asciz "bodyjnt4"
.endobj lbl_8048D36C
.balign 4
.obj lbl_8048D378, local
	.asciz "bodyjnt5"
.endobj lbl_8048D378
.balign 4
.obj lbl_8048D384, local
	.asciz "bodyjnt6"
.endobj lbl_8048D384
.balign 4
.obj lbl_8048D390, local
	.asciz "bodyjnt7"
.endobj lbl_8048D390
.balign 4
.obj lbl_8048D39C, local
	.asciz "bodyjnt8"
.endobj lbl_8048D39C
.balign 4
.obj lbl_8048D3A8, local
	.asciz "kutijnt1"
.endobj lbl_8048D3A8
.balign 4
.obj lbl_8048D3B4, local
	.4byte lbl_8048D348
	.4byte lbl_8048D354
	.4byte lbl_8048D360
	.4byte lbl_8048D36C
	.4byte lbl_8048D378
	.4byte lbl_8048D384
	.4byte lbl_8048D390
	.4byte lbl_8048D39C
	.4byte lbl_8048D3A8
.endobj lbl_8048D3B4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q24Game26SnakeWholeSphereShadowNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game26SnakeWholeSphereShadowNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game26SnakeWholeSphereShadowNode
.obj __vt__Q24Game24SnakeWholeTubeShadowNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game24SnakeWholeTubeShadowNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game24SnakeWholeTubeShadowNode

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051D2D8, local
	.float 0.5
.endobj lbl_8051D2D8
.obj lbl_8051D2DC, local
	.float 0.0
.endobj lbl_8051D2DC
.obj lbl_8051D2E0, local
	.float 1.0
.endobj lbl_8051D2E0
.obj lbl_8051D2E4, local
	.float 2.5
.endobj lbl_8051D2E4
.obj lbl_8051D2E8, local
	.float 50.0
.endobj lbl_8051D2E8
.obj lbl_8051D2EC, local
	.float 100.0
.endobj lbl_8051D2EC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn "makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>", global
/* 802F89AC 002F58EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F89B0 002F58F0  7C 08 02 A6 */	mflr r0
/* 802F89B4 002F58F4  C0 42 EF 78 */	lfs f2, lbl_8051D2D8@sda21(r2)
/* 802F89B8 002F58F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F89BC 002F58FC  C0 A2 EF 7C */	lfs f5, lbl_8051D2DC@sda21(r2)
/* 802F89C0 002F5900  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F89C4 002F5904  7C 9F 23 78 */	mr r31, r4
/* 802F89C8 002F5908  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802F89CC 002F590C  7C 7E 1B 78 */	mr r30, r3
/* 802F89D0 002F5910  C0 26 00 00 */	lfs f1, 0(r6)
/* 802F89D4 002F5914  C0 05 00 00 */	lfs f0, 0(r5)
/* 802F89D8 002F5918  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F89DC 002F591C  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 802F89E0 002F5920  EC C2 00 32 */	fmuls f6, f2, f0
/* 802F89E4 002F5924  D0 C1 00 08 */	stfs f6, 8(r1)
/* 802F89E8 002F5928  C0 26 00 08 */	lfs f1, 8(r6)
/* 802F89EC 002F592C  C0 05 00 08 */	lfs f0, 8(r5)
/* 802F89F0 002F5930  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F89F4 002F5934  EC 82 00 32 */	fmuls f4, f2, f0
/* 802F89F8 002F5938  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 802F89FC 002F593C  C1 04 00 10 */	lfs f8, 0x10(r4)
/* 802F8A00 002F5940  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 802F8A04 002F5944  C0 E4 00 0C */	lfs f7, 0xc(r4)
/* 802F8A08 002F5948  EC 04 02 32 */	fmuls f0, f4, f8
/* 802F8A0C 002F594C  EC 46 00 72 */	fmuls f2, f6, f1
/* 802F8A10 002F5950  EC 65 01 F2 */	fmuls f3, f5, f7
/* 802F8A14 002F5954  EC 25 00 78 */	fmsubs f1, f5, f1, f0
/* 802F8A18 002F5958  EC 44 11 F8 */	fmsubs f2, f4, f7, f2
/* 802F8A1C 002F595C  EC 66 1A 38 */	fmsubs f3, f6, f8, f3
/* 802F8A20 002F5960  EC 01 00 72 */	fmuls f0, f1, f1
/* 802F8A24 002F5964  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802F8A28 002F5968  EC 82 00 B2 */	fmuls f4, f2, f2
/* 802F8A2C 002F596C  EC C3 00 F2 */	fmuls f6, f3, f3
/* 802F8A30 002F5970  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802F8A34 002F5974  EC 00 20 2A */	fadds f0, f0, f4
/* 802F8A38 002F5978  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 802F8A3C 002F597C  EC 06 00 2A */	fadds f0, f6, f0
/* 802F8A40 002F5980  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 802F8A44 002F5984  40 81 00 20 */	ble .L_802F8A64
/* 802F8A48 002F5988  EC 01 20 7A */	fmadds f0, f1, f1, f4
/* 802F8A4C 002F598C  EC 26 00 2A */	fadds f1, f6, f0
/* 802F8A50 002F5990  FC 01 28 40 */	fcmpo cr0, f1, f5
/* 802F8A54 002F5994  40 81 00 14 */	ble .L_802F8A68
/* 802F8A58 002F5998  FC 00 08 34 */	frsqrte f0, f1
/* 802F8A5C 002F599C  EC 20 00 72 */	fmuls f1, f0, f1
/* 802F8A60 002F59A0  48 00 00 08 */	b .L_802F8A68
.L_802F8A64:
/* 802F8A64 002F59A4  FC 20 28 90 */	fmr f1, f5
.L_802F8A68:
/* 802F8A68 002F59A8  C0 02 EF 7C */	lfs f0, lbl_8051D2DC@sda21(r2)
/* 802F8A6C 002F59AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F8A70 002F59B0  40 81 00 30 */	ble .L_802F8AA0
/* 802F8A74 002F59B4  C0 02 EF 80 */	lfs f0, lbl_8051D2E0@sda21(r2)
/* 802F8A78 002F59B8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802F8A7C 002F59BC  EC 60 08 24 */	fdivs f3, f0, f1
/* 802F8A80 002F59C0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802F8A84 002F59C4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802F8A88 002F59C8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F8A8C 002F59CC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 802F8A90 002F59D0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802F8A94 002F59D4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802F8A98 002F59D8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802F8A9C 002F59DC  D0 01 00 28 */	stfs f0, 0x28(r1)
.L_802F8AA0:
/* 802F8AA0 002F59E0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802F8AA4 002F59E4  38 81 00 2C */	addi r4, r1, 0x2c
/* 802F8AA8 002F59E8  C0 BF 00 20 */	lfs f5, 0x20(r31)
/* 802F8AAC 002F59EC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802F8AB0 002F59F0  EC 82 01 72 */	fmuls f4, f2, f5
/* 802F8AB4 002F59F4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802F8AB8 002F59F8  EC 41 01 72 */	fmuls f2, f1, f5
/* 802F8ABC 002F59FC  C0 62 EF 78 */	lfs f3, lbl_8051D2D8@sda21(r2)
/* 802F8AC0 002F5A00  EC 20 01 72 */	fmuls f1, f0, f5
/* 802F8AC4 002F5A04  C0 02 EF 7C */	lfs f0, lbl_8051D2DC@sda21(r2)
/* 802F8AC8 002F5A08  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802F8ACC 002F5A0C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802F8AD0 002F5A10  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802F8AD4 002F5A14  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802F8AD8 002F5A18  C0 46 00 00 */	lfs f2, 0(r6)
/* 802F8ADC 002F5A1C  C0 25 00 00 */	lfs f1, 0(r5)
/* 802F8AE0 002F5A20  EC 22 08 2A */	fadds f1, f2, f1
/* 802F8AE4 002F5A24  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802F8AE8 002F5A28  EC 03 00 72 */	fmuls f0, f3, f1
/* 802F8AEC 002F5A2C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F8AF0 002F5A30  C0 26 00 08 */	lfs f1, 8(r6)
/* 802F8AF4 002F5A34  C0 05 00 08 */	lfs f0, 8(r5)
/* 802F8AF8 002F5A38  EC 01 00 2A */	fadds f0, f1, f0
/* 802F8AFC 002F5A3C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802F8B00 002F5A40  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802F8B04 002F5A44  81 83 00 04 */	lwz r12, 4(r3)
/* 802F8B08 002F5A48  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802F8B0C 002F5A4C  7D 89 03 A6 */	mtctr r12
/* 802F8B10 002F5A50  4E 80 04 21 */	bctrl 
/* 802F8B14 002F5A54  C0 42 EF 84 */	lfs f2, lbl_8051D2E4@sda21(r2)
/* 802F8B18 002F5A58  C0 02 EF 7C */	lfs f0, lbl_8051D2DC@sda21(r2)
/* 802F8B1C 002F5A5C  EC 42 08 2A */	fadds f2, f2, f1
/* 802F8B20 002F5A60  C0 22 EF 88 */	lfs f1, lbl_8051D2E8@sda21(r2)
/* 802F8B24 002F5A64  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802F8B28 002F5A68  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 802F8B2C 002F5A6C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802F8B30 002F5A70  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F8B34 002F5A74  C0 7F 00 04 */	lfs f3, 4(r31)
/* 802F8B38 002F5A78  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 802F8B3C 002F5A7C  40 80 00 14 */	bge .L_802F8B50
/* 802F8B40 002F5A80  EC 03 10 28 */	fsubs f0, f3, f2
/* 802F8B44 002F5A84  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 802F8B48 002F5A88  EC 01 00 2A */	fadds f0, f1, f0
/* 802F8B4C 002F5A8C  D0 01 00 18 */	stfs f0, 0x18(r1)
.L_802F8B50:
/* 802F8B50 002F5A90  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8B54 002F5A94  C0 01 00 08 */	lfs f0, 8(r1)
/* 802F8B58 002F5A98  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F8B5C 002F5A9C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802F8B60 002F5AA0  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F8B64 002F5AA4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F8B68 002F5AA8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F8B6C 002F5AAC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8B70 002F5AB0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802F8B74 002F5AB4  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F8B78 002F5AB8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802F8B7C 002F5ABC  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F8B80 002F5AC0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802F8B84 002F5AC4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F8B88 002F5AC8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8B8C 002F5ACC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802F8B90 002F5AD0  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F8B94 002F5AD4  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802F8B98 002F5AD8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F8B9C 002F5ADC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802F8BA0 002F5AE0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F8BA4 002F5AE4  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8BA8 002F5AE8  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802F8BAC 002F5AEC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F8BB0 002F5AF0  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 802F8BB4 002F5AF4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F8BB8 002F5AF8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802F8BBC 002F5AFC  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F8BC0 002F5B00  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F8BC4 002F5B04  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802F8BC8 002F5B08  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F8BCC 002F5B0C  7C 08 03 A6 */	mtlr r0
/* 802F8BD0 002F5B10  38 21 00 40 */	addi r1, r1, 0x40
/* 802F8BD4 002F5B14  4E 80 00 20 */	blr 
.endfn "makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"

.fn "makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>", global
/* 802F8BD8 002F5B18  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F8BDC 002F5B1C  7C 08 02 A6 */	mflr r0
/* 802F8BE0 002F5B20  C0 22 EF 7C */	lfs f1, lbl_8051D2DC@sda21(r2)
/* 802F8BE4 002F5B24  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F8BE8 002F5B28  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F8BEC 002F5B2C  7C 9F 23 78 */	mr r31, r4
/* 802F8BF0 002F5B30  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802F8BF4 002F5B34  7C 7E 1B 78 */	mr r30, r3
/* 802F8BF8 002F5B38  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 802F8BFC 002F5B3C  38 81 00 2C */	addi r4, r1, 0x2c
/* 802F8C00 002F5B40  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802F8C04 002F5B44  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F8C08 002F5B48  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802F8C0C 002F5B4C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802F8C10 002F5B50  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802F8C14 002F5B54  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802F8C18 002F5B58  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802F8C1C 002F5B5C  C0 05 00 00 */	lfs f0, 0(r5)
/* 802F8C20 002F5B60  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F8C24 002F5B64  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802F8C28 002F5B68  C0 05 00 08 */	lfs f0, 8(r5)
/* 802F8C2C 002F5B6C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802F8C30 002F5B70  81 83 00 04 */	lwz r12, 4(r3)
/* 802F8C34 002F5B74  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802F8C38 002F5B78  7D 89 03 A6 */	mtctr r12
/* 802F8C3C 002F5B7C  4E 80 04 21 */	bctrl 
/* 802F8C40 002F5B80  C0 42 EF 84 */	lfs f2, lbl_8051D2E4@sda21(r2)
/* 802F8C44 002F5B84  C0 02 EF 7C */	lfs f0, lbl_8051D2DC@sda21(r2)
/* 802F8C48 002F5B88  EC 42 08 2A */	fadds f2, f2, f1
/* 802F8C4C 002F5B8C  C0 22 EF 88 */	lfs f1, lbl_8051D2E8@sda21(r2)
/* 802F8C50 002F5B90  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802F8C54 002F5B94  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 802F8C58 002F5B98  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802F8C5C 002F5B9C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F8C60 002F5BA0  C0 7F 00 04 */	lfs f3, 4(r31)
/* 802F8C64 002F5BA4  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 802F8C68 002F5BA8  40 80 00 14 */	bge .L_802F8C7C
/* 802F8C6C 002F5BAC  EC 03 10 28 */	fsubs f0, f3, f2
/* 802F8C70 002F5BB0  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 802F8C74 002F5BB4  EC 01 00 2A */	fadds f0, f1, f0
/* 802F8C78 002F5BB8  D0 01 00 18 */	stfs f0, 0x18(r1)
.L_802F8C7C:
/* 802F8C7C 002F5BBC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8C80 002F5BC0  C0 01 00 08 */	lfs f0, 8(r1)
/* 802F8C84 002F5BC4  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F8C88 002F5BC8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802F8C8C 002F5BCC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F8C90 002F5BD0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F8C94 002F5BD4  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F8C98 002F5BD8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8C9C 002F5BDC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802F8CA0 002F5BE0  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F8CA4 002F5BE4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802F8CA8 002F5BE8  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F8CAC 002F5BEC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802F8CB0 002F5BF0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F8CB4 002F5BF4  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8CB8 002F5BF8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802F8CBC 002F5BFC  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F8CC0 002F5C00  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802F8CC4 002F5C04  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F8CC8 002F5C08  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802F8CCC 002F5C0C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F8CD0 002F5C10  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F8CD4 002F5C14  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802F8CD8 002F5C18  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F8CDC 002F5C1C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 802F8CE0 002F5C20  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F8CE4 002F5C24  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802F8CE8 002F5C28  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F8CEC 002F5C2C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F8CF0 002F5C30  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802F8CF4 002F5C34  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F8CF8 002F5C38  7C 08 03 A6 */	mtlr r0
/* 802F8CFC 002F5C3C  38 21 00 40 */	addi r1, r1, 0x40
/* 802F8D00 002F5C40  4E 80 00 20 */	blr 
.endfn "makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"

.fn __ct__Q34Game10SnakeWhole19SnakeWholeShadowMgrFPQ34Game10SnakeWhole3Obj, global
/* 802F8D04 002F5C44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F8D08 002F5C48  7C 08 02 A6 */	mflr r0
/* 802F8D0C 002F5C4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F8D10 002F5C50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F8D14 002F5C54  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802F8D18 002F5C58  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802F8D1C 002F5C5C  7C 9D 23 78 */	mr r29, r4
/* 802F8D20 002F5C60  93 81 00 10 */	stw r28, 0x10(r1)
/* 802F8D24 002F5C64  7C 7C 1B 78 */	mr r28, r3
/* 802F8D28 002F5C68  93 A3 00 24 */	stw r29, 0x24(r3)
/* 802F8D2C 002F5C6C  38 60 00 20 */	li r3, 0x20
/* 802F8D30 002F5C70  4B D2 B1 75 */	bl __nw__FUl
/* 802F8D34 002F5C74  7C 60 1B 79 */	or. r0, r3, r3
/* 802F8D38 002F5C78  41 82 00 10 */	beq .L_802F8D48
/* 802F8D3C 002F5C7C  7F A4 EB 78 */	mr r4, r29
/* 802F8D40 002F5C80  4B F4 85 3D */	bl __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
/* 802F8D44 002F5C84  7C 60 1B 78 */	mr r0, r3
.L_802F8D48:
/* 802F8D48 002F5C88  90 1C 00 28 */	stw r0, 0x28(r28)
/* 802F8D4C 002F5C8C  7F 9E E3 78 */	mr r30, r28
/* 802F8D50 002F5C90  3B A0 00 00 */	li r29, 0
.L_802F8D54:
/* 802F8D54 002F5C94  38 60 00 24 */	li r3, 0x24
/* 802F8D58 002F5C98  4B D2 B1 4D */	bl __nw__FUl
/* 802F8D5C 002F5C9C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802F8D60 002F5CA0  41 82 00 18 */	beq .L_802F8D78
/* 802F8D64 002F5CA4  38 80 00 02 */	li r4, 2
/* 802F8D68 002F5CA8  4B F4 85 75 */	bl __ct__Q24Game15JointShadowNodeFi
/* 802F8D6C 002F5CAC  3C 60 80 4D */	lis r3, __vt__Q24Game24SnakeWholeTubeShadowNode@ha
/* 802F8D70 002F5CB0  38 03 5A 10 */	addi r0, r3, __vt__Q24Game24SnakeWholeTubeShadowNode@l
/* 802F8D74 002F5CB4  90 1F 00 00 */	stw r0, 0(r31)
.L_802F8D78:
/* 802F8D78 002F5CB8  93 FE 00 2C */	stw r31, 0x2c(r30)
/* 802F8D7C 002F5CBC  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 802F8D80 002F5CC0  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 802F8D84 002F5CC4  48 11 86 85 */	bl add__5CNodeFP5CNode
/* 802F8D88 002F5CC8  38 60 00 24 */	li r3, 0x24
/* 802F8D8C 002F5CCC  4B D2 B1 19 */	bl __nw__FUl
/* 802F8D90 002F5CD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802F8D94 002F5CD4  41 82 00 18 */	beq .L_802F8DAC
/* 802F8D98 002F5CD8  38 80 00 02 */	li r4, 2
/* 802F8D9C 002F5CDC  4B F4 85 41 */	bl __ct__Q24Game15JointShadowNodeFi
/* 802F8DA0 002F5CE0  3C 60 80 4D */	lis r3, __vt__Q24Game26SnakeWholeSphereShadowNode@ha
/* 802F8DA4 002F5CE4  38 03 5A 00 */	addi r0, r3, __vt__Q24Game26SnakeWholeSphereShadowNode@l
/* 802F8DA8 002F5CE8  90 1F 00 00 */	stw r0, 0(r31)
.L_802F8DAC:
/* 802F8DAC 002F5CEC  93 FE 00 50 */	stw r31, 0x50(r30)
/* 802F8DB0 002F5CF0  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 802F8DB4 002F5CF4  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 802F8DB8 002F5CF8  48 11 86 51 */	bl add__5CNodeFP5CNode
/* 802F8DBC 002F5CFC  3B BD 00 01 */	addi r29, r29, 1
/* 802F8DC0 002F5D00  3B DE 00 04 */	addi r30, r30, 4
/* 802F8DC4 002F5D04  2C 1D 00 09 */	cmpwi r29, 9
/* 802F8DC8 002F5D08  41 80 FF 8C */	blt .L_802F8D54
/* 802F8DCC 002F5D0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F8DD0 002F5D10  7F 83 E3 78 */	mr r3, r28
/* 802F8DD4 002F5D14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F8DD8 002F5D18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802F8DDC 002F5D1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802F8DE0 002F5D20  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802F8DE4 002F5D24  7C 08 03 A6 */	mtlr r0
/* 802F8DE8 002F5D28  38 21 00 20 */	addi r1, r1, 0x20
/* 802F8DEC 002F5D2C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10SnakeWhole19SnakeWholeShadowMgrFPQ34Game10SnakeWhole3Obj

.fn init__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv, global
/* 802F8DF0 002F5D30  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F8DF4 002F5D34  7C 08 02 A6 */	mflr r0
/* 802F8DF8 002F5D38  3C 80 80 49 */	lis r4, lbl_8048D3B4@ha
/* 802F8DFC 002F5D3C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F8E00 002F5D40  39 64 D3 B4 */	addi r11, r4, lbl_8048D3B4@l
/* 802F8E04 002F5D44  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F8E08 002F5D48  3B E1 00 08 */	addi r31, r1, 8
/* 802F8E0C 002F5D4C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802F8E10 002F5D50  7C 7E 1B 78 */	mr r30, r3
/* 802F8E14 002F5D54  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802F8E18 002F5D58  93 81 00 30 */	stw r28, 0x30(r1)
/* 802F8E1C 002F5D5C  3B 80 00 00 */	li r28, 0
/* 802F8E20 002F5D60  81 83 00 24 */	lwz r12, 0x24(r3)
/* 802F8E24 002F5D64  81 4B 00 00 */	lwz r10, 0(r11)
/* 802F8E28 002F5D68  81 2B 00 04 */	lwz r9, 4(r11)
/* 802F8E2C 002F5D6C  81 0B 00 08 */	lwz r8, 8(r11)
/* 802F8E30 002F5D70  80 EB 00 0C */	lwz r7, 0xc(r11)
/* 802F8E34 002F5D74  80 CB 00 10 */	lwz r6, 0x10(r11)
/* 802F8E38 002F5D78  80 AB 00 14 */	lwz r5, 0x14(r11)
/* 802F8E3C 002F5D7C  80 8B 00 18 */	lwz r4, 0x18(r11)
/* 802F8E40 002F5D80  80 6B 00 1C */	lwz r3, 0x1c(r11)
/* 802F8E44 002F5D84  80 0B 00 20 */	lwz r0, 0x20(r11)
/* 802F8E48 002F5D88  91 41 00 08 */	stw r10, 8(r1)
/* 802F8E4C 002F5D8C  83 AC 01 74 */	lwz r29, 0x174(r12)
/* 802F8E50 002F5D90  91 21 00 0C */	stw r9, 0xc(r1)
/* 802F8E54 002F5D94  91 01 00 10 */	stw r8, 0x10(r1)
/* 802F8E58 002F5D98  90 E1 00 14 */	stw r7, 0x14(r1)
/* 802F8E5C 002F5D9C  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802F8E60 002F5DA0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802F8E64 002F5DA4  90 81 00 20 */	stw r4, 0x20(r1)
/* 802F8E68 002F5DA8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802F8E6C 002F5DAC  90 01 00 28 */	stw r0, 0x28(r1)
.L_802F8E70:
/* 802F8E70 002F5DB0  80 9F 00 00 */	lwz r4, 0(r31)
/* 802F8E74 002F5DB4  7F A3 EB 78 */	mr r3, r29
/* 802F8E78 002F5DB8  48 14 61 6D */	bl getJoint__Q28SysShape5ModelFPc
/* 802F8E7C 002F5DBC  48 13 0A 25 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F8E80 002F5DC0  3B 9C 00 01 */	addi r28, r28, 1
/* 802F8E84 002F5DC4  90 7E 00 00 */	stw r3, 0(r30)
/* 802F8E88 002F5DC8  2C 1C 00 09 */	cmpwi r28, 9
/* 802F8E8C 002F5DCC  3B FF 00 04 */	addi r31, r31, 4
/* 802F8E90 002F5DD0  3B DE 00 04 */	addi r30, r30, 4
/* 802F8E94 002F5DD4  41 80 FF DC */	blt .L_802F8E70
/* 802F8E98 002F5DD8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F8E9C 002F5DDC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F8EA0 002F5DE0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802F8EA4 002F5DE4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802F8EA8 002F5DE8  83 81 00 30 */	lwz r28, 0x30(r1)
/* 802F8EAC 002F5DEC  7C 08 03 A6 */	mtlr r0
/* 802F8EB0 002F5DF0  38 21 00 40 */	addi r1, r1, 0x40
/* 802F8EB4 002F5DF4  4E 80 00 20 */	blr 
.endfn init__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv

.fn startJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv, global
/* 802F8EB8 002F5DF8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F8EBC 002F5DFC  7C 08 02 A6 */	mflr r0
/* 802F8EC0 002F5E00  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F8EC4 002F5E04  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F8EC8 002F5E08  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802F8ECC 002F5E0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802F8ED0 002F5E10  7C 7D 1B 78 */	mr r29, r3
/* 802F8ED4 002F5E14  80 63 00 28 */	lwz r3, 0x28(r3)
/* 802F8ED8 002F5E18  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802F8EDC 002F5E1C  28 00 00 00 */	cmplwi r0, 0
/* 802F8EE0 002F5E20  40 82 00 34 */	bne .L_802F8F14
/* 802F8EE4 002F5E24  3B C0 00 00 */	li r30, 0
/* 802F8EE8 002F5E28  7F BF EB 78 */	mr r31, r29
.L_802F8EEC:
/* 802F8EEC 002F5E2C  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 802F8EF0 002F5E30  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 802F8EF4 002F5E34  48 11 85 15 */	bl add__5CNodeFP5CNode
/* 802F8EF8 002F5E38  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 802F8EFC 002F5E3C  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 802F8F00 002F5E40  48 11 85 09 */	bl add__5CNodeFP5CNode
/* 802F8F04 002F5E44  3B DE 00 01 */	addi r30, r30, 1
/* 802F8F08 002F5E48  3B FF 00 04 */	addi r31, r31, 4
/* 802F8F0C 002F5E4C  2C 1E 00 09 */	cmpwi r30, 9
/* 802F8F10 002F5E50  41 80 FF DC */	blt .L_802F8EEC
.L_802F8F14:
/* 802F8F14 002F5E54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F8F18 002F5E58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F8F1C 002F5E5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802F8F20 002F5E60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802F8F24 002F5E64  7C 08 03 A6 */	mtlr r0
/* 802F8F28 002F5E68  38 21 00 20 */	addi r1, r1, 0x20
/* 802F8F2C 002F5E6C  4E 80 00 20 */	blr 
.endfn startJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv

.fn finishJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv, global
/* 802F8F30 002F5E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F8F34 002F5E74  7C 08 02 A6 */	mflr r0
/* 802F8F38 002F5E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F8F3C 002F5E7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F8F40 002F5E80  93 C1 00 08 */	stw r30, 8(r1)
/* 802F8F44 002F5E84  80 83 00 28 */	lwz r4, 0x28(r3)
/* 802F8F48 002F5E88  80 04 00 10 */	lwz r0, 0x10(r4)
/* 802F8F4C 002F5E8C  28 00 00 00 */	cmplwi r0, 0
/* 802F8F50 002F5E90  41 82 00 2C */	beq .L_802F8F7C
/* 802F8F54 002F5E94  3B C0 00 00 */	li r30, 0
/* 802F8F58 002F5E98  7C 7F 1B 78 */	mr r31, r3
.L_802F8F5C:
/* 802F8F5C 002F5E9C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 802F8F60 002F5EA0  48 11 86 71 */	bl del__5CNodeFv
/* 802F8F64 002F5EA4  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 802F8F68 002F5EA8  48 11 86 69 */	bl del__5CNodeFv
/* 802F8F6C 002F5EAC  3B DE 00 01 */	addi r30, r30, 1
/* 802F8F70 002F5EB0  3B FF 00 04 */	addi r31, r31, 4
/* 802F8F74 002F5EB4  2C 1E 00 09 */	cmpwi r30, 9
/* 802F8F78 002F5EB8  41 80 FF E4 */	blt .L_802F8F5C
.L_802F8F7C:
/* 802F8F7C 002F5EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F8F80 002F5EC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F8F84 002F5EC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F8F88 002F5EC8  7C 08 03 A6 */	mtlr r0
/* 802F8F8C 002F5ECC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F8F90 002F5ED0  4E 80 00 20 */	blr 
.endfn finishJointShadow__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv

.fn update__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv, global
/* 802F8F94 002F5ED4  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 802F8F98 002F5ED8  7C 08 02 A6 */	mflr r0
/* 802F8F9C 002F5EDC  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 802F8FA0 002F5EE0  BF 61 00 DC */	stmw r27, 0xdc(r1)
/* 802F8FA4 002F5EE4  7C 7B 1B 78 */	mr r27, r3
/* 802F8FA8 002F5EE8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 802F8FAC 002F5EEC  81 83 00 00 */	lwz r12, 0(r3)
/* 802F8FB0 002F5EF0  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 802F8FB4 002F5EF4  7D 89 03 A6 */	mtctr r12
/* 802F8FB8 002F5EF8  4E 80 04 21 */	bctrl 
/* 802F8FBC 002F5EFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F8FC0 002F5F00  40 82 02 1C */	bne .L_802F91DC
/* 802F8FC4 002F5F04  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 802F8FC8 002F5F08  38 61 00 08 */	addi r3, r1, 8
/* 802F8FCC 002F5F0C  81 84 00 00 */	lwz r12, 0(r4)
/* 802F8FD0 002F5F10  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F8FD4 002F5F14  7D 89 03 A6 */	mtctr r12
/* 802F8FD8 002F5F18  4E 80 04 21 */	bctrl 
/* 802F8FDC 002F5F1C  C0 22 EF 7C */	lfs f1, lbl_8051D2DC@sda21(r2)
/* 802F8FE0 002F5F20  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 802F8FE4 002F5F24  C0 81 00 08 */	lfs f4, 8(r1)
/* 802F8FE8 002F5F28  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 802F8FEC 002F5F2C  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 802F8FF0 002F5F30  38 61 00 60 */	addi r3, r1, 0x60
/* 802F8FF4 002F5F34  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802F8FF8 002F5F38  38 A0 00 00 */	li r5, 0
/* 802F8FFC 002F5F3C  C0 02 EF 80 */	lfs f0, lbl_8051D2E0@sda21(r2)
/* 802F9000 002F5F40  38 C0 00 0C */	li r6, 0xc
/* 802F9004 002F5F44  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802F9008 002F5F48  38 E0 00 09 */	li r7, 9
/* 802F900C 002F5F4C  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 802F9010 002F5F50  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 802F9014 002F5F54  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 802F9018 002F5F58  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 802F901C 002F5F5C  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 802F9020 002F5F60  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802F9024 002F5F64  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802F9028 002F5F68  4B DC 88 15 */	bl __construct_array
/* 802F902C 002F5F6C  3B 81 00 60 */	addi r28, r1, 0x60
/* 802F9030 002F5F70  38 00 00 03 */	li r0, 3
/* 802F9034 002F5F74  7F 64 DB 78 */	mr r4, r27
/* 802F9038 002F5F78  7F 85 E3 78 */	mr r5, r28
/* 802F903C 002F5F7C  7C 09 03 A6 */	mtctr r0
.L_802F9040:
/* 802F9040 002F5F80  80 64 00 00 */	lwz r3, 0(r4)
/* 802F9044 002F5F84  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F9048 002F5F88  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F904C 002F5F8C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F9050 002F5F90  D0 05 00 00 */	stfs f0, 0(r5)
/* 802F9054 002F5F94  D0 25 00 04 */	stfs f1, 4(r5)
/* 802F9058 002F5F98  D0 45 00 08 */	stfs f2, 8(r5)
/* 802F905C 002F5F9C  80 64 00 04 */	lwz r3, 4(r4)
/* 802F9060 002F5FA0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F9064 002F5FA4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F9068 002F5FA8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F906C 002F5FAC  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 802F9070 002F5FB0  D0 25 00 10 */	stfs f1, 0x10(r5)
/* 802F9074 002F5FB4  D0 45 00 14 */	stfs f2, 0x14(r5)
/* 802F9078 002F5FB8  80 64 00 08 */	lwz r3, 8(r4)
/* 802F907C 002F5FBC  38 84 00 0C */	addi r4, r4, 0xc
/* 802F9080 002F5FC0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F9084 002F5FC4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F9088 002F5FC8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F908C 002F5FCC  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 802F9090 002F5FD0  D0 25 00 1C */	stfs f1, 0x1c(r5)
/* 802F9094 002F5FD4  D0 45 00 20 */	stfs f2, 0x20(r5)
/* 802F9098 002F5FD8  38 A5 00 24 */	addi r5, r5, 0x24
/* 802F909C 002F5FDC  42 00 FF A4 */	bdnz .L_802F9040
/* 802F90A0 002F5FE0  3C 80 80 49 */	lis r4, "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha
/* 802F90A4 002F5FE4  3C 60 80 49 */	lis r3, "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha
/* 802F90A8 002F5FE8  7F 7E DB 78 */	mr r30, r27
/* 802F90AC 002F5FEC  3B 60 00 00 */	li r27, 0
/* 802F90B0 002F5FF0  3B E4 D3 24 */	addi r31, r4, "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l
/* 802F90B4 002F5FF4  3B A3 D3 00 */	addi r29, r3, "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l
.L_802F90B8:
/* 802F90B8 002F5FF8  C0 1F 00 00 */	lfs f0, 0(r31)
/* 802F90BC 002F5FFC  2C 1B 00 08 */	cmpwi r27, 8
/* 802F90C0 002F6000  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802F90C4 002F6004  40 80 00 28 */	bge .L_802F90EC
/* 802F90C8 002F6008  38 1B 00 01 */	addi r0, r27, 1
/* 802F90CC 002F600C  38 C1 00 60 */	addi r6, r1, 0x60
/* 802F90D0 002F6010  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802F90D4 002F6014  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 802F90D8 002F6018  7F 85 E3 78 */	mr r5, r28
/* 802F90DC 002F601C  38 81 00 38 */	addi r4, r1, 0x38
/* 802F90E0 002F6020  7C C6 02 14 */	add r6, r6, r0
/* 802F90E4 002F6024  4B FF F8 C9 */	bl "makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
/* 802F90E8 002F6028  48 00 00 A4 */	b .L_802F918C
.L_802F90EC:
/* 802F90EC 002F602C  80 7E 00 00 */	lwz r3, 0(r30)
/* 802F90F0 002F6030  38 81 00 38 */	addi r4, r1, 0x38
/* 802F90F4 002F6034  C0 62 EF 8C */	lfs f3, lbl_8051D2EC@sda21(r2)
/* 802F90F8 002F6038  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802F90FC 002F603C  C0 A3 00 00 */	lfs f5, 0(r3)
/* 802F9100 002F6040  38 C1 00 20 */	addi r6, r1, 0x20
/* 802F9104 002F6044  C0 5C 00 00 */	lfs f2, 0(r28)
/* 802F9108 002F6048  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 802F910C 002F604C  ED 45 00 F2 */	fmuls f10, f5, f3
/* 802F9110 002F6050  FC 00 28 18 */	frsp f0, f5
/* 802F9114 002F6054  C0 DC 00 04 */	lfs f6, 4(r28)
/* 802F9118 002F6058  C1 83 00 10 */	lfs f12, 0x10(r3)
/* 802F911C 002F605C  C0 9C 00 08 */	lfs f4, 8(r28)
/* 802F9120 002F6060  EC EA 10 2A */	fadds f7, f10, f2
/* 802F9124 002F6064  D1 81 00 30 */	stfs f12, 0x30(r1)
/* 802F9128 002F6068  ED 2C 00 F2 */	fmuls f9, f12, f3
/* 802F912C 002F606C  C1 63 00 20 */	lfs f11, 0x20(r3)
/* 802F9130 002F6070  FC 20 60 18 */	frsp f1, f12
/* 802F9134 002F6074  EC 40 10 2A */	fadds f2, f0, f2
/* 802F9138 002F6078  ED 0B 00 F2 */	fmuls f8, f11, f3
/* 802F913C 002F607C  D1 61 00 34 */	stfs f11, 0x34(r1)
/* 802F9140 002F6080  FC 00 58 18 */	frsp f0, f11
/* 802F9144 002F6084  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 802F9148 002F6088  EC A9 30 2A */	fadds f5, f9, f6
/* 802F914C 002F608C  EC 68 20 2A */	fadds f3, f8, f4
/* 802F9150 002F6090  D1 41 00 2C */	stfs f10, 0x2c(r1)
/* 802F9154 002F6094  EC 21 30 2A */	fadds f1, f1, f6
/* 802F9158 002F6098  EC 00 20 2A */	fadds f0, f0, f4
/* 802F915C 002F609C  D1 81 00 24 */	stfs f12, 0x24(r1)
/* 802F9160 002F60A0  D1 61 00 28 */	stfs f11, 0x28(r1)
/* 802F9164 002F60A4  D1 21 00 30 */	stfs f9, 0x30(r1)
/* 802F9168 002F60A8  D1 01 00 34 */	stfs f8, 0x34(r1)
/* 802F916C 002F60AC  D0 E1 00 2C */	stfs f7, 0x2c(r1)
/* 802F9170 002F60B0  D0 A1 00 30 */	stfs f5, 0x30(r1)
/* 802F9174 002F60B4  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 802F9178 002F60B8  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802F917C 002F60BC  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802F9180 002F60C0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802F9184 002F60C4  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 802F9188 002F60C8  4B FF F8 25 */	bl "makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
.L_802F918C:
/* 802F918C 002F60CC  C0 1D 00 00 */	lfs f0, 0(r29)
/* 802F9190 002F60D0  38 81 00 38 */	addi r4, r1, 0x38
/* 802F9194 002F60D4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802F9198 002F60D8  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802F919C 002F60DC  80 7E 00 00 */	lwz r3, 0(r30)
/* 802F91A0 002F60E0  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F91A4 002F60E4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F91A8 002F60E8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F91AC 002F60EC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802F91B0 002F60F0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802F91B4 002F60F4  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 802F91B8 002F60F8  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 802F91BC 002F60FC  4B FF FA 1D */	bl "makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
/* 802F91C0 002F6100  3B 7B 00 01 */	addi r27, r27, 1
/* 802F91C4 002F6104  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802F91C8 002F6108  2C 1B 00 09 */	cmpwi r27, 9
/* 802F91CC 002F610C  3B DE 00 04 */	addi r30, r30, 4
/* 802F91D0 002F6110  3B BD 00 04 */	addi r29, r29, 4
/* 802F91D4 002F6114  3B FF 00 04 */	addi r31, r31, 4
/* 802F91D8 002F6118  41 80 FE E0 */	blt .L_802F90B8
.L_802F91DC:
/* 802F91DC 002F611C  BB 61 00 DC */	lmw r27, 0xdc(r1)
/* 802F91E0 002F6120  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 802F91E4 002F6124  7C 08 03 A6 */	mtlr r0
/* 802F91E8 002F6128  38 21 00 F0 */	addi r1, r1, 0xf0
/* 802F91EC 002F612C  4E 80 00 20 */	blr 
.endfn update__Q34Game10SnakeWhole19SnakeWholeShadowMgrFv

.fn __dt__Q24Game26SnakeWholeSphereShadowNodeFv, weak
/* 802F91F0 002F6130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F91F4 002F6134  7C 08 02 A6 */	mflr r0
/* 802F91F8 002F6138  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F91FC 002F613C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9200 002F6140  7C 9F 23 78 */	mr r31, r4
/* 802F9204 002F6144  93 C1 00 08 */	stw r30, 8(r1)
/* 802F9208 002F6148  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F920C 002F614C  41 82 00 38 */	beq .L_802F9244
/* 802F9210 002F6150  3C 80 80 4D */	lis r4, __vt__Q24Game26SnakeWholeSphereShadowNode@ha
/* 802F9214 002F6154  38 04 5A 00 */	addi r0, r4, __vt__Q24Game26SnakeWholeSphereShadowNode@l
/* 802F9218 002F6158  90 1E 00 00 */	stw r0, 0(r30)
/* 802F921C 002F615C  41 82 00 18 */	beq .L_802F9234
/* 802F9220 002F6160  3C A0 80 4C */	lis r5, __vt__Q24Game15JointShadowNode@ha
/* 802F9224 002F6164  38 80 00 00 */	li r4, 0
/* 802F9228 002F6168  38 05 1A 34 */	addi r0, r5, __vt__Q24Game15JointShadowNode@l
/* 802F922C 002F616C  90 1E 00 00 */	stw r0, 0(r30)
/* 802F9230 002F6170  48 11 83 59 */	bl __dt__5CNodeFv
.L_802F9234:
/* 802F9234 002F6174  7F E0 07 35 */	extsh. r0, r31
/* 802F9238 002F6178  40 81 00 0C */	ble .L_802F9244
/* 802F923C 002F617C  7F C3 F3 78 */	mr r3, r30
/* 802F9240 002F6180  4B D2 AE 75 */	bl __dl__FPv
.L_802F9244:
/* 802F9244 002F6184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9248 002F6188  7F C3 F3 78 */	mr r3, r30
/* 802F924C 002F618C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9250 002F6190  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F9254 002F6194  7C 08 03 A6 */	mtlr r0
/* 802F9258 002F6198  38 21 00 10 */	addi r1, r1, 0x10
/* 802F925C 002F619C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game26SnakeWholeSphereShadowNodeFv

.fn __dt__Q24Game24SnakeWholeTubeShadowNodeFv, weak
/* 802F9260 002F61A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9264 002F61A4  7C 08 02 A6 */	mflr r0
/* 802F9268 002F61A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F926C 002F61AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9270 002F61B0  7C 9F 23 78 */	mr r31, r4
/* 802F9274 002F61B4  93 C1 00 08 */	stw r30, 8(r1)
/* 802F9278 002F61B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F927C 002F61BC  41 82 00 38 */	beq .L_802F92B4
/* 802F9280 002F61C0  3C 80 80 4D */	lis r4, __vt__Q24Game24SnakeWholeTubeShadowNode@ha
/* 802F9284 002F61C4  38 04 5A 10 */	addi r0, r4, __vt__Q24Game24SnakeWholeTubeShadowNode@l
/* 802F9288 002F61C8  90 1E 00 00 */	stw r0, 0(r30)
/* 802F928C 002F61CC  41 82 00 18 */	beq .L_802F92A4
/* 802F9290 002F61D0  3C A0 80 4C */	lis r5, __vt__Q24Game15JointShadowNode@ha
/* 802F9294 002F61D4  38 80 00 00 */	li r4, 0
/* 802F9298 002F61D8  38 05 1A 34 */	addi r0, r5, __vt__Q24Game15JointShadowNode@l
/* 802F929C 002F61DC  90 1E 00 00 */	stw r0, 0(r30)
/* 802F92A0 002F61E0  48 11 82 E9 */	bl __dt__5CNodeFv
.L_802F92A4:
/* 802F92A4 002F61E4  7F E0 07 35 */	extsh. r0, r31
/* 802F92A8 002F61E8  40 81 00 0C */	ble .L_802F92B4
/* 802F92AC 002F61EC  7F C3 F3 78 */	mr r3, r30
/* 802F92B0 002F61F0  4B D2 AE 05 */	bl __dl__FPv
.L_802F92B4:
/* 802F92B4 002F61F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F92B8 002F61F8  7F C3 F3 78 */	mr r3, r30
/* 802F92BC 002F61FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F92C0 002F6200  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F92C4 002F6204  7C 08 03 A6 */	mtlr r0
/* 802F92C8 002F6208  38 21 00 10 */	addi r1, r1, 0x10
/* 802F92CC 002F620C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game24SnakeWholeTubeShadowNodeFv
