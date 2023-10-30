.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_ebiMainTitleMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80497880, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80497880
.balign 4
.obj lbl_8049788C, local
	.asciz "ebiMainTitleMgr"
.endobj lbl_8049788C
.balign 4
.obj lbl_8049789C, local
	.asciz "TMainTitleMgr::loadResource"
.endobj lbl_8049789C
.balign 4
.obj lbl_804978B8, local
	.asciz "TTitleMenu::loadResource"
.endobj lbl_804978B8
.balign 4
.obj lbl_804978D4, local
	.asciz "title.szs"
.endobj lbl_804978D4
.balign 4
.obj lbl_804978E0, local
	.asciz "ebiMainTitleMgr.cpp"
.endobj lbl_804978E0
.balign 4
.obj lbl_804978F4, local
	.asciz "P2Assert"
.endobj lbl_804978F4
.balign 4
.obj lbl_80497900, local
	.asciz "ArgClose"
.endobj lbl_80497900

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q33ebi6Screen14ArgCloseTMBack, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen8ArgCloseFv
.endobj __vt__Q33ebi6Screen14ArgCloseTMBack
.obj __vt__Q33ebi6Screen8ArgClose, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen8ArgCloseFv
.endobj __vt__Q33ebi6Screen8ArgClose
.obj __vt__Q33ebi6Screen16ArgOpenTitleMenu, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen7ArgOpenFv
.endobj __vt__Q33ebi6Screen16ArgOpenTitleMenu
.obj __vt__Q33ebi6Screen13ArgOpenTMBack, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen7ArgOpenFv
.endobj __vt__Q33ebi6Screen13ArgOpenTMBack
.obj __vt__Q33ebi6Screen7ArgOpen, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen7ArgOpenFv
.endobj __vt__Q33ebi6Screen7ArgOpen

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj kFadeOutTime__Q23ebi13TMainTitleMgr, global
	.float 1.0
.endobj kFadeOutTime__Q23ebi13TMainTitleMgr
.obj lbl_8051FE14, local
	.float 5.0
.endobj lbl_8051FE14
.obj lbl_8051FE18, local
	.float 0.0
.endobj lbl_8051FE18
.obj lbl_8051FE1C, local
	.float 1.0
.endobj lbl_8051FE1C
.balign 8
.obj lbl_8051FE20, local
	.8byte 0x4330000000000000
.endobj lbl_8051FE20
.balign 4
.obj lbl_8051FE28, local
	.asciz "ArgOpen"
