.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80480640, local
	.asciz "caveInfo"
.endobj lbl_80480640
.balign 4
.obj lbl_8048064C, local
	.asciz "gameCaveInfo.cpp"
.endobj lbl_8048064C
.balign 4
.obj lbl_80480660, local # Shift-JIS
	.4byte 0x95CF82C8
	.4byte 0x8379838C
	.4byte 0x83628367
	.4byte 0x836C815B
	.4byte 0x838082C5
	.4byte 0x82B7210A
	.byte 0
.endobj lbl_80480660
.balign 4
.obj lbl_8048067C, local
	.asciz "floorInfo"
.endobj lbl_8048067C
.balign 4
.obj lbl_80480688, local # Shift-JIS
	.4byte 0x83528393
	.4byte 0x834E838A
	.4byte 0x815B8363
	.byte 0
.endobj lbl_80480688
.balign 4
.obj lbl_80480698, local # Shift-JIS
	.4byte 0x82E282B7
	.4byte 0x82E782AC
	.byte 0
.endobj lbl_80480698
.balign 4
.obj lbl_804806A4, local
	.asciz "FloorInfo"
.endobj lbl_804806A4
.balign 4
.obj lbl_804806B0, local # Shift-JIS
	.4byte 0x8A4B82CD
	.4byte 0x82B682DF
	.byte 0
.endobj lbl_804806B0
.balign 4
.obj lbl_804806BC, local # Shift-JIS
	.4byte 0x8A4B82A8
	.4byte 0x82ED82E8
	.byte 0
.endobj lbl_804806BC
.balign 4
.obj lbl_804806C8, local # Shift-JIS
	.4byte 0x93478DC5
	.4byte 0x91E59094
	.byte 0
.endobj lbl_804806C8
.balign 4
.obj lbl_804806D4, local # Shift-JIS
	.4byte 0x83418343
	.4byte 0x83658380
	.4byte 0x8DC591E5
	.4byte 0x90940000
.endobj lbl_804806D4
.balign 4
.obj lbl_804806E4, local # Shift-JIS
	.4byte 0x8351815B
	.4byte 0x83678DC5
	.4byte 0x91E59094
	.byte 0
.endobj lbl_804806E4
.balign 4
.obj lbl_804806F4, local # Shift-JIS
	.4byte 0x834C8383
	.4byte 0x83628376
	.4byte 0x8DC591E5
	.4byte 0x90940000
.endobj lbl_804806F4
.balign 4
.obj lbl_80480704, local # Shift-JIS
	.4byte 0x838B815B
	.4byte 0x83809094
	.byte 0
.endobj lbl_80480704
.balign 4
.obj lbl_80480710, local # Shift-JIS
	.4byte 0x838B815B
	.4byte 0x836782CC
	.4byte 0x8A848D87
	.byte 0
.endobj lbl_80480710
.balign 4
.obj lbl_80480720, local # Shift-JIS
	.4byte 0x8B418AD2
	.4byte 0x95AC9085
	.4byte 0x28313D82
	.4byte 0xA082E829
	.byte 0
.endobj lbl_80480720
.balign 4
.obj lbl_80480734, local
	.asciz "units.txt"
.endobj lbl_80480734
.balign 4
.obj lbl_80480740, local # Shift-JIS
	.4byte 0x8E679770
	.4byte 0x8386836A
	.4byte 0x83628367
	.byte 0
.endobj lbl_80480740
.balign 4
.obj lbl_80480750, local
	.asciz "light.ini"
.endobj lbl_80480750
.balign 4
.obj lbl_8048075C, local # Shift-JIS
	.4byte 0x8E679770
	.4byte 0x83898343
	.4byte 0x83670000
.endobj lbl_8048075C
.balign 4
.obj lbl_80480768, local # Shift-JIS
	.4byte 0x8A4B9269
	.4byte 0x82F089F3
	.4byte 0x82B78AE2
	.4byte 0x82C58942
	.4byte 0x82B72830
	.4byte 0x3D834983
	.4byte 0x7420313D
	.4byte 0x83498393
	.2byte 0x2900
.endobj lbl_80480768
.balign 4
.obj lbl_8048078C, local
	.asciz "BlackManTimer"
.endobj lbl_8048078C
.balign 4
.obj lbl_8048079C, local
	.asciz "P2Assert"
.endobj lbl_8048079C
.balign 4
.obj lbl_804807A8, local
	.asciz "CaveInfo"
.endobj lbl_804807A8
.balign 4
.obj lbl_804807B4, local
	.asciz "%s not found !\n"
.endobj lbl_804807B4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@", local
	.4byte lbl_805196CC
	.4byte lbl_805196D0
	.4byte lbl_80480688
	.4byte lbl_805196D8
	.4byte 0
	.4byte 0
.endobj "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"
.obj "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@", local
	.4byte lbl_805196E0
	.4byte lbl_805196E8
	.4byte lbl_80480698
.endobj "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"
.obj __vt__Q34Game4Cave8CaveInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8CaveInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave8CaveInfoFR6Stream
.endobj __vt__Q34Game4Cave8CaveInfo
.obj __vt__Q34Game4Cave9FloorInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave9FloorInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave9FloorInfoFR6Stream
.endobj __vt__Q34Game4Cave9FloorInfo
.obj __vt__Q34Game4Cave7CapInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave7CapInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave7CapInfoFR6Stream
.endobj __vt__Q34Game4Cave7CapInfo
.obj __vt__Q34Game4Cave8GateInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8GateInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave8GateInfoFR6Stream
.endobj __vt__Q34Game4Cave8GateInfo
.obj __vt__Q34Game4Cave8ItemInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8ItemInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave8ItemInfoFR6Stream
.endobj __vt__Q34Game4Cave8ItemInfo
.obj __vt__Q34Game4Cave8TekiInfo, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8TekiInfoFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave8TekiInfoFR6Stream
.endobj __vt__Q34Game4Cave8TekiInfo
.obj __vt__Q34Game4Cave7BaseGen, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave7BaseGenFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game4Cave7BaseGenFR6Stream
	.4byte draw__Q34Game4Cave7BaseGenFR8GraphicsP7Matrixf
.endobj __vt__Q34Game4Cave7BaseGen

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@", local
	.4byte lbl_805196F0
	.4byte lbl_805196F8
.endobj "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805196C0, local
	.asciz "BaseGen"
.endobj lbl_805196C0
.balign 4
.obj lbl_805196C8, local
	.float 0.0
.endobj lbl_805196C8
.balign 4
.obj lbl_805196CC, local # Shift-JIS
	.4byte 0x93790000
.endobj lbl_805196CC
.balign 4
.obj lbl_805196D0, local # Shift-JIS
	.4byte 0x8381835E
	.4byte 0x838B0000
.endobj lbl_805196D0
.balign 4
.obj lbl_805196D8, local # Shift-JIS
	.4byte 0x835E8343
	.4byte 0x838B0000
.endobj lbl_805196D8
.balign 4
.obj lbl_805196E0, local # Shift-JIS
	.4byte 0x92CA8FED
	.byte 0
.endobj lbl_805196E0
.balign 4
.obj lbl_805196E8, local # Shift-JIS
	.4byte 0x837B8358
	.byte 0
.endobj lbl_805196E8
.balign 4
.obj lbl_805196F0, local # Shift-JIS
	.4byte 0x82C882B5
	.byte 0
.endobj lbl_805196F0
.balign 4
.obj lbl_805196F8, local # Shift-JIS
	.4byte 0x82A082E8
	.byte 0
.endobj lbl_805196F8
.balign 4
.obj lbl_80519700, local
	.float 1.0
.endobj lbl_80519700
.balign 4
.obj lbl_80519704, local
	.asciz "test"
.endobj lbl_80519704
.balign 4
.obj lbl_8051970C, local
	.asciz "VRBOX"
.endobj lbl_8051970C
.balign 4
.obj lbl_80519714, local # Shift-JIS
	.4byte 0x83BF91AE
	.4byte 0x90AB0000
.endobj lbl_80519714
.balign 4
.obj lbl_8051971C, local # Shift-JIS
	.4byte 0x83C091AE
	.4byte 0x90AB0000
.endobj lbl_8051971C
.balign 4
.obj lbl_80519724, local # Shift-JIS
	.4byte 0x894282B5
	.4byte 0x8FB00000
.endobj lbl_80519724
.balign 4
.obj lbl_8051972C, local
	.asciz "Version"
.endobj lbl_8051972C
.balign 4
.obj lbl_80519734, local
	.float 10000.0
.endobj lbl_80519734
.balign 4
.obj lbl_80519738, local # Shift-JIS
	.4byte 0x92BE82DE
	.4byte 0x95C70000
.endobj lbl_80519738
.balign 4
.obj lbl_80519740, local # Shift-JIS
	.4byte 0x8A4B9177
	.byte 0
.endobj lbl_80519740
.balign 4
.obj lbl_80519748, local
	.asciz "%s"
.endobj lbl_80519748

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game4Cave7BaseGenFv, global
/* 801D60A4 001D2FE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D60A8 001D2FE8  7C 08 02 A6 */	mflr r0
/* 801D60AC 001D2FEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D60B0 001D2FF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D60B4 001D2FF4  7C 7F 1B 78 */	mr r31, r3
/* 801D60B8 001D2FF8  48 23 B2 D9 */	bl __ct__5CNodeFv
/* 801D60BC 001D2FFC  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave7BaseGen@ha
/* 801D60C0 001D3000  38 A2 B3 60 */	addi r5, r2, lbl_805196C0@sda21
/* 801D60C4 001D3004  38 03 85 F4 */	addi r0, r3, __vt__Q34Game4Cave7BaseGen@l
/* 801D60C8 001D3008  C0 02 B3 68 */	lfs f0, lbl_805196C8@sda21(r2)
/* 801D60CC 001D300C  90 1F 00 00 */	stw r0, 0(r31)
/* 801D60D0 001D3010  38 80 00 01 */	li r4, 1
/* 801D60D4 001D3014  38 00 00 00 */	li r0, 0
/* 801D60D8 001D3018  7F E3 FB 78 */	mr r3, r31
/* 801D60DC 001D301C  90 BF 00 14 */	stw r5, 0x14(r31)
/* 801D60E0 001D3020  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 801D60E4 001D3024  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 801D60E8 001D3028  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 801D60EC 001D302C  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 801D60F0 001D3030  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 801D60F4 001D3034  90 9F 00 30 */	stw r4, 0x30(r31)
/* 801D60F8 001D3038  90 9F 00 34 */	stw r4, 0x34(r31)
/* 801D60FC 001D303C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801D6100 001D3040  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D6104 001D3044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6108 001D3048  7C 08 03 A6 */	mtlr r0
/* 801D610C 001D304C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6110 001D3050  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Cave7BaseGenFv

.fn read__Q34Game4Cave7BaseGenFR6Stream, global
/* 801D6114 001D3054  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6118 001D3058  7C 08 02 A6 */	mflr r0
/* 801D611C 001D305C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6120 001D3060  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801D6124 001D3064  7C 9C 23 78 */	mr r28, r4
/* 801D6128 001D3068  7C 7B 1B 78 */	mr r27, r3
/* 801D612C 001D306C  7F 83 E3 78 */	mr r3, r28
/* 801D6130 001D3070  48 23 E9 61 */	bl readInt__6StreamFv
/* 801D6134 001D3074  7C 7F 1B 78 */	mr r31, r3
/* 801D6138 001D3078  3B A0 00 00 */	li r29, 0
/* 801D613C 001D307C  48 00 00 B0 */	b .L_801D61EC
.L_801D6140:
/* 801D6140 001D3080  38 60 00 38 */	li r3, 0x38
/* 801D6144 001D3084  4B E4 DD 61 */	bl __nw__FUl
/* 801D6148 001D3088  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D614C 001D308C  41 82 00 48 */	beq .L_801D6194
/* 801D6150 001D3090  48 23 B2 41 */	bl __ct__5CNodeFv
/* 801D6154 001D3094  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave7BaseGen@ha
/* 801D6158 001D3098  38 82 B3 60 */	addi r4, r2, lbl_805196C0@sda21
/* 801D615C 001D309C  38 03 85 F4 */	addi r0, r3, __vt__Q34Game4Cave7BaseGen@l
/* 801D6160 001D30A0  C0 02 B3 68 */	lfs f0, lbl_805196C8@sda21(r2)
/* 801D6164 001D30A4  90 1E 00 00 */	stw r0, 0(r30)
/* 801D6168 001D30A8  38 60 00 01 */	li r3, 1
/* 801D616C 001D30AC  38 00 00 00 */	li r0, 0
/* 801D6170 001D30B0  90 9E 00 14 */	stw r4, 0x14(r30)
/* 801D6174 001D30B4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801D6178 001D30B8  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801D617C 001D30BC  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801D6180 001D30C0  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 801D6184 001D30C4  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801D6188 001D30C8  90 7E 00 30 */	stw r3, 0x30(r30)
/* 801D618C 001D30CC  90 7E 00 34 */	stw r3, 0x34(r30)
/* 801D6190 001D30D0  90 1E 00 18 */	stw r0, 0x18(r30)
.L_801D6194:
/* 801D6194 001D30D4  7F 83 E3 78 */	mr r3, r28
/* 801D6198 001D30D8  48 23 E8 F9 */	bl readInt__6StreamFv
/* 801D619C 001D30DC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801D61A0 001D30E0  7F 84 E3 78 */	mr r4, r28
/* 801D61A4 001D30E4  38 7E 00 1C */	addi r3, r30, 0x1c
/* 801D61A8 001D30E8  48 23 B7 E9 */	bl "read__10Vector3<f>FR6Stream"
/* 801D61AC 001D30EC  7F 83 E3 78 */	mr r3, r28
/* 801D61B0 001D30F0  48 23 EB FD */	bl readFloat__6StreamFv
/* 801D61B4 001D30F4  D0 3E 00 28 */	stfs f1, 0x28(r30)
/* 801D61B8 001D30F8  7F 83 E3 78 */	mr r3, r28
/* 801D61BC 001D30FC  48 23 EB F1 */	bl readFloat__6StreamFv
/* 801D61C0 001D3100  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801D61C4 001D3104  7F 83 E3 78 */	mr r3, r28
/* 801D61C8 001D3108  48 23 E8 C9 */	bl readInt__6StreamFv
/* 801D61CC 001D310C  90 7E 00 30 */	stw r3, 0x30(r30)
/* 801D61D0 001D3110  7F 83 E3 78 */	mr r3, r28
/* 801D61D4 001D3114  48 23 E8 BD */	bl readInt__6StreamFv
/* 801D61D8 001D3118  90 7E 00 34 */	stw r3, 0x34(r30)
/* 801D61DC 001D311C  7F 63 DB 78 */	mr r3, r27
/* 801D61E0 001D3120  7F C4 F3 78 */	mr r4, r30
/* 801D61E4 001D3124  48 23 B2 25 */	bl add__5CNodeFP5CNode
/* 801D61E8 001D3128  3B BD 00 01 */	addi r29, r29, 1
.L_801D61EC:
/* 801D61EC 001D312C  7C 1D F8 00 */	cmpw r29, r31
/* 801D61F0 001D3130  41 80 FF 50 */	blt .L_801D6140
/* 801D61F4 001D3134  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801D61F8 001D3138  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D61FC 001D313C  7C 08 03 A6 */	mtlr r0
/* 801D6200 001D3140  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6204 001D3144  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave7BaseGenFR6Stream

.fn draw__Q34Game4Cave7BaseGenFR8GraphicsP7Matrixf, global
/* 801D6208 001D3148  4E 80 00 20 */	blr 
.endfn draw__Q34Game4Cave7BaseGenFR8GraphicsP7Matrixf

