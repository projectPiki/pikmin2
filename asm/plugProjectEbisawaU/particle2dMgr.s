.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_particle2dMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80495A70:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_80495A7C:
	.asciz "particle2dMgr"
.balign 4
lbl_80495A8C:
	.asciz "TParticle2dMgr"
.balign 4
lbl_80495A9C:
	.asciz "TParticle2dMgr::createHeap"
.balign 4
lbl_80495AB8:
	.asciz "particle2dMgr.cpp"
.balign 4
lbl_80495ACC:
	.asciz "P2Assert"
.balign 4
lbl_80495AD8:
	.asciz "effect heap not allocated !\n"
.balign 4
lbl_80495AF8:
	.asciz "TParticle2dMgr::createMgr"
.balign 4
lbl_80495B14:
	.asciz "ParticleResource (%s) not found\n"
.balign 4
lbl_80495B38:
	.asciz "IP2_dummy"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__14TParticle2dMgr
__vt__14TParticle2dMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__14TParticle2dMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__14TParticle2dMgrFv"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4
.global particle2dMgr
particle2dMgr:
	.skip 0x4
.global _instance__14TParticle2dMgr
_instance__14TParticle2dMgr:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051F6C0:
	.float 0.0
lbl_8051F6C4:
	.float 0.5
lbl_8051F6C8:
	.float -0.5
.balign 8
lbl_8051F6D0:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__14TParticle2dMgrFv
__dt__14TParticle2dMgrFv:
/* 803B9064 003B5FA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B9068 003B5FA8  7C 08 02 A6 */	mflr r0
/* 803B906C 003B5FAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9070 003B5FB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B9074 003B5FB4  7C 9F 23 78 */	mr r31, r4
/* 803B9078 003B5FB8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B907C 003B5FBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B9080 003B5FC0  41 82 00 4C */	beq .L_803B90CC
/* 803B9084 003B5FC4  3C 60 80 4E */	lis r3, __vt__14TParticle2dMgr@ha
/* 803B9088 003B5FC8  38 00 00 00 */	li r0, 0
/* 803B908C 003B5FCC  38 83 73 74 */	addi r4, r3, __vt__14TParticle2dMgr@l
/* 803B9090 003B5FD0  38 7E 00 18 */	addi r3, r30, 0x18
/* 803B9094 003B5FD4  90 9E 00 00 */	stw r4, 0(r30)
/* 803B9098 003B5FD8  38 A4 00 10 */	addi r5, r4, 0x10
/* 803B909C 003B5FDC  38 80 00 00 */	li r4, 0
/* 803B90A0 003B5FE0  90 BE 00 18 */	stw r5, 0x18(r30)
/* 803B90A4 003B5FE4  90 0D 9A 0C */	stw r0, _instance__14TParticle2dMgr@sda21(r13)
/* 803B90A8 003B5FE8  90 0D 9A 08 */	stw r0, particle2dMgr@sda21(r13)
/* 803B90AC 003B5FEC  4B C6 3F 89 */	bl __dt__11JKRDisposerFv
/* 803B90B0 003B5FF0  7F C3 F3 78 */	mr r3, r30
/* 803B90B4 003B5FF4  38 80 00 00 */	li r4, 0
/* 803B90B8 003B5FF8  48 05 84 D1 */	bl __dt__5CNodeFv
/* 803B90BC 003B5FFC  7F E0 07 35 */	extsh. r0, r31
/* 803B90C0 003B6000  40 81 00 0C */	ble .L_803B90CC
/* 803B90C4 003B6004  7F C3 F3 78 */	mr r3, r30
/* 803B90C8 003B6008  4B C6 AF ED */	bl __dl__FPv
.L_803B90CC:
/* 803B90CC 003B600C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B90D0 003B6010  7F C3 F3 78 */	mr r3, r30
/* 803B90D4 003B6014  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B90D8 003B6018  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B90DC 003B601C  7C 08 03 A6 */	mtlr r0
/* 803B90E0 003B6020  38 21 00 10 */	addi r1, r1, 0x10
/* 803B90E4 003B6024  4E 80 00 20 */	blr 

.global globalInstance__14TParticle2dMgrFv
globalInstance__14TParticle2dMgrFv:
/* 803B90E8 003B6028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B90EC 003B602C  7C 08 02 A6 */	mflr r0
/* 803B90F0 003B6030  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B90F4 003B6034  48 00 00 19 */	bl Instance__14TParticle2dMgrFv
/* 803B90F8 003B6038  90 6D 9A 08 */	stw r3, particle2dMgr@sda21(r13)
/* 803B90FC 003B603C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9100 003B6040  7C 08 03 A6 */	mtlr r0
/* 803B9104 003B6044  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9108 003B6048  4E 80 00 20 */	blr 