.endobj lbl_8051FE28

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q23ebi13TMainTitleMgrFv, global
/* 803EA170 003E70B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EA174 003E70B4  7C 08 02 A6 */	mflr r0
/* 803EA178 003E70B8  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803EA17C 003E70BC  39 00 00 00 */	li r8, 0
/* 803EA180 003E70C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EA184 003E70C4  38 04 87 E8 */	addi r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803EA188 003E70C8  3C A0 80 4F */	lis r5, __vt__Q33ebi6Screen10TTitleMenu@ha
/* 803EA18C 003E70CC  38 E0 00 06 */	li r7, 6
/* 803EA190 003E70D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EA194 003E70D4  7C 7F 1B 78 */	mr r31, r3
/* 803EA198 003E70D8  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803EA19C 003E70DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EA1A0 003E70E0  7F E6 FB 78 */	mr r6, r31
/* 803EA1A4 003E70E4  7C DE 33 78 */	mr r30, r6
/* 803EA1A8 003E70E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EA1AC 003E70EC  90 1F 00 00 */	stw r0, 0(r31)
/* 803EA1B0 003E70F0  38 03 8C 90 */	addi r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
/* 803EA1B4 003E70F4  3C 60 80 3F */	lis r3, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@ha
/* 803EA1B8 003E70F8  90 06 00 00 */	stw r0, 0(r6)
/* 803EA1BC 003E70FC  38 05 8F 30 */	addi r0, r5, __vt__Q33ebi6Screen10TTitleMenu@l
/* 803EA1C0 003E7100  38 83 B1 64 */	addi r4, r3, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@l
/* 803EA1C4 003E7104  38 7E 00 4C */	addi r3, r30, 0x4c
/* 803EA1C8 003E7108  91 06 00 04 */	stw r8, 4(r6)
/* 803EA1CC 003E710C  38 A0 00 00 */	li r5, 0
/* 803EA1D0 003E7110  91 06 00 08 */	stw r8, 8(r6)
/* 803EA1D4 003E7114  38 C0 00 0C */	li r6, 0xc
/* 803EA1D8 003E7118  90 1E 00 00 */	stw r0, 0(r30)
/* 803EA1DC 003E711C  91 1E 00 14 */	stw r8, 0x14(r30)
/* 803EA1E0 003E7120  91 1E 00 18 */	stw r8, 0x18(r30)
/* 803EA1E4 003E7124  99 1E 00 40 */	stb r8, 0x40(r30)
/* 803EA1E8 003E7128  91 1E 00 44 */	stw r8, 0x44(r30)
/* 803EA1EC 003E712C  91 1E 00 48 */	stw r8, 0x48(r30)
/* 803EA1F0 003E7130  4B CD 76 4D */	bl __construct_array
/* 803EA1F4 003E7134  3C 80 80 3F */	lis r4, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@ha
/* 803EA1F8 003E7138  38 7E 00 94 */	addi r3, r30, 0x94
/* 803EA1FC 003E713C  38 84 B1 64 */	addi r4, r4, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@l
/* 803EA200 003E7140  38 A0 00 00 */	li r5, 0
/* 803EA204 003E7144  38 C0 00 0C */	li r6, 0xc
/* 803EA208 003E7148  38 E0 00 06 */	li r7, 6
/* 803EA20C 003E714C  4B CD 76 31 */	bl __construct_array
/* 803EA210 003E7150  38 00 00 00 */	li r0, 0
/* 803EA214 003E7154  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA218 003E7158  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA21C 003E715C  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 803EA220 003E7160  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA224 003E7164  38 7E 0A 74 */	addi r3, r30, 0xa74
/* 803EA228 003E7168  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA22C 003E716C  38 C0 00 3C */	li r6, 0x3c
/* 803EA230 003E7170  38 E0 00 0C */	li r7, 0xc
/* 803EA234 003E7174  4B CD 76 09 */	bl __construct_array
/* 803EA238 003E7178  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA23C 003E717C  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA240 003E7180  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA244 003E7184  38 C0 00 3C */	li r6, 0x3c
/* 803EA248 003E7188  38 7E 0D 44 */	addi r3, r30, 0xd44
/* 803EA24C 003E718C  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA250 003E7190  38 E0 00 06 */	li r7, 6
/* 803EA254 003E7194  4B CD 75 E9 */	bl __construct_array
/* 803EA258 003E7198  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA25C 003E719C  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA260 003E71A0  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA264 003E71A4  38 C0 00 3C */	li r6, 0x3c
/* 803EA268 003E71A8  38 7E 0E AC */	addi r3, r30, 0xeac
/* 803EA26C 003E71AC  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA270 003E71B0  38 E0 00 06 */	li r7, 6
/* 803EA274 003E71B4  4B CD 75 C9 */	bl __construct_array
/* 803EA278 003E71B8  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA27C 003E71BC  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA280 003E71C0  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA284 003E71C4  38 C0 00 3C */	li r6, 0x3c
/* 803EA288 003E71C8  38 7E 10 14 */	addi r3, r30, 0x1014
/* 803EA28C 003E71CC  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA290 003E71D0  38 E0 00 06 */	li r7, 6
/* 803EA294 003E71D4  4B CD 75 A9 */	bl __construct_array
/* 803EA298 003E71D8  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA29C 003E71DC  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA2A0 003E71E0  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA2A4 003E71E4  38 C0 00 3C */	li r6, 0x3c
/* 803EA2A8 003E71E8  38 7E 11 7C */	addi r3, r30, 0x117c
/* 803EA2AC 003E71EC  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA2B0 003E71F0  38 E0 00 06 */	li r7, 6
/* 803EA2B4 003E71F4  4B CD 75 89 */	bl __construct_array
/* 803EA2B8 003E71F8  3B BE 12 E4 */	addi r29, r30, 0x12e4
/* 803EA2BC 003E71FC  7F A3 EB 78 */	mr r3, r29
/* 803EA2C0 003E7200  48 02 70 D1 */	bl __ct__5CNodeFv
/* 803EA2C4 003E7204  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803EA2C8 003E7208  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EA2CC 003E720C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803EA2D0 003E7210  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EA2D4 003E7214  90 1D 00 00 */	stw r0, 0(r29)
/* 803EA2D8 003E7218  38 00 00 00 */	li r0, 0
/* 803EA2DC 003E721C  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EA2E0 003E7220  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EA2E4 003E7224  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803EA2E8 003E7228  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803EA2EC 003E722C  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EA2F0 003E7230  38 C0 00 01 */	li r6, 1
/* 803EA2F4 003E7234  90 1D 00 00 */	stw r0, 0(r29)
/* 803EA2F8 003E7238  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EA2FC 003E723C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EA300 003E7240  38 7D 00 20 */	addi r3, r29, 0x20
/* 803EA304 003E7244  90 FD 00 00 */	stw r7, 0(r29)
/* 803EA308 003E7248  38 80 00 00 */	li r4, 0
/* 803EA30C 003E724C  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803EA310 003E7250  90 BD 00 00 */	stw r5, 0(r29)
/* 803EA314 003E7254  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803EA318 003E7258  4B C7 D3 61 */	bl init__12J3DFrameCtrlFs
/* 803EA31C 003E725C  3B BE 13 20 */	addi r29, r30, 0x1320
/* 803EA320 003E7260  7F A3 EB 78 */	mr r3, r29
/* 803EA324 003E7264  48 02 70 6D */	bl __ct__5CNodeFv
/* 803EA328 003E7268  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803EA32C 003E726C  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EA330 003E7270  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803EA334 003E7274  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EA338 003E7278  90 1D 00 00 */	stw r0, 0(r29)
/* 803EA33C 003E727C  38 00 00 00 */	li r0, 0
/* 803EA340 003E7280  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EA344 003E7284  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EA348 003E7288  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803EA34C 003E728C  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803EA350 003E7290  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EA354 003E7294  38 C0 00 01 */	li r6, 1
/* 803EA358 003E7298  90 1D 00 00 */	stw r0, 0(r29)
/* 803EA35C 003E729C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EA360 003E72A0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EA364 003E72A4  38 7D 00 20 */	addi r3, r29, 0x20
/* 803EA368 003E72A8  90 FD 00 00 */	stw r7, 0(r29)
/* 803EA36C 003E72AC  38 80 00 00 */	li r4, 0
/* 803EA370 003E72B0  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803EA374 003E72B4  90 BD 00 00 */	stw r5, 0(r29)
/* 803EA378 003E72B8  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803EA37C 003E72BC  4B C7 D2 FD */	bl init__12J3DFrameCtrlFs
/* 803EA380 003E72C0  3B DE 13 5C */	addi r30, r30, 0x135c
/* 803EA384 003E72C4  7F C3 F3 78 */	mr r3, r30
/* 803EA388 003E72C8  48 02 70 09 */	bl __ct__5CNodeFv
/* 803EA38C 003E72CC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803EA390 003E72D0  39 40 00 00 */	li r10, 0
/* 803EA394 003E72D4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803EA398 003E72D8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EA39C 003E72DC  90 1E 00 00 */	stw r0, 0(r30)
/* 803EA3A0 003E72E0  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803EA3A4 003E72E4  3C 80 80 3E */	lis r4, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA3A8 003E72E8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EA3AC 003E72EC  91 5E 00 18 */	stw r10, 0x18(r30)
/* 803EA3B0 003E72F0  3D 20 80 4F */	lis r9, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803EA3B4 003E72F4  3D 00 80 4F */	lis r8, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803EA3B8 003E72F8  3C E0 80 4F */	lis r7, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803EA3BC 003E72FC  90 1E 00 00 */	stw r0, 0(r30)
/* 803EA3C0 003E7300  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EA3C4 003E7304  3C 60 80 3D */	lis r3, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA3C8 003E7308  3C C0 80 4F */	lis r6, __vt__Q33ebi6Screen11TPressStart@ha
/* 803EA3CC 003E730C  90 1E 00 00 */	stw r0, 0(r30)
/* 803EA3D0 003E7310  38 00 00 01 */	li r0, 1
/* 803EA3D4 003E7314  38 A3 FF 94 */	addi r5, r3, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA3D8 003E7318  38 68 87 E8 */	addi r3, r8, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803EA3DC 003E731C  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 803EA3E0 003E7320  38 09 88 0C */	addi r0, r9, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803EA3E4 003E7324  39 07 8C 90 */	addi r8, r7, __vt__Q33ebi6Screen11TScreenBase@l
/* 803EA3E8 003E7328  38 84 9A 64 */	addi r4, r4, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA3EC 003E732C  90 1E 00 00 */	stw r0, 0(r30)
/* 803EA3F0 003E7330  38 06 8C E0 */	addi r0, r6, __vt__Q33ebi6Screen11TPressStart@l
/* 803EA3F4 003E7334  38 C0 00 3C */	li r6, 0x3c
/* 803EA3F8 003E7338  38 E0 00 04 */	li r7, 4
/* 803EA3FC 003E733C  90 7F 13 7C */	stw r3, 0x137c(r31)
/* 803EA400 003E7340  38 7F 13 AC */	addi r3, r31, 0x13ac
/* 803EA404 003E7344  91 1F 13 7C */	stw r8, 0x137c(r31)
/* 803EA408 003E7348  91 5F 13 80 */	stw r10, 0x1380(r31)
/* 803EA40C 003E734C  91 5F 13 84 */	stw r10, 0x1384(r31)
/* 803EA410 003E7350  90 1F 13 7C */	stw r0, 0x137c(r31)
/* 803EA414 003E7354  91 5F 13 88 */	stw r10, 0x1388(r31)
/* 803EA418 003E7358  91 5F 13 90 */	stw r10, 0x1390(r31)
/* 803EA41C 003E735C  91 5F 13 A4 */	stw r10, 0x13a4(r31)
/* 803EA420 003E7360  91 5F 13 A8 */	stw r10, 0x13a8(r31)
/* 803EA424 003E7364  4B CD 74 19 */	bl __construct_array
/* 803EA428 003E7368  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA42C 003E736C  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803EA430 003E7370  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA434 003E7374  38 C0 00 3C */	li r6, 0x3c
/* 803EA438 003E7378  38 7F 14 9C */	addi r3, r31, 0x149c
/* 803EA43C 003E737C  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803EA440 003E7380  38 E0 00 04 */	li r7, 4
/* 803EA444 003E7384  4B CD 73 F9 */	bl __construct_array
/* 803EA448 003E7388  3C 60 80 3F */	lis r3, __ct__Q23ebi25E2DCallBack_CalcAnimationFv@ha
/* 803EA44C 003E738C  3C A0 80 3D */	lis r5, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@ha
/* 803EA450 003E7390  38 83 B0 F4 */	addi r4, r3, __ct__Q23ebi25E2DCallBack_CalcAnimationFv@l
/* 803EA454 003E7394  38 C0 00 20 */	li r6, 0x20
/* 803EA458 003E7398  38 7F 15 8C */	addi r3, r31, 0x158c
/* 803EA45C 003E739C  38 A5 FF 04 */	addi r5, r5, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@l
/* 803EA460 003E73A0  38 E0 00 04 */	li r7, 4
/* 803EA464 003E73A4  4B CD 73 D9 */	bl __construct_array
/* 803EA468 003E73A8  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803EA46C 003E73AC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803EA470 003E73B0  38 E4 87 E8 */	addi r7, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803EA474 003E73B4  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen7TTMBack@ha
/* 803EA478 003E73B8  90 FF 16 0C */	stw r7, 0x160c(r31)
/* 803EA47C 003E73BC  38 C3 8C 90 */	addi r6, r3, __vt__Q33ebi6Screen11TScreenBase@l
/* 803EA480 003E73C0  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen13TNintendoLogo@ha
/* 803EA484 003E73C4  38 A0 00 00 */	li r5, 0
/* 803EA488 003E73C8  90 DF 16 0C */	stw r6, 0x160c(r31)
/* 803EA48C 003E73CC  38 84 9F 14 */	addi r4, r4, __vt__Q33ebi6Screen7TTMBack@l
/* 803EA490 003E73D0  38 63 9E C8 */	addi r3, r3, __vt__Q33ebi6Screen13TNintendoLogo@l
/* 803EA494 003E73D4  38 00 00 FF */	li r0, 0xff
/* 803EA498 003E73D8  90 BF 16 10 */	stw r5, 0x1610(r31)
/* 803EA49C 003E73DC  90 BF 16 14 */	stw r5, 0x1614(r31)
/* 803EA4A0 003E73E0  90 9F 16 0C */	stw r4, 0x160c(r31)
/* 803EA4A4 003E73E4  90 BF 16 18 */	stw r5, 0x1618(r31)
/* 803EA4A8 003E73E8  90 BF 16 1C */	stw r5, 0x161c(r31)
/* 803EA4AC 003E73EC  90 BF 16 20 */	stw r5, 0x1620(r31)
/* 803EA4B0 003E73F0  90 BF 16 1C */	stw r5, 0x161c(r31)
/* 803EA4B4 003E73F4  90 BF 16 20 */	stw r5, 0x1620(r31)
/* 803EA4B8 003E73F8  90 FF 16 24 */	stw r7, 0x1624(r31)
/* 803EA4BC 003E73FC  90 DF 16 24 */	stw r6, 0x1624(r31)
/* 803EA4C0 003E7400  90 BF 16 28 */	stw r5, 0x1628(r31)
/* 803EA4C4 003E7404  90 BF 16 2C */	stw r5, 0x162c(r31)
/* 803EA4C8 003E7408  90 7F 16 24 */	stw r3, 0x1624(r31)
/* 803EA4CC 003E740C  90 BF 16 30 */	stw r5, 0x1630(r31)
/* 803EA4D0 003E7410  98 BF 16 34 */	stb r5, 0x1634(r31)
/* 803EA4D4 003E7414  98 BF 16 35 */	stb r5, 0x1635(r31)
/* 803EA4D8 003E7418  98 BF 16 36 */	stb r5, 0x1636(r31)
/* 803EA4DC 003E741C  98 1F 16 37 */	stb r0, 0x1637(r31)
/* 803EA4E0 003E7420  98 1F 16 38 */	stb r0, 0x1638(r31)
/* 803EA4E4 003E7424  90 BF 16 3C */	stw r5, 0x163c(r31)
/* 803EA4E8 003E7428  90 BF 16 40 */	stw r5, 0x1640(r31)
/* 803EA4EC 003E742C  90 BF 16 44 */	stw r5, 0x1644(r31)
/* 803EA4F0 003E7430  90 BF 16 5C */	stw r5, 0x165c(r31)
/* 803EA4F4 003E7434  90 BF 16 60 */	stw r5, 0x1660(r31)
/* 803EA4F8 003E7438  4B FD 42 7D */	bl globalInstance__Q33ebi5title9TTitleMgrFv
/* 803EA4FC 003E743C  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA500 003E7440  4B FD 43 31 */	bl init__Q33ebi5title9TTitleMgrFv
/* 803EA504 003E7444  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EA508 003E7448  7F E3 FB 78 */	mr r3, r31
/* 803EA50C 003E744C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EA510 003E7450  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EA514 003E7454  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EA518 003E7458  7C 08 03 A6 */	mtlr r0
/* 803EA51C 003E745C  38 21 00 20 */	addi r1, r1, 0x20
/* 803EA520 003E7460  4E 80 00 20 */	blr 
.endfn __ct__Q23ebi13TMainTitleMgrFv

.fn setMode__Q23ebi13TMainTitleMgrFl, global
/* 803EA524 003E7464  2C 04 00 02 */	cmpwi r4, 2
/* 803EA528 003E7468  41 82 00 44 */	beq .L_803EA56C
/* 803EA52C 003E746C  40 80 00 14 */	bge .L_803EA540
/* 803EA530 003E7470  2C 04 00 00 */	cmpwi r4, 0
/* 803EA534 003E7474  41 82 00 18 */	beq .L_803EA54C
/* 803EA538 003E7478  40 80 00 24 */	bge .L_803EA55C
/* 803EA53C 003E747C  4E 80 00 20 */	blr 
.L_803EA540:
/* 803EA540 003E7480  2C 04 00 04 */	cmpwi r4, 4
/* 803EA544 003E7484  4C 80 00 20 */	bgelr 
/* 803EA548 003E7488  48 00 00 34 */	b .L_803EA57C
.L_803EA54C:
/* 803EA54C 003E748C  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA550 003E7490  38 00 00 00 */	li r0, 0
/* 803EA554 003E7494  90 03 0F 5C */	stw r0, 0xf5c(r3)
/* 803EA558 003E7498  4E 80 00 20 */	blr 
.L_803EA55C:
/* 803EA55C 003E749C  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA560 003E74A0  38 00 00 01 */	li r0, 1
/* 803EA564 003E74A4  90 03 0F 5C */	stw r0, 0xf5c(r3)
/* 803EA568 003E74A8  4E 80 00 20 */	blr 
.L_803EA56C:
/* 803EA56C 003E74AC  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA570 003E74B0  38 00 00 02 */	li r0, 2
/* 803EA574 003E74B4  90 03 0F 5C */	stw r0, 0xf5c(r3)
/* 803EA578 003E74B8  4E 80 00 20 */	blr 
.L_803EA57C:
/* 803EA57C 003E74BC  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA580 003E74C0  38 00 00 03 */	li r0, 3
/* 803EA584 003E74C4  90 03 0F 5C */	stw r0, 0xf5c(r3)
/* 803EA588 003E74C8  4E 80 00 20 */	blr 
.endfn setMode__Q23ebi13TMainTitleMgrFl