.fn read__Q34Game4Cave8TekiInfoFR6Stream, global
/* 801D620C 001D314C  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 801D6210 001D3150  7C 08 02 A6 */	mflr r0
/* 801D6214 001D3154  38 A0 00 00 */	li r5, 0
/* 801D6218 001D3158  90 01 01 34 */	stw r0, 0x134(r1)
/* 801D621C 001D315C  BE C1 01 08 */	stmw r22, 0x108(r1)
/* 801D6220 001D3160  7C 9E 23 78 */	mr r30, r4
/* 801D6224 001D3164  7C 7D 1B 78 */	mr r29, r3
/* 801D6228 001D3168  38 80 00 00 */	li r4, 0
/* 801D622C 001D316C  7F C3 F3 78 */	mr r3, r30
/* 801D6230 001D3170  48 23 EE A5 */	bl readString__6StreamFPci
/* 801D6234 001D3174  88 03 00 00 */	lbz r0, 0(r3)
/* 801D6238 001D3178  7C 7F 1B 78 */	mr r31, r3
/* 801D623C 001D317C  2C 00 00 24 */	cmpwi r0, 0x24
/* 801D6240 001D3180  40 82 00 3C */	bne .L_801D627C
/* 801D6244 001D3184  88 7F 00 01 */	lbz r3, 1(r31)
/* 801D6248 001D3188  7C 60 07 74 */	extsb r0, r3
/* 801D624C 001D318C  2C 00 00 31 */	cmpwi r0, 0x31
/* 801D6250 001D3190  41 80 00 1C */	blt .L_801D626C
/* 801D6254 001D3194  2C 00 00 39 */	cmpwi r0, 0x39
/* 801D6258 001D3198  41 81 00 14 */	bgt .L_801D626C
/* 801D625C 001D319C  38 03 FF D0 */	addi r0, r3, -48
/* 801D6260 001D31A0  3B FF 00 02 */	addi r31, r31, 2
/* 801D6264 001D31A4  98 1D 00 24 */	stb r0, 0x24(r29)
/* 801D6268 001D31A8  48 00 00 1C */	b .L_801D6284
.L_801D626C:
/* 801D626C 001D31AC  38 00 00 01 */	li r0, 1
/* 801D6270 001D31B0  3B FF 00 01 */	addi r31, r31, 1
/* 801D6274 001D31B4  98 1D 00 24 */	stb r0, 0x24(r29)
/* 801D6278 001D31B8  48 00 00 0C */	b .L_801D6284
.L_801D627C:
/* 801D627C 001D31BC  38 00 00 00 */	li r0, 0
/* 801D6280 001D31C0  98 1D 00 24 */	stb r0, 0x24(r29)
.L_801D6284:
/* 801D6284 001D31C4  38 00 00 00 */	li r0, 0
/* 801D6288 001D31C8  7F FC FB 78 */	mr r28, r31
/* 801D628C 001D31CC  98 01 00 08 */	stb r0, 8(r1)
/* 801D6290 001D31D0  3B 41 00 88 */	addi r26, r1, 0x88
/* 801D6294 001D31D4  3B 20 00 00 */	li r25, 0
/* 801D6298 001D31D8  3B 00 00 00 */	li r24, 0
/* 801D629C 001D31DC  48 00 00 90 */	b .L_801D632C
.L_801D62A0:
/* 801D62A0 001D31E0  88 1C 00 00 */	lbz r0, 0(r28)
/* 801D62A4 001D31E4  3A E0 00 00 */	li r23, 0
/* 801D62A8 001D31E8  2C 00 00 5F */	cmpwi r0, 0x5f
/* 801D62AC 001D31EC  40 82 00 58 */	bne .L_801D6304
/* 801D62B0 001D31F0  38 01 00 88 */	addi r0, r1, 0x88
/* 801D62B4 001D31F4  7C 1A 00 40 */	cmplw r26, r0
/* 801D62B8 001D31F8  40 82 00 4C */	bne .L_801D6304
/* 801D62BC 001D31FC  38 00 00 00 */	li r0, 0
/* 801D62C0 001D3200  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 801D62C4 001D3204  7C 1A C9 AE */	stbx r0, r26, r25
/* 801D62C8 001D3208  3B 63 C5 38 */	addi r27, r3, gEnemyInfo__4Game@l
/* 801D62CC 001D320C  3A C0 00 00 */	li r22, 0
/* 801D62D0 001D3210  48 00 00 28 */	b .L_801D62F8
.L_801D62D4:
/* 801D62D4 001D3214  80 7B 00 00 */	lwz r3, 0(r27)
/* 801D62D8 001D3218  7F 44 D3 78 */	mr r4, r26
/* 801D62DC 001D321C  4B EF 43 E5 */	bl strcmp
/* 801D62E0 001D3220  2C 03 00 00 */	cmpwi r3, 0
/* 801D62E4 001D3224  40 82 00 0C */	bne .L_801D62F0
/* 801D62E8 001D3228  3A E0 00 01 */	li r23, 1
/* 801D62EC 001D322C  48 00 00 18 */	b .L_801D6304
.L_801D62F0:
/* 801D62F0 001D3230  3B 7B 00 34 */	addi r27, r27, 0x34
/* 801D62F4 001D3234  3A D6 00 01 */	addi r22, r22, 1
.L_801D62F8:
/* 801D62F8 001D3238  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 801D62FC 001D323C  7C 16 00 00 */	cmpw r22, r0
/* 801D6300 001D3240  41 80 FF D4 */	blt .L_801D62D4
.L_801D6304:
/* 801D6304 001D3244  56 E0 06 3F */	clrlwi. r0, r23, 0x18
/* 801D6308 001D3248  41 82 00 10 */	beq .L_801D6318
/* 801D630C 001D324C  3B 41 00 08 */	addi r26, r1, 8
/* 801D6310 001D3250  3B 20 00 00 */	li r25, 0
/* 801D6314 001D3254  48 00 00 10 */	b .L_801D6324
.L_801D6318:
/* 801D6318 001D3258  88 1C 00 00 */	lbz r0, 0(r28)
/* 801D631C 001D325C  7C 1A C9 AE */	stbx r0, r26, r25
/* 801D6320 001D3260  3B 39 00 01 */	addi r25, r25, 1
.L_801D6324:
/* 801D6324 001D3264  3B 18 00 01 */	addi r24, r24, 1
/* 801D6328 001D3268  3B 9C 00 01 */	addi r28, r28, 1
.L_801D632C:
/* 801D632C 001D326C  7F E3 FB 78 */	mr r3, r31
/* 801D6330 001D3270  4B EF 45 E1 */	bl strlen
/* 801D6334 001D3274  7C 18 18 40 */	cmplw r24, r3
/* 801D6338 001D3278  41 80 FF 68 */	blt .L_801D62A0
/* 801D633C 001D327C  38 00 00 00 */	li r0, 0
/* 801D6340 001D3280  38 81 00 88 */	addi r4, r1, 0x88
/* 801D6344 001D3284  7C 1A C9 AE */	stbx r0, r26, r25
/* 801D6348 001D3288  38 A0 00 04 */	li r5, 4
/* 801D634C 001D328C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 801D6350 001D3290  4B F3 72 55 */	bl getEnemyID__Q24Game15GeneralEnemyMgrFPci
/* 801D6354 001D3294  90 7D 00 18 */	stw r3, 0x18(r29)
/* 801D6358 001D3298  88 01 00 08 */	lbz r0, 8(r1)
/* 801D635C 001D329C  7C 00 07 75 */	extsb. r0, r0
/* 801D6360 001D32A0  41 82 00 14 */	beq .L_801D6374
/* 801D6364 001D32A4  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801D6368 001D32A8  38 81 00 08 */	addi r4, r1, 8
/* 801D636C 001D32AC  38 BD 00 26 */	addi r5, r29, 0x26
/* 801D6370 001D32B0  4B F9 7B 0D */	bl makeOtakaraItemCode__Q24Game9PelletMgrFPcRQ34Game9PelletMgr15OtakaraItemCode
.L_801D6374:
/* 801D6374 001D32B4  7F C3 F3 78 */	mr r3, r30
/* 801D6378 001D32B8  48 23 E7 19 */	bl readInt__6StreamFv
/* 801D637C 001D32BC  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 801D6380 001D32C0  7F C3 F3 78 */	mr r3, r30
/* 801D6384 001D32C4  48 23 E7 0D */	bl readInt__6StreamFv
/* 801D6388 001D32C8  90 7D 00 20 */	stw r3, 0x20(r29)
/* 801D638C 001D32CC  38 A0 00 04 */	li r5, 4
/* 801D6390 001D32D0  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 801D6394 001D32D4  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 801D6398 001D32D8  4B F3 71 E5 */	bl getEnemyName__Q24Game15GeneralEnemyMgrFii
/* 801D639C 001D32DC  90 7D 00 14 */	stw r3, 0x14(r29)
/* 801D63A0 001D32E0  BA C1 01 08 */	lmw r22, 0x108(r1)
/* 801D63A4 001D32E4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 801D63A8 001D32E8  7C 08 03 A6 */	mtlr r0
/* 801D63AC 001D32EC  38 21 01 30 */	addi r1, r1, 0x130
/* 801D63B0 001D32F0  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave8TekiInfoFR6Stream

.fn read__Q34Game4Cave8ItemInfoFR6Stream, global
/* 801D63B4 001D32F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D63B8 001D32F8  7C 08 02 A6 */	mflr r0
/* 801D63BC 001D32FC  38 A0 00 00 */	li r5, 0
/* 801D63C0 001D3300  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D63C4 001D3304  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D63C8 001D3308  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D63CC 001D330C  7C 9E 23 78 */	mr r30, r4
/* 801D63D0 001D3310  38 80 00 00 */	li r4, 0
/* 801D63D4 001D3314  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D63D8 001D3318  7C 7D 1B 78 */	mr r29, r3
/* 801D63DC 001D331C  7F C3 F3 78 */	mr r3, r30
/* 801D63E0 001D3320  48 23 EC F5 */	bl readString__6StreamFPci
/* 801D63E4 001D3324  7C 60 1B 78 */	mr r0, r3
/* 801D63E8 001D3328  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801D63EC 001D332C  7C 1F 03 78 */	mr r31, r0
/* 801D63F0 001D3330  81 83 00 00 */	lwz r12, 0(r3)
/* 801D63F4 001D3334  7F E4 FB 78 */	mr r4, r31
/* 801D63F8 001D3338  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801D63FC 001D333C  7D 89 03 A6 */	mtctr r12
/* 801D6400 001D3340  4E 80 04 21 */	bctrl 
/* 801D6404 001D3344  90 7D 00 18 */	stw r3, 0x18(r29)
/* 801D6408 001D3348  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 801D640C 001D334C  2C 00 FF FF */	cmpwi r0, -1
/* 801D6410 001D3350  40 82 00 20 */	bne .L_801D6430
/* 801D6414 001D3354  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D6418 001D3358  3C A0 80 48 */	lis r5, lbl_80480660@ha
/* 801D641C 001D335C  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D6420 001D3360  38 80 02 93 */	li r4, 0x293
/* 801D6424 001D3364  38 A5 06 60 */	addi r5, r5, lbl_80480660@l
/* 801D6428 001D3368  4C C6 31 82 */	crclr 6
/* 801D642C 001D336C  4B E5 42 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D6430:
/* 801D6430 001D3370  7F C3 F3 78 */	mr r3, r30
/* 801D6434 001D3374  48 23 E6 5D */	bl readInt__6StreamFv
/* 801D6438 001D3378  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 801D643C 001D337C  93 FD 00 14 */	stw r31, 0x14(r29)
/* 801D6440 001D3380  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6444 001D3384  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D6448 001D3388  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D644C 001D338C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D6450 001D3390  7C 08 03 A6 */	mtlr r0
/* 801D6454 001D3394  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6458 001D3398  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave8ItemInfoFR6Stream

.fn read__Q34Game4Cave8GateInfoFR6Stream, global
/* 801D645C 001D339C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6460 001D33A0  7C 08 02 A6 */	mflr r0
/* 801D6464 001D33A4  38 A0 00 00 */	li r5, 0
/* 801D6468 001D33A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D646C 001D33AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6470 001D33B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6474 001D33B4  7C 9E 23 78 */	mr r30, r4
/* 801D6478 001D33B8  38 80 00 00 */	li r4, 0
/* 801D647C 001D33BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6480 001D33C0  7C 7D 1B 78 */	mr r29, r3
/* 801D6484 001D33C4  7F C3 F3 78 */	mr r3, r30
/* 801D6488 001D33C8  48 23 EC 4D */	bl readString__6StreamFPci
/* 801D648C 001D33CC  7C 60 1B 78 */	mr r0, r3
/* 801D6490 001D33D0  80 6D 94 30 */	lwz r3, itemGateMgr__4Game@sda21(r13)
/* 801D6494 001D33D4  7C 1F 03 78 */	mr r31, r0
/* 801D6498 001D33D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D649C 001D33DC  7F E4 FB 78 */	mr r4, r31
/* 801D64A0 001D33E0  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801D64A4 001D33E4  7D 89 03 A6 */	mtctr r12
/* 801D64A8 001D33E8  4E 80 04 21 */	bctrl 
/* 801D64AC 001D33EC  90 7D 00 18 */	stw r3, 0x18(r29)
/* 801D64B0 001D33F0  7F C3 F3 78 */	mr r3, r30
/* 801D64B4 001D33F4  48 23 E8 F9 */	bl readFloat__6StreamFv
/* 801D64B8 001D33F8  D0 3D 00 1C */	stfs f1, 0x1c(r29)
/* 801D64BC 001D33FC  7F C3 F3 78 */	mr r3, r30
/* 801D64C0 001D3400  48 23 E5 D1 */	bl readInt__6StreamFv
/* 801D64C4 001D3404  90 7D 00 20 */	stw r3, 0x20(r29)
/* 801D64C8 001D3408  93 FD 00 14 */	stw r31, 0x14(r29)
/* 801D64CC 001D340C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D64D0 001D3410  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D64D4 001D3414  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D64D8 001D3418  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D64DC 001D341C  7C 08 03 A6 */	mtlr r0
/* 801D64E0 001D3420  38 21 00 20 */	addi r1, r1, 0x20
/* 801D64E4 001D3424  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave8GateInfoFR6Stream

.fn getTekiInfo__Q34Game4Cave7CapInfoFv, global
/* 801D64E8 001D3428  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801D64EC 001D342C  28 00 00 00 */	cmplwi r0, 0
/* 801D64F0 001D3430  40 82 00 0C */	bne .L_801D64FC
/* 801D64F4 001D3434  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 801D64F8 001D3438  4E 80 00 20 */	blr 
.L_801D64FC:
/* 801D64FC 001D343C  38 60 00 00 */	li r3, 0
/* 801D6500 001D3440  4E 80 00 20 */	blr 
.endfn getTekiInfo__Q34Game4Cave7CapInfoFv