.global Instance__14TParticle2dMgrFv
Instance__14TParticle2dMgrFv:
/* 803B910C 003B604C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B9110 003B6050  7C 08 02 A6 */	mflr r0
/* 803B9114 003B6054  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9118 003B6058  80 0D 9A 0C */	lwz r0, _instance__14TParticle2dMgr@sda21(r13)
/* 803B911C 003B605C  28 00 00 00 */	cmplwi r0, 0
/* 803B9120 003B6060  40 82 00 20 */	bne .L_803B9140
/* 803B9124 003B6064  38 60 00 44 */	li r3, 0x44
/* 803B9128 003B6068  4B C6 AD 7D */	bl __nw__FUl
/* 803B912C 003B606C  7C 60 1B 79 */	or. r0, r3, r3
/* 803B9130 003B6070  41 82 00 0C */	beq .L_803B913C
/* 803B9134 003B6074  48 00 00 71 */	bl __ct__14TParticle2dMgrFv
/* 803B9138 003B6078  7C 60 1B 78 */	mr r0, r3
.L_803B913C:
/* 803B913C 003B607C  90 0D 9A 0C */	stw r0, _instance__14TParticle2dMgr@sda21(r13)
.L_803B9140:
/* 803B9140 003B6080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9144 003B6084  80 6D 9A 0C */	lwz r3, _instance__14TParticle2dMgr@sda21(r13)
/* 803B9148 003B6088  7C 08 03 A6 */	mtlr r0
/* 803B914C 003B608C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9150 003B6090  4E 80 00 20 */	blr 

.global deleteInstance__14TParticle2dMgrFv
deleteInstance__14TParticle2dMgrFv:
/* 803B9154 003B6094  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B9158 003B6098  7C 08 02 A6 */	mflr r0
/* 803B915C 003B609C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9160 003B60A0  80 6D 9A 0C */	lwz r3, _instance__14TParticle2dMgr@sda21(r13)
/* 803B9164 003B60A4  28 03 00 00 */	cmplwi r3, 0
/* 803B9168 003B60A8  41 82 00 24 */	beq .L_803B918C
/* 803B916C 003B60AC  41 82 00 18 */	beq .L_803B9184
/* 803B9170 003B60B0  81 83 00 00 */	lwz r12, 0(r3)
/* 803B9174 003B60B4  38 80 00 01 */	li r4, 1
/* 803B9178 003B60B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B917C 003B60BC  7D 89 03 A6 */	mtctr r12
/* 803B9180 003B60C0  4E 80 04 21 */	bctrl 
.L_803B9184:
/* 803B9184 003B60C4  38 00 00 00 */	li r0, 0
/* 803B9188 003B60C8  90 0D 9A 0C */	stw r0, _instance__14TParticle2dMgr@sda21(r13)
.L_803B918C:
/* 803B918C 003B60CC  38 00 00 00 */	li r0, 0
/* 803B9190 003B60D0  90 0D 9A 08 */	stw r0, particle2dMgr@sda21(r13)
/* 803B9194 003B60D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9198 003B60D8  7C 08 03 A6 */	mtlr r0
/* 803B919C 003B60DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B91A0 003B60E0  4E 80 00 20 */	blr 

.global __ct__14TParticle2dMgrFv
__ct__14TParticle2dMgrFv:
/* 803B91A4 003B60E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B91A8 003B60E8  7C 08 02 A6 */	mflr r0
/* 803B91AC 003B60EC  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 803B91B0 003B60F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B91B4 003B60F4  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 803B91B8 003B60F8  38 80 00 00 */	li r4, 0
/* 803B91BC 003B60FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B91C0 003B6100  7C 7F 1B 78 */	mr r31, r3
/* 803B91C4 003B6104  3C 60 80 49 */	lis r3, lbl_80495A8C@ha
/* 803B91C8 003B6108  90 1F 00 00 */	stw r0, 0(r31)
/* 803B91CC 003B610C  38 03 5A 8C */	addi r0, r3, lbl_80495A8C@l
/* 803B91D0 003B6110  38 7F 00 18 */	addi r3, r31, 0x18
/* 803B91D4 003B6114  90 9F 00 10 */	stw r4, 0x10(r31)
/* 803B91D8 003B6118  90 9F 00 0C */	stw r4, 0xc(r31)
/* 803B91DC 003B611C  90 9F 00 08 */	stw r4, 8(r31)
/* 803B91E0 003B6120  90 9F 00 04 */	stw r4, 4(r31)
/* 803B91E4 003B6124  90 1F 00 14 */	stw r0, 0x14(r31)
/* 803B91E8 003B6128  4B C6 3D E5 */	bl __ct__11JKRDisposerFv
/* 803B91EC 003B612C  3C 60 80 4E */	lis r3, __vt__14TParticle2dMgr@ha
/* 803B91F0 003B6130  38 00 00 00 */	li r0, 0
/* 803B91F4 003B6134  38 83 73 74 */	addi r4, r3, __vt__14TParticle2dMgr@l
/* 803B91F8 003B6138  7F E3 FB 78 */	mr r3, r31
/* 803B91FC 003B613C  90 9F 00 00 */	stw r4, 0(r31)
/* 803B9200 003B6140  38 84 00 10 */	addi r4, r4, 0x10
/* 803B9204 003B6144  90 9F 00 18 */	stw r4, 0x18(r31)
/* 803B9208 003B6148  90 1F 00 38 */	stw r0, 0x38(r31)
/* 803B920C 003B614C  90 1F 00 30 */	stw r0, 0x30(r31)
/* 803B9210 003B6150  90 1F 00 34 */	stw r0, 0x34(r31)
/* 803B9214 003B6154  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 803B9218 003B6158  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B921C 003B615C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9220 003B6160  7C 08 03 A6 */	mtlr r0
/* 803B9224 003B6164  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9228 003B6168  4E 80 00 20 */	blr 