.fn loadResource__Q23ebi13TMainTitleMgrFv, global
/* 803EA58C 003E74CC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 803EA590 003E74D0  7C 08 02 A6 */	mflr r0
/* 803EA594 003E74D4  3C 80 80 49 */	lis r4, lbl_80497880@ha
/* 803EA598 003E74D8  38 A0 00 00 */	li r5, 0
/* 803EA59C 003E74DC  90 01 01 24 */	stw r0, 0x124(r1)
/* 803EA5A0 003E74E0  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 803EA5A4 003E74E4  3B E4 78 80 */	addi r31, r4, lbl_80497880@l
/* 803EA5A8 003E74E8  38 9F 00 1C */	addi r4, r31, 0x1c
/* 803EA5AC 003E74EC  93 C1 01 18 */	stw r30, 0x118(r1)
/* 803EA5B0 003E74F0  93 A1 01 14 */	stw r29, 0x114(r1)
/* 803EA5B4 003E74F4  7C 7D 1B 78 */	mr r29, r3
/* 803EA5B8 003E74F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA5BC 003E74FC  48 03 8D A1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803EA5C0 003E7500  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA5C4 003E7504  38 9F 00 38 */	addi r4, r31, 0x38
/* 803EA5C8 003E7508  38 A0 00 00 */	li r5, 0
/* 803EA5CC 003E750C  48 03 8D 91 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803EA5D0 003E7510  38 61 00 08 */	addi r3, r1, 8
/* 803EA5D4 003E7514  38 9F 00 54 */	addi r4, r31, 0x54
/* 803EA5D8 003E7518  4B F2 D9 75 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 803EA5DC 003E751C  38 61 00 08 */	addi r3, r1, 8
/* 803EA5E0 003E7520  38 80 00 01 */	li r4, 1
/* 803EA5E4 003E7524  38 A0 00 00 */	li r5, 0
/* 803EA5E8 003E7528  38 C0 00 01 */	li r6, 1
/* 803EA5EC 003E752C  4B C3 0B 45 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 803EA5F0 003E7530  7C 7E 1B 79 */	or. r30, r3, r3
/* 803EA5F4 003E7534  40 82 00 18 */	bne .L_803EA60C
/* 803EA5F8 003E7538  38 7F 00 60 */	addi r3, r31, 0x60
/* 803EA5FC 003E753C  38 BF 00 74 */	addi r5, r31, 0x74
/* 803EA600 003E7540  38 80 00 45 */	li r4, 0x45
/* 803EA604 003E7544  4C C6 31 82 */	crclr 6
/* 803EA608 003E7548  4B C4 00 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EA60C:
/* 803EA60C 003E754C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA610 003E7550  38 9F 00 38 */	addi r4, r31, 0x38
/* 803EA614 003E7554  48 03 8D 51 */	bl heapStatusEnd__6SystemFPc
/* 803EA618 003E7558  7F A3 EB 78 */	mr r3, r29
/* 803EA61C 003E755C  7F C4 F3 78 */	mr r4, r30
/* 803EA620 003E7560  81 9D 00 00 */	lwz r12, 0(r29)
/* 803EA624 003E7564  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EA628 003E7568  7D 89 03 A6 */	mtctr r12
/* 803EA62C 003E756C  4E 80 04 21 */	bctrl 
/* 803EA630 003E7570  38 7D 13 7C */	addi r3, r29, 0x137c
/* 803EA634 003E7574  7F C4 F3 78 */	mr r4, r30
/* 803EA638 003E7578  81 9D 13 7C */	lwz r12, 0x137c(r29)
/* 803EA63C 003E757C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EA640 003E7580  7D 89 03 A6 */	mtctr r12
/* 803EA644 003E7584  4E 80 04 21 */	bctrl 
/* 803EA648 003E7588  38 7D 16 0C */	addi r3, r29, 0x160c
/* 803EA64C 003E758C  7F C4 F3 78 */	mr r4, r30
/* 803EA650 003E7590  81 9D 16 0C */	lwz r12, 0x160c(r29)
/* 803EA654 003E7594  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EA658 003E7598  7D 89 03 A6 */	mtctr r12
/* 803EA65C 003E759C  4E 80 04 21 */	bctrl 
/* 803EA660 003E75A0  38 7D 16 24 */	addi r3, r29, 0x1624
/* 803EA664 003E75A4  7F C4 F3 78 */	mr r4, r30
/* 803EA668 003E75A8  81 9D 16 24 */	lwz r12, 0x1624(r29)
/* 803EA66C 003E75AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EA670 003E75B0  7D 89 03 A6 */	mtctr r12
/* 803EA674 003E75B4  4E 80 04 21 */	bctrl 
/* 803EA678 003E75B8  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA67C 003E75BC  4B FD 44 2D */	bl loadResource__Q33ebi5title9TTitleMgrFv
/* 803EA680 003E75C0  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA684 003E75C4  4B FD 47 25 */	bl initAfterLoadRes__Q33ebi5title9TTitleMgrFv
/* 803EA688 003E75C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA68C 003E75CC  38 9F 00 1C */	addi r4, r31, 0x1c
/* 803EA690 003E75D0  48 03 8C D5 */	bl heapStatusEnd__6SystemFPc
/* 803EA694 003E75D4  80 01 01 24 */	lwz r0, 0x124(r1)
/* 803EA698 003E75D8  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 803EA69C 003E75DC  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 803EA6A0 003E75E0  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 803EA6A4 003E75E4  7C 08 03 A6 */	mtlr r0
/* 803EA6A8 003E75E8  38 21 01 20 */	addi r1, r1, 0x120
/* 803EA6AC 003E75EC  4E 80 00 20 */	blr 
.endfn loadResource__Q23ebi13TMainTitleMgrFv

.fn setController__Q23ebi13TMainTitleMgrFP10Controller, global
/* 803EA6B0 003E75F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EA6B4 003E75F4  7C 08 02 A6 */	mflr r0
/* 803EA6B8 003E75F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EA6BC 003E75FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EA6C0 003E7600  7C 9F 23 78 */	mr r31, r4
/* 803EA6C4 003E7604  93 C1 00 08 */	stw r30, 8(r1)
/* 803EA6C8 003E7608  7C 7E 1B 78 */	mr r30, r3
/* 803EA6CC 003E760C  4B FF 09 C9 */	bl setController__Q33ebi6Screen10TTitleMenuFP10Controller
/* 803EA6D0 003E7610  93 FE 13 88 */	stw r31, 0x1388(r30)
/* 803EA6D4 003E7614  7F E4 FB 78 */	mr r4, r31
/* 803EA6D8 003E7618  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA6DC 003E761C  4B FD 47 0D */	bl setController__Q33ebi5title9TTitleMgrFP10Controller
/* 803EA6E0 003E7620  93 FE 16 48 */	stw r31, 0x1648(r30)
/* 803EA6E4 003E7624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EA6E8 003E7628  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EA6EC 003E762C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EA6F0 003E7630  7C 08 03 A6 */	mtlr r0
/* 803EA6F4 003E7634  38 21 00 10 */	addi r1, r1, 0x10
/* 803EA6F8 003E7638  4E 80 00 20 */	blr 
.endfn setController__Q23ebi13TMainTitleMgrFP10Controller

.fn start__Q23ebi13TMainTitleMgrFv, global
/* 803EA6FC 003E763C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EA700 003E7640  7C 08 02 A6 */	mflr r0
/* 803EA704 003E7644  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EA708 003E7648  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EA70C 003E764C  7C 7F 1B 78 */	mr r31, r3
/* 803EA710 003E7650  81 83 00 00 */	lwz r12, 0(r3)
/* 803EA714 003E7654  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EA718 003E7658  7D 89 03 A6 */	mtctr r12
/* 803EA71C 003E765C  4E 80 04 21 */	bctrl 
/* 803EA720 003E7660  38 7F 13 7C */	addi r3, r31, 0x137c
/* 803EA724 003E7664  81 9F 13 7C */	lwz r12, 0x137c(r31)
/* 803EA728 003E7668  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EA72C 003E766C  7D 89 03 A6 */	mtctr r12
/* 803EA730 003E7670  4E 80 04 21 */	bctrl 
/* 803EA734 003E7674  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EA738 003E7678  C0 02 1A B4 */	lfs f0, lbl_8051FE14@sda21(r2)
/* 803EA73C 003E767C  38 03 9F 9C */	addi r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EA740 003E7680  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen13ArgOpenTMBack@ha
/* 803EA744 003E7684  90 01 00 08 */	stw r0, 8(r1)
/* 803EA748 003E7688  38 03 9F 90 */	addi r0, r3, __vt__Q33ebi6Screen13ArgOpenTMBack@l
/* 803EA74C 003E768C  38 7F 16 0C */	addi r3, r31, 0x160c
/* 803EA750 003E7690  38 81 00 08 */	addi r4, r1, 8
/* 803EA754 003E7694  90 01 00 08 */	stw r0, 8(r1)
/* 803EA758 003E7698  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EA75C 003E769C  81 9F 16 0C */	lwz r12, 0x160c(r31)
/* 803EA760 003E76A0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EA764 003E76A4  7D 89 03 A6 */	mtctr r12
/* 803EA768 003E76A8  4E 80 04 21 */	bctrl 
/* 803EA76C 003E76AC  38 7F 16 24 */	addi r3, r31, 0x1624
/* 803EA770 003E76B0  38 80 00 00 */	li r4, 0
/* 803EA774 003E76B4  81 9F 16 24 */	lwz r12, 0x1624(r31)
/* 803EA778 003E76B8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EA77C 003E76BC  7D 89 03 A6 */	mtctr r12
/* 803EA780 003E76C0  4E 80 04 21 */	bctrl 
/* 803EA784 003E76C4  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA788 003E76C8  4B FD 49 11 */	bl start__Q33ebi5title9TTitleMgrFv
/* 803EA78C 003E76CC  38 00 00 01 */	li r0, 1
/* 803EA790 003E76D0  38 60 00 00 */	li r3, 0
/* 803EA794 003E76D4  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EA798 003E76D8  38 00 FF FF */	li r0, -1
/* 803EA79C 003E76DC  98 7F 16 55 */	stb r3, 0x1655(r31)
/* 803EA7A0 003E76E0  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EA7A4 003E76E4  90 7F 16 3C */	stw r3, 0x163c(r31)
/* 803EA7A8 003E76E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EA7AC 003E76EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EA7B0 003E76F0  7C 08 03 A6 */	mtlr r0
/* 803EA7B4 003E76F4  38 21 00 20 */	addi r1, r1, 0x20
/* 803EA7B8 003E76F8  4E 80 00 20 */	blr 
.endfn start__Q23ebi13TMainTitleMgrFv