.fn read__Q34Game4Cave7CapInfoFR6Stream, global
/* 801D6504 001D3444  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6508 001D3448  7C 08 02 A6 */	mflr r0
/* 801D650C 001D344C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6510 001D3450  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6514 001D3454  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6518 001D3458  7C 9E 23 78 */	mr r30, r4
/* 801D651C 001D345C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6520 001D3460  7C 7D 1B 78 */	mr r29, r3
/* 801D6524 001D3464  7F C3 F3 78 */	mr r3, r30
/* 801D6528 001D3468  48 23 DF 75 */	bl readByte__6StreamFv
/* 801D652C 001D346C  98 7D 00 18 */	stb r3, 0x18(r29)
/* 801D6530 001D3470  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 801D6534 001D3474  28 00 00 00 */	cmplwi r0, 0
/* 801D6538 001D3478  40 82 00 78 */	bne .L_801D65B0
/* 801D653C 001D347C  38 60 00 28 */	li r3, 0x28
/* 801D6540 001D3480  4B E4 D9 65 */	bl __nw__FUl
/* 801D6544 001D3484  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D6548 001D3488  41 82 00 30 */	beq .L_801D6578
/* 801D654C 001D348C  48 23 AE 45 */	bl __ct__5CNodeFv
/* 801D6550 001D3490  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D6554 001D3494  38 60 00 00 */	li r3, 0
/* 801D6558 001D3498  38 84 85 E0 */	addi r4, r4, __vt__Q34Game4Cave8TekiInfo@l
/* 801D655C 001D349C  38 00 00 01 */	li r0, 1
/* 801D6560 001D34A0  90 9F 00 00 */	stw r4, 0(r31)
/* 801D6564 001D34A4  B0 7F 00 26 */	sth r3, 0x26(r31)
/* 801D6568 001D34A8  90 7F 00 18 */	stw r3, 0x18(r31)
/* 801D656C 001D34AC  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801D6570 001D34B0  90 7F 00 20 */	stw r3, 0x20(r31)
/* 801D6574 001D34B4  98 7F 00 24 */	stb r3, 0x24(r31)
.L_801D6578:
/* 801D6578 001D34B8  93 FD 00 1C */	stw r31, 0x1c(r29)
/* 801D657C 001D34BC  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801D6580 001D34C0  90 63 00 0C */	stw r3, 0xc(r3)
/* 801D6584 001D34C4  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 801D6588 001D34C8  28 00 00 00 */	cmplwi r0, 0
/* 801D658C 001D34CC  40 82 00 0C */	bne .L_801D6598
/* 801D6590 001D34D0  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801D6594 001D34D4  48 00 00 08 */	b .L_801D659C
.L_801D6598:
/* 801D6598 001D34D8  38 60 00 00 */	li r3, 0
.L_801D659C:
/* 801D659C 001D34DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D65A0 001D34E0  7F C4 F3 78 */	mr r4, r30
/* 801D65A4 001D34E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D65A8 001D34E8  7D 89 03 A6 */	mtctr r12
/* 801D65AC 001D34EC  4E 80 04 21 */	bctrl 
.L_801D65B0:
/* 801D65B0 001D34F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D65B4 001D34F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D65B8 001D34F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D65BC 001D34FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D65C0 001D3500  7C 08 03 A6 */	mtlr r0
/* 801D65C4 001D3504  38 21 00 20 */	addi r1, r1, 0x20
/* 801D65C8 001D3508  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave7CapInfoFR6Stream

.fn __ct__Q34Game4Cave9FloorInfoFv, global
/* 801D65CC 001D350C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D65D0 001D3510  7C 08 02 A6 */	mflr r0
/* 801D65D4 001D3514  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 801D65D8 001D3518  38 C0 00 00 */	li r6, 0
/* 801D65DC 001D351C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D65E0 001D3520  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 801D65E4 001D3524  3C 80 80 48 */	lis r4, lbl_8048067C@ha
/* 801D65E8 001D3528  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D65EC 001D352C  38 A4 06 7C */	addi r5, r4, lbl_8048067C@l
/* 801D65F0 001D3530  7C 7F 1B 78 */	mr r31, r3
/* 801D65F4 001D3534  38 80 00 01 */	li r4, 1
/* 801D65F8 001D3538  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D65FC 001D353C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6600 001D3540  90 03 00 00 */	stw r0, 0(r3)
/* 801D6604 001D3544  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave9FloorInfo@ha
/* 801D6608 001D3548  38 03 85 90 */	addi r0, r3, __vt__Q34Game4Cave9FloorInfo@l
/* 801D660C 001D354C  90 DF 00 10 */	stw r6, 0x10(r31)
/* 801D6610 001D3550  38 7F 00 18 */	addi r3, r31, 0x18
/* 801D6614 001D3554  90 DF 00 0C */	stw r6, 0xc(r31)
/* 801D6618 001D3558  90 DF 00 08 */	stw r6, 8(r31)
/* 801D661C 001D355C  90 DF 00 04 */	stw r6, 4(r31)
/* 801D6620 001D3560  90 BF 00 14 */	stw r5, 0x14(r31)
/* 801D6624 001D3564  90 1F 00 00 */	stw r0, 0(r31)
/* 801D6628 001D3568  48 00 02 99 */	bl __ct__Q44Game4Cave9FloorInfo5ParmsFv
/* 801D662C 001D356C  3B DF 02 FC */	addi r30, r31, 0x2fc
/* 801D6630 001D3570  7F C3 F3 78 */	mr r3, r30
/* 801D6634 001D3574  48 23 AD 5D */	bl __ct__5CNodeFv
/* 801D6638 001D3578  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D663C 001D357C  3B BF 03 24 */	addi r29, r31, 0x324
/* 801D6640 001D3580  38 03 85 E0 */	addi r0, r3, __vt__Q34Game4Cave8TekiInfo@l
/* 801D6644 001D3584  38 80 00 00 */	li r4, 0
/* 801D6648 001D3588  90 1E 00 00 */	stw r0, 0(r30)
/* 801D664C 001D358C  38 00 00 01 */	li r0, 1
/* 801D6650 001D3590  7F A3 EB 78 */	mr r3, r29
/* 801D6654 001D3594  B0 9E 00 26 */	sth r4, 0x26(r30)
/* 801D6658 001D3598  90 9E 00 18 */	stw r4, 0x18(r30)
/* 801D665C 001D359C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801D6660 001D35A0  90 9E 00 20 */	stw r4, 0x20(r30)
/* 801D6664 001D35A4  98 9E 00 24 */	stb r4, 0x24(r30)
/* 801D6668 001D35A8  48 23 AD 29 */	bl __ct__5CNodeFv
/* 801D666C 001D35AC  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8ItemInfo@ha
/* 801D6670 001D35B0  3B DF 03 44 */	addi r30, r31, 0x344
/* 801D6674 001D35B4  38 03 85 CC */	addi r0, r3, __vt__Q34Game4Cave8ItemInfo@l
/* 801D6678 001D35B8  38 80 00 00 */	li r4, 0
/* 801D667C 001D35BC  90 1D 00 00 */	stw r0, 0(r29)
/* 801D6680 001D35C0  38 00 00 01 */	li r0, 1
/* 801D6684 001D35C4  7F C3 F3 78 */	mr r3, r30
/* 801D6688 001D35C8  90 9D 00 18 */	stw r4, 0x18(r29)
/* 801D668C 001D35CC  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 801D6690 001D35D0  48 23 AD 01 */	bl __ct__5CNodeFv
/* 801D6694 001D35D4  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8GateInfo@ha
/* 801D6698 001D35D8  3B BF 03 68 */	addi r29, r31, 0x368
/* 801D669C 001D35DC  38 03 85 B8 */	addi r0, r3, __vt__Q34Game4Cave8GateInfo@l
/* 801D66A0 001D35E0  38 80 00 00 */	li r4, 0
/* 801D66A4 001D35E4  90 1E 00 00 */	stw r0, 0(r30)
/* 801D66A8 001D35E8  38 00 00 01 */	li r0, 1
/* 801D66AC 001D35EC  C0 02 B3 68 */	lfs f0, lbl_805196C8@sda21(r2)
/* 801D66B0 001D35F0  7F A3 EB 78 */	mr r3, r29
/* 801D66B4 001D35F4  90 9E 00 18 */	stw r4, 0x18(r30)
/* 801D66B8 001D35F8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801D66BC 001D35FC  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801D66C0 001D3600  48 23 AC D1 */	bl __ct__5CNodeFv
/* 801D66C4 001D3604  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave7CapInfo@ha
/* 801D66C8 001D3608  38 80 00 01 */	li r4, 1
/* 801D66CC 001D360C  38 63 85 A4 */	addi r3, r3, __vt__Q34Game4Cave7CapInfo@l
/* 801D66D0 001D3610  38 00 00 00 */	li r0, 0
/* 801D66D4 001D3614  90 7D 00 00 */	stw r3, 0(r29)
/* 801D66D8 001D3618  7F E3 FB 78 */	mr r3, r31
/* 801D66DC 001D361C  98 9D 00 18 */	stb r4, 0x18(r29)
/* 801D66E0 001D3620  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 801D66E4 001D3624  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 801D66E8 001D3628  90 1F 03 08 */	stw r0, 0x308(r31)
/* 801D66EC 001D362C  90 1F 03 04 */	stw r0, 0x304(r31)
/* 801D66F0 001D3630  90 1F 03 00 */	stw r0, 0x300(r31)
/* 801D66F4 001D3634  90 1F 03 34 */	stw r0, 0x334(r31)
/* 801D66F8 001D3638  90 1F 03 30 */	stw r0, 0x330(r31)
/* 801D66FC 001D363C  90 1F 03 2C */	stw r0, 0x32c(r31)
/* 801D6700 001D3640  90 1F 03 28 */	stw r0, 0x328(r31)
/* 801D6704 001D3644  90 1F 03 54 */	stw r0, 0x354(r31)
/* 801D6708 001D3648  90 1F 03 50 */	stw r0, 0x350(r31)
/* 801D670C 001D364C  90 1F 03 4C */	stw r0, 0x34c(r31)
/* 801D6710 001D3650  90 1F 03 48 */	stw r0, 0x348(r31)
/* 801D6714 001D3654  90 1F 03 78 */	stw r0, 0x378(r31)
/* 801D6718 001D3658  90 1F 03 74 */	stw r0, 0x374(r31)
/* 801D671C 001D365C  90 1F 03 70 */	stw r0, 0x370(r31)
/* 801D6720 001D3660  90 1F 03 6C */	stw r0, 0x36c(r31)
/* 801D6724 001D3664  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D6728 001D3668  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D672C 001D366C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D6730 001D3670  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6734 001D3674  7C 08 03 A6 */	mtlr r0
/* 801D6738 001D3678  38 21 00 20 */	addi r1, r1, 0x20
/* 801D673C 001D367C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Cave9FloorInfoFv

.fn __dt__Q34Game4Cave7CapInfoFv, weak
/* 801D6740 001D3680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6744 001D3684  7C 08 02 A6 */	mflr r0
/* 801D6748 001D3688  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D674C 001D368C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D6750 001D3690  7C 9F 23 78 */	mr r31, r4
/* 801D6754 001D3694  93 C1 00 08 */	stw r30, 8(r1)
/* 801D6758 001D3698  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D675C 001D369C  41 82 00 28 */	beq .L_801D6784
/* 801D6760 001D36A0  3C A0 80 4C */	lis r5, __vt__Q34Game4Cave7CapInfo@ha
/* 801D6764 001D36A4  38 80 00 00 */	li r4, 0
/* 801D6768 001D36A8  38 05 85 A4 */	addi r0, r5, __vt__Q34Game4Cave7CapInfo@l
/* 801D676C 001D36AC  90 1E 00 00 */	stw r0, 0(r30)
/* 801D6770 001D36B0  48 23 AE 19 */	bl __dt__5CNodeFv
/* 801D6774 001D36B4  7F E0 07 35 */	extsh. r0, r31
/* 801D6778 001D36B8  40 81 00 0C */	ble .L_801D6784
/* 801D677C 001D36BC  7F C3 F3 78 */	mr r3, r30
/* 801D6780 001D36C0  4B E4 D9 35 */	bl __dl__FPv
.L_801D6784:
/* 801D6784 001D36C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6788 001D36C8  7F C3 F3 78 */	mr r3, r30
/* 801D678C 001D36CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D6790 001D36D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D6794 001D36D4  7C 08 03 A6 */	mtlr r0
/* 801D6798 001D36D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D679C 001D36DC  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave7CapInfoFv

.fn __dt__Q34Game4Cave8GateInfoFv, weak
/* 801D67A0 001D36E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D67A4 001D36E4  7C 08 02 A6 */	mflr r0
/* 801D67A8 001D36E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D67AC 001D36EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D67B0 001D36F0  7C 9F 23 78 */	mr r31, r4
/* 801D67B4 001D36F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801D67B8 001D36F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D67BC 001D36FC  41 82 00 28 */	beq .L_801D67E4
/* 801D67C0 001D3700  3C A0 80 4C */	lis r5, __vt__Q34Game4Cave8GateInfo@ha
/* 801D67C4 001D3704  38 80 00 00 */	li r4, 0
/* 801D67C8 001D3708  38 05 85 B8 */	addi r0, r5, __vt__Q34Game4Cave8GateInfo@l
/* 801D67CC 001D370C  90 1E 00 00 */	stw r0, 0(r30)
/* 801D67D0 001D3710  48 23 AD B9 */	bl __dt__5CNodeFv
/* 801D67D4 001D3714  7F E0 07 35 */	extsh. r0, r31
/* 801D67D8 001D3718  40 81 00 0C */	ble .L_801D67E4
/* 801D67DC 001D371C  7F C3 F3 78 */	mr r3, r30
/* 801D67E0 001D3720  4B E4 D8 D5 */	bl __dl__FPv
.L_801D67E4:
/* 801D67E4 001D3724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D67E8 001D3728  7F C3 F3 78 */	mr r3, r30
/* 801D67EC 001D372C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D67F0 001D3730  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D67F4 001D3734  7C 08 03 A6 */	mtlr r0
/* 801D67F8 001D3738  38 21 00 10 */	addi r1, r1, 0x10
/* 801D67FC 001D373C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave8GateInfoFv

.fn __dt__Q34Game4Cave8ItemInfoFv, weak
/* 801D6800 001D3740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6804 001D3744  7C 08 02 A6 */	mflr r0
/* 801D6808 001D3748  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D680C 001D374C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D6810 001D3750  7C 9F 23 78 */	mr r31, r4
/* 801D6814 001D3754  93 C1 00 08 */	stw r30, 8(r1)
/* 801D6818 001D3758  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D681C 001D375C  41 82 00 28 */	beq .L_801D6844
/* 801D6820 001D3760  3C A0 80 4C */	lis r5, __vt__Q34Game4Cave8ItemInfo@ha
/* 801D6824 001D3764  38 80 00 00 */	li r4, 0
/* 801D6828 001D3768  38 05 85 CC */	addi r0, r5, __vt__Q34Game4Cave8ItemInfo@l
/* 801D682C 001D376C  90 1E 00 00 */	stw r0, 0(r30)
/* 801D6830 001D3770  48 23 AD 59 */	bl __dt__5CNodeFv
/* 801D6834 001D3774  7F E0 07 35 */	extsh. r0, r31
/* 801D6838 001D3778  40 81 00 0C */	ble .L_801D6844
/* 801D683C 001D377C  7F C3 F3 78 */	mr r3, r30
/* 801D6840 001D3780  4B E4 D8 75 */	bl __dl__FPv
.L_801D6844:
/* 801D6844 001D3784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6848 001D3788  7F C3 F3 78 */	mr r3, r30
/* 801D684C 001D378C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D6850 001D3790  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D6854 001D3794  7C 08 03 A6 */	mtlr r0
/* 801D6858 001D3798  38 21 00 10 */	addi r1, r1, 0x10
/* 801D685C 001D379C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave8ItemInfoFv

.fn __dt__Q34Game4Cave8TekiInfoFv, weak
/* 801D6860 001D37A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6864 001D37A4  7C 08 02 A6 */	mflr r0
/* 801D6868 001D37A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D686C 001D37AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D6870 001D37B0  7C 9F 23 78 */	mr r31, r4
/* 801D6874 001D37B4  93 C1 00 08 */	stw r30, 8(r1)
/* 801D6878 001D37B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D687C 001D37BC  41 82 00 28 */	beq .L_801D68A4
/* 801D6880 001D37C0  3C A0 80 4C */	lis r5, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D6884 001D37C4  38 80 00 00 */	li r4, 0
/* 801D6888 001D37C8  38 05 85 E0 */	addi r0, r5, __vt__Q34Game4Cave8TekiInfo@l
/* 801D688C 001D37CC  90 1E 00 00 */	stw r0, 0(r30)
/* 801D6890 001D37D0  48 23 AC F9 */	bl __dt__5CNodeFv
/* 801D6894 001D37D4  7F E0 07 35 */	extsh. r0, r31
/* 801D6898 001D37D8  40 81 00 0C */	ble .L_801D68A4
/* 801D689C 001D37DC  7F C3 F3 78 */	mr r3, r30
/* 801D68A0 001D37E0  4B E4 D8 15 */	bl __dl__FPv
.L_801D68A4:
/* 801D68A4 001D37E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D68A8 001D37E8  7F C3 F3 78 */	mr r3, r30
/* 801D68AC 001D37EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D68B0 001D37F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D68B4 001D37F4  7C 08 03 A6 */	mtlr r0
/* 801D68B8 001D37F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D68BC 001D37FC  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave8TekiInfoFv

.fn __ct__Q44Game4Cave9FloorInfo5ParmsFv, global
/* 801D68C0 001D3800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D68C4 001D3804  7C 08 02 A6 */	mflr r0
/* 801D68C8 001D3808  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D68CC 001D380C  7C 80 07 35 */	extsh. r0, r4
/* 801D68D0 001D3810  3C 80 80 48 */	lis r4, lbl_80480640@ha
/* 801D68D4 001D3814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D68D8 001D3818  3B E4 06 40 */	addi r31, r4, lbl_80480640@l
/* 801D68DC 001D381C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D68E0 001D3820  7C 7E 1B 78 */	mr r30, r3
/* 801D68E4 001D3824  41 82 00 0C */	beq .L_801D68F0
/* 801D68E8 001D3828  38 1E 02 E0 */	addi r0, r30, 0x2e0
/* 801D68EC 001D382C  90 1E 00 00 */	stw r0, 0(r30)
.L_801D68F0:
/* 801D68F0 001D3830  38 00 00 00 */	li r0, 0
/* 801D68F4 001D3834  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 801D68F8 001D3838  90 1E 00 04 */	stw r0, 4(r30)
/* 801D68FC 001D383C  38 1F 00 64 */	addi r0, r31, 0x64
/* 801D6900 001D3840  7F C4 F3 78 */	mr r4, r30
/* 801D6904 001D3844  38 7E 00 0C */	addi r3, r30, 0xc
/* 801D6908 001D3848  90 1E 00 08 */	stw r0, 8(r30)
/* 801D690C 001D384C  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 801D6910 001D3850  38 DF 00 70 */	addi r6, r31, 0x70
/* 801D6914 001D3854  48 23 CD 45 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6918 001D3858  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D691C 001D385C  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 801D6920 001D3860  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6924 001D3864  38 E0 00 00 */	li r7, 0
/* 801D6928 001D3868  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801D692C 001D386C  38 00 00 7F */	li r0, 0x7f
/* 801D6930 001D3870  7F C4 F3 78 */	mr r4, r30
/* 801D6934 001D3874  38 7E 00 34 */	addi r3, r30, 0x34
/* 801D6938 001D3878  90 FE 00 24 */	stw r7, 0x24(r30)
/* 801D693C 001D387C  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 801D6940 001D3880  38 DF 00 7C */	addi r6, r31, 0x7c
/* 801D6944 001D3884  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 801D6948 001D3888  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D694C 001D388C  48 23 CD 0D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6950 001D3890  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6954 001D3894  3C A0 66 30 */	lis r5, 0x66303032@ha
/* 801D6958 001D3898  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D695C 001D389C  38 60 00 01 */	li r3, 1
/* 801D6960 001D38A0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801D6964 001D38A4  38 E0 00 00 */	li r7, 0
/* 801D6968 001D38A8  38 00 00 7F */	li r0, 0x7f
/* 801D696C 001D38AC  7F C4 F3 78 */	mr r4, r30
/* 801D6970 001D38B0  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D6974 001D38B4  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801D6978 001D38B8  38 A5 30 32 */	addi r5, r5, 0x66303032@l
/* 801D697C 001D38BC  38 DF 00 88 */	addi r6, r31, 0x88
/* 801D6980 001D38C0  90 FE 00 54 */	stw r7, 0x54(r30)
/* 801D6984 001D38C4  90 1E 00 58 */	stw r0, 0x58(r30)
/* 801D6988 001D38C8  48 23 CC D1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D698C 001D38CC  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6990 001D38D0  3C A0 66 30 */	lis r5, 0x66303033@ha
/* 801D6994 001D38D4  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6998 001D38D8  38 E0 00 00 */	li r7, 0
/* 801D699C 001D38DC  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801D69A0 001D38E0  38 00 00 80 */	li r0, 0x80
/* 801D69A4 001D38E4  7F C4 F3 78 */	mr r4, r30
/* 801D69A8 001D38E8  38 7E 00 84 */	addi r3, r30, 0x84
/* 801D69AC 001D38EC  90 FE 00 74 */	stw r7, 0x74(r30)
/* 801D69B0 001D38F0  38 A5 30 33 */	addi r5, r5, 0x66303033@l
/* 801D69B4 001D38F4  38 DF 00 94 */	addi r6, r31, 0x94
/* 801D69B8 001D38F8  90 FE 00 7C */	stw r7, 0x7c(r30)
/* 801D69BC 001D38FC  90 1E 00 80 */	stw r0, 0x80(r30)
/* 801D69C0 001D3900  48 23 CC 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D69C4 001D3904  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D69C8 001D3908  3C A0 66 30 */	lis r5, 0x66303034@ha
/* 801D69CC 001D390C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D69D0 001D3910  38 E0 00 00 */	li r7, 0
/* 801D69D4 001D3914  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801D69D8 001D3918  38 00 00 80 */	li r0, 0x80
/* 801D69DC 001D391C  7F C4 F3 78 */	mr r4, r30
/* 801D69E0 001D3920  38 7E 00 AC */	addi r3, r30, 0xac
/* 801D69E4 001D3924  90 FE 00 9C */	stw r7, 0x9c(r30)
/* 801D69E8 001D3928  38 A5 30 34 */	addi r5, r5, 0x66303034@l
/* 801D69EC 001D392C  38 DF 00 A4 */	addi r6, r31, 0xa4
/* 801D69F0 001D3930  90 FE 00 A4 */	stw r7, 0xa4(r30)
/* 801D69F4 001D3934  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 801D69F8 001D3938  48 23 CC 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D69FC 001D393C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6A00 001D3940  3C A0 66 30 */	lis r5, 0x66303134@ha
/* 801D6A04 001D3944  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6A08 001D3948  38 E0 00 00 */	li r7, 0
/* 801D6A0C 001D394C  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801D6A10 001D3950  38 00 00 20 */	li r0, 0x20
/* 801D6A14 001D3954  7F C4 F3 78 */	mr r4, r30
/* 801D6A18 001D3958  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 801D6A1C 001D395C  90 FE 00 C4 */	stw r7, 0xc4(r30)
/* 801D6A20 001D3960  38 A5 31 34 */	addi r5, r5, 0x66303134@l
/* 801D6A24 001D3964  38 DF 00 B4 */	addi r6, r31, 0xb4
/* 801D6A28 001D3968  90 FE 00 CC */	stw r7, 0xcc(r30)
/* 801D6A2C 001D396C  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 801D6A30 001D3970  48 23 CC 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6A34 001D3974  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6A38 001D3978  3C A0 66 30 */	lis r5, 0x66303035@ha
/* 801D6A3C 001D397C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6A40 001D3980  38 E0 00 00 */	li r7, 0
/* 801D6A44 001D3984  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 801D6A48 001D3988  38 00 00 80 */	li r0, 0x80
/* 801D6A4C 001D398C  7F C4 F3 78 */	mr r4, r30
/* 801D6A50 001D3990  38 7E 00 FC */	addi r3, r30, 0xfc
/* 801D6A54 001D3994  90 FE 00 EC */	stw r7, 0xec(r30)
/* 801D6A58 001D3998  38 A5 30 35 */	addi r5, r5, 0x66303035@l
/* 801D6A5C 001D399C  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 801D6A60 001D39A0  90 FE 00 F4 */	stw r7, 0xf4(r30)
/* 801D6A64 001D39A4  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 801D6A68 001D39A8  48 23 CB F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6A6C 001D39AC  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6A70 001D39B0  3C A0 66 30 */	lis r5, 0x66303036@ha
/* 801D6A74 001D39B4  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6A78 001D39B8  38 60 00 04 */	li r3, 4
/* 801D6A7C 001D39BC  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 801D6A80 001D39C0  38 E0 00 01 */	li r7, 1
/* 801D6A84 001D39C4  38 00 00 0F */	li r0, 0xf
/* 801D6A88 001D39C8  7F C4 F3 78 */	mr r4, r30
/* 801D6A8C 001D39CC  90 7E 01 14 */	stw r3, 0x114(r30)
/* 801D6A90 001D39D0  38 7E 01 24 */	addi r3, r30, 0x124
/* 801D6A94 001D39D4  38 A5 30 36 */	addi r5, r5, 0x66303036@l
/* 801D6A98 001D39D8  38 DF 00 D0 */	addi r6, r31, 0xd0
/* 801D6A9C 001D39DC  90 FE 01 1C */	stw r7, 0x11c(r30)
/* 801D6AA0 001D39E0  90 1E 01 20 */	stw r0, 0x120(r30)
/* 801D6AA4 001D39E4  48 23 CB B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6AA8 001D39E8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801D6AAC 001D39EC  3C A0 66 30 */	lis r5, 0x66303037@ha
/* 801D6AB0 001D39F0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801D6AB4 001D39F4  C0 22 B3 68 */	lfs f1, lbl_805196C8@sda21(r2)
/* 801D6AB8 001D39F8  90 1E 01 24 */	stw r0, 0x124(r30)
/* 801D6ABC 001D39FC  7F C4 F3 78 */	mr r4, r30
/* 801D6AC0 001D3A00  C0 02 B3 A0 */	lfs f0, lbl_80519700@sda21(r2)
/* 801D6AC4 001D3A04  38 7E 01 4C */	addi r3, r30, 0x14c
/* 801D6AC8 001D3A08  D0 3E 01 3C */	stfs f1, 0x13c(r30)
/* 801D6ACC 001D3A0C  38 A5 30 37 */	addi r5, r5, 0x66303037@l
/* 801D6AD0 001D3A10  38 DF 00 E0 */	addi r6, r31, 0xe0
/* 801D6AD4 001D3A14  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 801D6AD8 001D3A18  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 801D6ADC 001D3A1C  48 23 CB 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6AE0 001D3A20  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6AE4 001D3A24  3C C0 66 30 */	lis r6, 0x66303038@ha
/* 801D6AE8 001D3A28  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6AEC 001D3A2C  39 20 00 00 */	li r9, 0
/* 801D6AF0 001D3A30  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 801D6AF4 001D3A34  38 00 00 01 */	li r0, 1
/* 801D6AF8 001D3A38  7F C4 F3 78 */	mr r4, r30
/* 801D6AFC 001D3A3C  38 7E 01 74 */	addi r3, r30, 0x174
/* 801D6B00 001D3A40  91 3E 01 64 */	stw r9, 0x164(r30)
/* 801D6B04 001D3A44  38 BF 00 F4 */	addi r5, r31, 0xf4
/* 801D6B08 001D3A48  38 E6 30 38 */	addi r7, r6, 0x66303038@l
/* 801D6B0C 001D3A4C  39 1F 01 00 */	addi r8, r31, 0x100
/* 801D6B10 001D3A50  91 3E 01 6C */	stw r9, 0x16c(r30)
/* 801D6B14 001D3A54  38 C0 00 40 */	li r6, 0x40
/* 801D6B18 001D3A58  90 1E 01 70 */	stw r0, 0x170(r30)
/* 801D6B1C 001D3A5C  48 23 CF 9D */	bl __ct__10ParmStringFP10ParametersPciUlPc
/* 801D6B20 001D3A60  3C C0 66 30 */	lis r6, 0x66303039@ha
/* 801D6B24 001D3A64  7F C4 F3 78 */	mr r4, r30
/* 801D6B28 001D3A68  38 7E 01 94 */	addi r3, r30, 0x194
/* 801D6B2C 001D3A6C  38 BF 01 10 */	addi r5, r31, 0x110
/* 801D6B30 001D3A70  38 E6 30 39 */	addi r7, r6, 0x66303039@l
/* 801D6B34 001D3A74  39 1F 01 1C */	addi r8, r31, 0x11c
/* 801D6B38 001D3A78  38 C0 00 40 */	li r6, 0x40
/* 801D6B3C 001D3A7C  48 23 CF 7D */	bl __ct__10ParmStringFP10ParametersPciUlPc
/* 801D6B40 001D3A80  3C C0 66 30 */	lis r6, 0x66303041@ha
/* 801D6B44 001D3A84  7F C4 F3 78 */	mr r4, r30
/* 801D6B48 001D3A88  38 7E 01 B4 */	addi r3, r30, 0x1b4
/* 801D6B4C 001D3A8C  38 A2 B3 A4 */	addi r5, r2, lbl_80519704@sda21
/* 801D6B50 001D3A90  38 E6 30 41 */	addi r7, r6, 0x66303041@l
/* 801D6B54 001D3A94  38 C0 00 40 */	li r6, 0x40
/* 801D6B58 001D3A98  39 02 B3 AC */	addi r8, r2, lbl_8051970C@sda21
/* 801D6B5C 001D3A9C  48 23 CF 5D */	bl __ct__10ParmStringFP10ParametersPciUlPc
/* 801D6B60 001D3AA0  3C A0 66 30 */	lis r5, 0x66303130@ha
/* 801D6B64 001D3AA4  7F C4 F3 78 */	mr r4, r30
/* 801D6B68 001D3AA8  38 7E 01 D4 */	addi r3, r30, 0x1d4
/* 801D6B6C 001D3AAC  38 DF 01 28 */	addi r6, r31, 0x128
/* 801D6B70 001D3AB0  38 A5 31 30 */	addi r5, r5, 0x66303130@l
/* 801D6B74 001D3AB4  48 23 CA E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6B78 001D3AB8  3C 80 80 4B */	lis r4, "__vt__7Parm<i>"@ha
/* 801D6B7C 001D3ABC  3C 60 80 4C */	lis r3, "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"@ha
/* 801D6B80 001D3AC0  38 04 AC 90 */	addi r0, r4, "__vt__7Parm<i>"@l
/* 801D6B84 001D3AC4  3C C0 66 30 */	lis r6, 0x66303131@ha
/* 801D6B88 001D3AC8  90 1E 01 D4 */	stw r0, 0x1d4(r30)
/* 801D6B8C 001D3ACC  38 E0 00 00 */	li r7, 0
/* 801D6B90 001D3AD0  38 A3 85 58 */	addi r5, r3, "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"@l
/* 801D6B94 001D3AD4  39 06 31 31 */	addi r8, r6, 0x66303131@l
/* 801D6B98 001D3AD8  90 FE 01 EC */	stw r7, 0x1ec(r30)
/* 801D6B9C 001D3ADC  38 00 00 01 */	li r0, 1
/* 801D6BA0 001D3AE0  7F C4 F3 78 */	mr r4, r30
/* 801D6BA4 001D3AE4  38 7E 01 FC */	addi r3, r30, 0x1fc
/* 801D6BA8 001D3AE8  90 FE 01 F4 */	stw r7, 0x1f4(r30)
/* 801D6BAC 001D3AEC  38 C0 00 00 */	li r6, 0
/* 801D6BB0 001D3AF0  38 E0 00 06 */	li r7, 6
/* 801D6BB4 001D3AF4  39 22 B3 B4 */	addi r9, r2, lbl_80519714@sda21
/* 801D6BB8 001D3AF8  90 1E 01 F8 */	stw r0, 0x1f8(r30)
/* 801D6BBC 001D3AFC  48 23 D1 09 */	bl __ct__8ParmEnumFP10ParametersPPcUlilPc
/* 801D6BC0 001D3B00  3C 60 80 4C */	lis r3, "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"@ha
/* 801D6BC4 001D3B04  3C C0 66 30 */	lis r6, 0x66303132@ha
/* 801D6BC8 001D3B08  38 A3 85 70 */	addi r5, r3, "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"@l
/* 801D6BCC 001D3B0C  7F C4 F3 78 */	mr r4, r30
/* 801D6BD0 001D3B10  39 06 31 32 */	addi r8, r6, 0x66303132@l
/* 801D6BD4 001D3B14  38 7E 02 20 */	addi r3, r30, 0x220
/* 801D6BD8 001D3B18  38 C0 00 00 */	li r6, 0
/* 801D6BDC 001D3B1C  38 E0 00 03 */	li r7, 3
/* 801D6BE0 001D3B20  39 22 B3 BC */	addi r9, r2, lbl_8051971C@sda21
/* 801D6BE4 001D3B24  48 23 D0 E1 */	bl __ct__8ParmEnumFP10ParametersPPcUlilPc
/* 801D6BE8 001D3B28  3C C0 66 30 */	lis r6, 0x66303133@ha
/* 801D6BEC 001D3B2C  7F C4 F3 78 */	mr r4, r30
/* 801D6BF0 001D3B30  38 7E 02 44 */	addi r3, r30, 0x244
/* 801D6BF4 001D3B34  38 AD 84 50 */	addi r5, r13, "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@"@sda21
/* 801D6BF8 001D3B38  39 06 31 33 */	addi r8, r6, 0x66303133@l
/* 801D6BFC 001D3B3C  38 C0 00 00 */	li r6, 0
/* 801D6C00 001D3B40  38 E0 00 02 */	li r7, 2
/* 801D6C04 001D3B44  39 22 B3 C4 */	addi r9, r2, lbl_80519724@sda21
/* 801D6C08 001D3B48  48 23 D0 BD */	bl __ct__8ParmEnumFP10ParametersPPcUlilPc
/* 801D6C0C 001D3B4C  3C A0 66 30 */	lis r5, 0x66303135@ha
/* 801D6C10 001D3B50  7F C4 F3 78 */	mr r4, r30
/* 801D6C14 001D3B54  38 7E 02 68 */	addi r3, r30, 0x268
/* 801D6C18 001D3B58  38 C2 B3 CC */	addi r6, r2, lbl_8051972C@sda21
/* 801D6C1C 001D3B5C  38 A5 31 35 */	addi r5, r5, 0x66303135@l
/* 801D6C20 001D3B60  48 23 CA 39 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6C24 001D3B64  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6C28 001D3B68  3C A0 66 30 */	lis r5, 0x66303136@ha
/* 801D6C2C 001D3B6C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 801D6C30 001D3B70  38 E0 00 00 */	li r7, 0
/* 801D6C34 001D3B74  90 1E 02 68 */	stw r0, 0x268(r30)
/* 801D6C38 001D3B78  38 00 27 10 */	li r0, 0x2710
/* 801D6C3C 001D3B7C  7F C4 F3 78 */	mr r4, r30
/* 801D6C40 001D3B80  38 7E 02 90 */	addi r3, r30, 0x290
/* 801D6C44 001D3B84  90 FE 02 80 */	stw r7, 0x280(r30)
/* 801D6C48 001D3B88  38 A5 31 36 */	addi r5, r5, 0x66303136@l
/* 801D6C4C 001D3B8C  38 DF 01 4C */	addi r6, r31, 0x14c
/* 801D6C50 001D3B90  90 FE 02 88 */	stw r7, 0x288(r30)
/* 801D6C54 001D3B94  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 801D6C58 001D3B98  48 23 CA 01 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6C5C 001D3B9C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801D6C60 001D3BA0  3C A0 66 30 */	lis r5, 0x66303137@ha
/* 801D6C64 001D3BA4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801D6C68 001D3BA8  C0 22 B3 68 */	lfs f1, lbl_805196C8@sda21(r2)
/* 801D6C6C 001D3BAC  90 1E 02 90 */	stw r0, 0x290(r30)
/* 801D6C70 001D3BB0  7F C4 F3 78 */	mr r4, r30
/* 801D6C74 001D3BB4  C0 02 B3 D4 */	lfs f0, lbl_80519734@sda21(r2)
/* 801D6C78 001D3BB8  38 7E 02 B8 */	addi r3, r30, 0x2b8
/* 801D6C7C 001D3BBC  D0 3E 02 A8 */	stfs f1, 0x2a8(r30)
/* 801D6C80 001D3BC0  38 A5 31 37 */	addi r5, r5, 0x66303137@l
/* 801D6C84 001D3BC4  38 C2 B3 D8 */	addi r6, r2, lbl_80519738@sda21
/* 801D6C88 001D3BC8  D0 3E 02 B0 */	stfs f1, 0x2b0(r30)
/* 801D6C8C 001D3BCC  D0 1E 02 B4 */	stfs f0, 0x2b4(r30)
/* 801D6C90 001D3BD0  48 23 C9 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D6C94 001D3BD4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D6C98 001D3BD8  38 80 00 00 */	li r4, 0
/* 801D6C9C 001D3BDC  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 801D6CA0 001D3BE0  38 00 00 01 */	li r0, 1
/* 801D6CA4 001D3BE4  90 7E 02 B8 */	stw r3, 0x2b8(r30)
/* 801D6CA8 001D3BE8  7F C3 F3 78 */	mr r3, r30
/* 801D6CAC 001D3BEC  90 9E 02 D0 */	stw r4, 0x2d0(r30)
/* 801D6CB0 001D3BF0  90 9E 02 D8 */	stw r4, 0x2d8(r30)
/* 801D6CB4 001D3BF4  90 1E 02 DC */	stw r0, 0x2dc(r30)
/* 801D6CB8 001D3BF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D6CBC 001D3BFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D6CC0 001D3C00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6CC4 001D3C04  7C 08 03 A6 */	mtlr r0
/* 801D6CC8 001D3C08  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6CCC 001D3C0C  4E 80 00 20 */	blr 
.endfn __ct__Q44Game4Cave9FloorInfo5ParmsFv