.global createHeap__14TParticle2dMgrFUl
createHeap__14TParticle2dMgrFUl:
/* 803B922C 003B616C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B9230 003B6170  7C 08 02 A6 */	mflr r0
/* 803B9234 003B6174  3C A0 80 49 */	lis r5, lbl_80495A70@ha
/* 803B9238 003B6178  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B923C 003B617C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B9240 003B6180  3B E5 5A 70 */	addi r31, r5, lbl_80495A70@l
/* 803B9244 003B6184  38 A0 00 00 */	li r5, 0
/* 803B9248 003B6188  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B924C 003B618C  7C 9E 23 78 */	mr r30, r4
/* 803B9250 003B6190  38 9F 00 2C */	addi r4, r31, 0x2c
/* 803B9254 003B6194  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B9258 003B6198  7C 7D 1B 78 */	mr r29, r3
/* 803B925C 003B619C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803B9260 003B61A0  48 06 A0 FD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803B9264 003B61A4  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 803B9268 003B61A8  28 00 00 00 */	cmplwi r0, 0
/* 803B926C 003B61AC  41 82 00 18 */	beq .L_803B9284
/* 803B9270 003B61B0  38 7F 00 48 */	addi r3, r31, 0x48
/* 803B9274 003B61B4  38 BF 00 5C */	addi r5, r31, 0x5c
/* 803B9278 003B61B8  38 80 00 49 */	li r4, 0x49
/* 803B927C 003B61BC  4C C6 31 82 */	crclr 6
/* 803B9280 003B61C0  4B C7 13 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B9284:
/* 803B9284 003B61C4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803B9288 003B61C8  7F C3 F3 78 */	mr r3, r30
/* 803B928C 003B61CC  38 A0 00 01 */	li r5, 1
/* 803B9290 003B61D0  4B C6 BA E1 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 803B9294 003B61D4  90 7D 00 38 */	stw r3, 0x38(r29)
/* 803B9298 003B61D8  38 9F 00 2C */	addi r4, r31, 0x2c
/* 803B929C 003B61DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803B92A0 003B61E0  48 06 A0 C5 */	bl heapStatusEnd__6SystemFPc
/* 803B92A4 003B61E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B92A8 003B61E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B92AC 003B61EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B92B0 003B61F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B92B4 003B61F4  7C 08 03 A6 */	mtlr r0
/* 803B92B8 003B61F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803B92BC 003B61FC  4E 80 00 20 */	blr 