.fn startMenuSet__Q23ebi13TMainTitleMgrFll, global
/* 803EA7BC 003E76FC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EA7C0 003E7700  7C 08 02 A6 */	mflr r0
/* 803EA7C4 003E7704  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EA7C8 003E7708  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803EA7CC 003E770C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803EA7D0 003E7710  7C 7E 1B 78 */	mr r30, r3
/* 803EA7D4 003E7714  90 A3 16 58 */	stw r5, 0x1658(r3)
/* 803EA7D8 003E7718  80 03 16 58 */	lwz r0, 0x1658(r3)
/* 803EA7DC 003E771C  2C 00 00 03 */	cmpwi r0, 3
/* 803EA7E0 003E7720  41 82 00 48 */	beq .L_803EA828
/* 803EA7E4 003E7724  40 80 00 1C */	bge .L_803EA800
/* 803EA7E8 003E7728  2C 00 00 01 */	cmpwi r0, 1
/* 803EA7EC 003E772C  41 82 00 2C */	beq .L_803EA818
/* 803EA7F0 003E7730  40 80 00 30 */	bge .L_803EA820
/* 803EA7F4 003E7734  2C 00 00 00 */	cmpwi r0, 0
/* 803EA7F8 003E7738  40 80 00 18 */	bge .L_803EA810
/* 803EA7FC 003E773C  48 00 00 44 */	b .L_803EA840
.L_803EA800:
/* 803EA800 003E7740  2C 00 00 05 */	cmpwi r0, 5
/* 803EA804 003E7744  41 82 00 34 */	beq .L_803EA838
/* 803EA808 003E7748  40 80 00 38 */	bge .L_803EA840
/* 803EA80C 003E774C  48 00 00 24 */	b .L_803EA830
.L_803EA810:
/* 803EA810 003E7750  3B E0 00 00 */	li r31, 0
/* 803EA814 003E7754  48 00 00 48 */	b .L_803EA85C
.L_803EA818:
/* 803EA818 003E7758  3B E0 00 02 */	li r31, 2
/* 803EA81C 003E775C  48 00 00 40 */	b .L_803EA85C
.L_803EA820:
/* 803EA820 003E7760  3B E0 00 01 */	li r31, 1
/* 803EA824 003E7764  48 00 00 38 */	b .L_803EA85C
.L_803EA828:
/* 803EA828 003E7768  3B E0 00 03 */	li r31, 3
/* 803EA82C 003E776C  48 00 00 30 */	b .L_803EA85C
.L_803EA830:
/* 803EA830 003E7770  3B E0 00 04 */	li r31, 4
/* 803EA834 003E7774  48 00 00 28 */	b .L_803EA85C
.L_803EA838:
/* 803EA838 003E7778  3B E0 00 05 */	li r31, 5
/* 803EA83C 003E777C  48 00 00 20 */	b .L_803EA85C
.L_803EA840:
/* 803EA840 003E7780  3C 60 80 49 */	lis r3, lbl_804978E0@ha
/* 803EA844 003E7784  3C A0 80 49 */	lis r5, lbl_804978F4@ha
/* 803EA848 003E7788  38 63 78 E0 */	addi r3, r3, lbl_804978E0@l
/* 803EA84C 003E778C  38 80 00 B1 */	li r4, 0xb1
/* 803EA850 003E7790  38 A5 78 F4 */	addi r5, r5, lbl_804978F4@l
/* 803EA854 003E7794  4C C6 31 82 */	crclr 6
/* 803EA858 003E7798  4B C3 FD E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EA85C:
/* 803EA85C 003E779C  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803EA860 003E77A0  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 803EA864 003E77A4  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 803EA868 003E77A8  2C 00 00 00 */	cmpwi r0, 0
/* 803EA86C 003E77AC  41 82 00 38 */	beq .L_803EA8A4
/* 803EA870 003E77B0  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EA874 003E77B4  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
/* 803EA878 003E77B8  38 84 9F 9C */	addi r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EA87C 003E77BC  38 00 00 01 */	li r0, 1
/* 803EA880 003E77C0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803EA884 003E77C4  38 A3 9F 84 */	addi r5, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
/* 803EA888 003E77C8  7F C3 F3 78 */	mr r3, r30
/* 803EA88C 003E77CC  38 81 00 1C */	addi r4, r1, 0x1c
/* 803EA890 003E77D0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 803EA894 003E77D4  90 01 00 20 */	stw r0, 0x20(r1)
/* 803EA898 003E77D8  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803EA89C 003E77DC  4B FF 08 01 */	bl openMenuSet__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen
/* 803EA8A0 003E77E0  48 00 00 4C */	b .L_803EA8EC
.L_803EA8A4:
/* 803EA8A4 003E77E4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA8A8 003E77E8  48 03 86 89 */	bl getPlayCommonData__6SystemFv
/* 803EA8AC 003E77EC  4B E4 9E 61 */	bl isChallengeGamePlayable__Q24Game14PlayCommonDataFv
/* 803EA8B0 003E77F0  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 803EA8B4 003E77F4  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EA8B8 003E77F8  7C 05 00 D0 */	neg r0, r5
/* 803EA8BC 003E77FC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
/* 803EA8C0 003E7800  38 84 9F 9C */	addi r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EA8C4 003E7804  93 E1 00 18 */	stw r31, 0x18(r1)
/* 803EA8C8 003E7808  7C 05 2B 78 */	or r5, r0, r5
/* 803EA8CC 003E780C  38 03 9F 84 */	addi r0, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
/* 803EA8D0 003E7810  90 81 00 10 */	stw r4, 0x10(r1)
/* 803EA8D4 003E7814  54 A5 0F FE */	srwi r5, r5, 0x1f
/* 803EA8D8 003E7818  7F C3 F3 78 */	mr r3, r30
/* 803EA8DC 003E781C  38 81 00 10 */	addi r4, r1, 0x10
/* 803EA8E0 003E7820  90 01 00 10 */	stw r0, 0x10(r1)
/* 803EA8E4 003E7824  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803EA8E8 003E7828  4B FF 07 B5 */	bl openMenuSet__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen
.L_803EA8EC:
/* 803EA8EC 003E782C  38 7E 13 7C */	addi r3, r30, 0x137c
/* 803EA8F0 003E7830  81 9E 13 7C */	lwz r12, 0x137c(r30)
/* 803EA8F4 003E7834  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EA8F8 003E7838  7D 89 03 A6 */	mtctr r12
/* 803EA8FC 003E783C  4E 80 04 21 */	bctrl 
/* 803EA900 003E7840  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EA904 003E7844  C0 02 1A B8 */	lfs f0, lbl_8051FE18@sda21(r2)
/* 803EA908 003E7848  38 03 9F 9C */	addi r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EA90C 003E784C  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen13ArgOpenTMBack@ha
/* 803EA910 003E7850  90 01 00 08 */	stw r0, 8(r1)
/* 803EA914 003E7854  38 03 9F 90 */	addi r0, r3, __vt__Q33ebi6Screen13ArgOpenTMBack@l
/* 803EA918 003E7858  38 7E 16 0C */	addi r3, r30, 0x160c
/* 803EA91C 003E785C  38 81 00 08 */	addi r4, r1, 8
/* 803EA920 003E7860  90 01 00 08 */	stw r0, 8(r1)
/* 803EA924 003E7864  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EA928 003E7868  81 9E 16 0C */	lwz r12, 0x160c(r30)
/* 803EA92C 003E786C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EA930 003E7870  7D 89 03 A6 */	mtctr r12
/* 803EA934 003E7874  4E 80 04 21 */	bctrl 
/* 803EA938 003E7878  38 7E 16 24 */	addi r3, r30, 0x1624
/* 803EA93C 003E787C  38 80 00 00 */	li r4, 0
/* 803EA940 003E7880  81 9E 16 24 */	lwz r12, 0x1624(r30)
/* 803EA944 003E7884  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EA948 003E7888  7D 89 03 A6 */	mtctr r12
/* 803EA94C 003E788C  4E 80 04 21 */	bctrl 
/* 803EA950 003E7890  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA954 003E7894  4B FD 47 45 */	bl start__Q33ebi5title9TTitleMgrFv
/* 803EA958 003E7898  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EA95C 003E789C  4B FD 40 FD */	bl setLogo__Q33ebi5title9TTitleMgrFv
/* 803EA960 003E78A0  38 60 00 03 */	li r3, 3
/* 803EA964 003E78A4  38 00 00 00 */	li r0, 0
/* 803EA968 003E78A8  90 7E 16 50 */	stw r3, 0x1650(r30)
/* 803EA96C 003E78AC  C0 22 16 98 */	lfs f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 803EA970 003E78B0  98 1E 16 55 */	stb r0, 0x1655(r30)
/* 803EA974 003E78B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA978 003E78B8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EA97C 003E78BC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EA980 003E78C0  4B CD 71 CD */	bl __cvt_fp2unsigned
/* 803EA984 003E78C4  90 7E 16 40 */	stw r3, 0x1640(r30)
/* 803EA988 003E78C8  38 00 00 01 */	li r0, 1
/* 803EA98C 003E78CC  90 7E 16 44 */	stw r3, 0x1644(r30)
/* 803EA990 003E78D0  90 1E 16 3C */	stw r0, 0x163c(r30)
/* 803EA994 003E78D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803EA998 003E78D8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803EA99C 003E78DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EA9A0 003E78E0  7C 08 03 A6 */	mtlr r0
/* 803EA9A4 003E78E4  38 21 00 30 */	addi r1, r1, 0x30
/* 803EA9A8 003E78E8  4E 80 00 20 */	blr 
.endfn startMenuSet__Q23ebi13TMainTitleMgrFll