.fn hasHiddenCollision__Q34Game4Cave9FloorInfoFv, global
/* 801D6CD0 001D3C10  80 03 02 74 */	lwz r0, 0x274(r3)
/* 801D6CD4 001D3C14  20 00 00 01 */	subfic r0, r0, 1
/* 801D6CD8 001D3C18  7C 00 00 34 */	cntlzw r0, r0
/* 801D6CDC 001D3C1C  54 03 D9 7E */	srwi r3, r0, 5
/* 801D6CE0 001D3C20  4E 80 00 20 */	blr 
.endfn hasHiddenCollision__Q34Game4Cave9FloorInfoFv

.fn getTekiMax__Q34Game4Cave9FloorInfoFv, global
/* 801D6CE4 001D3C24  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 801D6CE8 001D3C28  4E 80 00 20 */	blr 
.endfn getTekiMax__Q34Game4Cave9FloorInfoFv

.fn getTekiInfoNum__Q34Game4Cave9FloorInfoFv, global
/* 801D6CEC 001D3C2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6CF0 001D3C30  7C 08 02 A6 */	mflr r0
/* 801D6CF4 001D3C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D6CF8 001D3C38  85 83 02 FC */	lwzu r12, 0x2fc(r3)
/* 801D6CFC 001D3C3C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6D00 001D3C40  7D 89 03 A6 */	mtctr r12
/* 801D6D04 001D3C44  4E 80 04 21 */	bctrl 
/* 801D6D08 001D3C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6D0C 001D3C4C  7C 08 03 A6 */	mtlr r0
/* 801D6D10 001D3C50  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6D14 001D3C54  4E 80 00 20 */	blr 
.endfn getTekiInfoNum__Q34Game4Cave9FloorInfoFv