.global createMgr__14TParticle2dMgrFPcUlUlUl
createMgr__14TParticle2dMgrFPcUlUlUl:
/* 803B92C0 003B6200  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B92C4 003B6204  7C 08 02 A6 */	mflr r0
/* 803B92C8 003B6208  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B92CC 003B620C  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 803B92D0 003B6210  7C 7F 1B 78 */	mr r31, r3
/* 803B92D4 003B6214  3C 60 80 49 */	lis r3, lbl_80495A70@ha
/* 803B92D8 003B6218  7C 99 23 78 */	mr r25, r4
/* 803B92DC 003B621C  7C BA 2B 78 */	mr r26, r5
/* 803B92E0 003B6220  7C DB 33 78 */	mr r27, r6
/* 803B92E4 003B6224  3B C3 5A 70 */	addi r30, r3, lbl_80495A70@l
/* 803B92E8 003B6228  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 803B92EC 003B622C  28 00 00 00 */	cmplwi r0, 0
/* 803B92F0 003B6230  40 82 00 18 */	bne .L_803B9308
/* 803B92F4 003B6234  38 7E 00 48 */	addi r3, r30, 0x48
/* 803B92F8 003B6238  38 BE 00 68 */	addi r5, r30, 0x68
/* 803B92FC 003B623C  38 80 00 53 */	li r4, 0x53
/* 803B9300 003B6240  4C C6 31 82 */	crclr 6
/* 803B9304 003B6244  4B C7 13 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B9308:
/* 803B9308 003B6248  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803B930C 003B624C  38 9E 00 88 */	addi r4, r30, 0x88
/* 803B9310 003B6250  38 A0 00 00 */	li r5, 0
/* 803B9314 003B6254  48 06 A0 49 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803B9318 003B6258  83 AD 88 2C */	lwz r29, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803B931C 003B625C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 803B9320 003B6260  4B C6 A2 85 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803B9324 003B6264  38 00 00 00 */	li r0, 0
/* 803B9328 003B6268  7F 23 CB 78 */	mr r3, r25
/* 803B932C 003B626C  90 01 00 08 */	stw r0, 8(r1)
/* 803B9330 003B6270  38 80 00 00 */	li r4, 0
/* 803B9334 003B6274  38 A0 00 00 */	li r5, 0
/* 803B9338 003B6278  38 C0 00 00 */	li r6, 0
/* 803B933C 003B627C  38 E0 00 00 */	li r7, 0
/* 803B9340 003B6280  39 00 00 01 */	li r8, 1
/* 803B9344 003B6284  39 20 00 00 */	li r9, 0
/* 803B9348 003B6288  39 40 00 00 */	li r10, 0
/* 803B934C 003B628C  4B C6 5E 3D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 803B9350 003B6290  7C 7C 1B 79 */	or. r28, r3, r3
/* 803B9354 003B6294  40 82 00 1C */	bne .L_803B9370
/* 803B9358 003B6298  7F 26 CB 78 */	mr r6, r25
/* 803B935C 003B629C  38 7E 00 48 */	addi r3, r30, 0x48
/* 803B9360 003B62A0  38 BE 00 A4 */	addi r5, r30, 0xa4
/* 803B9364 003B62A4  38 80 00 5E */	li r4, 0x5e
/* 803B9368 003B62A8  4C C6 31 82 */	crclr 6
/* 803B936C 003B62AC  4B C7 12 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B9370:
/* 803B9370 003B62B0  7F A3 EB 78 */	mr r3, r29
/* 803B9374 003B62B4  4B C6 A2 31 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803B9378 003B62B8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 803B937C 003B62BC  38 60 00 14 */	li r3, 0x14
/* 803B9380 003B62C0  38 A0 00 00 */	li r5, 0
/* 803B9384 003B62C4  4B C6 AB BD */	bl __nw__FUlP7JKRHeapi
/* 803B9388 003B62C8  7C 60 1B 79 */	or. r0, r3, r3
/* 803B938C 003B62CC  41 82 00 14 */	beq .L_803B93A0
/* 803B9390 003B62D0  80 BF 00 38 */	lwz r5, 0x38(r31)
/* 803B9394 003B62D4  7F 84 E3 78 */	mr r4, r28
/* 803B9398 003B62D8  4B CD F1 39 */	bl __ct__18JPAResourceManagerFPCvP7JKRHeap
/* 803B939C 003B62DC  7C 60 1B 78 */	mr r0, r3
.L_803B93A0:
/* 803B93A0 003B62E0  90 1F 00 34 */	stw r0, 0x34(r31)
/* 803B93A4 003B62E4  38 60 00 30 */	li r3, 0x30
/* 803B93A8 003B62E8  38 A0 00 00 */	li r5, 0
/* 803B93AC 003B62EC  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 803B93B0 003B62F0  4B C6 AB 91 */	bl __nw__FUlP7JKRHeapi
/* 803B93B4 003B62F4  7C 60 1B 79 */	or. r0, r3, r3
/* 803B93B8 003B62F8  41 82 00 20 */	beq .L_803B93D8
/* 803B93BC 003B62FC  80 DF 00 38 */	lwz r6, 0x38(r31)
/* 803B93C0 003B6300  7F 44 D3 78 */	mr r4, r26
/* 803B93C4 003B6304  7F 65 DB 78 */	mr r5, r27
/* 803B93C8 003B6308  38 E0 00 08 */	li r7, 8
/* 803B93CC 003B630C  39 00 00 02 */	li r8, 2
/* 803B93D0 003B6310  4B CD 71 69 */	bl __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc
/* 803B93D4 003B6314  7C 60 1B 78 */	mr r0, r3
.L_803B93D8:
/* 803B93D8 003B6318  90 1F 00 30 */	stw r0, 0x30(r31)
/* 803B93DC 003B631C  38 A0 00 00 */	li r5, 0
/* 803B93E0 003B6320  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803B93E4 003B6324  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803B93E8 003B6328  4B CD 79 85 */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803B93EC 003B632C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 803B93F0 003B6330  4B C6 BB 59 */	bl adjustSize__12JKRSolidHeapFv
/* 803B93F4 003B6334  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803B93F8 003B6338  38 9E 00 88 */	addi r4, r30, 0x88
/* 803B93FC 003B633C  48 06 9F 69 */	bl heapStatusEnd__6SystemFPc
/* 803B9400 003B6340  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 803B9404 003B6344  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B9408 003B6348  7C 08 03 A6 */	mtlr r0
/* 803B940C 003B634C  38 21 00 30 */	addi r1, r1, 0x30
/* 803B9410 003B6350  4E 80 00 20 */	blr 