.fn forceQuit__Q23ebi13TMainTitleMgrFv, global
/* 803EA9AC 003E78EC  38 00 00 00 */	li r0, 0
/* 803EA9B0 003E78F0  90 03 16 50 */	stw r0, 0x1650(r3)
/* 803EA9B4 003E78F4  4E 80 00 20 */	blr 
.endfn forceQuit__Q23ebi13TMainTitleMgrFv

.fn isFinish__Q23ebi13TMainTitleMgrFv, global
/* 803EA9B8 003E78F8  80 03 16 50 */	lwz r0, 0x1650(r3)
/* 803EA9BC 003E78FC  7C 00 00 34 */	cntlzw r0, r0
/* 803EA9C0 003E7900  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803EA9C4 003E7904  4E 80 00 20 */	blr 
.endfn isFinish__Q23ebi13TMainTitleMgrFv

.fn getSelectedMenu__Q23ebi13TMainTitleMgrFv, global
/* 803EA9C8 003E7908  80 63 16 58 */	lwz r3, 0x1658(r3)
/* 803EA9CC 003E790C  4E 80 00 20 */	blr 
.endfn getSelectedMenu__Q23ebi13TMainTitleMgrFv

.fn update__Q23ebi13TMainTitleMgrFv, global
/* 803EA9D0 003E7910  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EA9D4 003E7914  7C 08 02 A6 */	mflr r0
/* 803EA9D8 003E7918  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EA9DC 003E791C  38 00 00 00 */	li r0, 0
/* 803EA9E0 003E7920  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803EA9E4 003E7924  7C 7F 1B 78 */	mr r31, r3
/* 803EA9E8 003E7928  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803EA9EC 003E792C  98 03 16 54 */	stb r0, 0x1654(r3)
/* 803EA9F0 003E7930  80 03 16 50 */	lwz r0, 0x1650(r3)
/* 803EA9F4 003E7934  2C 00 00 03 */	cmpwi r0, 3
/* 803EA9F8 003E7938  41 82 02 50 */	beq .L_803EAC48
/* 803EA9FC 003E793C  40 80 00 14 */	bge .L_803EAA10
/* 803EAA00 003E7940  2C 00 00 01 */	cmpwi r0, 1
/* 803EAA04 003E7944  41 82 00 18 */	beq .L_803EAA1C
/* 803EAA08 003E7948  40 80 00 48 */	bge .L_803EAA50
/* 803EAA0C 003E794C  48 00 03 E4 */	b .L_803EADF0
.L_803EAA10:
/* 803EAA10 003E7950  2C 00 00 05 */	cmpwi r0, 5
/* 803EAA14 003E7954  40 80 03 DC */	bge .L_803EADF0
/* 803EAA18 003E7958  48 00 03 B0 */	b .L_803EADC8
.L_803EAA1C:
/* 803EAA1C 003E795C  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EAA20 003E7960  4B FD 52 25 */	bl isPressStart__Q33ebi5title9TTitleMgrFv
/* 803EAA24 003E7964  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAA28 003E7968  41 82 03 C8 */	beq .L_803EADF0
/* 803EAA2C 003E796C  38 7F 13 7C */	addi r3, r31, 0x137c
/* 803EAA30 003E7970  38 80 00 00 */	li r4, 0
/* 803EAA34 003E7974  81 9F 13 7C */	lwz r12, 0x137c(r31)
/* 803EAA38 003E7978  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EAA3C 003E797C  7D 89 03 A6 */	mtctr r12
/* 803EAA40 003E7980  4E 80 04 21 */	bctrl 
/* 803EAA44 003E7984  38 00 00 02 */	li r0, 2
/* 803EAA48 003E7988  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EAA4C 003E798C  48 00 03 A4 */	b .L_803EADF0
.L_803EAA50:
/* 803EAA50 003E7990  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EAA54 003E7994  4B FD 51 D5 */	bl isControllerOK__Q33ebi5title9TTitleMgrFv
/* 803EAA58 003E7998  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAA5C 003E799C  41 82 00 10 */	beq .L_803EAA6C
/* 803EAA60 003E79A0  38 00 00 01 */	li r0, 1
/* 803EAA64 003E79A4  98 1F 13 8C */	stb r0, 0x138c(r31)
/* 803EAA68 003E79A8  48 00 00 0C */	b .L_803EAA74
.L_803EAA6C:
/* 803EAA6C 003E79AC  38 00 00 00 */	li r0, 0
/* 803EAA70 003E79B0  98 1F 13 8C */	stb r0, 0x138c(r31)
.L_803EAA74:
/* 803EAA74 003E79B4  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803EAA78 003E79B8  3B C3 41 FC */	addi r30, r3, gGameConfig__4Game@l
/* 803EAA7C 003E79BC  80 1E 02 38 */	lwz r0, 0x238(r30)
/* 803EAA80 003E79C0  2C 00 00 00 */	cmpwi r0, 0
/* 803EAA84 003E79C4  41 82 00 20 */	beq .L_803EAAA4
/* 803EAA88 003E79C8  80 7F 16 48 */	lwz r3, 0x1648(r31)
/* 803EAA8C 003E79CC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803EAA90 003E79D0  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803EAA94 003E79D4  41 82 00 10 */	beq .L_803EAAA4
/* 803EAA98 003E79D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAA9C 003E79DC  38 80 00 00 */	li r4, 0
/* 803EAAA0 003E79E0  48 03 88 D5 */	bl resetOn__6SystemFb
.L_803EAAA4:
/* 803EAAA4 003E79E4  38 7F 13 7C */	addi r3, r31, 0x137c
/* 803EAAA8 003E79E8  81 9F 13 7C */	lwz r12, 0x137c(r31)
/* 803EAAAC 003E79EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EAAB0 003E79F0  7D 89 03 A6 */	mtctr r12
/* 803EAAB4 003E79F4  4E 80 04 21 */	bctrl 
/* 803EAAB8 003E79F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAABC 003E79FC  41 82 03 34 */	beq .L_803EADF0
/* 803EAAC0 003E7A00  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803EAAC4 003E7A04  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 803EAAC8 003E7A08  80 03 02 28 */	lwz r0, 0x228(r3)
/* 803EAACC 003E7A0C  2C 00 00 00 */	cmpwi r0, 0
/* 803EAAD0 003E7A10  41 82 00 5C */	beq .L_803EAB2C
/* 803EAAD4 003E7A14  38 00 00 01 */	li r0, 1
/* 803EAAD8 003E7A18  C0 22 1A BC */	lfs f1, lbl_8051FE1C@sda21(r2)
/* 803EAADC 003E7A1C  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EAAE0 003E7A20  98 1F 16 54 */	stb r0, 0x1654(r31)
/* 803EAAE4 003E7A24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAAE8 003E7A28  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EAAEC 003E7A2C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EAAF0 003E7A30  4B CD 70 5D */	bl __cvt_fp2unsigned
/* 803EAAF4 003E7A34  90 7F 16 5C */	stw r3, 0x165c(r31)
/* 803EAAF8 003E7A38  C0 22 1A BC */	lfs f1, lbl_8051FE1C@sda21(r2)
/* 803EAAFC 003E7A3C  90 7F 16 60 */	stw r3, 0x1660(r31)
/* 803EAB00 003E7A40  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAB04 003E7A44  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EAB08 003E7A48  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EAB0C 003E7A4C  4B CD 70 41 */	bl __cvt_fp2unsigned
/* 803EAB10 003E7A50  90 7F 16 40 */	stw r3, 0x1640(r31)
/* 803EAB14 003E7A54  38 80 00 02 */	li r4, 2
/* 803EAB18 003E7A58  38 00 00 04 */	li r0, 4
/* 803EAB1C 003E7A5C  90 7F 16 44 */	stw r3, 0x1644(r31)
/* 803EAB20 003E7A60  90 9F 16 3C */	stw r4, 0x163c(r31)
/* 803EAB24 003E7A64  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EAB28 003E7A68  48 00 02 C8 */	b .L_803EADF0
.L_803EAB2C:
/* 803EAB2C 003E7A6C  80 1E 02 38 */	lwz r0, 0x238(r30)
/* 803EAB30 003E7A70  2C 00 00 00 */	cmpwi r0, 0
/* 803EAB34 003E7A74  41 82 00 5C */	beq .L_803EAB90
/* 803EAB38 003E7A78  38 00 00 01 */	li r0, 1
/* 803EAB3C 003E7A7C  C0 22 1A BC */	lfs f1, lbl_8051FE1C@sda21(r2)
/* 803EAB40 003E7A80  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EAB44 003E7A84  98 1F 16 54 */	stb r0, 0x1654(r31)
/* 803EAB48 003E7A88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAB4C 003E7A8C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EAB50 003E7A90  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EAB54 003E7A94  4B CD 6F F9 */	bl __cvt_fp2unsigned
/* 803EAB58 003E7A98  90 7F 16 5C */	stw r3, 0x165c(r31)
/* 803EAB5C 003E7A9C  C0 22 1A BC */	lfs f1, lbl_8051FE1C@sda21(r2)
/* 803EAB60 003E7AA0  90 7F 16 60 */	stw r3, 0x1660(r31)
/* 803EAB64 003E7AA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAB68 003E7AA8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EAB6C 003E7AAC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EAB70 003E7AB0  4B CD 6F DD */	bl __cvt_fp2unsigned
/* 803EAB74 003E7AB4  90 7F 16 40 */	stw r3, 0x1640(r31)
/* 803EAB78 003E7AB8  38 80 00 02 */	li r4, 2
/* 803EAB7C 003E7ABC  38 00 00 04 */	li r0, 4
/* 803EAB80 003E7AC0  90 7F 16 44 */	stw r3, 0x1644(r31)
/* 803EAB84 003E7AC4  90 9F 16 3C */	stw r4, 0x163c(r31)
/* 803EAB88 003E7AC8  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EAB8C 003E7ACC  48 00 02 64 */	b .L_803EADF0
.L_803EAB90:
/* 803EAB90 003E7AD0  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 803EAB94 003E7AD4  2C 00 00 00 */	cmpwi r0, 0
/* 803EAB98 003E7AD8  41 82 00 4C */	beq .L_803EABE4
/* 803EAB9C 003E7ADC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EABA0 003E7AE0  38 00 00 01 */	li r0, 1
/* 803EABA4 003E7AE4  38 83 9F 9C */	addi r4, r3, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EABA8 003E7AE8  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
/* 803EABAC 003E7AEC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803EABB0 003E7AF0  38 A3 9F 84 */	addi r5, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
/* 803EABB4 003E7AF4  7F E3 FB 78 */	mr r3, r31
/* 803EABB8 003E7AF8  38 81 00 1C */	addi r4, r1, 0x1c
/* 803EABBC 003E7AFC  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 803EABC0 003E7B00  90 01 00 20 */	stw r0, 0x20(r1)
/* 803EABC4 003E7B04  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EABC8 003E7B08  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EABCC 003E7B0C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EABD0 003E7B10  7D 89 03 A6 */	mtctr r12
/* 803EABD4 003E7B14  4E 80 04 21 */	bctrl 
/* 803EABD8 003E7B18  38 00 00 03 */	li r0, 3
/* 803EABDC 003E7B1C  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EABE0 003E7B20  48 00 02 10 */	b .L_803EADF0
.L_803EABE4:
/* 803EABE4 003E7B24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EABE8 003E7B28  48 03 83 49 */	bl getPlayCommonData__6SystemFv
/* 803EABEC 003E7B2C  4B E4 9B 21 */	bl isChallengeGamePlayable__Q24Game14PlayCommonDataFv
/* 803EABF0 003E7B30  54 66 06 3E */	clrlwi r6, r3, 0x18
/* 803EABF4 003E7B34  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EABF8 003E7B38  7C A6 00 D0 */	neg r5, r6
/* 803EABFC 003E7B3C  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
/* 803EAC00 003E7B40  38 84 9F 9C */	addi r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EAC04 003E7B44  38 00 00 00 */	li r0, 0
/* 803EAC08 003E7B48  7C A5 33 78 */	or r5, r5, r6
/* 803EAC0C 003E7B4C  90 81 00 10 */	stw r4, 0x10(r1)
/* 803EAC10 003E7B50  54 A5 0F FE */	srwi r5, r5, 0x1f
/* 803EAC14 003E7B54  38 63 9F 84 */	addi r3, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
/* 803EAC18 003E7B58  90 61 00 10 */	stw r3, 0x10(r1)
/* 803EAC1C 003E7B5C  7F E3 FB 78 */	mr r3, r31
/* 803EAC20 003E7B60  38 81 00 10 */	addi r4, r1, 0x10
/* 803EAC24 003E7B64  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803EAC28 003E7B68  90 01 00 18 */	stw r0, 0x18(r1)
/* 803EAC2C 003E7B6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EAC30 003E7B70  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EAC34 003E7B74  7D 89 03 A6 */	mtctr r12
/* 803EAC38 003E7B78  4E 80 04 21 */	bctrl 
/* 803EAC3C 003E7B7C  38 00 00 03 */	li r0, 3
/* 803EAC40 003E7B80  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EAC44 003E7B84  48 00 01 AC */	b .L_803EADF0
.L_803EAC48:
/* 803EAC48 003E7B88  4B FF 04 B5 */	bl isDecide__Q33ebi6Screen10TTitleMenuFv
/* 803EAC4C 003E7B8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAC50 003E7B90  41 82 01 0C */	beq .L_803EAD5C
/* 803EAC54 003E7B94  88 1F 16 55 */	lbz r0, 0x1655(r31)
/* 803EAC58 003E7B98  28 00 00 00 */	cmplwi r0, 0
/* 803EAC5C 003E7B9C  40 82 01 00 */	bne .L_803EAD5C
/* 803EAC60 003E7BA0  38 60 00 01 */	li r3, 1
/* 803EAC64 003E7BA4  98 7F 16 55 */	stb r3, 0x1655(r31)
/* 803EAC68 003E7BA8  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 803EAC6C 003E7BAC  2C 00 00 03 */	cmpwi r0, 3
/* 803EAC70 003E7BB0  41 82 00 50 */	beq .L_803EACC0
/* 803EAC74 003E7BB4  40 80 00 1C */	bge .L_803EAC90
/* 803EAC78 003E7BB8  2C 00 00 01 */	cmpwi r0, 1
/* 803EAC7C 003E7BBC  41 82 00 30 */	beq .L_803EACAC
/* 803EAC80 003E7BC0  40 80 00 38 */	bge .L_803EACB8
/* 803EAC84 003E7BC4  2C 00 00 00 */	cmpwi r0, 0
/* 803EAC88 003E7BC8  40 80 00 18 */	bge .L_803EACA0
/* 803EAC8C 003E7BCC  48 00 00 54 */	b .L_803EACE0
.L_803EAC90:
/* 803EAC90 003E7BD0  2C 00 00 05 */	cmpwi r0, 5
/* 803EAC94 003E7BD4  41 82 00 44 */	beq .L_803EACD8
/* 803EAC98 003E7BD8  40 80 00 48 */	bge .L_803EACE0
/* 803EAC9C 003E7BDC  48 00 00 30 */	b .L_803EACCC
.L_803EACA0:
/* 803EACA0 003E7BE0  38 00 00 00 */	li r0, 0
/* 803EACA4 003E7BE4  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EACA8 003E7BE8  48 00 00 38 */	b .L_803EACE0
.L_803EACAC:
/* 803EACAC 003E7BEC  38 00 00 02 */	li r0, 2
/* 803EACB0 003E7BF0  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EACB4 003E7BF4  48 00 00 2C */	b .L_803EACE0
.L_803EACB8:
/* 803EACB8 003E7BF8  90 7F 16 58 */	stw r3, 0x1658(r31)
/* 803EACBC 003E7BFC  48 00 00 24 */	b .L_803EACE0
.L_803EACC0:
/* 803EACC0 003E7C00  38 00 00 03 */	li r0, 3
/* 803EACC4 003E7C04  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EACC8 003E7C08  48 00 00 18 */	b .L_803EACE0
.L_803EACCC:
/* 803EACCC 003E7C0C  38 00 00 04 */	li r0, 4
/* 803EACD0 003E7C10  90 1F 16 58 */	stw r0, 0x1658(r31)
/* 803EACD4 003E7C14  48 00 00 0C */	b .L_803EACE0
.L_803EACD8:
/* 803EACD8 003E7C18  38 00 00 05 */	li r0, 5
/* 803EACDC 003E7C1C  90 1F 16 58 */	stw r0, 0x1658(r31)
.L_803EACE0:
/* 803EACE0 003E7C20  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EACE4 003E7C24  4B FD 47 BD */	bl breakup__Q33ebi5title9TTitleMgrFv
/* 803EACE8 003E7C28  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen8ArgClose@ha
/* 803EACEC 003E7C2C  C0 02 1A BC */	lfs f0, lbl_8051FE1C@sda21(r2)
/* 803EACF0 003E7C30  38 03 9F 78 */	addi r0, r3, __vt__Q33ebi6Screen8ArgClose@l
/* 803EACF4 003E7C34  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen14ArgCloseTMBack@ha
/* 803EACF8 003E7C38  90 01 00 08 */	stw r0, 8(r1)
/* 803EACFC 003E7C3C  38 03 9F 6C */	addi r0, r3, __vt__Q33ebi6Screen14ArgCloseTMBack@l
/* 803EAD00 003E7C40  38 7F 16 0C */	addi r3, r31, 0x160c
/* 803EAD04 003E7C44  38 81 00 08 */	addi r4, r1, 8
/* 803EAD08 003E7C48  90 01 00 08 */	stw r0, 8(r1)
/* 803EAD0C 003E7C4C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EAD10 003E7C50  81 9F 16 0C */	lwz r12, 0x160c(r31)
/* 803EAD14 003E7C54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803EAD18 003E7C58  7D 89 03 A6 */	mtctr r12
/* 803EAD1C 003E7C5C  4E 80 04 21 */	bctrl 
/* 803EAD20 003E7C60  7F E3 FB 78 */	mr r3, r31
/* 803EAD24 003E7C64  4B FF 03 E1 */	bl isCancel__Q33ebi6Screen10TTitleMenuFv
/* 803EAD28 003E7C68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAD2C 003E7C6C  40 82 00 30 */	bne .L_803EAD5C
/* 803EAD30 003E7C70  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAD34 003E7C74  C0 22 1A BC */	lfs f1, lbl_8051FE1C@sda21(r2)
/* 803EAD38 003E7C78  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EAD3C 003E7C7C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EAD40 003E7C80  4B CD 6E 0D */	bl __cvt_fp2unsigned
/* 803EAD44 003E7C84  90 7F 16 40 */	stw r3, 0x1640(r31)
/* 803EAD48 003E7C88  38 80 00 02 */	li r4, 2
/* 803EAD4C 003E7C8C  38 00 00 01 */	li r0, 1
/* 803EAD50 003E7C90  90 7F 16 44 */	stw r3, 0x1644(r31)
/* 803EAD54 003E7C94  90 9F 16 3C */	stw r4, 0x163c(r31)
/* 803EAD58 003E7C98  98 1F 16 54 */	stb r0, 0x1654(r31)
.L_803EAD5C:
/* 803EAD5C 003E7C9C  7F E3 FB 78 */	mr r3, r31
/* 803EAD60 003E7CA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EAD64 003E7CA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EAD68 003E7CA8  7D 89 03 A6 */	mtctr r12
/* 803EAD6C 003E7CAC  4E 80 04 21 */	bctrl 
/* 803EAD70 003E7CB0  7C 7E 1B 78 */	mr r30, r3
/* 803EAD74 003E7CB4  7F E3 FB 78 */	mr r3, r31
/* 803EAD78 003E7CB8  4B FF 03 8D */	bl isCancel__Q33ebi6Screen10TTitleMenuFv
/* 803EAD7C 003E7CBC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803EAD80 003E7CC0  41 82 00 70 */	beq .L_803EADF0
/* 803EAD84 003E7CC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EAD88 003E7CC8  41 82 00 28 */	beq .L_803EADB0
/* 803EAD8C 003E7CCC  38 7F 13 7C */	addi r3, r31, 0x137c
/* 803EAD90 003E7CD0  38 80 00 00 */	li r4, 0
/* 803EAD94 003E7CD4  81 9F 13 7C */	lwz r12, 0x137c(r31)
/* 803EAD98 003E7CD8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EAD9C 003E7CDC  7D 89 03 A6 */	mtctr r12
/* 803EADA0 003E7CE0  4E 80 04 21 */	bctrl 
/* 803EADA4 003E7CE4  38 00 00 02 */	li r0, 2
/* 803EADA8 003E7CE8  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EADAC 003E7CEC  48 00 00 44 */	b .L_803EADF0
.L_803EADB0:
/* 803EADB0 003E7CF0  80 1F 16 40 */	lwz r0, 0x1640(r31)
/* 803EADB4 003E7CF4  28 00 00 00 */	cmplwi r0, 0
/* 803EADB8 003E7CF8  40 82 00 38 */	bne .L_803EADF0
/* 803EADBC 003E7CFC  38 00 00 00 */	li r0, 0
/* 803EADC0 003E7D00  90 1F 16 50 */	stw r0, 0x1650(r31)
/* 803EADC4 003E7D04  48 00 00 2C */	b .L_803EADF0
.L_803EADC8:
/* 803EADC8 003E7D08  80 7F 16 5C */	lwz r3, 0x165c(r31)
/* 803EADCC 003E7D0C  28 03 00 00 */	cmplwi r3, 0
/* 803EADD0 003E7D10  41 82 00 0C */	beq .L_803EADDC
/* 803EADD4 003E7D14  38 03 FF FF */	addi r0, r3, -1
/* 803EADD8 003E7D18  90 1F 16 5C */	stw r0, 0x165c(r31)
.L_803EADDC:
/* 803EADDC 003E7D1C  80 1F 16 5C */	lwz r0, 0x165c(r31)
/* 803EADE0 003E7D20  28 00 00 00 */	cmplwi r0, 0
/* 803EADE4 003E7D24  40 82 00 0C */	bne .L_803EADF0
/* 803EADE8 003E7D28  38 00 00 00 */	li r0, 0
/* 803EADEC 003E7D2C  90 1F 16 50 */	stw r0, 0x1650(r31)
.L_803EADF0:
/* 803EADF0 003E7D30  7F E3 FB 78 */	mr r3, r31
/* 803EADF4 003E7D34  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EADF8 003E7D38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EADFC 003E7D3C  7D 89 03 A6 */	mtctr r12
/* 803EAE00 003E7D40  4E 80 04 21 */	bctrl 
/* 803EAE04 003E7D44  38 7F 13 7C */	addi r3, r31, 0x137c
/* 803EAE08 003E7D48  81 9F 13 7C */	lwz r12, 0x137c(r31)
/* 803EAE0C 003E7D4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EAE10 003E7D50  7D 89 03 A6 */	mtctr r12
/* 803EAE14 003E7D54  4E 80 04 21 */	bctrl 
/* 803EAE18 003E7D58  38 7F 16 0C */	addi r3, r31, 0x160c
/* 803EAE1C 003E7D5C  81 9F 16 0C */	lwz r12, 0x160c(r31)
/* 803EAE20 003E7D60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EAE24 003E7D64  7D 89 03 A6 */	mtctr r12
/* 803EAE28 003E7D68  4E 80 04 21 */	bctrl 
/* 803EAE2C 003E7D6C  38 7F 16 24 */	addi r3, r31, 0x1624
/* 803EAE30 003E7D70  81 9F 16 24 */	lwz r12, 0x1624(r31)
/* 803EAE34 003E7D74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EAE38 003E7D78  7D 89 03 A6 */	mtctr r12
/* 803EAE3C 003E7D7C  4E 80 04 21 */	bctrl 
/* 803EAE40 003E7D80  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EAE44 003E7D84  4B FD 4F 41 */	bl update__Q33ebi5title9TTitleMgrFv
/* 803EAE48 003E7D88  80 1F 16 3C */	lwz r0, 0x163c(r31)
/* 803EAE4C 003E7D8C  2C 00 00 00 */	cmpwi r0, 0
/* 803EAE50 003E7D90  41 82 00 18 */	beq .L_803EAE68
/* 803EAE54 003E7D94  80 7F 16 40 */	lwz r3, 0x1640(r31)
/* 803EAE58 003E7D98  28 03 00 00 */	cmplwi r3, 0
/* 803EAE5C 003E7D9C  41 82 00 0C */	beq .L_803EAE68
/* 803EAE60 003E7DA0  38 03 FF FF */	addi r0, r3, -1
/* 803EAE64 003E7DA4  90 1F 16 40 */	stw r0, 0x1640(r31)
.L_803EAE68:
/* 803EAE68 003E7DA8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EAE6C 003E7DAC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803EAE70 003E7DB0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803EAE74 003E7DB4  7C 08 03 A6 */	mtlr r0
/* 803EAE78 003E7DB8  38 21 00 30 */	addi r1, r1, 0x30
/* 803EAE7C 003E7DBC  4E 80 00 20 */	blr 
.endfn update__Q23ebi13TMainTitleMgrFv