.fn getTekiInfo__Q34Game4Cave9FloorInfoFi, global
/* 801D6D18 001D3C58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6D1C 001D3C5C  7C 08 02 A6 */	mflr r0
/* 801D6D20 001D3C60  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6D24 001D3C64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6D28 001D3C68  3B E0 00 00 */	li r31, 0
/* 801D6D2C 001D3C6C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6D30 001D3C70  7C 9E 23 79 */	or. r30, r4, r4
/* 801D6D34 001D3C74  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6D38 001D3C78  7C 7D 1B 78 */	mr r29, r3
/* 801D6D3C 001D3C7C  41 80 00 24 */	blt .L_801D6D60
/* 801D6D40 001D3C80  38 7D 02 FC */	addi r3, r29, 0x2fc
/* 801D6D44 001D3C84  81 9D 02 FC */	lwz r12, 0x2fc(r29)
/* 801D6D48 001D3C88  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6D4C 001D3C8C  7D 89 03 A6 */	mtctr r12
/* 801D6D50 001D3C90  4E 80 04 21 */	bctrl 
/* 801D6D54 001D3C94  7C 1E 18 00 */	cmpw r30, r3
/* 801D6D58 001D3C98  41 81 00 08 */	bgt .L_801D6D60
/* 801D6D5C 001D3C9C  3B E0 00 01 */	li r31, 1
.L_801D6D60:
/* 801D6D60 001D3CA0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801D6D64 001D3CA4  40 82 00 20 */	bne .L_801D6D84
/* 801D6D68 001D3CA8  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D6D6C 001D3CAC  3C A0 80 48 */	lis r5, lbl_8048079C@ha
/* 801D6D70 001D3CB0  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D6D74 001D3CB4  38 80 03 88 */	li r4, 0x388
/* 801D6D78 001D3CB8  38 A5 07 9C */	addi r5, r5, lbl_8048079C@l
/* 801D6D7C 001D3CBC  4C C6 31 82 */	crclr 6
/* 801D6D80 001D3CC0  4B E5 38 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D6D84:
/* 801D6D84 001D3CC4  7F C4 F3 78 */	mr r4, r30
/* 801D6D88 001D3CC8  38 7D 02 FC */	addi r3, r29, 0x2fc
/* 801D6D8C 001D3CCC  48 23 A9 11 */	bl getChildAt__5CNodeFi
/* 801D6D90 001D3CD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6D94 001D3CD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D6D98 001D3CD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D6D9C 001D3CDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D6DA0 001D3CE0  7C 08 03 A6 */	mtlr r0
/* 801D6DA4 001D3CE4  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6DA8 001D3CE8  4E 80 00 20 */	blr 
.endfn getTekiInfo__Q34Game4Cave9FloorInfoFi

.fn getTekiWeightSum__Q34Game4Cave9FloorInfoFv, global
/* 801D6DAC 001D3CEC  80 83 03 0C */	lwz r4, 0x30c(r3)
/* 801D6DB0 001D3CF0  38 60 00 00 */	li r3, 0
/* 801D6DB4 001D3CF4  48 00 00 10 */	b .L_801D6DC4
.L_801D6DB8:
/* 801D6DB8 001D3CF8  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 801D6DBC 001D3CFC  80 84 00 04 */	lwz r4, 4(r4)
/* 801D6DC0 001D3D00  7C 63 02 14 */	add r3, r3, r0
.L_801D6DC4:
/* 801D6DC4 001D3D04  28 04 00 00 */	cmplwi r4, 0
/* 801D6DC8 001D3D08  40 82 FF F0 */	bne .L_801D6DB8
/* 801D6DCC 001D3D0C  4E 80 00 20 */	blr 
.endfn getTekiWeightSum__Q34Game4Cave9FloorInfoFv

.fn getItemMax__Q34Game4Cave9FloorInfoFv, global
/* 801D6DD0 001D3D10  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 801D6DD4 001D3D14  4E 80 00 20 */	blr 
.endfn getItemMax__Q34Game4Cave9FloorInfoFv

.fn getItemInfoNum__Q34Game4Cave9FloorInfoFv, global
/* 801D6DD8 001D3D18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6DDC 001D3D1C  7C 08 02 A6 */	mflr r0
/* 801D6DE0 001D3D20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D6DE4 001D3D24  85 83 03 24 */	lwzu r12, 0x324(r3)
/* 801D6DE8 001D3D28  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6DEC 001D3D2C  7D 89 03 A6 */	mtctr r12
/* 801D6DF0 001D3D30  4E 80 04 21 */	bctrl 
/* 801D6DF4 001D3D34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6DF8 001D3D38  7C 08 03 A6 */	mtlr r0
/* 801D6DFC 001D3D3C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6E00 001D3D40  4E 80 00 20 */	blr 
.endfn getItemInfoNum__Q34Game4Cave9FloorInfoFv

.fn getItemInfo__Q34Game4Cave9FloorInfoFi, global
/* 801D6E04 001D3D44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6E08 001D3D48  7C 08 02 A6 */	mflr r0
/* 801D6E0C 001D3D4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6E10 001D3D50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6E14 001D3D54  3B E0 00 00 */	li r31, 0
/* 801D6E18 001D3D58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6E1C 001D3D5C  7C 9E 23 79 */	or. r30, r4, r4
/* 801D6E20 001D3D60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6E24 001D3D64  7C 7D 1B 78 */	mr r29, r3
/* 801D6E28 001D3D68  41 80 00 24 */	blt .L_801D6E4C
/* 801D6E2C 001D3D6C  38 7D 03 24 */	addi r3, r29, 0x324
/* 801D6E30 001D3D70  81 9D 03 24 */	lwz r12, 0x324(r29)
/* 801D6E34 001D3D74  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6E38 001D3D78  7D 89 03 A6 */	mtctr r12
/* 801D6E3C 001D3D7C  4E 80 04 21 */	bctrl 
/* 801D6E40 001D3D80  7C 1E 18 00 */	cmpw r30, r3
/* 801D6E44 001D3D84  41 81 00 08 */	bgt .L_801D6E4C
/* 801D6E48 001D3D88  3B E0 00 01 */	li r31, 1
.L_801D6E4C:
/* 801D6E4C 001D3D8C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801D6E50 001D3D90  40 82 00 20 */	bne .L_801D6E70
/* 801D6E54 001D3D94  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D6E58 001D3D98  3C A0 80 48 */	lis r5, lbl_8048079C@ha
/* 801D6E5C 001D3D9C  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D6E60 001D3DA0  38 80 03 A1 */	li r4, 0x3a1
/* 801D6E64 001D3DA4  38 A5 07 9C */	addi r5, r5, lbl_8048079C@l
/* 801D6E68 001D3DA8  4C C6 31 82 */	crclr 6
/* 801D6E6C 001D3DAC  4B E5 37 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D6E70:
/* 801D6E70 001D3DB0  7F C4 F3 78 */	mr r4, r30
/* 801D6E74 001D3DB4  38 7D 03 24 */	addi r3, r29, 0x324
/* 801D6E78 001D3DB8  48 23 A8 25 */	bl getChildAt__5CNodeFi
/* 801D6E7C 001D3DBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6E80 001D3DC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D6E84 001D3DC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D6E88 001D3DC8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D6E8C 001D3DCC  7C 08 03 A6 */	mtlr r0
/* 801D6E90 001D3DD0  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6E94 001D3DD4  4E 80 00 20 */	blr 
.endfn getItemInfo__Q34Game4Cave9FloorInfoFi

.fn getItemWeightSum__Q34Game4Cave9FloorInfoFv, global
/* 801D6E98 001D3DD8  80 83 03 34 */	lwz r4, 0x334(r3)
/* 801D6E9C 001D3DDC  38 60 00 00 */	li r3, 0
/* 801D6EA0 001D3DE0  48 00 00 10 */	b .L_801D6EB0
.L_801D6EA4:
/* 801D6EA4 001D3DE4  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 801D6EA8 001D3DE8  80 84 00 04 */	lwz r4, 4(r4)
/* 801D6EAC 001D3DEC  7C 63 02 14 */	add r3, r3, r0
.L_801D6EB0:
/* 801D6EB0 001D3DF0  28 04 00 00 */	cmplwi r4, 0
/* 801D6EB4 001D3DF4  40 82 FF F0 */	bne .L_801D6EA4
/* 801D6EB8 001D3DF8  4E 80 00 20 */	blr 
.endfn getItemWeightSum__Q34Game4Cave9FloorInfoFv

.fn getGateMax__Q34Game4Cave9FloorInfoFv, global
/* 801D6EBC 001D3DFC  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 801D6EC0 001D3E00  4E 80 00 20 */	blr 
.endfn getGateMax__Q34Game4Cave9FloorInfoFv

.fn getGateInfoNum__Q34Game4Cave9FloorInfoFv, global
/* 801D6EC4 001D3E04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6EC8 001D3E08  7C 08 02 A6 */	mflr r0
/* 801D6ECC 001D3E0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D6ED0 001D3E10  85 83 03 44 */	lwzu r12, 0x344(r3)
/* 801D6ED4 001D3E14  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6ED8 001D3E18  7D 89 03 A6 */	mtctr r12
/* 801D6EDC 001D3E1C  4E 80 04 21 */	bctrl 
/* 801D6EE0 001D3E20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6EE4 001D3E24  7C 08 03 A6 */	mtlr r0
/* 801D6EE8 001D3E28  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6EEC 001D3E2C  4E 80 00 20 */	blr 
.endfn getGateInfoNum__Q34Game4Cave9FloorInfoFv

