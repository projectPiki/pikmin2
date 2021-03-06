.include "macros.inc"
.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80517698
lbl_80517698:
	.4byte 0x44800000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global GXSetTevIndirect
GXSetTevIndirect:
/* 800E7F40 000E4E80  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800E7F44 000E4E84  38 00 00 00 */	li r0, 0
/* 800E7F48 000E4E88  50 80 07 BE */	rlwimi r0, r4, 0, 0x1e, 0x1f
/* 800E7F4C 000E4E8C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800E7F50 000E4E90  7C 0B 03 78 */	mr r11, r0
/* 800E7F54 000E4E94  50 AB 17 3A */	rlwimi r11, r5, 2, 0x1c, 0x1d
/* 800E7F58 000E4E98  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 800E7F5C 000E4E9C  8B E1 00 3B */	lbz r31, 0x3b(r1)
/* 800E7F60 000E4EA0  50 CB 26 76 */	rlwimi r11, r6, 4, 0x19, 0x1b
/* 800E7F64 000E4EA4  80 82 92 90 */	lwz r4, __GXData@sda21(r2)
/* 800E7F68 000E4EA8  51 8B 3D F0 */	rlwimi r11, r12, 7, 0x17, 0x18
/* 800E7F6C 000E4EAC  50 EB 4C EC */	rlwimi r11, r7, 9, 0x13, 0x16
/* 800E7F70 000E4EB0  51 0B 6C 24 */	rlwimi r11, r8, 0xd, 0x10, 0x12
/* 800E7F74 000E4EB4  51 2B 83 5E */	rlwimi r11, r9, 0x10, 0xd, 0xf
/* 800E7F78 000E4EB8  53 EB 9B 18 */	rlwimi r11, r31, 0x13, 0xc, 0xc
/* 800E7F7C 000E4EBC  38 00 00 61 */	li r0, 0x61
/* 800E7F80 000E4EC0  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 800E7F84 000E4EC4  98 05 80 00 */	stb r0, 0xCC008000@l(r5)
/* 800E7F88 000E4EC8  38 03 00 10 */	addi r0, r3, 0x10
/* 800E7F8C 000E4ECC  51 4B A2 D6 */	rlwimi r11, r10, 0x14, 0xb, 0xb
/* 800E7F90 000E4ED0  50 0B C0 0E */	rlwimi r11, r0, 0x18, 0, 7
/* 800E7F94 000E4ED4  91 65 80 00 */	stw r11, 0xCC008000@l(r5)
/* 800E7F98 000E4ED8  38 00 00 00 */	li r0, 0
/* 800E7F9C 000E4EDC  B0 04 00 02 */	sth r0, 2(r4)
/* 800E7FA0 000E4EE0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800E7FA4 000E4EE4  38 21 00 30 */	addi r1, r1, 0x30
/* 800E7FA8 000E4EE8  4E 80 00 20 */	blr 