.global setSceneEmitterAndResourceManager__14TParticle2dMgrFP17JPAEmitterManagerP18JPAResourceManager
setSceneEmitterAndResourceManager__14TParticle2dMgrFP17JPAEmitterManagerP18JPAResourceManager:
/* 803B9414 003B6354  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B9418 003B6358  7C 08 02 A6 */	mflr r0
/* 803B941C 003B635C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B9420 003B6360  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B9424 003B6364  7C BF 2B 78 */	mr r31, r5
/* 803B9428 003B6368  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B942C 003B636C  7C 9E 23 78 */	mr r30, r4
/* 803B9430 003B6370  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B9434 003B6374  7C 7D 1B 78 */	mr r29, r3
/* 803B9438 003B6378  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 803B943C 003B637C  28 00 00 00 */	cmplwi r0, 0
/* 803B9440 003B6380  41 82 00 20 */	beq .L_803B9460
/* 803B9444 003B6384  3C 60 80 49 */	lis r3, lbl_80495AB8@ha
/* 803B9448 003B6388  3C A0 80 49 */	lis r5, lbl_80495ACC@ha
/* 803B944C 003B638C  38 63 5A B8 */	addi r3, r3, lbl_80495AB8@l
/* 803B9450 003B6390  38 80 00 84 */	li r4, 0x84
/* 803B9454 003B6394  38 A5 5A CC */	addi r5, r5, lbl_80495ACC@l
/* 803B9458 003B6398  4C C6 31 82 */	crclr 6
/* 803B945C 003B639C  4B C7 11 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B9460:
/* 803B9460 003B63A0  80 1D 00 30 */	lwz r0, 0x30(r29)
/* 803B9464 003B63A4  38 80 00 00 */	li r4, 0
/* 803B9468 003B63A8  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 803B946C 003B63AC  93 DD 00 30 */	stw r30, 0x30(r29)
/* 803B9470 003B63B0  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 803B9474 003B63B4  4B CD 79 09 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B9478 003B63B8  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 803B947C 003B63BC  38 A0 00 00 */	li r5, 0
/* 803B9480 003B63C0  80 9D 00 34 */	lwz r4, 0x34(r29)
/* 803B9484 003B63C4  4B CD 78 E9 */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803B9488 003B63C8  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 803B948C 003B63CC  38 80 00 01 */	li r4, 1
/* 803B9490 003B63D0  4B CD 78 ED */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B9494 003B63D4  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 803B9498 003B63D8  7F E4 FB 78 */	mr r4, r31
/* 803B949C 003B63DC  38 A0 00 01 */	li r5, 1
/* 803B94A0 003B63E0  4B CD 78 CD */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803B94A4 003B63E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B94A8 003B63E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B94AC 003B63EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B94B0 003B63F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B94B4 003B63F4  7C 08 03 A6 */	mtlr r0
/* 803B94B8 003B63F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803B94BC 003B63FC  4E 80 00 20 */	blr 

.global clearSceneEmitterAndResourceManager__14TParticle2dMgrFv
clearSceneEmitterAndResourceManager__14TParticle2dMgrFv:
/* 803B94C0 003B6400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B94C4 003B6404  7C 08 02 A6 */	mflr r0
/* 803B94C8 003B6408  38 80 00 01 */	li r4, 1
/* 803B94CC 003B640C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B94D0 003B6410  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B94D4 003B6414  7C 7F 1B 78 */	mr r31, r3
/* 803B94D8 003B6418  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B94DC 003B641C  4B CD 78 A1 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B94E0 003B6420  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803B94E4 003B6424  38 80 00 00 */	li r4, 0
/* 803B94E8 003B6428  4B CD 78 95 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B94EC 003B642C  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 803B94F0 003B6430  28 00 00 00 */	cmplwi r0, 0
/* 803B94F4 003B6434  40 82 00 20 */	bne .L_803B9514
/* 803B94F8 003B6438  3C 60 80 49 */	lis r3, lbl_80495AB8@ha
/* 803B94FC 003B643C  3C A0 80 49 */	lis r5, lbl_80495ACC@ha
/* 803B9500 003B6440  38 63 5A B8 */	addi r3, r3, lbl_80495AB8@l
/* 803B9504 003B6444  38 80 00 95 */	li r4, 0x95
/* 803B9508 003B6448  38 A5 5A CC */	addi r5, r5, lbl_80495ACC@l
/* 803B950C 003B644C  4C C6 31 82 */	crclr 6
/* 803B9510 003B6450  4B C7 11 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B9514:
/* 803B9514 003B6454  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 803B9518 003B6458  38 00 00 00 */	li r0, 0
/* 803B951C 003B645C  90 7F 00 30 */	stw r3, 0x30(r31)
/* 803B9520 003B6460  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 803B9524 003B6464  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B9528 003B6468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B952C 003B646C  7C 08 03 A6 */	mtlr r0
/* 803B9530 003B6470  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9534 003B6474  4E 80 00 20 */	blr 