.fn getGateInfo__Q34Game4Cave9FloorInfoFi, global
/* 801D6EF0 001D3E30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6EF4 001D3E34  7C 08 02 A6 */	mflr r0
/* 801D6EF8 001D3E38  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6EFC 001D3E3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6F00 001D3E40  3B E0 00 00 */	li r31, 0
/* 801D6F04 001D3E44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6F08 001D3E48  7C 9E 23 79 */	or. r30, r4, r4
/* 801D6F0C 001D3E4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6F10 001D3E50  7C 7D 1B 78 */	mr r29, r3
/* 801D6F14 001D3E54  41 80 00 24 */	blt .L_801D6F38
/* 801D6F18 001D3E58  38 7D 03 44 */	addi r3, r29, 0x344
/* 801D6F1C 001D3E5C  81 9D 03 44 */	lwz r12, 0x344(r29)
/* 801D6F20 001D3E60  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6F24 001D3E64  7D 89 03 A6 */	mtctr r12
/* 801D6F28 001D3E68  4E 80 04 21 */	bctrl 
/* 801D6F2C 001D3E6C  7C 1E 18 00 */	cmpw r30, r3
/* 801D6F30 001D3E70  41 81 00 08 */	bgt .L_801D6F38
/* 801D6F34 001D3E74  3B E0 00 01 */	li r31, 1
.L_801D6F38:
/* 801D6F38 001D3E78  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801D6F3C 001D3E7C  40 82 00 20 */	bne .L_801D6F5C
/* 801D6F40 001D3E80  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D6F44 001D3E84  3C A0 80 48 */	lis r5, lbl_8048079C@ha
/* 801D6F48 001D3E88  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D6F4C 001D3E8C  38 80 03 BA */	li r4, 0x3ba
/* 801D6F50 001D3E90  38 A5 07 9C */	addi r5, r5, lbl_8048079C@l
/* 801D6F54 001D3E94  4C C6 31 82 */	crclr 6
/* 801D6F58 001D3E98  4B E5 36 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D6F5C:
/* 801D6F5C 001D3E9C  7F C4 F3 78 */	mr r4, r30
/* 801D6F60 001D3EA0  38 7D 03 44 */	addi r3, r29, 0x344
/* 801D6F64 001D3EA4  48 23 A7 39 */	bl getChildAt__5CNodeFi
/* 801D6F68 001D3EA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6F6C 001D3EAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D6F70 001D3EB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D6F74 001D3EB4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D6F78 001D3EB8  7C 08 03 A6 */	mtlr r0
/* 801D6F7C 001D3EBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6F80 001D3EC0  4E 80 00 20 */	blr 
.endfn getGateInfo__Q34Game4Cave9FloorInfoFi

.fn getGateWeightSum__Q34Game4Cave9FloorInfoFv, global
/* 801D6F84 001D3EC4  80 83 03 54 */	lwz r4, 0x354(r3)
/* 801D6F88 001D3EC8  38 60 00 00 */	li r3, 0
/* 801D6F8C 001D3ECC  48 00 00 10 */	b .L_801D6F9C
.L_801D6F90:
/* 801D6F90 001D3ED0  80 04 00 20 */	lwz r0, 0x20(r4)
/* 801D6F94 001D3ED4  80 84 00 04 */	lwz r4, 4(r4)
/* 801D6F98 001D3ED8  7C 63 02 14 */	add r3, r3, r0
.L_801D6F9C:
/* 801D6F9C 001D3EDC  28 04 00 00 */	cmplwi r4, 0
/* 801D6FA0 001D3EE0  40 82 FF F0 */	bne .L_801D6F90
/* 801D6FA4 001D3EE4  4E 80 00 20 */	blr 
.endfn getGateWeightSum__Q34Game4Cave9FloorInfoFv

.fn getCapMax__Q34Game4Cave9FloorInfoFv, global
/* 801D6FA8 001D3EE8  80 63 01 04 */	lwz r3, 0x104(r3)
/* 801D6FAC 001D3EEC  4E 80 00 20 */	blr 
.endfn getCapMax__Q34Game4Cave9FloorInfoFv

.fn getCapInfoNum__Q34Game4Cave9FloorInfoFv, global
/* 801D6FB0 001D3EF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D6FB4 001D3EF4  7C 08 02 A6 */	mflr r0
/* 801D6FB8 001D3EF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D6FBC 001D3EFC  85 83 03 68 */	lwzu r12, 0x368(r3)
/* 801D6FC0 001D3F00  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D6FC4 001D3F04  7D 89 03 A6 */	mtctr r12
/* 801D6FC8 001D3F08  4E 80 04 21 */	bctrl 
/* 801D6FCC 001D3F0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D6FD0 001D3F10  7C 08 03 A6 */	mtlr r0
/* 801D6FD4 001D3F14  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6FD8 001D3F18  4E 80 00 20 */	blr 
.endfn getCapInfoNum__Q34Game4Cave9FloorInfoFv

.fn getCapInfo__Q34Game4Cave9FloorInfoFi, global
/* 801D6FDC 001D3F1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6FE0 001D3F20  7C 08 02 A6 */	mflr r0
/* 801D6FE4 001D3F24  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D6FE8 001D3F28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D6FEC 001D3F2C  3B E0 00 00 */	li r31, 0
/* 801D6FF0 001D3F30  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D6FF4 001D3F34  7C 9E 23 79 */	or. r30, r4, r4
/* 801D6FF8 001D3F38  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D6FFC 001D3F3C  7C 7D 1B 78 */	mr r29, r3
/* 801D7000 001D3F40  41 80 00 24 */	blt .L_801D7024
/* 801D7004 001D3F44  38 7D 03 68 */	addi r3, r29, 0x368
/* 801D7008 001D3F48  81 9D 03 68 */	lwz r12, 0x368(r29)
/* 801D700C 001D3F4C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D7010 001D3F50  7D 89 03 A6 */	mtctr r12
/* 801D7014 001D3F54  4E 80 04 21 */	bctrl 
/* 801D7018 001D3F58  7C 1E 18 00 */	cmpw r30, r3
/* 801D701C 001D3F5C  41 81 00 08 */	bgt .L_801D7024
/* 801D7020 001D3F60  3B E0 00 01 */	li r31, 1
.L_801D7024:
/* 801D7024 001D3F64  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801D7028 001D3F68  40 82 00 20 */	bne .L_801D7048
/* 801D702C 001D3F6C  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D7030 001D3F70  3C A0 80 48 */	lis r5, lbl_8048079C@ha
/* 801D7034 001D3F74  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D7038 001D3F78  38 80 03 D3 */	li r4, 0x3d3
/* 801D703C 001D3F7C  38 A5 07 9C */	addi r5, r5, lbl_8048079C@l
/* 801D7040 001D3F80  4C C6 31 82 */	crclr 6
/* 801D7044 001D3F84  4B E5 35 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D7048:
/* 801D7048 001D3F88  7F C4 F3 78 */	mr r4, r30
/* 801D704C 001D3F8C  38 7D 03 68 */	addi r3, r29, 0x368
/* 801D7050 001D3F90  48 23 A6 4D */	bl getChildAt__5CNodeFi
/* 801D7054 001D3F94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D7058 001D3F98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D705C 001D3F9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D7060 001D3FA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D7064 001D3FA4  7C 08 03 A6 */	mtlr r0
/* 801D7068 001D3FA8  38 21 00 20 */	addi r1, r1, 0x20
/* 801D706C 001D3FAC  4E 80 00 20 */	blr 
.endfn getCapInfo__Q34Game4Cave9FloorInfoFi

.fn getRoomNum__Q34Game4Cave9FloorInfoFv, global
/* 801D7070 001D3FB0  80 63 01 2C */	lwz r3, 0x12c(r3)
/* 801D7074 001D3FB4  4E 80 00 20 */	blr 
.endfn getRoomNum__Q34Game4Cave9FloorInfoFv

.fn getRouteRatio__Q34Game4Cave9FloorInfoFv, global
/* 801D7078 001D3FB8  C0 23 01 54 */	lfs f1, 0x154(r3)
/* 801D707C 001D3FBC  4E 80 00 20 */	blr 
.endfn getRouteRatio__Q34Game4Cave9FloorInfoFv

.fn hasEscapeFountain__Q34Game4Cave9FloorInfoFi, global
/* 801D7080 001D3FC0  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 801D7084 001D3FC4  2C 04 FF FF */	cmpwi r4, -1
/* 801D7088 001D3FC8  20 00 00 01 */	subfic r0, r0, 1
/* 801D708C 001D3FCC  7C 00 00 34 */	cntlzw r0, r0
/* 801D7090 001D3FD0  54 00 D9 7E */	srwi r0, r0, 5
/* 801D7094 001D3FD4  40 82 00 0C */	bne .L_801D70A0
/* 801D7098 001D3FD8  7C 03 03 78 */	mr r3, r0
/* 801D709C 001D3FDC  4E 80 00 20 */	blr 
.L_801D70A0:
/* 801D70A0 001D3FE0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801D70A4 001D3FE4  41 82 00 18 */	beq .L_801D70BC
/* 801D70A8 001D3FE8  80 03 00 64 */	lwz r0, 0x64(r3)
/* 801D70AC 001D3FEC  7C 04 00 00 */	cmpw r4, r0
/* 801D70B0 001D3FF0  40 82 00 0C */	bne .L_801D70BC
/* 801D70B4 001D3FF4  38 60 00 01 */	li r3, 1
/* 801D70B8 001D3FF8  4E 80 00 20 */	blr 
.L_801D70BC:
/* 801D70BC 001D3FFC  38 60 00 00 */	li r3, 0
/* 801D70C0 001D4000  4E 80 00 20 */	blr 
.endfn hasEscapeFountain__Q34Game4Cave9FloorInfoFi

.fn useKaidanBarrel__Q34Game4Cave9FloorInfoFv, global
/* 801D70C4 001D4004  80 03 02 04 */	lwz r0, 0x204(r3)
/* 801D70C8 001D4008  20 00 00 01 */	subfic r0, r0, 1
/* 801D70CC 001D400C  7C 00 00 34 */	cntlzw r0, r0
/* 801D70D0 001D4010  54 03 D9 7E */	srwi r3, r0, 5
/* 801D70D4 001D4014  4E 80 00 20 */	blr 
.endfn useKaidanBarrel__Q34Game4Cave9FloorInfoFv