.global GXSetIndTexMtx
GXSetIndTexMtx:
/* 800E7FAC 000E4EEC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 800E7FB0 000E4EF0  2C 03 00 08 */	cmpwi r3, 8
/* 800E7FB4 000E4EF4  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 800E7FB8 000E4EF8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 800E7FBC 000E4EFC  93 A1 00 64 */	stw r29, 0x64(r1)
/* 800E7FC0 000E4F00  41 82 00 44 */	beq lbl_800E8004
/* 800E7FC4 000E4F04  40 80 00 1C */	bge lbl_800E7FE0
/* 800E7FC8 000E4F08  2C 03 00 04 */	cmpwi r3, 4
/* 800E7FCC 000E4F0C  41 82 00 38 */	beq lbl_800E8004
/* 800E7FD0 000E4F10  40 80 00 24 */	bge lbl_800E7FF4
/* 800E7FD4 000E4F14  2C 03 00 01 */	cmpwi r3, 1
/* 800E7FD8 000E4F18  40 80 00 14 */	bge lbl_800E7FEC
/* 800E7FDC 000E4F1C  48 00 00 28 */	b lbl_800E8004
lbl_800E7FE0:
/* 800E7FE0 000E4F20  2C 03 00 0C */	cmpwi r3, 0xc
/* 800E7FE4 000E4F24  40 80 00 20 */	bge lbl_800E8004
/* 800E7FE8 000E4F28  48 00 00 14 */	b lbl_800E7FFC
lbl_800E7FEC:
/* 800E7FEC 000E4F2C  38 03 FF FF */	addi r0, r3, -1
/* 800E7FF0 000E4F30  48 00 00 18 */	b lbl_800E8008
lbl_800E7FF4:
/* 800E7FF4 000E4F34  38 03 FF FB */	addi r0, r3, -5
/* 800E7FF8 000E4F38  48 00 00 10 */	b lbl_800E8008
lbl_800E7FFC:
/* 800E7FFC 000E4F3C  38 03 FF F7 */	addi r0, r3, -9
/* 800E8000 000E4F40  48 00 00 08 */	b lbl_800E8008
lbl_800E8004:
/* 800E8004 000E4F44  38 00 00 00 */	li r0, 0
lbl_800E8008:
/* 800E8008 000E4F48  C0 42 93 38 */	lfs f2, lbl_80517698@sda21(r2)
/* 800E800C 000E4F4C  1F E0 00 03 */	mulli r31, r0, 3
/* 800E8010 000E4F50  C0 24 00 00 */	lfs f1, 0(r4)
/* 800E8014 000E4F54  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 800E8018 000E4F58  EC 22 00 72 */	fmuls f1, f2, f1
/* 800E801C 000E4F5C  39 45 00 11 */	addi r10, r5, 0x11
/* 800E8020 000E4F60  EC 02 00 32 */	fmuls f0, f2, f0
/* 800E8024 000E4F64  7D 4A 07 74 */	extsb r10, r10
/* 800E8028 000E4F68  39 80 00 61 */	li r12, 0x61
/* 800E802C 000E4F6C  FC 20 08 1E */	fctiwz f1, f1
/* 800E8030 000E4F70  3D 60 CC 01 */	lis r11, 0xCC008000@ha
/* 800E8034 000E4F74  FC 00 00 1E */	fctiwz f0, f0
/* 800E8038 000E4F78  3B C0 00 00 */	li r30, 0
/* 800E803C 000E4F7C  38 1F 00 06 */	addi r0, r31, 6
/* 800E8040 000E4F80  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 800E8044 000E4F84  55 48 F7 BE */	rlwinm r8, r10, 0x1e, 0x1e, 0x1f
/* 800E8048 000E4F88  38 FF 00 07 */	addi r7, r31, 7
/* 800E804C 000E4F8C  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E8050 000E4F90  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 800E8054 000E4F94  81 21 00 5C */	lwz r9, 0x5c(r1)
/* 800E8058 000E4F98  3B A0 00 00 */	li r29, 0
/* 800E805C 000E4F9C  80 C1 00 54 */	lwz r6, 0x54(r1)
/* 800E8060 000E4FA0  38 BF 00 08 */	addi r5, r31, 8
/* 800E8064 000E4FA4  51 3E 05 7E */	rlwimi r30, r9, 0, 0x15, 0x1f
/* 800E8068 000E4FA8  39 3E 00 00 */	addi r9, r30, 0
/* 800E806C 000E4FAC  99 8B 80 00 */	stb r12, 0xCC008000@l(r11)
/* 800E8070 000E4FB0  50 C9 5A A8 */	rlwimi r9, r6, 0xb, 0xa, 0x14
/* 800E8074 000E4FB4  51 49 B2 12 */	rlwimi r9, r10, 0x16, 8, 9
/* 800E8078 000E4FB8  50 09 C0 0E */	rlwimi r9, r0, 0x18, 0, 7
/* 800E807C 000E4FBC  91 2B 80 00 */	stw r9, 0xCC008000@l(r11)
/* 800E8080 000E4FC0  55 46 E7 BE */	rlwinm r6, r10, 0x1c, 0x1e, 0x1f
/* 800E8084 000E4FC4  3B C0 00 00 */	li r30, 0
/* 800E8088 000E4FC8  C0 24 00 04 */	lfs f1, 4(r4)
/* 800E808C 000E4FCC  38 00 00 00 */	li r0, 0
/* 800E8090 000E4FD0  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 800E8094 000E4FD4  EC 22 00 72 */	fmuls f1, f2, f1
/* 800E8098 000E4FD8  EC 02 00 32 */	fmuls f0, f2, f0
/* 800E809C 000E4FDC  99 8B 80 00 */	stb r12, 0xCC008000@l(r11)
/* 800E80A0 000E4FE0  FC 20 08 1E */	fctiwz f1, f1
/* 800E80A4 000E4FE4  FC 00 00 1E */	fctiwz f0, f0
/* 800E80A8 000E4FE8  D8 21 00 48 */	stfd f1, 0x48(r1)
/* 800E80AC 000E4FEC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 800E80B0 000E4FF0  81 41 00 4C */	lwz r10, 0x4c(r1)
/* 800E80B4 000E4FF4  81 21 00 44 */	lwz r9, 0x44(r1)
/* 800E80B8 000E4FF8  51 5D 05 7E */	rlwimi r29, r10, 0, 0x15, 0x1f
/* 800E80BC 000E4FFC  51 3D 5A A8 */	rlwimi r29, r9, 0xb, 0xa, 0x14
/* 800E80C0 000E5000  51 1D B2 12 */	rlwimi r29, r8, 0x16, 8, 9
/* 800E80C4 000E5004  50 FD C0 0E */	rlwimi r29, r7, 0x18, 0, 7
/* 800E80C8 000E5008  93 AB 80 00 */	stw r29, 0xCC008000@l(r11)
/* 800E80CC 000E500C  C0 24 00 08 */	lfs f1, 8(r4)
/* 800E80D0 000E5010  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 800E80D4 000E5014  EC 22 00 72 */	fmuls f1, f2, f1
/* 800E80D8 000E5018  EC 02 00 32 */	fmuls f0, f2, f0
/* 800E80DC 000E501C  99 8B 80 00 */	stb r12, 0xCC008000@l(r11)
/* 800E80E0 000E5020  FC 20 08 1E */	fctiwz f1, f1
/* 800E80E4 000E5024  FC 00 00 1E */	fctiwz f0, f0
/* 800E80E8 000E5028  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 800E80EC 000E502C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 800E80F0 000E5030  80 E1 00 3C */	lwz r7, 0x3c(r1)
/* 800E80F4 000E5034  80 81 00 34 */	lwz r4, 0x34(r1)
/* 800E80F8 000E5038  50 FE 05 7E */	rlwimi r30, r7, 0, 0x15, 0x1f
/* 800E80FC 000E503C  50 9E 5A A8 */	rlwimi r30, r4, 0xb, 0xa, 0x14
/* 800E8100 000E5040  50 DE B2 12 */	rlwimi r30, r6, 0x16, 8, 9
/* 800E8104 000E5044  50 BE C0 0E */	rlwimi r30, r5, 0x18, 0, 7
/* 800E8108 000E5048  93 CB 80 00 */	stw r30, 0xCC008000@l(r11)
/* 800E810C 000E504C  B0 03 00 02 */	sth r0, 2(r3)
/* 800E8110 000E5050  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 800E8114 000E5054  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 800E8118 000E5058  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 800E811C 000E505C  38 21 00 70 */	addi r1, r1, 0x70
/* 800E8120 000E5060  4E 80 00 20 */	blr 