.global setSceneResourceManager__14TParticle2dMgrFP18JPAResourceManager
setSceneResourceManager__14TParticle2dMgrFP18JPAResourceManager:
/* 803B9538 003B6478  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B953C 003B647C  7C 08 02 A6 */	mflr r0
/* 803B9540 003B6480  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9544 003B6484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B9548 003B6488  7C 9F 23 78 */	mr r31, r4
/* 803B954C 003B648C  38 80 00 01 */	li r4, 1
/* 803B9550 003B6490  93 C1 00 08 */	stw r30, 8(r1)
/* 803B9554 003B6494  7C 7E 1B 78 */	mr r30, r3
/* 803B9558 003B6498  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B955C 003B649C  4B CD 78 21 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B9560 003B64A0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803B9564 003B64A4  7F E4 FB 78 */	mr r4, r31
/* 803B9568 003B64A8  38 A0 00 01 */	li r5, 1
/* 803B956C 003B64AC  4B CD 78 01 */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803B9570 003B64B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9574 003B64B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B9578 003B64B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B957C 003B64BC  7C 08 03 A6 */	mtlr r0
/* 803B9580 003B64C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9584 003B64C4  4E 80 00 20 */	blr 

.global clearSceneResourceManager__14TParticle2dMgrFv
clearSceneResourceManager__14TParticle2dMgrFv:
/* 803B9588 003B64C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B958C 003B64CC  7C 08 02 A6 */	mflr r0
/* 803B9590 003B64D0  38 80 00 01 */	li r4, 1
/* 803B9594 003B64D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9598 003B64D8  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B959C 003B64DC  4B CD 77 E1 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803B95A0 003B64E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B95A4 003B64E4  7C 08 03 A6 */	mtlr r0
/* 803B95A8 003B64E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B95AC 003B64EC  4E 80 00 20 */	blr 

.global update__14TParticle2dMgrFv
update__14TParticle2dMgrFv:
/* 803B95B0 003B64F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B95B4 003B64F4  7C 08 02 A6 */	mflr r0
/* 803B95B8 003B64F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B95BC 003B64FC  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B95C0 003B6500  4B CD 73 D9 */	bl calc__17JPAEmitterManagerFv
/* 803B95C4 003B6504  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B95C8 003B6508  7C 08 03 A6 */	mtlr r0
/* 803B95CC 003B650C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B95D0 003B6510  4E 80 00 20 */	blr 