.fn read__Q34Game4Cave9FloorInfoFR6Stream, global
/* 801D70D8 001D4018  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D70DC 001D401C  7C 08 02 A6 */	mflr r0
/* 801D70E0 001D4020  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D70E4 001D4024  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801D70E8 001D4028  7C 7E 1B 78 */	mr r30, r3
/* 801D70EC 001D402C  7C 9F 23 78 */	mr r31, r4
/* 801D70F0 001D4030  38 7E 00 18 */	addi r3, r30, 0x18
/* 801D70F4 001D4034  48 23 C7 01 */	bl read__10ParametersFR6Stream
/* 801D70F8 001D4038  7F E3 FB 78 */	mr r3, r31
/* 801D70FC 001D403C  48 23 D9 95 */	bl readInt__6StreamFv
/* 801D7100 001D4040  7C 7D 1B 78 */	mr r29, r3
/* 801D7104 001D4044  3B 60 00 00 */	li r27, 0
/* 801D7108 001D4048  48 00 00 68 */	b .L_801D7170
.L_801D710C:
/* 801D710C 001D404C  38 60 00 28 */	li r3, 0x28
/* 801D7110 001D4050  4B E4 CD 95 */	bl __nw__FUl
/* 801D7114 001D4054  7C 7C 1B 79 */	or. r28, r3, r3
/* 801D7118 001D4058  41 82 00 30 */	beq .L_801D7148
/* 801D711C 001D405C  48 23 A2 75 */	bl __ct__5CNodeFv
/* 801D7120 001D4060  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D7124 001D4064  38 60 00 00 */	li r3, 0
/* 801D7128 001D4068  38 84 85 E0 */	addi r4, r4, __vt__Q34Game4Cave8TekiInfo@l
/* 801D712C 001D406C  38 00 00 01 */	li r0, 1
/* 801D7130 001D4070  90 9C 00 00 */	stw r4, 0(r28)
/* 801D7134 001D4074  B0 7C 00 26 */	sth r3, 0x26(r28)
/* 801D7138 001D4078  90 7C 00 18 */	stw r3, 0x18(r28)
/* 801D713C 001D407C  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 801D7140 001D4080  90 7C 00 20 */	stw r3, 0x20(r28)
/* 801D7144 001D4084  98 7C 00 24 */	stb r3, 0x24(r28)
.L_801D7148:
/* 801D7148 001D4088  7F 83 E3 78 */	mr r3, r28
/* 801D714C 001D408C  7F E4 FB 78 */	mr r4, r31
/* 801D7150 001D4090  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D7154 001D4094  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D7158 001D4098  7D 89 03 A6 */	mtctr r12
/* 801D715C 001D409C  4E 80 04 21 */	bctrl 
/* 801D7160 001D40A0  7F 84 E3 78 */	mr r4, r28
/* 801D7164 001D40A4  38 7E 02 FC */	addi r3, r30, 0x2fc
/* 801D7168 001D40A8  48 23 A2 A1 */	bl add__5CNodeFP5CNode
/* 801D716C 001D40AC  3B 7B 00 01 */	addi r27, r27, 1
.L_801D7170:
/* 801D7170 001D40B0  7C 1B E8 00 */	cmpw r27, r29
/* 801D7174 001D40B4  41 80 FF 98 */	blt .L_801D710C
/* 801D7178 001D40B8  7F E3 FB 78 */	mr r3, r31
/* 801D717C 001D40BC  48 23 D9 15 */	bl readInt__6StreamFv
/* 801D7180 001D40C0  7C 7D 1B 78 */	mr r29, r3
/* 801D7184 001D40C4  3B 60 00 00 */	li r27, 0
/* 801D7188 001D40C8  48 00 00 5C */	b .L_801D71E4
.L_801D718C:
/* 801D718C 001D40CC  38 60 00 20 */	li r3, 0x20
/* 801D7190 001D40D0  4B E4 CD 15 */	bl __nw__FUl
/* 801D7194 001D40D4  7C 7C 1B 79 */	or. r28, r3, r3
/* 801D7198 001D40D8  41 82 00 24 */	beq .L_801D71BC
/* 801D719C 001D40DC  48 23 A1 F5 */	bl __ct__5CNodeFv
/* 801D71A0 001D40E0  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8ItemInfo@ha
/* 801D71A4 001D40E4  38 60 00 00 */	li r3, 0
/* 801D71A8 001D40E8  38 84 85 CC */	addi r4, r4, __vt__Q34Game4Cave8ItemInfo@l
/* 801D71AC 001D40EC  38 00 00 01 */	li r0, 1
/* 801D71B0 001D40F0  90 9C 00 00 */	stw r4, 0(r28)
/* 801D71B4 001D40F4  90 7C 00 18 */	stw r3, 0x18(r28)
/* 801D71B8 001D40F8  90 1C 00 1C */	stw r0, 0x1c(r28)
.L_801D71BC:
/* 801D71BC 001D40FC  7F 83 E3 78 */	mr r3, r28
/* 801D71C0 001D4100  7F E4 FB 78 */	mr r4, r31
/* 801D71C4 001D4104  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D71C8 001D4108  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D71CC 001D410C  7D 89 03 A6 */	mtctr r12
/* 801D71D0 001D4110  4E 80 04 21 */	bctrl 
/* 801D71D4 001D4114  7F 84 E3 78 */	mr r4, r28
/* 801D71D8 001D4118  38 7E 03 24 */	addi r3, r30, 0x324
/* 801D71DC 001D411C  48 23 A2 2D */	bl add__5CNodeFP5CNode
/* 801D71E0 001D4120  3B 7B 00 01 */	addi r27, r27, 1
.L_801D71E4:
/* 801D71E4 001D4124  7C 1B E8 00 */	cmpw r27, r29
/* 801D71E8 001D4128  41 80 FF A4 */	blt .L_801D718C
/* 801D71EC 001D412C  7F E3 FB 78 */	mr r3, r31
/* 801D71F0 001D4130  48 23 D8 A1 */	bl readInt__6StreamFv
/* 801D71F4 001D4134  7C 7D 1B 78 */	mr r29, r3
/* 801D71F8 001D4138  3B 60 00 00 */	li r27, 0
/* 801D71FC 001D413C  48 00 00 64 */	b .L_801D7260
.L_801D7200:
/* 801D7200 001D4140  38 60 00 24 */	li r3, 0x24
/* 801D7204 001D4144  4B E4 CC A1 */	bl __nw__FUl
/* 801D7208 001D4148  7C 7C 1B 79 */	or. r28, r3, r3
/* 801D720C 001D414C  41 82 00 2C */	beq .L_801D7238
/* 801D7210 001D4150  48 23 A1 81 */	bl __ct__5CNodeFv
/* 801D7214 001D4154  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8GateInfo@ha
/* 801D7218 001D4158  38 60 00 00 */	li r3, 0
/* 801D721C 001D415C  38 84 85 B8 */	addi r4, r4, __vt__Q34Game4Cave8GateInfo@l
/* 801D7220 001D4160  38 00 00 01 */	li r0, 1
/* 801D7224 001D4164  90 9C 00 00 */	stw r4, 0(r28)
/* 801D7228 001D4168  C0 02 B3 68 */	lfs f0, lbl_805196C8@sda21(r2)
/* 801D722C 001D416C  90 7C 00 18 */	stw r3, 0x18(r28)
/* 801D7230 001D4170  90 1C 00 20 */	stw r0, 0x20(r28)
/* 801D7234 001D4174  D0 1C 00 1C */	stfs f0, 0x1c(r28)
.L_801D7238:
/* 801D7238 001D4178  7F 83 E3 78 */	mr r3, r28
/* 801D723C 001D417C  7F E4 FB 78 */	mr r4, r31
/* 801D7240 001D4180  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D7244 001D4184  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D7248 001D4188  7D 89 03 A6 */	mtctr r12
/* 801D724C 001D418C  4E 80 04 21 */	bctrl 
/* 801D7250 001D4190  7F 84 E3 78 */	mr r4, r28
/* 801D7254 001D4194  38 7E 03 44 */	addi r3, r30, 0x344
/* 801D7258 001D4198  48 23 A1 B1 */	bl add__5CNodeFP5CNode
/* 801D725C 001D419C  3B 7B 00 01 */	addi r27, r27, 1
.L_801D7260:
/* 801D7260 001D41A0  7C 1B E8 00 */	cmpw r27, r29
/* 801D7264 001D41A4  41 80 FF 9C */	blt .L_801D7200
/* 801D7268 001D41A8  80 1E 02 98 */	lwz r0, 0x298(r30)
/* 801D726C 001D41AC  2C 00 00 01 */	cmpwi r0, 1
/* 801D7270 001D41B0  41 80 00 78 */	blt .L_801D72E8
/* 801D7274 001D41B4  7F E3 FB 78 */	mr r3, r31
/* 801D7278 001D41B8  48 23 D8 19 */	bl readInt__6StreamFv
/* 801D727C 001D41BC  7C 7D 1B 78 */	mr r29, r3
/* 801D7280 001D41C0  3B 60 00 00 */	li r27, 0
/* 801D7284 001D41C4  48 00 00 5C */	b .L_801D72E0
.L_801D7288:
/* 801D7288 001D41C8  38 60 00 20 */	li r3, 0x20
/* 801D728C 001D41CC  4B E4 CC 19 */	bl __nw__FUl
/* 801D7290 001D41D0  7C 7C 1B 79 */	or. r28, r3, r3
/* 801D7294 001D41D4  41 82 00 24 */	beq .L_801D72B8
/* 801D7298 001D41D8  48 23 A0 F9 */	bl __ct__5CNodeFv
/* 801D729C 001D41DC  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave7CapInfo@ha
/* 801D72A0 001D41E0  38 60 00 01 */	li r3, 1
/* 801D72A4 001D41E4  38 84 85 A4 */	addi r4, r4, __vt__Q34Game4Cave7CapInfo@l
/* 801D72A8 001D41E8  38 00 00 00 */	li r0, 0
/* 801D72AC 001D41EC  90 9C 00 00 */	stw r4, 0(r28)
/* 801D72B0 001D41F0  98 7C 00 18 */	stb r3, 0x18(r28)
/* 801D72B4 001D41F4  90 1C 00 1C */	stw r0, 0x1c(r28)
.L_801D72B8:
/* 801D72B8 001D41F8  7F 83 E3 78 */	mr r3, r28
/* 801D72BC 001D41FC  7F E4 FB 78 */	mr r4, r31
/* 801D72C0 001D4200  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D72C4 001D4204  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D72C8 001D4208  7D 89 03 A6 */	mtctr r12
/* 801D72CC 001D420C  4E 80 04 21 */	bctrl 
/* 801D72D0 001D4210  7F 84 E3 78 */	mr r4, r28
/* 801D72D4 001D4214  38 7E 03 68 */	addi r3, r30, 0x368
/* 801D72D8 001D4218  48 23 A1 31 */	bl add__5CNodeFP5CNode
/* 801D72DC 001D421C  3B 7B 00 01 */	addi r27, r27, 1
.L_801D72E0:
/* 801D72E0 001D4220  7C 1B E8 00 */	cmpw r27, r29
/* 801D72E4 001D4224  41 80 FF A4 */	blt .L_801D7288
.L_801D72E8:
/* 801D72E8 001D4228  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801D72EC 001D422C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D72F0 001D4230  7C 08 03 A6 */	mtlr r0
/* 801D72F4 001D4234  38 21 00 20 */	addi r1, r1, 0x20
/* 801D72F8 001D4238  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave9FloorInfoFR6Stream

.fn __ct__Q34Game4Cave8CaveInfoFv, global
/* 801D72FC 001D423C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D7300 001D4240  7C 08 02 A6 */	mflr r0
/* 801D7304 001D4244  3C E0 80 48 */	lis r7, lbl_80480640@ha
/* 801D7308 001D4248  3C C0 80 4C */	lis r6, __vt__Q34Game4Cave8CaveInfo@ha
/* 801D730C 001D424C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D7310 001D4250  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 801D7314 001D4254  39 06 85 7C */	addi r8, r6, __vt__Q34Game4Cave8CaveInfo@l
/* 801D7318 001D4258  3C A0 63 30 */	lis r5, 0x63303030@ha
/* 801D731C 001D425C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D7320 001D4260  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 801D7324 001D4264  7C 7F 1B 78 */	mr r31, r3
/* 801D7328 001D4268  39 27 06 40 */	addi r9, r7, lbl_80480640@l
/* 801D732C 001D426C  90 03 00 00 */	stw r0, 0(r3)
/* 801D7330 001D4270  39 40 00 00 */	li r10, 0
/* 801D7334 001D4274  38 FF 00 4C */	addi r7, r31, 0x4c
/* 801D7338 001D4278  38 9F 00 18 */	addi r4, r31, 0x18
/* 801D733C 001D427C  91 43 00 10 */	stw r10, 0x10(r3)
/* 801D7340 001D4280  3C 60 80 48 */	lis r3, lbl_804807A8@ha
/* 801D7344 001D4284  38 03 07 A8 */	addi r0, r3, lbl_804807A8@l
/* 801D7348 001D4288  38 A5 30 30 */	addi r5, r5, 0x63303030@l
/* 801D734C 001D428C  91 5F 00 0C */	stw r10, 0xc(r31)
/* 801D7350 001D4290  38 64 00 0C */	addi r3, r4, 0xc
/* 801D7354 001D4294  38 C2 B3 E0 */	addi r6, r2, lbl_80519740@sda21
/* 801D7358 001D4298  91 5F 00 08 */	stw r10, 8(r31)
/* 801D735C 001D429C  91 5F 00 04 */	stw r10, 4(r31)
/* 801D7360 001D42A0  91 3F 00 14 */	stw r9, 0x14(r31)
/* 801D7364 001D42A4  91 1F 00 00 */	stw r8, 0(r31)
/* 801D7368 001D42A8  90 FF 00 18 */	stw r7, 0x18(r31)
/* 801D736C 001D42AC  91 5F 00 1C */	stw r10, 0x1c(r31)
/* 801D7370 001D42B0  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801D7374 001D42B4  48 23 C2 E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801D7378 001D42B8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 801D737C 001D42BC  38 80 00 01 */	li r4, 1
/* 801D7380 001D42C0  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 801D7384 001D42C4  38 00 00 80 */	li r0, 0x80
/* 801D7388 001D42C8  90 7F 00 24 */	stw r3, 0x24(r31)
/* 801D738C 001D42CC  38 7F 00 50 */	addi r3, r31, 0x50
/* 801D7390 001D42D0  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 801D7394 001D42D4  90 9F 00 44 */	stw r4, 0x44(r31)
/* 801D7398 001D42D8  90 1F 00 48 */	stw r0, 0x48(r31)
/* 801D739C 001D42DC  4B FF F2 31 */	bl __ct__Q34Game4Cave9FloorInfoFv
/* 801D73A0 001D42E0  38 00 00 00 */	li r0, 0
/* 801D73A4 001D42E4  7F E3 FB 78 */	mr r3, r31
/* 801D73A8 001D42E8  90 1F 00 60 */	stw r0, 0x60(r31)
/* 801D73AC 001D42EC  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 801D73B0 001D42F0  90 1F 00 58 */	stw r0, 0x58(r31)
/* 801D73B4 001D42F4  90 1F 00 54 */	stw r0, 0x54(r31)
/* 801D73B8 001D42F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D73BC 001D42FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D73C0 001D4300  7C 08 03 A6 */	mtlr r0
/* 801D73C4 001D4304  38 21 00 10 */	addi r1, r1, 0x10
/* 801D73C8 001D4308  4E 80 00 20 */	blr 
.endfn __ct__Q34Game4Cave8CaveInfoFv

.fn __dt__Q34Game4Cave9FloorInfoFv, weak
/* 801D73CC 001D430C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D73D0 001D4310  7C 08 02 A6 */	mflr r0
/* 801D73D4 001D4314  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D73D8 001D4318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D73DC 001D431C  7C 9F 23 78 */	mr r31, r4
/* 801D73E0 001D4320  93 C1 00 08 */	stw r30, 8(r1)
/* 801D73E4 001D4324  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D73E8 001D4328  41 82 00 AC */	beq .L_801D7494
/* 801D73EC 001D432C  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave9FloorInfo@ha
/* 801D73F0 001D4330  34 1E 03 68 */	addic. r0, r30, 0x368
/* 801D73F4 001D4334  38 03 85 90 */	addi r0, r3, __vt__Q34Game4Cave9FloorInfo@l
/* 801D73F8 001D4338  90 1E 00 00 */	stw r0, 0(r30)
/* 801D73FC 001D433C  41 82 00 1C */	beq .L_801D7418
/* 801D7400 001D4340  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave7CapInfo@ha
/* 801D7404 001D4344  38 7E 03 68 */	addi r3, r30, 0x368
/* 801D7408 001D4348  38 04 85 A4 */	addi r0, r4, __vt__Q34Game4Cave7CapInfo@l
/* 801D740C 001D434C  38 80 00 00 */	li r4, 0
/* 801D7410 001D4350  90 1E 03 68 */	stw r0, 0x368(r30)
/* 801D7414 001D4354  48 23 A1 75 */	bl __dt__5CNodeFv
.L_801D7418:
/* 801D7418 001D4358  34 1E 03 44 */	addic. r0, r30, 0x344
/* 801D741C 001D435C  41 82 00 1C */	beq .L_801D7438
/* 801D7420 001D4360  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8GateInfo@ha
/* 801D7424 001D4364  38 7E 03 44 */	addi r3, r30, 0x344
/* 801D7428 001D4368  38 04 85 B8 */	addi r0, r4, __vt__Q34Game4Cave8GateInfo@l
/* 801D742C 001D436C  38 80 00 00 */	li r4, 0
/* 801D7430 001D4370  90 1E 03 44 */	stw r0, 0x344(r30)
/* 801D7434 001D4374  48 23 A1 55 */	bl __dt__5CNodeFv
.L_801D7438:
/* 801D7438 001D4378  34 1E 03 24 */	addic. r0, r30, 0x324
/* 801D743C 001D437C  41 82 00 1C */	beq .L_801D7458
/* 801D7440 001D4380  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8ItemInfo@ha
/* 801D7444 001D4384  38 7E 03 24 */	addi r3, r30, 0x324
/* 801D7448 001D4388  38 04 85 CC */	addi r0, r4, __vt__Q34Game4Cave8ItemInfo@l
/* 801D744C 001D438C  38 80 00 00 */	li r4, 0
/* 801D7450 001D4390  90 1E 03 24 */	stw r0, 0x324(r30)
/* 801D7454 001D4394  48 23 A1 35 */	bl __dt__5CNodeFv
.L_801D7458:
/* 801D7458 001D4398  34 1E 02 FC */	addic. r0, r30, 0x2fc
/* 801D745C 001D439C  41 82 00 1C */	beq .L_801D7478
/* 801D7460 001D43A0  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D7464 001D43A4  38 7E 02 FC */	addi r3, r30, 0x2fc
/* 801D7468 001D43A8  38 04 85 E0 */	addi r0, r4, __vt__Q34Game4Cave8TekiInfo@l
/* 801D746C 001D43AC  38 80 00 00 */	li r4, 0
/* 801D7470 001D43B0  90 1E 02 FC */	stw r0, 0x2fc(r30)
/* 801D7474 001D43B4  48 23 A1 15 */	bl __dt__5CNodeFv
.L_801D7478:
/* 801D7478 001D43B8  7F C3 F3 78 */	mr r3, r30
/* 801D747C 001D43BC  38 80 00 00 */	li r4, 0
/* 801D7480 001D43C0  48 23 A1 09 */	bl __dt__5CNodeFv
/* 801D7484 001D43C4  7F E0 07 35 */	extsh. r0, r31
/* 801D7488 001D43C8  40 81 00 0C */	ble .L_801D7494
/* 801D748C 001D43CC  7F C3 F3 78 */	mr r3, r30
/* 801D7490 001D43D0  4B E4 CC 25 */	bl __dl__FPv
.L_801D7494:
/* 801D7494 001D43D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D7498 001D43D8  7F C3 F3 78 */	mr r3, r30
/* 801D749C 001D43DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D74A0 001D43E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D74A4 001D43E4  7C 08 03 A6 */	mtlr r0
/* 801D74A8 001D43E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D74AC 001D43EC  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave9FloorInfoFv

.fn disablePelplant__Q34Game4Cave8CaveInfoFv, global
/* 801D74B0 001D43F0  80 83 00 60 */	lwz r4, 0x60(r3)
/* 801D74B4 001D43F4  38 00 00 00 */	li r0, 0
/* 801D74B8 001D43F8  48 00 00 2C */	b .L_801D74E4
.L_801D74BC:
/* 801D74BC 001D43FC  80 A4 03 0C */	lwz r5, 0x30c(r4)
/* 801D74C0 001D4400  48 00 00 18 */	b .L_801D74D8
.L_801D74C4:
/* 801D74C4 001D4404  80 65 00 18 */	lwz r3, 0x18(r5)
/* 801D74C8 001D4408  2C 03 00 00 */	cmpwi r3, 0
/* 801D74CC 001D440C  40 82 00 08 */	bne .L_801D74D4
/* 801D74D0 001D4410  90 05 00 1C */	stw r0, 0x1c(r5)
.L_801D74D4:
/* 801D74D4 001D4414  80 A5 00 04 */	lwz r5, 4(r5)
.L_801D74D8:
/* 801D74D8 001D4418  28 05 00 00 */	cmplwi r5, 0
/* 801D74DC 001D441C  40 82 FF E8 */	bne .L_801D74C4
/* 801D74E0 001D4420  80 84 00 04 */	lwz r4, 4(r4)
.L_801D74E4:
/* 801D74E4 001D4424  28 04 00 00 */	cmplwi r4, 0
/* 801D74E8 001D4428  40 82 FF D4 */	bne .L_801D74BC
/* 801D74EC 001D442C  4E 80 00 20 */	blr 
.endfn disablePelplant__Q34Game4Cave8CaveInfoFv

.fn getFloorMax__Q34Game4Cave8CaveInfoFv, global
/* 801D74F0 001D4430  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 801D74F4 001D4434  4E 80 00 20 */	blr 
.endfn getFloorMax__Q34Game4Cave8CaveInfoFv