.global GXSetIndTexCoordScale
GXSetIndTexCoordScale:
/* 800E8124 000E5064  2C 03 00 02 */	cmpwi r3, 2
/* 800E8128 000E5068  41 82 00 AC */	beq lbl_800E81D4
/* 800E812C 000E506C  40 80 00 14 */	bge lbl_800E8140
/* 800E8130 000E5070  2C 03 00 00 */	cmpwi r3, 0
/* 800E8134 000E5074  41 82 00 18 */	beq lbl_800E814C
/* 800E8138 000E5078  40 80 00 58 */	bge lbl_800E8190
/* 800E813C 000E507C  48 00 01 1C */	b lbl_800E8258
lbl_800E8140:
/* 800E8140 000E5080  2C 03 00 04 */	cmpwi r3, 4
/* 800E8144 000E5084  40 80 01 14 */	bge lbl_800E8258
/* 800E8148 000E5088  48 00 00 D0 */	b lbl_800E8218
lbl_800E814C:
/* 800E814C 000E508C  81 02 92 90 */	lwz r8, __GXData@sda21(r2)
/* 800E8150 000E5090  38 C0 00 25 */	li r6, 0x25
/* 800E8154 000E5094  38 00 00 61 */	li r0, 0x61
/* 800E8158 000E5098  80 E8 01 28 */	lwz r7, 0x128(r8)
/* 800E815C 000E509C  50 87 07 3E */	rlwimi r7, r4, 0, 0x1c, 0x1f
/* 800E8160 000E50A0  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 800E8164 000E50A4  90 E8 01 28 */	stw r7, 0x128(r8)
/* 800E8168 000E50A8  80 88 01 28 */	lwz r4, 0x128(r8)
/* 800E816C 000E50AC  50 A4 26 36 */	rlwimi r4, r5, 4, 0x18, 0x1b
/* 800E8170 000E50B0  90 88 01 28 */	stw r4, 0x128(r8)
/* 800E8174 000E50B4  80 88 01 28 */	lwz r4, 0x128(r8)
/* 800E8178 000E50B8  50 C4 C0 0E */	rlwimi r4, r6, 0x18, 0, 7
/* 800E817C 000E50BC  90 88 01 28 */	stw r4, 0x128(r8)
/* 800E8180 000E50C0  98 03 80 00 */	stb r0, 0xCC008000@l(r3)
/* 800E8184 000E50C4  80 08 01 28 */	lwz r0, 0x128(r8)
/* 800E8188 000E50C8  90 03 80 00 */	stw r0, 0xCC008000@l(r3)
/* 800E818C 000E50CC  48 00 00 CC */	b lbl_800E8258
lbl_800E8190:
/* 800E8190 000E50D0  81 02 92 90 */	lwz r8, __GXData@sda21(r2)
/* 800E8194 000E50D4  38 C0 00 25 */	li r6, 0x25
/* 800E8198 000E50D8  38 00 00 61 */	li r0, 0x61
/* 800E819C 000E50DC  80 E8 01 28 */	lwz r7, 0x128(r8)
/* 800E81A0 000E50E0  50 87 45 2E */	rlwimi r7, r4, 8, 0x14, 0x17
/* 800E81A4 000E50E4  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 800E81A8 000E50E8  90 E8 01 28 */	stw r7, 0x128(r8)
/* 800E81AC 000E50EC  80 88 01 28 */	lwz r4, 0x128(r8)
/* 800E81B0 000E50F0  50 A4 64 26 */	rlwimi r4, r5, 0xc, 0x10, 0x13
/* 800E81B4 000E50F4  90 88 01 28 */	stw r4, 0x128(r8)
/* 800E81B8 000E50F8  80 88 01 28 */	lwz r4, 0x128(r8)
/* 800E81BC 000E50FC  50 C4 C0 0E */	rlwimi r4, r6, 0x18, 0, 7
/* 800E81C0 000E5100  90 88 01 28 */	stw r4, 0x128(r8)
/* 800E81C4 000E5104  98 03 80 00 */	stb r0, 0xCC008000@l(r3)
/* 800E81C8 000E5108  80 08 01 28 */	lwz r0, 0x128(r8)
/* 800E81CC 000E510C  90 03 80 00 */	stw r0, 0xCC008000@l(r3)
/* 800E81D0 000E5110  48 00 00 88 */	b lbl_800E8258
lbl_800E81D4:
/* 800E81D4 000E5114  81 02 92 90 */	lwz r8, __GXData@sda21(r2)
/* 800E81D8 000E5118  38 C0 00 26 */	li r6, 0x26
/* 800E81DC 000E511C  38 00 00 61 */	li r0, 0x61
/* 800E81E0 000E5120  80 E8 01 2C */	lwz r7, 0x12c(r8)
/* 800E81E4 000E5124  50 87 07 3E */	rlwimi r7, r4, 0, 0x1c, 0x1f
/* 800E81E8 000E5128  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 800E81EC 000E512C  90 E8 01 2C */	stw r7, 0x12c(r8)
/* 800E81F0 000E5130  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 800E81F4 000E5134  50 A4 26 36 */	rlwimi r4, r5, 4, 0x18, 0x1b
/* 800E81F8 000E5138  90 88 01 2C */	stw r4, 0x12c(r8)
/* 800E81FC 000E513C  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 800E8200 000E5140  50 C4 C0 0E */	rlwimi r4, r6, 0x18, 0, 7
/* 800E8204 000E5144  90 88 01 2C */	stw r4, 0x12c(r8)
/* 800E8208 000E5148  98 03 80 00 */	stb r0, 0xCC008000@l(r3)
/* 800E820C 000E514C  80 08 01 2C */	lwz r0, 0x12c(r8)
/* 800E8210 000E5150  90 03 80 00 */	stw r0, 0xCC008000@l(r3)
/* 800E8214 000E5154  48 00 00 44 */	b lbl_800E8258
lbl_800E8218:
/* 800E8218 000E5158  81 02 92 90 */	lwz r8, __GXData@sda21(r2)
/* 800E821C 000E515C  38 C0 00 26 */	li r6, 0x26
/* 800E8220 000E5160  38 00 00 61 */	li r0, 0x61
/* 800E8224 000E5164  80 E8 01 2C */	lwz r7, 0x12c(r8)
/* 800E8228 000E5168  50 87 45 2E */	rlwimi r7, r4, 8, 0x14, 0x17
/* 800E822C 000E516C  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 800E8230 000E5170  90 E8 01 2C */	stw r7, 0x12c(r8)
/* 800E8234 000E5174  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 800E8238 000E5178  50 A4 64 26 */	rlwimi r4, r5, 0xc, 0x10, 0x13
/* 800E823C 000E517C  90 88 01 2C */	stw r4, 0x12c(r8)
/* 800E8240 000E5180  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 800E8244 000E5184  50 C4 C0 0E */	rlwimi r4, r6, 0x18, 0, 7
/* 800E8248 000E5188  90 88 01 2C */	stw r4, 0x12c(r8)
/* 800E824C 000E518C  98 03 80 00 */	stb r0, 0xCC008000@l(r3)
/* 800E8250 000E5190  80 08 01 2C */	lwz r0, 0x12c(r8)
/* 800E8254 000E5194  90 03 80 00 */	stw r0, 0xCC008000@l(r3)
lbl_800E8258:
/* 800E8258 000E5198  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E825C 000E519C  38 00 00 00 */	li r0, 0
/* 800E8260 000E51A0  B0 03 00 02 */	sth r0, 2(r3)
/* 800E8264 000E51A4  4E 80 00 20 */	blr 