.fn draw__Q23ebi13TMainTitleMgrFv, global
/* 803EAE80 003E7DC0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803EAE84 003E7DC4  7C 08 02 A6 */	mflr r0
/* 803EAE88 003E7DC8  90 01 00 64 */	stw r0, 0x64(r1)
/* 803EAE8C 003E7DCC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803EAE90 003E7DD0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803EAE94 003E7DD4  7C 7E 1B 78 */	mr r30, r3
/* 803EAE98 003E7DD8  80 03 16 50 */	lwz r0, 0x1650(r3)
/* 803EAE9C 003E7DDC  2C 00 00 00 */	cmpwi r0, 0
/* 803EAEA0 003E7DE0  41 82 02 3C */	beq .L_803EB0DC
/* 803EAEA4 003E7DE4  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803EAEA8 003E7DE8  4B FD 58 AD */	bl draw__Q33ebi5title9TTitleMgrFv
/* 803EAEAC 003E7DEC  38 60 00 00 */	li r3, 0
/* 803EAEB0 003E7DF0  38 80 00 07 */	li r4, 7
/* 803EAEB4 003E7DF4  38 A0 00 00 */	li r5, 0
/* 803EAEB8 003E7DF8  4B CF E2 CD */	bl GXSetZMode
/* 803EAEBC 003E7DFC  38 7E 16 0C */	addi r3, r30, 0x160c
/* 803EAEC0 003E7E00  81 9E 16 0C */	lwz r12, 0x160c(r30)
/* 803EAEC4 003E7E04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EAEC8 003E7E08  7D 89 03 A6 */	mtctr r12
/* 803EAECC 003E7E0C  4E 80 04 21 */	bctrl 
/* 803EAED0 003E7E10  7F C3 F3 78 */	mr r3, r30
/* 803EAED4 003E7E14  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EAED8 003E7E18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EAEDC 003E7E1C  7D 89 03 A6 */	mtctr r12
/* 803EAEE0 003E7E20  4E 80 04 21 */	bctrl 
/* 803EAEE4 003E7E24  38 7E 13 7C */	addi r3, r30, 0x137c
/* 803EAEE8 003E7E28  81 9E 13 7C */	lwz r12, 0x137c(r30)
/* 803EAEEC 003E7E2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EAEF0 003E7E30  7D 89 03 A6 */	mtctr r12
/* 803EAEF4 003E7E34  4E 80 04 21 */	bctrl 
/* 803EAEF8 003E7E38  38 7E 16 24 */	addi r3, r30, 0x1624
/* 803EAEFC 003E7E3C  81 9E 16 24 */	lwz r12, 0x1624(r30)
/* 803EAF00 003E7E40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EAF04 003E7E44  7D 89 03 A6 */	mtctr r12
/* 803EAF08 003E7E48  4E 80 04 21 */	bctrl 
/* 803EAF0C 003E7E4C  80 1E 16 3C */	lwz r0, 0x163c(r30)
/* 803EAF10 003E7E50  2C 00 00 00 */	cmpwi r0, 0
/* 803EAF14 003E7E54  41 82 01 C8 */	beq .L_803EB0DC
/* 803EAF18 003E7E58  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EAF1C 003E7E5C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803EAF20 003E7E60  3B E3 01 90 */	addi r31, r3, 0x190
/* 803EAF24 003E7E64  7F E3 FB 78 */	mr r3, r31
/* 803EAF28 003E7E68  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EAF2C 003E7E6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EAF30 003E7E70  7D 89 03 A6 */	mtctr r12
/* 803EAF34 003E7E74  4E 80 04 21 */	bctrl 
/* 803EAF38 003E7E78  80 1E 16 3C */	lwz r0, 0x163c(r30)
/* 803EAF3C 003E7E7C  80 7E 16 34 */	lwz r3, 0x1634(r30)
/* 803EAF40 003E7E80  2C 00 00 02 */	cmpwi r0, 2
/* 803EAF44 003E7E84  90 61 00 18 */	stw r3, 0x18(r1)
/* 803EAF48 003E7E88  41 82 00 8C */	beq .L_803EAFD4
/* 803EAF4C 003E7E8C  40 80 01 04 */	bge .L_803EB050
/* 803EAF50 003E7E90  2C 00 00 01 */	cmpwi r0, 1
/* 803EAF54 003E7E94  40 80 00 08 */	bge .L_803EAF5C
/* 803EAF58 003E7E98  48 00 00 F8 */	b .L_803EB050
.L_803EAF5C:
/* 803EAF5C 003E7E9C  80 9E 16 44 */	lwz r4, 0x1644(r30)
/* 803EAF60 003E7EA0  28 04 00 00 */	cmplwi r4, 0
/* 803EAF64 003E7EA4  41 82 00 38 */	beq .L_803EAF9C
/* 803EAF68 003E7EA8  80 7E 16 40 */	lwz r3, 0x1640(r30)
/* 803EAF6C 003E7EAC  3C 00 43 30 */	lis r0, 0x4330
/* 803EAF70 003E7EB0  90 01 00 30 */	stw r0, 0x30(r1)
/* 803EAF74 003E7EB4  C8 42 1A C0 */	lfd f2, lbl_8051FE20@sda21(r2)
/* 803EAF78 003E7EB8  90 61 00 34 */	stw r3, 0x34(r1)
/* 803EAF7C 003E7EBC  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803EAF80 003E7EC0  90 81 00 3C */	stw r4, 0x3c(r1)
/* 803EAF84 003E7EC4  EC 20 10 28 */	fsubs f1, f0, f2
/* 803EAF88 003E7EC8  90 01 00 38 */	stw r0, 0x38(r1)
/* 803EAF8C 003E7ECC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803EAF90 003E7ED0  EC 00 10 28 */	fsubs f0, f0, f2
/* 803EAF94 003E7ED4  EC 41 00 24 */	fdivs f2, f1, f0
/* 803EAF98 003E7ED8  48 00 00 08 */	b .L_803EAFA0
.L_803EAF9C:
/* 803EAF9C 003E7EDC  C0 42 1A B8 */	lfs f2, lbl_8051FE18@sda21(r2)
.L_803EAFA0:
/* 803EAFA0 003E7EE0  88 7E 16 38 */	lbz r3, 0x1638(r30)
/* 803EAFA4 003E7EE4  3C 00 43 30 */	lis r0, 0x4330
/* 803EAFA8 003E7EE8  90 01 00 40 */	stw r0, 0x40(r1)
/* 803EAFAC 003E7EEC  C8 22 1A C0 */	lfd f1, lbl_8051FE20@sda21(r2)
/* 803EAFB0 003E7EF0  90 61 00 44 */	stw r3, 0x44(r1)
/* 803EAFB4 003E7EF4  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 803EAFB8 003E7EF8  EC 00 08 28 */	fsubs f0, f0, f1
/* 803EAFBC 003E7EFC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 803EAFC0 003E7F00  FC 00 00 1E */	fctiwz f0, f0
/* 803EAFC4 003E7F04  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 803EAFC8 003E7F08  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803EAFCC 003E7F0C  98 01 00 1B */	stb r0, 0x1b(r1)
/* 803EAFD0 003E7F10  48 00 00 80 */	b .L_803EB050
.L_803EAFD4:
/* 803EAFD4 003E7F14  80 9E 16 44 */	lwz r4, 0x1644(r30)
/* 803EAFD8 003E7F18  28 04 00 00 */	cmplwi r4, 0
/* 803EAFDC 003E7F1C  41 82 00 38 */	beq .L_803EB014
/* 803EAFE0 003E7F20  80 7E 16 40 */	lwz r3, 0x1640(r30)
/* 803EAFE4 003E7F24  3C 00 43 30 */	lis r0, 0x4330
/* 803EAFE8 003E7F28  90 01 00 48 */	stw r0, 0x48(r1)
/* 803EAFEC 003E7F2C  C8 42 1A C0 */	lfd f2, lbl_8051FE20@sda21(r2)
/* 803EAFF0 003E7F30  90 61 00 4C */	stw r3, 0x4c(r1)
/* 803EAFF4 003E7F34  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 803EAFF8 003E7F38  90 81 00 44 */	stw r4, 0x44(r1)
/* 803EAFFC 003E7F3C  EC 20 10 28 */	fsubs f1, f0, f2
/* 803EB000 003E7F40  90 01 00 40 */	stw r0, 0x40(r1)
/* 803EB004 003E7F44  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 803EB008 003E7F48  EC 00 10 28 */	fsubs f0, f0, f2
/* 803EB00C 003E7F4C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EB010 003E7F50  48 00 00 08 */	b .L_803EB018
.L_803EB014:
/* 803EB014 003E7F54  C0 22 1A B8 */	lfs f1, lbl_8051FE18@sda21(r2)
.L_803EB018:
/* 803EB018 003E7F58  88 7E 16 38 */	lbz r3, 0x1638(r30)
/* 803EB01C 003E7F5C  3C 00 43 30 */	lis r0, 0x4330
/* 803EB020 003E7F60  C0 02 1A BC */	lfs f0, lbl_8051FE1C@sda21(r2)
/* 803EB024 003E7F64  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803EB028 003E7F68  C8 42 1A C0 */	lfd f2, lbl_8051FE20@sda21(r2)
/* 803EB02C 003E7F6C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803EB030 003E7F70  90 01 00 38 */	stw r0, 0x38(r1)
/* 803EB034 003E7F74  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 803EB038 003E7F78  EC 21 10 28 */	fsubs f1, f1, f2
/* 803EB03C 003E7F7C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803EB040 003E7F80  FC 00 00 1E */	fctiwz f0, f0
/* 803EB044 003E7F84  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803EB048 003E7F88  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EB04C 003E7F8C  98 01 00 1B */	stb r0, 0x1b(r1)
.L_803EB050:
/* 803EB050 003E7F90  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803EB054 003E7F94  7F E3 FB 78 */	mr r3, r31
/* 803EB058 003E7F98  38 81 00 08 */	addi r4, r1, 8
/* 803EB05C 003E7F9C  38 A1 00 0C */	addi r5, r1, 0xc
/* 803EB060 003E7FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EB064 003E7FA4  38 C1 00 10 */	addi r6, r1, 0x10
/* 803EB068 003E7FA8  38 E1 00 14 */	addi r7, r1, 0x14
/* 803EB06C 003E7FAC  90 01 00 10 */	stw r0, 0x10(r1)
/* 803EB070 003E7FB0  90 01 00 0C */	stw r0, 0xc(r1)
/* 803EB074 003E7FB4  90 01 00 08 */	stw r0, 8(r1)
/* 803EB078 003E7FB8  4B C4 B6 15 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803EB07C 003E7FBC  48 03 81 A9 */	bl getRenderModeObj__6SystemFv
/* 803EB080 003E7FC0  A3 C3 00 06 */	lhz r30, 6(r3)
/* 803EB084 003E7FC4  48 03 81 A1 */	bl getRenderModeObj__6SystemFv
/* 803EB088 003E7FC8  A0 83 00 04 */	lhz r4, 4(r3)
/* 803EB08C 003E7FCC  3C 00 43 30 */	lis r0, 0x4330
/* 803EB090 003E7FD0  C0 62 1A B8 */	lfs f3, lbl_8051FE18@sda21(r2)
/* 803EB094 003E7FD4  7F E3 FB 78 */	mr r3, r31
/* 803EB098 003E7FD8  90 81 00 4C */	stw r4, 0x4c(r1)
/* 803EB09C 003E7FDC  38 81 00 1C */	addi r4, r1, 0x1c
/* 803EB0A0 003E7FE0  C8 42 1A C0 */	lfd f2, lbl_8051FE20@sda21(r2)
/* 803EB0A4 003E7FE4  90 01 00 48 */	stw r0, 0x48(r1)
/* 803EB0A8 003E7FE8  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 803EB0AC 003E7FEC  93 C1 00 44 */	stw r30, 0x44(r1)
/* 803EB0B0 003E7FF0  EC 20 10 28 */	fsubs f1, f0, f2
/* 803EB0B4 003E7FF4  90 01 00 40 */	stw r0, 0x40(r1)
/* 803EB0B8 003E7FF8  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 803EB0BC 003E7FFC  EC 23 08 2A */	fadds f1, f3, f1
/* 803EB0C0 003E8000  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803EB0C4 003E8004  EC 00 10 28 */	fsubs f0, f0, f2
/* 803EB0C8 003E8008  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 803EB0CC 003E800C  EC 03 00 2A */	fadds f0, f3, f0
/* 803EB0D0 003E8010  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803EB0D4 003E8014  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803EB0D8 003E8018  4B C4 B6 FD */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_803EB0DC:
/* 803EB0DC 003E801C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803EB0E0 003E8020  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803EB0E4 003E8024  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803EB0E8 003E8028  7C 08 03 A6 */	mtlr r0
/* 803EB0EC 003E802C  38 21 00 60 */	addi r1, r1, 0x60
/* 803EB0F0 003E8030  4E 80 00 20 */	blr 
.endfn draw__Q23ebi13TMainTitleMgrFv