.global draw__14TParticle2dMgrFUcUs
draw__14TParticle2dMgrFUcUs:
/* 803B95D4 003B6514  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 803B95D8 003B6518  7C 08 02 A6 */	mflr r0
/* 803B95DC 003B651C  90 01 01 34 */	stw r0, 0x134(r1)
/* 803B95E0 003B6520  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 803B95E4 003B6524  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 803B95E8 003B6528  BF 61 01 0C */	stmw r27, 0x10c(r1)
/* 803B95EC 003B652C  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 803B95F0 003B6530  7C 7B 1B 78 */	mr r27, r3
/* 803B95F4 003B6534  28 00 00 01 */	cmplwi r0, 1
/* 803B95F8 003B6538  7C 9C 23 78 */	mr r28, r4
/* 803B95FC 003B653C  40 82 00 84 */	bne .L_803B9680
/* 803B9600 003B6540  38 61 00 08 */	addi r3, r1, 8
/* 803B9604 003B6544  4B D3 0C 9D */	bl PSMTXIdentity
/* 803B9608 003B6548  48 06 9C 1D */	bl getRenderModeObj__6SystemFv
/* 803B960C 003B654C  A3 E3 00 04 */	lhz r31, 4(r3)
/* 803B9610 003B6550  48 06 9C 15 */	bl getRenderModeObj__6SystemFv
/* 803B9614 003B6554  A3 C3 00 06 */	lhz r30, 6(r3)
/* 803B9618 003B6558  38 61 00 08 */	addi r3, r1, 8
/* 803B961C 003B655C  38 81 00 98 */	addi r4, r1, 0x98
/* 803B9620 003B6560  4B D3 0C AD */	bl PSMTXCopy
/* 803B9624 003B6564  3C 00 43 30 */	lis r0, 0x4330
/* 803B9628 003B6568  C0 A2 13 64 */	lfs f5, lbl_8051F6C4@sda21(r2)
/* 803B962C 003B656C  93 C1 00 FC */	stw r30, 0xfc(r1)
/* 803B9630 003B6570  38 61 00 C8 */	addi r3, r1, 0xc8
/* 803B9634 003B6574  C0 22 13 60 */	lfs f1, lbl_8051F6C0@sda21(r2)
/* 803B9638 003B6578  FC C0 28 90 */	fmr f6, f5
/* 803B963C 003B657C  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 803B9640 003B6580  FC E0 28 90 */	fmr f7, f5
/* 803B9644 003B6584  C8 82 13 70 */	lfd f4, lbl_8051F6D0@sda21(r2)
/* 803B9648 003B6588  FC 60 08 90 */	fmr f3, f1
/* 803B964C 003B658C  C8 01 00 F8 */	lfd f0, 0xf8(r1)
/* 803B9650 003B6590  93 E1 01 04 */	stw r31, 0x104(r1)
/* 803B9654 003B6594  FD 00 28 90 */	fmr f8, f5
/* 803B9658 003B6598  EC 40 20 28 */	fsubs f2, f0, f4
/* 803B965C 003B659C  90 01 01 00 */	stw r0, 0x100(r1)
/* 803B9660 003B65A0  C8 01 01 00 */	lfd f0, 0x100(r1)
/* 803B9664 003B65A4  EC 80 20 28 */	fsubs f4, f0, f4
/* 803B9668 003B65A8  4B D3 14 E9 */	bl C_MTXLightOrtho
/* 803B966C 003B65AC  80 7B 00 30 */	lwz r3, 0x30(r27)
/* 803B9670 003B65B0  38 81 00 98 */	addi r4, r1, 0x98
/* 803B9674 003B65B4  57 85 06 3E */	clrlwi r5, r28, 0x18
/* 803B9678 003B65B8  4B CD 73 D1 */	bl draw__17JPAEmitterManagerFPC11JPADrawInfoUc
/* 803B967C 003B65BC  48 00 00 84 */	b .L_803B9700
.L_803B9680:
/* 803B9680 003B65C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803B9684 003B65C4  83 E3 00 24 */	lwz r31, 0x24(r3)
/* 803B9688 003B65C8  48 06 9B 9D */	bl getRenderModeObj__6SystemFv
/* 803B968C 003B65CC  A3 C3 00 06 */	lhz r30, 6(r3)
/* 803B9690 003B65D0  48 06 9B 95 */	bl getRenderModeObj__6SystemFv
/* 803B9694 003B65D4  A3 A3 00 04 */	lhz r29, 4(r3)
/* 803B9698 003B65D8  38 7F 02 10 */	addi r3, r31, 0x210
/* 803B969C 003B65DC  C3 FF 02 4C */	lfs f31, 0x24c(r31)
/* 803B96A0 003B65E0  38 81 00 38 */	addi r4, r1, 0x38
/* 803B96A4 003B65E4  4B D3 0C 29 */	bl PSMTXCopy
/* 803B96A8 003B65E8  3C 00 43 30 */	lis r0, 0x4330
/* 803B96AC 003B65EC  C0 62 13 64 */	lfs f3, lbl_8051F6C4@sda21(r2)
/* 803B96B0 003B65F0  93 A1 01 04 */	stw r29, 0x104(r1)
/* 803B96B4 003B65F4  FC 20 F8 90 */	fmr f1, f31
/* 803B96B8 003B65F8  C8 E2 13 70 */	lfd f7, lbl_8051F6D0@sda21(r2)
/* 803B96BC 003B65FC  FC A0 18 90 */	fmr f5, f3
/* 803B96C0 003B6600  90 01 01 00 */	stw r0, 0x100(r1)
/* 803B96C4 003B6604  FC C0 18 90 */	fmr f6, f3
/* 803B96C8 003B6608  C0 82 13 68 */	lfs f4, lbl_8051F6C8@sda21(r2)
/* 803B96CC 003B660C  C8 01 01 00 */	lfd f0, 0x100(r1)
/* 803B96D0 003B6610  38 61 00 68 */	addi r3, r1, 0x68
/* 803B96D4 003B6614  93 C1 00 FC */	stw r30, 0xfc(r1)
/* 803B96D8 003B6618  EC 40 38 28 */	fsubs f2, f0, f7
/* 803B96DC 003B661C  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 803B96E0 003B6620  C8 01 00 F8 */	lfd f0, 0xf8(r1)
/* 803B96E4 003B6624  EC 00 38 28 */	fsubs f0, f0, f7
/* 803B96E8 003B6628  EC 42 00 24 */	fdivs f2, f2, f0
/* 803B96EC 003B662C  4B D3 13 99 */	bl C_MTXLightPerspective
/* 803B96F0 003B6630  80 7B 00 30 */	lwz r3, 0x30(r27)
/* 803B96F4 003B6634  38 81 00 38 */	addi r4, r1, 0x38
/* 803B96F8 003B6638  57 85 06 3E */	clrlwi r5, r28, 0x18
/* 803B96FC 003B663C  4B CD 73 4D */	bl draw__17JPAEmitterManagerFPC11JPADrawInfoUc
.L_803B9700:
/* 803B9700 003B6640  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 803B9704 003B6644  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 803B9708 003B6648  BB 61 01 0C */	lmw r27, 0x10c(r1)
/* 803B970C 003B664C  80 01 01 34 */	lwz r0, 0x134(r1)
/* 803B9710 003B6650  7C 08 03 A6 */	mtlr r0
/* 803B9714 003B6654  38 21 01 30 */	addi r1, r1, 0x130
/* 803B9718 003B6658  4E 80 00 20 */	blr 