.global GXSetIndTexOrder
GXSetIndTexOrder:
/* 800E8268 000E51A8  2C 05 00 FF */	cmpwi r5, 0xff
/* 800E826C 000E51AC  40 82 00 08 */	bne lbl_800E8274
/* 800E8270 000E51B0  38 A0 00 00 */	li r5, 0
lbl_800E8274:
/* 800E8274 000E51B4  2C 04 00 FF */	cmpwi r4, 0xff
/* 800E8278 000E51B8  40 82 00 08 */	bne lbl_800E8280
/* 800E827C 000E51BC  38 80 00 00 */	li r4, 0
lbl_800E8280:
/* 800E8280 000E51C0  2C 03 00 02 */	cmpwi r3, 2
/* 800E8284 000E51C4  41 82 00 64 */	beq lbl_800E82E8
/* 800E8288 000E51C8  40 80 00 14 */	bge lbl_800E829C
/* 800E828C 000E51CC  2C 03 00 00 */	cmpwi r3, 0
/* 800E8290 000E51D0  41 82 00 18 */	beq lbl_800E82A8
/* 800E8294 000E51D4  40 80 00 34 */	bge lbl_800E82C8
/* 800E8298 000E51D8  48 00 00 8C */	b lbl_800E8324
lbl_800E829C:
/* 800E829C 000E51DC  2C 03 00 04 */	cmpwi r3, 4
/* 800E82A0 000E51E0  40 80 00 84 */	bge lbl_800E8324
/* 800E82A4 000E51E4  48 00 00 64 */	b lbl_800E8308
lbl_800E82A8:
/* 800E82A8 000E51E8  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E82AC 000E51EC  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82B0 000E51F0  50 A0 07 7E */	rlwimi r0, r5, 0, 0x1d, 0x1f
/* 800E82B4 000E51F4  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E82B8 000E51F8  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82BC 000E51FC  50 80 1E B8 */	rlwimi r0, r4, 3, 0x1a, 0x1c
/* 800E82C0 000E5200  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E82C4 000E5204  48 00 00 60 */	b lbl_800E8324
lbl_800E82C8:
/* 800E82C8 000E5208  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E82CC 000E520C  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82D0 000E5210  50 A0 35 F2 */	rlwimi r0, r5, 6, 0x17, 0x19
/* 800E82D4 000E5214  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E82D8 000E5218  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82DC 000E521C  50 80 4D 2C */	rlwimi r0, r4, 9, 0x14, 0x16
/* 800E82E0 000E5220  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E82E4 000E5224  48 00 00 40 */	b lbl_800E8324
lbl_800E82E8:
/* 800E82E8 000E5228  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E82EC 000E522C  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82F0 000E5230  50 A0 64 66 */	rlwimi r0, r5, 0xc, 0x11, 0x13
/* 800E82F4 000E5234  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E82F8 000E5238  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E82FC 000E523C  50 80 7B A0 */	rlwimi r0, r4, 0xf, 0xe, 0x10
/* 800E8300 000E5240  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E8304 000E5244  48 00 00 20 */	b lbl_800E8324
lbl_800E8308:
/* 800E8308 000E5248  80 62 92 90 */	lwz r3, __GXData@sda21(r2)
/* 800E830C 000E524C  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E8310 000E5250  50 A0 92 DA */	rlwimi r0, r5, 0x12, 0xb, 0xd
/* 800E8314 000E5254  90 03 01 20 */	stw r0, 0x120(r3)
/* 800E8318 000E5258  80 03 01 20 */	lwz r0, 0x120(r3)
/* 800E831C 000E525C  50 80 AA 14 */	rlwimi r0, r4, 0x15, 8, 0xa
/* 800E8320 000E5260  90 03 01 20 */	stw r0, 0x120(r3)
lbl_800E8324:
/* 800E8324 000E5264  38 00 00 61 */	li r0, 0x61
/* 800E8328 000E5268  80 82 92 90 */	lwz r4, __GXData@sda21(r2)
/* 800E832C 000E526C  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 800E8330 000E5270  98 05 80 00 */	stb r0, 0xCC008000@l(r5)
/* 800E8334 000E5274  38 00 00 00 */	li r0, 0
/* 800E8338 000E5278  80 64 01 20 */	lwz r3, 0x120(r4)
/* 800E833C 000E527C  90 65 80 00 */	stw r3, 0xCC008000@l(r5)
/* 800E8340 000E5280  80 64 05 AC */	lwz r3, 0x5ac(r4)
/* 800E8344 000E5284  60 63 00 03 */	ori r3, r3, 3
/* 800E8348 000E5288  90 64 05 AC */	stw r3, 0x5ac(r4)
/* 800E834C 000E528C  B0 04 00 02 */	sth r0, 2(r4)
/* 800E8350 000E5290  4E 80 00 20 */	blr 