.section .text, "ax", unique, 1
.fn __ct__Q23ebi25E2DCallBack_CalcAnimationFv, weak
/* 803EB0F4 003E8034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EB0F8 003E8038  7C 08 02 A6 */	mflr r0
/* 803EB0FC 003E803C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EB100 003E8040  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EB104 003E8044  7C 7F 1B 78 */	mr r31, r3
/* 803EB108 003E8048  48 02 62 89 */	bl __ct__5CNodeFv
/* 803EB10C 003E804C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803EB110 003E8050  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EB114 003E8054  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803EB118 003E8058  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EB11C 003E805C  90 1F 00 00 */	stw r0, 0(r31)
/* 803EB120 003E8060  38 00 00 00 */	li r0, 0
/* 803EB124 003E8064  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803EB128 003E8068  38 C5 7F 2C */	addi r6, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803EB12C 003E806C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803EB130 003E8070  38 A4 88 30 */	addi r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EB134 003E8074  38 80 00 01 */	li r4, 1
/* 803EB138 003E8078  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803EB13C 003E807C  90 DF 00 00 */	stw r6, 0(r31)
/* 803EB140 003E8080  7F E3 FB 78 */	mr r3, r31
/* 803EB144 003E8084  90 BF 00 00 */	stw r5, 0(r31)
/* 803EB148 003E8088  98 9F 00 1C */	stb r4, 0x1c(r31)
/* 803EB14C 003E808C  90 1F 00 00 */	stw r0, 0(r31)
/* 803EB150 003E8090  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EB154 003E8094  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EB158 003E8098  7C 08 03 A6 */	mtlr r0
/* 803EB15C 003E809C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EB160 003E80A0  4E 80 00 20 */	blr 
.endfn __ct__Q23ebi25E2DCallBack_CalcAnimationFv