.fn getFloorInfo__Q34Game4Cave8CaveInfoFi, global
/* 801D74F8 001D4438  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801D74FC 001D443C  48 00 00 20 */	b .L_801D751C
.L_801D7500:
/* 801D7500 001D4440  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 801D7504 001D4444  7C 00 20 00 */	cmpw r0, r4
/* 801D7508 001D4448  41 81 00 10 */	bgt .L_801D7518
/* 801D750C 001D444C  80 03 00 64 */	lwz r0, 0x64(r3)
/* 801D7510 001D4450  7C 04 00 00 */	cmpw r4, r0
/* 801D7514 001D4454  4C 81 00 20 */	blelr 
.L_801D7518:
/* 801D7518 001D4458  80 63 00 04 */	lwz r3, 4(r3)
.L_801D751C:
/* 801D751C 001D445C  28 03 00 00 */	cmplwi r3, 0
/* 801D7520 001D4460  40 82 FF E0 */	bne .L_801D7500
/* 801D7524 001D4464  38 60 00 00 */	li r3, 0
/* 801D7528 001D4468  4E 80 00 20 */	blr 
.endfn getFloorInfo__Q34Game4Cave8CaveInfoFi

.fn load__Q34Game4Cave8CaveInfoFPc, global
/* 801D752C 001D446C  94 21 F9 C0 */	stwu r1, -0x640(r1)
/* 801D7530 001D4470  7C 08 02 A6 */	mflr r0
/* 801D7534 001D4474  7C 65 1B 78 */	mr r5, r3
/* 801D7538 001D4478  38 82 B3 E8 */	addi r4, r2, lbl_80519748@sda21
/* 801D753C 001D447C  90 01 06 44 */	stw r0, 0x644(r1)
/* 801D7540 001D4480  38 61 00 10 */	addi r3, r1, 0x10
/* 801D7544 001D4484  93 E1 06 3C */	stw r31, 0x63c(r1)
/* 801D7548 001D4488  93 C1 06 38 */	stw r30, 0x638(r1)
/* 801D754C 001D448C  4C C6 31 82 */	crclr 6
/* 801D7550 001D4490  4B EE FE E9 */	bl sprintf
/* 801D7554 001D4494  38 00 00 00 */	li r0, 0
/* 801D7558 001D4498  38 61 00 10 */	addi r3, r1, 0x10
/* 801D755C 001D449C  90 01 00 08 */	stw r0, 8(r1)
/* 801D7560 001D44A0  38 80 00 00 */	li r4, 0
/* 801D7564 001D44A4  38 A0 00 00 */	li r5, 0
/* 801D7568 001D44A8  38 C0 00 00 */	li r6, 0
/* 801D756C 001D44AC  38 E0 00 00 */	li r7, 0
/* 801D7570 001D44B0  39 00 00 02 */	li r8, 2
/* 801D7574 001D44B4  39 20 00 00 */	li r9, 0
/* 801D7578 001D44B8  39 40 00 00 */	li r10, 0
/* 801D757C 001D44BC  4B E4 7C 0D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801D7580 001D44C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D7584 001D44C4  40 82 00 24 */	bne .L_801D75A8
/* 801D7588 001D44C8  3C 60 80 48 */	lis r3, lbl_8048064C@ha
/* 801D758C 001D44CC  3C 80 80 48 */	lis r4, lbl_804807B4@ha
/* 801D7590 001D44D0  38 A4 07 B4 */	addi r5, r4, lbl_804807B4@l
/* 801D7594 001D44D4  38 C1 00 10 */	addi r6, r1, 0x10
/* 801D7598 001D44D8  38 63 06 4C */	addi r3, r3, lbl_8048064C@l
/* 801D759C 001D44DC  38 80 04 E1 */	li r4, 0x4e1
/* 801D75A0 001D44E0  4C C6 31 82 */	crclr 6
/* 801D75A4 001D44E4  4B E5 30 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D75A8:
/* 801D75A8 001D44E8  7F E4 FB 78 */	mr r4, r31
/* 801D75AC 001D44EC  38 61 02 10 */	addi r3, r1, 0x210
/* 801D75B0 001D44F0  38 A0 FF FF */	li r5, -1
/* 801D75B4 001D44F4  48 23 E3 45 */	bl __ct__9RamStreamFPvi
/* 801D75B8 001D44F8  38 00 00 01 */	li r0, 1
/* 801D75BC 001D44FC  2C 00 00 01 */	cmpwi r0, 1
/* 801D75C0 001D4500  90 01 02 1C */	stw r0, 0x21c(r1)
/* 801D75C4 001D4504  40 82 00 0C */	bne .L_801D75D0
/* 801D75C8 001D4508  38 00 00 00 */	li r0, 0
/* 801D75CC 001D450C  90 01 06 24 */	stw r0, 0x624(r1)
.L_801D75D0:
/* 801D75D0 001D4510  38 60 03 D8 */	li r3, 0x3d8
/* 801D75D4 001D4514  4B E4 C8 D1 */	bl __nw__FUl
/* 801D75D8 001D4518  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D75DC 001D451C  41 82 00 0C */	beq .L_801D75E8
/* 801D75E0 001D4520  4B FF FD 1D */	bl __ct__Q34Game4Cave8CaveInfoFv
/* 801D75E4 001D4524  7C 7E 1B 78 */	mr r30, r3
.L_801D75E8:
/* 801D75E8 001D4528  7F C3 F3 78 */	mr r3, r30
/* 801D75EC 001D452C  38 81 02 10 */	addi r4, r1, 0x210
/* 801D75F0 001D4530  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D75F4 001D4534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D75F8 001D4538  7D 89 03 A6 */	mtctr r12
/* 801D75FC 001D453C  4E 80 04 21 */	bctrl 
/* 801D7600 001D4540  7F E3 FB 78 */	mr r3, r31
/* 801D7604 001D4544  4B E4 CA D5 */	bl __dla__FPv
/* 801D7608 001D4548  80 01 06 44 */	lwz r0, 0x644(r1)
/* 801D760C 001D454C  7F C3 F3 78 */	mr r3, r30
/* 801D7610 001D4550  83 E1 06 3C */	lwz r31, 0x63c(r1)
/* 801D7614 001D4554  83 C1 06 38 */	lwz r30, 0x638(r1)
/* 801D7618 001D4558  7C 08 03 A6 */	mtlr r0
/* 801D761C 001D455C  38 21 06 40 */	addi r1, r1, 0x640
/* 801D7620 001D4560  4E 80 00 20 */	blr 
.endfn load__Q34Game4Cave8CaveInfoFPc

.fn read__Q34Game4Cave8CaveInfoFR6Stream, global
/* 801D7624 001D4564  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D7628 001D4568  7C 08 02 A6 */	mflr r0
/* 801D762C 001D456C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D7630 001D4570  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801D7634 001D4574  7C 7B 1B 78 */	mr r27, r3
/* 801D7638 001D4578  7C 9C 23 78 */	mr r28, r4
/* 801D763C 001D457C  38 7B 00 18 */	addi r3, r27, 0x18
/* 801D7640 001D4580  48 23 C1 B5 */	bl read__10ParametersFR6Stream
/* 801D7644 001D4584  7F 83 E3 78 */	mr r3, r28
/* 801D7648 001D4588  48 23 D4 49 */	bl readInt__6StreamFv
/* 801D764C 001D458C  7C 7F 1B 78 */	mr r31, r3
/* 801D7650 001D4590  3B A0 00 00 */	li r29, 0
/* 801D7654 001D4594  48 00 00 44 */	b .L_801D7698
.L_801D7658:
/* 801D7658 001D4598  38 60 03 88 */	li r3, 0x388
/* 801D765C 001D459C  4B E4 C8 49 */	bl __nw__FUl
/* 801D7660 001D45A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D7664 001D45A4  41 82 00 0C */	beq .L_801D7670
/* 801D7668 001D45A8  4B FF EF 65 */	bl __ct__Q34Game4Cave9FloorInfoFv
/* 801D766C 001D45AC  7C 7E 1B 78 */	mr r30, r3
.L_801D7670:
/* 801D7670 001D45B0  7F C3 F3 78 */	mr r3, r30
/* 801D7674 001D45B4  7F 84 E3 78 */	mr r4, r28
/* 801D7678 001D45B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D767C 001D45BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D7680 001D45C0  7D 89 03 A6 */	mtctr r12
/* 801D7684 001D45C4  4E 80 04 21 */	bctrl 
/* 801D7688 001D45C8  7F C4 F3 78 */	mr r4, r30
/* 801D768C 001D45CC  38 7B 00 50 */	addi r3, r27, 0x50
/* 801D7690 001D45D0  48 23 9D 79 */	bl add__5CNodeFP5CNode
/* 801D7694 001D45D4  3B BD 00 01 */	addi r29, r29, 1
.L_801D7698:
/* 801D7698 001D45D8  7C 1D F8 00 */	cmpw r29, r31
/* 801D769C 001D45DC  41 80 FF BC */	blt .L_801D7658
/* 801D76A0 001D45E0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801D76A4 001D45E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D76A8 001D45E8  7C 08 03 A6 */	mtlr r0
/* 801D76AC 001D45EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801D76B0 001D45F0  4E 80 00 20 */	blr 
.endfn read__Q34Game4Cave8CaveInfoFR6Stream

.fn __dt__Q34Game4Cave8CaveInfoFv, weak
/* 801D76B4 001D45F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D76B8 001D45F8  7C 08 02 A6 */	mflr r0
/* 801D76BC 001D45FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D76C0 001D4600  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D76C4 001D4604  7C 9F 23 78 */	mr r31, r4
/* 801D76C8 001D4608  93 C1 00 08 */	stw r30, 8(r1)
/* 801D76CC 001D460C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D76D0 001D4610  41 82 00 BC */	beq .L_801D778C
/* 801D76D4 001D4614  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8CaveInfo@ha
/* 801D76D8 001D4618  34 1E 00 50 */	addic. r0, r30, 0x50
/* 801D76DC 001D461C  38 03 85 7C */	addi r0, r3, __vt__Q34Game4Cave8CaveInfo@l
/* 801D76E0 001D4620  90 1E 00 00 */	stw r0, 0(r30)
/* 801D76E4 001D4624  41 82 00 8C */	beq .L_801D7770
/* 801D76E8 001D4628  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave9FloorInfo@ha
/* 801D76EC 001D462C  34 7E 03 B8 */	addic. r3, r30, 0x3b8
/* 801D76F0 001D4630  38 04 85 90 */	addi r0, r4, __vt__Q34Game4Cave9FloorInfo@l
/* 801D76F4 001D4634  90 1E 00 50 */	stw r0, 0x50(r30)
/* 801D76F8 001D4638  41 82 00 18 */	beq .L_801D7710
/* 801D76FC 001D463C  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave7CapInfo@ha
/* 801D7700 001D4640  38 04 85 A4 */	addi r0, r4, __vt__Q34Game4Cave7CapInfo@l
/* 801D7704 001D4644  90 1E 03 B8 */	stw r0, 0x3b8(r30)
/* 801D7708 001D4648  38 80 00 00 */	li r4, 0
/* 801D770C 001D464C  48 23 9E 7D */	bl __dt__5CNodeFv
.L_801D7710:
/* 801D7710 001D4650  34 7E 03 94 */	addic. r3, r30, 0x394
/* 801D7714 001D4654  41 82 00 18 */	beq .L_801D772C
/* 801D7718 001D4658  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8GateInfo@ha
/* 801D771C 001D465C  38 04 85 B8 */	addi r0, r4, __vt__Q34Game4Cave8GateInfo@l
/* 801D7720 001D4660  90 1E 03 94 */	stw r0, 0x394(r30)
/* 801D7724 001D4664  38 80 00 00 */	li r4, 0
/* 801D7728 001D4668  48 23 9E 61 */	bl __dt__5CNodeFv
.L_801D772C:
/* 801D772C 001D466C  34 7E 03 74 */	addic. r3, r30, 0x374
/* 801D7730 001D4670  41 82 00 18 */	beq .L_801D7748
/* 801D7734 001D4674  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8ItemInfo@ha
/* 801D7738 001D4678  38 04 85 CC */	addi r0, r4, __vt__Q34Game4Cave8ItemInfo@l
/* 801D773C 001D467C  90 1E 03 74 */	stw r0, 0x374(r30)
/* 801D7740 001D4680  38 80 00 00 */	li r4, 0
/* 801D7744 001D4684  48 23 9E 45 */	bl __dt__5CNodeFv
.L_801D7748:
/* 801D7748 001D4688  34 7E 03 4C */	addic. r3, r30, 0x34c
/* 801D774C 001D468C  41 82 00 18 */	beq .L_801D7764
/* 801D7750 001D4690  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8TekiInfo@ha
/* 801D7754 001D4694  38 04 85 E0 */	addi r0, r4, __vt__Q34Game4Cave8TekiInfo@l
/* 801D7758 001D4698  90 1E 03 4C */	stw r0, 0x34c(r30)
/* 801D775C 001D469C  38 80 00 00 */	li r4, 0
/* 801D7760 001D46A0  48 23 9E 29 */	bl __dt__5CNodeFv
.L_801D7764:
/* 801D7764 001D46A4  38 7E 00 50 */	addi r3, r30, 0x50
/* 801D7768 001D46A8  38 80 00 00 */	li r4, 0
/* 801D776C 001D46AC  48 23 9E 1D */	bl __dt__5CNodeFv
.L_801D7770:
/* 801D7770 001D46B0  7F C3 F3 78 */	mr r3, r30
/* 801D7774 001D46B4  38 80 00 00 */	li r4, 0
/* 801D7778 001D46B8  48 23 9E 11 */	bl __dt__5CNodeFv
/* 801D777C 001D46BC  7F E0 07 35 */	extsh. r0, r31
/* 801D7780 001D46C0  40 81 00 0C */	ble .L_801D778C
/* 801D7784 001D46C4  7F C3 F3 78 */	mr r3, r30
/* 801D7788 001D46C8  4B E4 C9 2D */	bl __dl__FPv
.L_801D778C:
/* 801D778C 001D46CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D7790 001D46D0  7F C3 F3 78 */	mr r3, r30
/* 801D7794 001D46D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D7798 001D46D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D779C 001D46DC  7C 08 03 A6 */	mtlr r0
/* 801D77A0 001D46E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D77A4 001D46E4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave8CaveInfoFv

.fn __dt__Q34Game4Cave7BaseGenFv, weak
/* 801D77A8 001D46E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D77AC 001D46EC  7C 08 02 A6 */	mflr r0
/* 801D77B0 001D46F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D77B4 001D46F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D77B8 001D46F8  7C 9F 23 78 */	mr r31, r4
/* 801D77BC 001D46FC  93 C1 00 08 */	stw r30, 8(r1)
/* 801D77C0 001D4700  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D77C4 001D4704  41 82 00 28 */	beq .L_801D77EC
/* 801D77C8 001D4708  3C A0 80 4C */	lis r5, __vt__Q34Game4Cave7BaseGen@ha
/* 801D77CC 001D470C  38 80 00 00 */	li r4, 0
/* 801D77D0 001D4710  38 05 85 F4 */	addi r0, r5, __vt__Q34Game4Cave7BaseGen@l
/* 801D77D4 001D4714  90 1E 00 00 */	stw r0, 0(r30)
/* 801D77D8 001D4718  48 23 9D B1 */	bl __dt__5CNodeFv
/* 801D77DC 001D471C  7F E0 07 35 */	extsh. r0, r31
/* 801D77E0 001D4720  40 81 00 0C */	ble .L_801D77EC
/* 801D77E4 001D4724  7F C3 F3 78 */	mr r3, r30
/* 801D77E8 001D4728  4B E4 C8 CD */	bl __dl__FPv
.L_801D77EC:
/* 801D77EC 001D472C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D77F0 001D4730  7F C3 F3 78 */	mr r3, r30
/* 801D77F4 001D4734  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D77F8 001D4738  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D77FC 001D473C  7C 08 03 A6 */	mtlr r0
/* 801D7800 001D4740  38 21 00 10 */	addi r1, r1, 0x10
/* 801D7804 001D4744  4E 80 00 20 */	blr 
.endfn __dt__Q34Game4Cave7BaseGenFv