.global GXSetNumIndStages
GXSetNumIndStages:
/* 800E8354 000E5294  80 82 92 90 */	lwz r4, __GXData@sda21(r2)
/* 800E8358 000E5298  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 800E835C 000E529C  80 64 02 04 */	lwz r3, 0x204(r4)
/* 800E8360 000E52A0  50 03 83 5E */	rlwimi r3, r0, 0x10, 0xd, 0xf
/* 800E8364 000E52A4  90 64 02 04 */	stw r3, 0x204(r4)
/* 800E8368 000E52A8  80 04 05 AC */	lwz r0, 0x5ac(r4)
/* 800E836C 000E52AC  60 00 00 06 */	ori r0, r0, 6
/* 800E8370 000E52B0  90 04 05 AC */	stw r0, 0x5ac(r4)
/* 800E8374 000E52B4  4E 80 00 20 */	blr 

.global GXSetTevDirect
GXSetTevDirect:
/* 800E8378 000E52B8  7C 08 02 A6 */	mflr r0
/* 800E837C 000E52BC  38 80 00 00 */	li r4, 0
/* 800E8380 000E52C0  90 01 00 04 */	stw r0, 4(r1)
/* 800E8384 000E52C4  38 00 00 00 */	li r0, 0
/* 800E8388 000E52C8  38 A0 00 00 */	li r5, 0
/* 800E838C 000E52CC  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 800E8390 000E52D0  38 C0 00 00 */	li r6, 0
/* 800E8394 000E52D4  38 E0 00 00 */	li r7, 0
/* 800E8398 000E52D8  90 01 00 08 */	stw r0, 8(r1)
/* 800E839C 000E52DC  39 00 00 00 */	li r8, 0
/* 800E83A0 000E52E0  39 20 00 00 */	li r9, 0
/* 800E83A4 000E52E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 800E83A8 000E52E8  39 40 00 00 */	li r10, 0
/* 800E83AC 000E52EC  4B FF FB 95 */	bl GXSetTevIndirect
/* 800E83B0 000E52F0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800E83B4 000E52F4  38 21 00 18 */	addi r1, r1, 0x18
/* 800E83B8 000E52F8  7C 08 03 A6 */	mtlr r0
/* 800E83BC 000E52FC  4E 80 00 20 */	blr 