.global "create__14TParticle2dMgrFUsR10Vector2<f>UcUc"
"create__14TParticle2dMgrFUsR10Vector2<f>UcUc":
/* 803B971C 003B665C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B9720 003B6660  7C 08 02 A6 */	mflr r0
/* 803B9724 003B6664  C0 02 13 60 */	lfs f0, lbl_8051F6C0@sda21(r2)
/* 803B9728 003B6668  39 00 00 00 */	li r8, 0
/* 803B972C 003B666C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B9730 003B6670  39 20 00 00 */	li r9, 0
/* 803B9734 003B6674  C0 45 00 04 */	lfs f2, 4(r5)
/* 803B9738 003B6678  C0 25 00 00 */	lfs f1, 0(r5)
/* 803B973C 003B667C  7C 85 23 78 */	mr r5, r4
/* 803B9740 003B6680  38 81 00 08 */	addi r4, r1, 8
/* 803B9744 003B6684  D0 21 00 08 */	stfs f1, 8(r1)
/* 803B9748 003B6688  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803B974C 003B668C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B9750 003B6690  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B9754 003B6694  4B CD 71 69 */	bl "createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
/* 803B9758 003B6698  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B975C 003B669C  7C 08 03 A6 */	mtlr r0
/* 803B9760 003B66A0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B9764 003B66A4  4E 80 00 20 */	blr 

.global kill__14TParticle2dMgrFP14JPABaseEmitter
kill__14TParticle2dMgrFP14JPABaseEmitter:
/* 803B9768 003B66A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B976C 003B66AC  7C 08 02 A6 */	mflr r0
/* 803B9770 003B66B0  28 04 00 00 */	cmplwi r4, 0
/* 803B9774 003B66B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B9778 003B66B8  41 82 00 0C */	beq .L_803B9784
/* 803B977C 003B66BC  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B9780 003B66C0  4B CD 75 81 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
.L_803B9784:
/* 803B9784 003B66C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9788 003B66C8  7C 08 03 A6 */	mtlr r0
/* 803B978C 003B66CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9790 003B66D0  4E 80 00 20 */	blr 

.global fade__14TParticle2dMgrFP14JPABaseEmitter
fade__14TParticle2dMgrFP14JPABaseEmitter:
/* 803B9794 003B66D4  28 04 00 00 */	cmplwi r4, 0
/* 803B9798 003B66D8  4D 82 00 20 */	beqlr 
/* 803B979C 003B66DC  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 803B97A0 003B66E0  38 00 00 01 */	li r0, 1
/* 803B97A4 003B66E4  60 63 00 01 */	ori r3, r3, 1
/* 803B97A8 003B66E8  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 803B97AC 003B66EC  90 04 00 24 */	stw r0, 0x24(r4)
/* 803B97B0 003B66F0  4E 80 00 20 */	blr 

.global killAll__14TParticle2dMgrFv
killAll__14TParticle2dMgrFv:
/* 803B97B4 003B66F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B97B8 003B66F8  7C 08 02 A6 */	mflr r0
/* 803B97BC 003B66FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B97C0 003B6700  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B97C4 003B6704  4B CD 74 85 */	bl forceDeleteAllEmitter__17JPAEmitterManagerFv
/* 803B97C8 003B6708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B97CC 003B670C  7C 08 03 A6 */	mtlr r0
/* 803B97D0 003B6710  38 21 00 10 */	addi r1, r1, 0x10
/* 803B97D4 003B6714  4E 80 00 20 */	blr 

.global killGroup__14TParticle2dMgrFUc
killGroup__14TParticle2dMgrFUc:
/* 803B97D8 003B6718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B97DC 003B671C  7C 08 02 A6 */	mflr r0
/* 803B97E0 003B6720  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 803B97E4 003B6724  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B97E8 003B6728  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803B97EC 003B672C  4B CD 74 B5 */	bl forceDeleteGroupEmitter__17JPAEmitterManagerFUc
/* 803B97F0 003B6730  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B97F4 003B6734  7C 08 03 A6 */	mtlr r0
/* 803B97F8 003B6738  38 21 00 10 */	addi r1, r1, 0x10
/* 803B97FC 003B673C  4E 80 00 20 */	blr 

__sinit_particle2dMgr_cpp: # static initializer
/* 803B9800 003B6740  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803B9804 003B6744  38 00 FF FF */	li r0, -1
/* 803B9808 003B6748  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803B980C 003B674C  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803B9810 003B6750  90 0D 9A 00 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803B9814 003B6754  D4 03 73 68 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803B9818 003B6758  D0 0D 9A 04 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803B981C 003B675C  D0 03 00 04 */	stfs f0, 4(r3)
/* 803B9820 003B6760  D0 03 00 08 */	stfs f0, 8(r3)
/* 803B9824 003B6764  4E 80 00 20 */	blr 

.global "@24@__dt__14TParticle2dMgrFv"
"@24@__dt__14TParticle2dMgrFv":
/* 803B9828 003B6768  38 63 FF E8 */	addi r3, r3, -24
/* 803B982C 003B676C  4B FF F8 38 */	b __dt__14TParticle2dMgrFv