.section .text, "ax", unique, 2
.fn __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv, weak
/* 803EB164 003E80A4  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv

.section .text, "ax", unique, 3
.fn getName__Q33ebi6Screen8ArgCloseFv, weak
/* 803EB168 003E80A8  3C 60 80 49 */	lis r3, lbl_80497900@ha
/* 803EB16C 003E80AC  38 63 79 00 */	addi r3, r3, lbl_80497900@l
/* 803EB170 003E80B0  4E 80 00 20 */	blr 
.endfn getName__Q33ebi6Screen8ArgCloseFv

.fn getName__Q33ebi6Screen7ArgOpenFv, weak
/* 803EB174 003E80B4  38 62 1A C8 */	addi r3, r2, lbl_8051FE28@sda21
/* 803EB178 003E80B8  4E 80 00 20 */	blr 
.endfn getName__Q33ebi6Screen7ArgOpenFv

.section .text, "ax", unique, 4
.fn __sinit_ebiMainTitleMgr_cpp, local
/* 803EB17C 003E80BC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803EB180 003E80C0  38 00 FF FF */	li r0, -1
/* 803EB184 003E80C4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803EB188 003E80C8  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803EB18C 003E80CC  90 0D 9A 88 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803EB190 003E80D0  D4 03 9F 60 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803EB194 003E80D4  D0 0D 9A 8C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803EB198 003E80D8  D0 03 00 04 */	stfs f0, 4(r3)
/* 803EB19C 003E80DC  D0 03 00 08 */	stfs f0, 8(r3)
/* 803EB1A0 003E80E0  4E 80 00 20 */	blr 
.endfn __sinit_ebiMainTitleMgr_cpp