.global GXSetTevIndWarp
GXSetTevIndWarp:
/* 800E83C0 000E5300  7C 08 02 A6 */	mflr r0
/* 800E83C4 000E5304  90 01 00 04 */	stw r0, 4(r1)
/* 800E83C8 000E5308  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 800E83CC 000E530C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800E83D0 000E5310  41 82 00 0C */	beq lbl_800E83DC
/* 800E83D4 000E5314  38 C0 00 06 */	li r6, 6
/* 800E83D8 000E5318  48 00 00 08 */	b lbl_800E83E0
lbl_800E83DC:
/* 800E83DC 000E531C  38 C0 00 00 */	li r6, 0
lbl_800E83E0:
/* 800E83E0 000E5320  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 800E83E4 000E5324  39 06 00 00 */	addi r8, r6, 0
/* 800E83E8 000E5328  41 82 00 0C */	beq lbl_800E83F4
/* 800E83EC 000E532C  38 C0 00 07 */	li r6, 7
/* 800E83F0 000E5330  48 00 00 08 */	b lbl_800E83F8
lbl_800E83F4:
/* 800E83F4 000E5334  38 C0 00 00 */	li r6, 0
lbl_800E83F8:
/* 800E83F8 000E5338  38 00 00 00 */	li r0, 0
/* 800E83FC 000E533C  90 01 00 08 */	stw r0, 8(r1)
/* 800E8400 000E5340  39 28 00 00 */	addi r9, r8, 0
/* 800E8404 000E5344  38 A0 00 00 */	li r5, 0
/* 800E8408 000E5348  90 01 00 0C */	stw r0, 0xc(r1)
/* 800E840C 000E534C  39 40 00 00 */	li r10, 0
/* 800E8410 000E5350  4B FF FB 31 */	bl GXSetTevIndirect
/* 800E8414 000E5354  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800E8418 000E5358  38 21 00 20 */	addi r1, r1, 0x20
/* 800E841C 000E535C  7C 08 03 A6 */	mtlr r0
/* 800E8420 000E5360  4E 80 00 20 */	blr 

.global __GXUpdateBPMask
__GXUpdateBPMask:
/* 800E8424 000E5364  4E 80 00 20 */	blr 

.global __GXSetIndirectMask
__GXSetIndirectMask:
/* 800E8428 000E5368  80 E2 92 90 */	lwz r7, __GXData@sda21(r2)
/* 800E842C 000E536C  38 A0 00 61 */	li r5, 0x61
/* 800E8430 000E5370  3C 80 CC 01 */	lis r4, 0xCC008000@ha
/* 800E8434 000E5374  80 C7 01 24 */	lwz r6, 0x124(r7)
/* 800E8438 000E5378  50 66 06 3E */	rlwimi r6, r3, 0, 0x18, 0x1f
/* 800E843C 000E537C  38 00 00 00 */	li r0, 0
/* 800E8440 000E5380  90 C7 01 24 */	stw r6, 0x124(r7)
/* 800E8444 000E5384  98 A4 80 00 */	stb r5, 0xCC008000@l(r4)
/* 800E8448 000E5388  80 67 01 24 */	lwz r3, 0x124(r7)
/* 800E844C 000E538C  90 64 80 00 */	stw r3, 0xCC008000@l(r4)
/* 800E8450 000E5390  B0 07 00 02 */	sth r0, 2(r7)
/* 800E8454 000E5394  4E 80 00 20 */	blr 

.global __GXFlushTextureState
__GXFlushTextureState:
/* 800E8458 000E5398  38 00 00 61 */	li r0, 0x61
/* 800E845C 000E539C  80 82 92 90 */	lwz r4, __GXData@sda21(r2)
/* 800E8460 000E53A0  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 800E8464 000E53A4  98 05 80 00 */	stb r0, 0xCC008000@l(r5)
/* 800E8468 000E53A8  38 00 00 00 */	li r0, 0
/* 800E846C 000E53AC  80 64 01 24 */	lwz r3, 0x124(r4)
/* 800E8470 000E53B0  90 65 80 00 */	stw r3, 0xCC008000@l(r5)
/* 800E8474 000E53B4  B0 04 00 02 */	sth r0, 2(r4)
/* 800E8478 000E53B8  4E 80 00 20 */	blr 
