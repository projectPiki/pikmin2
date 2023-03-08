.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804796B0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_804796B0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804A6638, local
	.4byte .L_800B7EE4
	.4byte .L_800B7DC8
	.4byte .L_800B7DF8
	.4byte .L_800B7E64
	.4byte .L_800B7E24
	.4byte .L_800B7ED0
	.4byte .L_800B7E94
	.4byte .L_800B7EB4
.endobj lbl_804A6638

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sChannelMax__Q27JAInter9StreamMgr, global
	.4byte 0x00000002
.endobj sChannelMax__Q27JAInter9StreamMgr
.obj decodedBufferBlocks__Q27JAInter9StreamMgr, global
	.4byte 0x00002760
.endobj decodedBufferBlocks__Q27JAInter9StreamMgr

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj flags__Q27JAInter9StreamMgr, global
	.skip 0x2
.endobj flags__Q27JAInter9StreamMgr
.obj prepareSw__Q27JAInter9StreamMgr, global
	.skip 0x1
.endobj prepareSw__Q27JAInter9StreamMgr
.obj prepareFlag__Q27JAInter9StreamMgr, global
	.skip 0x1
.endobj prepareFlag__Q27JAInter9StreamMgr
.obj externalAram__Q27JAInter9StreamMgr, global
	.skip 0x1
.endobj externalAram__Q27JAInter9StreamMgr
.obj finishFlag__Q27JAInter9StreamMgr, global
	.skip 0x1
.endobj finishFlag__Q27JAInter9StreamMgr
.balign 4
.obj streamUpdate__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj streamUpdate__Q27JAInter9StreamMgr
.obj streamList__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj streamList__Q27JAInter9StreamMgr
.obj streamSound__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj streamSound__Q27JAInter9StreamMgr
.obj initOnCodeStrm__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj initOnCodeStrm__Q27JAInter9StreamMgr
.obj streamSystem__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj streamSystem__Q27JAInter9StreamMgr
.obj systemStatus__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj systemStatus__Q27JAInter9StreamMgr
.obj controlStatus__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj controlStatus__Q27JAInter9StreamMgr
.obj aramBufferHeap__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj aramBufferHeap__Q27JAInter9StreamMgr
.obj aramParentHeap__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj aramParentHeap__Q27JAInter9StreamMgr
.obj allocCallback__Q27JAInter9StreamMgr, local
	.skip 0x4
.endobj allocCallback__Q27JAInter9StreamMgr
.obj deallocCallback__Q27JAInter9StreamMgr, local
	.skip 0x4
.endobj deallocCallback__Q27JAInter9StreamMgr
.obj externalAramCallback__Q27JAInter9StreamMgr, local
	.skip 0x4
.endobj externalAramCallback__Q27JAInter9StreamMgr
.obj dataFileNumber__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj dataFileNumber__Q27JAInter9StreamMgr
.obj mgrCallback__Q27JAInter9StreamMgr, global
	.skip 0x4
.endobj mgrCallback__Q27JAInter9StreamMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80517040, local
	.float 1.0
.endobj lbl_80517040
.obj lbl_80517044, local
	.float 0.5
.endobj lbl_80517044
.obj lbl_80517048, local
	.float 0.0
.endobj lbl_80517048

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q27JAInter9StreamMgrFv, global
/* 800B764C 000B458C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800B7650 000B4590  7C 08 02 A6 */	mflr r0
/* 800B7654 000B4594  90 01 00 34 */	stw r0, 0x34(r1)
/* 800B7658 000B4598  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 800B765C 000B459C  88 6D 8C 40 */	lbz r3, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7660 000B45A0  54 60 D7 FF */	rlwinm. r0, r3, 0x1a, 0x1f, 0x1f
/* 800B7664 000B45A4  40 82 02 F0 */	bne .L_800B7954
/* 800B7668 000B45A8  38 A0 00 00 */	li r5, 0
/* 800B766C 000B45AC  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B7670 000B45B0  50 A3 3E 30 */	rlwimi r3, r5, 7, 0x18, 0x18
/* 800B7674 000B45B4  98 6D 8C 40 */	stb r3, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7678 000B45B8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 800B767C 000B45BC  50 A0 36 72 */	rlwimi r0, r5, 6, 0x19, 0x19
/* 800B7680 000B45C0  38 60 02 DC */	li r3, 0x2dc
/* 800B7684 000B45C4  98 0D 8C 40 */	stb r0, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7688 000B45C8  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 800B768C 000B45CC  50 A0 2E B4 */	rlwimi r0, r5, 5, 0x1a, 0x1a
/* 800B7690 000B45D0  38 A0 00 20 */	li r5, 0x20
/* 800B7694 000B45D4  98 0D 8C 40 */	stb r0, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7698 000B45D8  4B F6 C8 A9 */	bl __nw__FUlP7JKRHeapi
/* 800B769C 000B45DC  7C 60 1B 79 */	or. r0, r3, r3
/* 800B76A0 000B45E0  41 82 00 0C */	beq .L_800B76AC
/* 800B76A4 000B45E4  4B FF 19 91 */	bl __ct__13JASAramStreamFv
/* 800B76A8 000B45E8  7C 60 1B 78 */	mr r0, r3
.L_800B76AC:
/* 800B76AC 000B45EC  90 0D 8C 58 */	stw r0, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B76B0 000B45F0  38 60 00 44 */	li r3, 0x44
/* 800B76B4 000B45F4  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B76B8 000B45F8  38 A0 00 20 */	li r5, 0x20
/* 800B76BC 000B45FC  4B F6 C8 85 */	bl __nw__FUlP7JKRHeapi
/* 800B76C0 000B4600  7C 60 1B 79 */	or. r0, r3, r3
/* 800B76C4 000B4604  41 82 00 10 */	beq .L_800B76D4
/* 800B76C8 000B4608  38 80 00 00 */	li r4, 0
/* 800B76CC 000B460C  4B FE F3 D1 */	bl __ct__7JASHeapFP11JASDisposer
/* 800B76D0 000B4610  7C 60 1B 78 */	mr r0, r3
.L_800B76D4:
/* 800B76D4 000B4614  90 0D 8C 64 */	stw r0, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B76D8 000B4618  4B FF 64 15 */	bl getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
/* 800B76DC 000B461C  80 8D 82 10 */	lwz r4, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B76E0 000B4620  4B FF 18 C5 */	bl initSystem__13JASAramStreamFUlUl
/* 800B76E4 000B4624  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800B76E8 000B4628  81 83 00 00 */	lwz r12, 0(r3)
/* 800B76EC 000B462C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800B76F0 000B4630  7D 89 03 A6 */	mtctr r12
/* 800B76F4 000B4634  4E 80 04 21 */	bctrl 
/* 800B76F8 000B4638  3C A0 80 0B */	lis r5, __defctor__Q27JAInter11MoveParaSetFv@ha
/* 800B76FC 000B463C  3C 80 80 0B */	lis r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@ha
/* 800B7700 000B4640  3B 45 E5 64 */	addi r26, r5, __defctor__Q27JAInter11MoveParaSetFv@l
/* 800B7704 000B4644  90 6D 8C 50 */	stw r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7708 000B4648  3B 64 E5 34 */	addi r27, r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@l
/* 800B770C 000B464C  7C 79 1B 78 */	mr r25, r3
/* 800B7710 000B4650  7F 5C D3 78 */	mr r28, r26
/* 800B7714 000B4654  7F 5D D3 78 */	mr r29, r26
/* 800B7718 000B4658  7F 5E D3 78 */	mr r30, r26
/* 800B771C 000B465C  7F 5F D3 78 */	mr r31, r26
/* 800B7720 000B4660  4B FF 64 75 */	bl getParamStreamParameterLines__18JAIGlobalParameterFv
/* 800B7724 000B4664  54 66 25 36 */	rlwinm r6, r3, 4, 0x14, 0x1b
/* 800B7728 000B4668  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B772C 000B466C  54 78 06 3E */	clrlwi r24, r3, 0x18
/* 800B7730 000B4670  38 A0 00 20 */	li r5, 0x20
/* 800B7734 000B4674  38 66 00 10 */	addi r3, r6, 0x10
/* 800B7738 000B4678  4B F6 C9 11 */	bl __nwa__FUlP7JKRHeapi
/* 800B773C 000B467C  7F 44 D3 78 */	mr r4, r26
/* 800B7740 000B4680  7F 07 C3 78 */	mr r7, r24
/* 800B7744 000B4684  38 A0 00 00 */	li r5, 0
/* 800B7748 000B4688  38 C0 00 10 */	li r6, 0x10
/* 800B774C 000B468C  48 00 A2 A5 */	bl __construct_new_array
/* 800B7750 000B4690  90 79 01 A8 */	stw r3, 0x1a8(r25)
/* 800B7754 000B4694  4B FF 64 41 */	bl getParamStreamParameterLines__18JAIGlobalParameterFv
/* 800B7758 000B4698  54 66 25 36 */	rlwinm r6, r3, 4, 0x14, 0x1b
/* 800B775C 000B469C  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B7760 000B46A0  54 78 06 3E */	clrlwi r24, r3, 0x18
/* 800B7764 000B46A4  38 A0 00 20 */	li r5, 0x20
/* 800B7768 000B46A8  38 66 00 10 */	addi r3, r6, 0x10
/* 800B776C 000B46AC  4B F6 C8 DD */	bl __nwa__FUlP7JKRHeapi
/* 800B7770 000B46B0  7F 44 D3 78 */	mr r4, r26
/* 800B7774 000B46B4  7F 07 C3 78 */	mr r7, r24
/* 800B7778 000B46B8  38 A0 00 00 */	li r5, 0
/* 800B777C 000B46BC  38 C0 00 10 */	li r6, 0x10
/* 800B7780 000B46C0  48 00 A2 71 */	bl __construct_new_array
/* 800B7784 000B46C4  90 79 01 A4 */	stw r3, 0x1a4(r25)
/* 800B7788 000B46C8  4B FF 64 0D */	bl getParamStreamParameterLines__18JAIGlobalParameterFv
/* 800B778C 000B46CC  54 66 25 36 */	rlwinm r6, r3, 4, 0x14, 0x1b
/* 800B7790 000B46D0  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B7794 000B46D4  54 78 06 3E */	clrlwi r24, r3, 0x18
/* 800B7798 000B46D8  38 A0 00 20 */	li r5, 0x20
/* 800B779C 000B46DC  38 66 00 10 */	addi r3, r6, 0x10
/* 800B77A0 000B46E0  4B F6 C8 A9 */	bl __nwa__FUlP7JKRHeapi
/* 800B77A4 000B46E4  7F 64 DB 78 */	mr r4, r27
/* 800B77A8 000B46E8  7F 07 C3 78 */	mr r7, r24
/* 800B77AC 000B46EC  38 A0 00 00 */	li r5, 0
/* 800B77B0 000B46F0  38 C0 00 10 */	li r6, 0x10
/* 800B77B4 000B46F4  48 00 A2 3D */	bl __construct_new_array
/* 800B77B8 000B46F8  90 79 01 AC */	stw r3, 0x1ac(r25)
/* 800B77BC 000B46FC  4B FF 63 D9 */	bl getParamStreamParameterLines__18JAIGlobalParameterFv
/* 800B77C0 000B4700  54 66 25 36 */	rlwinm r6, r3, 4, 0x14, 0x1b
/* 800B77C4 000B4704  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B77C8 000B4708  54 78 06 3E */	clrlwi r24, r3, 0x18
/* 800B77CC 000B470C  38 A0 00 20 */	li r5, 0x20
/* 800B77D0 000B4710  38 66 00 10 */	addi r3, r6, 0x10
/* 800B77D4 000B4714  4B F6 C8 75 */	bl __nwa__FUlP7JKRHeapi
/* 800B77D8 000B4718  7F 64 DB 78 */	mr r4, r27
/* 800B77DC 000B471C  7F 07 C3 78 */	mr r7, r24
/* 800B77E0 000B4720  38 A0 00 00 */	li r5, 0
/* 800B77E4 000B4724  38 C0 00 10 */	li r6, 0x10
/* 800B77E8 000B4728  48 00 A2 09 */	bl __construct_new_array
/* 800B77EC 000B472C  90 79 01 B0 */	stw r3, 0x1b0(r25)
/* 800B77F0 000B4730  38 A0 00 20 */	li r5, 0x20
/* 800B77F4 000B4734  83 0D 82 10 */	lwz r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B77F8 000B4738  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B77FC 000B473C  57 03 20 36 */	slwi r3, r24, 4
/* 800B7800 000B4740  38 63 00 10 */	addi r3, r3, 0x10
/* 800B7804 000B4744  4B F6 C8 45 */	bl __nwa__FUlP7JKRHeapi
/* 800B7808 000B4748  7F 84 E3 78 */	mr r4, r28
/* 800B780C 000B474C  7F 07 C3 78 */	mr r7, r24
/* 800B7810 000B4750  38 A0 00 00 */	li r5, 0
/* 800B7814 000B4754  38 C0 00 10 */	li r6, 0x10
/* 800B7818 000B4758  48 00 A1 D9 */	bl __construct_new_array
/* 800B781C 000B475C  90 79 01 C8 */	stw r3, 0x1c8(r25)
/* 800B7820 000B4760  38 A0 00 20 */	li r5, 0x20
/* 800B7824 000B4764  83 0D 82 10 */	lwz r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7828 000B4768  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B782C 000B476C  57 03 20 36 */	slwi r3, r24, 4
/* 800B7830 000B4770  38 63 00 10 */	addi r3, r3, 0x10
/* 800B7834 000B4774  4B F6 C8 15 */	bl __nwa__FUlP7JKRHeapi
/* 800B7838 000B4778  7F A4 EB 78 */	mr r4, r29
/* 800B783C 000B477C  7F 07 C3 78 */	mr r7, r24
/* 800B7840 000B4780  38 A0 00 00 */	li r5, 0
/* 800B7844 000B4784  38 C0 00 10 */	li r6, 0x10
/* 800B7848 000B4788  48 00 A1 A9 */	bl __construct_new_array
/* 800B784C 000B478C  90 79 01 CC */	stw r3, 0x1cc(r25)
/* 800B7850 000B4790  38 A0 00 20 */	li r5, 0x20
/* 800B7854 000B4794  83 0D 82 10 */	lwz r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7858 000B4798  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B785C 000B479C  57 03 20 36 */	slwi r3, r24, 4
/* 800B7860 000B47A0  38 63 00 10 */	addi r3, r3, 0x10
/* 800B7864 000B47A4  4B F6 C7 E5 */	bl __nwa__FUlP7JKRHeapi
/* 800B7868 000B47A8  7F C4 F3 78 */	mr r4, r30
/* 800B786C 000B47AC  7F 07 C3 78 */	mr r7, r24
/* 800B7870 000B47B0  38 A0 00 00 */	li r5, 0
/* 800B7874 000B47B4  38 C0 00 10 */	li r6, 0x10
/* 800B7878 000B47B8  48 00 A1 79 */	bl __construct_new_array
/* 800B787C 000B47BC  90 79 01 D0 */	stw r3, 0x1d0(r25)
/* 800B7880 000B47C0  38 A0 00 20 */	li r5, 0x20
/* 800B7884 000B47C4  83 0D 82 10 */	lwz r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7888 000B47C8  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B788C 000B47CC  57 03 20 36 */	slwi r3, r24, 4
/* 800B7890 000B47D0  38 63 00 10 */	addi r3, r3, 0x10
/* 800B7894 000B47D4  4B F6 C7 B5 */	bl __nwa__FUlP7JKRHeapi
/* 800B7898 000B47D8  7F E4 FB 78 */	mr r4, r31
/* 800B789C 000B47DC  7F 07 C3 78 */	mr r7, r24
/* 800B78A0 000B47E0  38 A0 00 00 */	li r5, 0
/* 800B78A4 000B47E4  38 C0 00 10 */	li r6, 0x10
/* 800B78A8 000B47E8  48 00 A1 49 */	bl __construct_new_array
/* 800B78AC 000B47EC  90 79 01 D4 */	stw r3, 0x1d4(r25)
/* 800B78B0 000B47F0  38 60 00 20 */	li r3, 0x20
/* 800B78B4 000B47F4  38 A0 00 20 */	li r5, 0x20
/* 800B78B8 000B47F8  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B78BC 000B47FC  4B F6 C6 85 */	bl __nw__FUlP7JKRHeapi
/* 800B78C0 000B4800  28 03 00 00 */	cmplwi r3, 0
/* 800B78C4 000B4804  41 82 00 10 */	beq .L_800B78D4
/* 800B78C8 000B4808  38 00 00 00 */	li r0, 0
/* 800B78CC 000B480C  90 03 00 18 */	stw r0, 0x18(r3)
/* 800B78D0 000B4810  90 03 00 1C */	stw r0, 0x1c(r3)
.L_800B78D4:
/* 800B78D4 000B4814  90 6D 8C 48 */	stw r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B78D8 000B4818  38 00 00 00 */	li r0, 0
/* 800B78DC 000B481C  C0 22 8C E0 */	lfs f1, lbl_80517040@sda21(r2)
/* 800B78E0 000B4820  98 03 00 00 */	stb r0, 0(r3)
/* 800B78E4 000B4824  C0 02 8C E4 */	lfs f0, lbl_80517044@sda21(r2)
/* 800B78E8 000B4828  98 03 00 01 */	stb r0, 1(r3)
/* 800B78EC 000B482C  D0 23 00 04 */	stfs f1, 4(r3)
/* 800B78F0 000B4830  D0 23 00 08 */	stfs f1, 8(r3)
/* 800B78F4 000B4834  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 800B78F8 000B4838  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 800B78FC 000B483C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 800B7900 000B4840  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800B7904 000B4844  88 0D 8C 44 */	lbz r0, externalAram__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7908 000B4848  28 00 00 00 */	cmplwi r0, 0
/* 800B790C 000B484C  40 82 00 30 */	bne .L_800B793C
/* 800B7910 000B4850  38 60 00 0A */	li r3, 0xa
/* 800B7914 000B4854  48 00 15 B1 */	bl getDecodedBufferSize__Q27JAInter9StreamMgrFUl
/* 800B7918 000B4858  38 60 00 0A */	li r3, 0xa
/* 800B791C 000B485C  48 00 15 A9 */	bl getDecodedBufferSize__Q27JAInter9StreamMgrFUl
/* 800B7920 000B4860  7C 7F 1B 78 */	mr r31, r3
/* 800B7924 000B4864  4B FE FB 25 */	bl getAramHeap__9JASKernelFv
/* 800B7928 000B4868  7C 64 1B 78 */	mr r4, r3
/* 800B792C 000B486C  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7930 000B4870  7F E5 FB 78 */	mr r5, r31
/* 800B7934 000B4874  4B FE F1 DD */	bl alloc__7JASHeapFP7JASHeapUl
/* 800B7938 000B4878  48 00 00 1C */	b .L_800B7954
.L_800B793C:
/* 800B793C 000B487C  81 8D 8C 74 */	lwz r12, externalAramCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7940 000B4880  28 0C 00 00 */	cmplwi r12, 0
/* 800B7944 000B4884  41 82 00 10 */	beq .L_800B7954
/* 800B7948 000B4888  7D 89 03 A6 */	mtctr r12
/* 800B794C 000B488C  4E 80 04 21 */	bctrl 
/* 800B7950 000B4890  90 6D 8C 68 */	stw r3, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
.L_800B7954:
/* 800B7954 000B4894  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 800B7958 000B4898  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800B795C 000B489C  7C 08 03 A6 */	mtlr r0
/* 800B7960 000B48A0  38 21 00 30 */	addi r1, r1, 0x30
/* 800B7964 000B48A4  4E 80 00 20 */	blr 
.endfn init__Q27JAInter9StreamMgrFv

.fn storeStreamBuffer__Q27JAInter9StreamMgrFPP9JAIStreamPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo, global
/* 800B7968 000B48A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800B796C 000B48AC  7C 08 02 A6 */	mflr r0
/* 800B7970 000B48B0  90 01 00 64 */	stw r0, 0x64(r1)
/* 800B7974 000B48B4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 800B7978 000B48B8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 800B797C 000B48BC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 800B7980 000B48C0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 800B7984 000B48C4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 800B7988 000B48C8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 800B798C 000B48CC  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 800B7990 000B48D0  7C 78 1B 79 */	or. r24, r3, r3
/* 800B7994 000B48D4  7C 99 23 78 */	mr r25, r4
/* 800B7998 000B48D8  7C BA 2B 78 */	mr r26, r5
/* 800B799C 000B48DC  7C DB 33 78 */	mr r27, r6
/* 800B79A0 000B48E0  7C FC 3B 78 */	mr r28, r7
/* 800B79A4 000B48E4  7D 1D 43 78 */	mr r29, r8
/* 800B79A8 000B48E8  41 82 00 24 */	beq .L_800B79CC
/* 800B79AC 000B48EC  80 78 00 00 */	lwz r3, 0(r24)
/* 800B79B0 000B48F0  28 03 00 00 */	cmplwi r3, 0
/* 800B79B4 000B48F4  41 82 00 18 */	beq .L_800B79CC
/* 800B79B8 000B48F8  7F 44 D3 78 */	mr r4, r26
/* 800B79BC 000B48FC  7F A5 EB 78 */	mr r5, r29
/* 800B79C0 000B4900  4B FF DB 51 */	bl checkSoundHandle__8JAISoundFUlPv
/* 800B79C4 000B4904  28 03 00 00 */	cmplwi r3, 0
/* 800B79C8 000B4908  40 82 02 CC */	bne .L_800B7C94
.L_800B79CC:
/* 800B79CC 000B490C  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B79D0 000B4910  88 03 00 15 */	lbz r0, 0x15(r3)
/* 800B79D4 000B4914  28 00 00 00 */	cmplwi r0, 0
/* 800B79D8 000B4918  41 82 00 38 */	beq .L_800B7A10
/* 800B79DC 000B491C  4B FF C1 89 */	bl getInfoPriority__8JAISoundFv
/* 800B79E0 000B4920  88 1D 00 04 */	lbz r0, 4(r29)
/* 800B79E4 000B4924  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 800B79E8 000B4928  7C 03 00 40 */	cmplw r3, r0
/* 800B79EC 000B492C  41 81 02 A8 */	bgt .L_800B7C94
/* 800B79F0 000B4930  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B79F4 000B4934  38 80 00 00 */	li r4, 0
/* 800B79F8 000B4938  81 83 00 10 */	lwz r12, 0x10(r3)
/* 800B79FC 000B493C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800B7A00 000B4940  7D 89 03 A6 */	mtctr r12
/* 800B7A04 000B4944  4E 80 04 21 */	bctrl 
/* 800B7A08 000B4948  48 00 00 08 */	b .L_800B7A10
/* 800B7A0C 000B494C  48 00 02 88 */	b .L_800B7C94
.L_800B7A10:
/* 800B7A10 000B4950  83 CD 8C 50 */	lwz r30, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7A14 000B4954  3A E0 00 00 */	li r23, 0
/* 800B7A18 000B4958  C3 E2 8C E0 */	lfs f31, lbl_80517040@sda21(r2)
/* 800B7A1C 000B495C  7E FF BB 78 */	mr r31, r23
/* 800B7A20 000B4960  9A FE 00 48 */	stb r23, 0x48(r30)
/* 800B7A24 000B4964  C3 C2 8C E4 */	lfs f30, lbl_80517044@sda21(r2)
/* 800B7A28 000B4968  92 FE 00 4C */	stw r23, 0x4c(r30)
/* 800B7A2C 000B496C  C3 A2 8C E8 */	lfs f29, lbl_80517048@sda21(r2)
/* 800B7A30 000B4970  92 FE 00 50 */	stw r23, 0x50(r30)
/* 800B7A34 000B4974  92 FE 00 54 */	stw r23, 0x54(r30)
/* 800B7A38 000B4978  92 FE 00 58 */	stw r23, 0x58(r30)
/* 800B7A3C 000B497C  92 FE 00 5C */	stw r23, 0x5c(r30)
/* 800B7A40 000B4980  92 FE 00 60 */	stw r23, 0x60(r30)
/* 800B7A44 000B4984  D3 FE 00 68 */	stfs f31, 0x68(r30)
/* 800B7A48 000B4988  D3 FE 00 64 */	stfs f31, 0x64(r30)
/* 800B7A4C 000B498C  92 FE 00 70 */	stw r23, 0x70(r30)
/* 800B7A50 000B4990  D3 FE 00 78 */	stfs f31, 0x78(r30)
/* 800B7A54 000B4994  D3 FE 00 74 */	stfs f31, 0x74(r30)
/* 800B7A58 000B4998  92 FE 00 80 */	stw r23, 0x80(r30)
/* 800B7A5C 000B499C  D3 FE 00 88 */	stfs f31, 0x88(r30)
/* 800B7A60 000B49A0  D3 FE 00 84 */	stfs f31, 0x84(r30)
/* 800B7A64 000B49A4  92 FE 00 90 */	stw r23, 0x90(r30)
/* 800B7A68 000B49A8  D3 FE 00 98 */	stfs f31, 0x98(r30)
/* 800B7A6C 000B49AC  D3 FE 00 94 */	stfs f31, 0x94(r30)
/* 800B7A70 000B49B0  92 FE 00 A0 */	stw r23, 0xa0(r30)
/* 800B7A74 000B49B4  D3 FE 00 A8 */	stfs f31, 0xa8(r30)
/* 800B7A78 000B49B8  D3 FE 00 A4 */	stfs f31, 0xa4(r30)
/* 800B7A7C 000B49BC  92 FE 00 B0 */	stw r23, 0xb0(r30)
/* 800B7A80 000B49C0  D3 FE 00 B8 */	stfs f31, 0xb8(r30)
/* 800B7A84 000B49C4  D3 FE 00 B4 */	stfs f31, 0xb4(r30)
/* 800B7A88 000B49C8  92 FE 00 C0 */	stw r23, 0xc0(r30)
/* 800B7A8C 000B49CC  D3 FE 00 C8 */	stfs f31, 0xc8(r30)
/* 800B7A90 000B49D0  D3 FE 00 C4 */	stfs f31, 0xc4(r30)
/* 800B7A94 000B49D4  92 FE 00 D0 */	stw r23, 0xd0(r30)
/* 800B7A98 000B49D8  D3 FE 00 D8 */	stfs f31, 0xd8(r30)
/* 800B7A9C 000B49DC  D3 FE 00 D4 */	stfs f31, 0xd4(r30)
/* 800B7AA0 000B49E0  92 FE 00 E0 */	stw r23, 0xe0(r30)
/* 800B7AA4 000B49E4  D3 FE 00 E8 */	stfs f31, 0xe8(r30)
/* 800B7AA8 000B49E8  D3 FE 00 E4 */	stfs f31, 0xe4(r30)
/* 800B7AAC 000B49EC  92 FE 00 F0 */	stw r23, 0xf0(r30)
/* 800B7AB0 000B49F0  D3 FE 00 F8 */	stfs f31, 0xf8(r30)
/* 800B7AB4 000B49F4  D3 FE 00 F4 */	stfs f31, 0xf4(r30)
/* 800B7AB8 000B49F8  92 FE 01 00 */	stw r23, 0x100(r30)
/* 800B7ABC 000B49FC  D3 FE 01 08 */	stfs f31, 0x108(r30)
/* 800B7AC0 000B4A00  D3 FE 01 04 */	stfs f31, 0x104(r30)
/* 800B7AC4 000B4A04  92 FE 01 10 */	stw r23, 0x110(r30)
/* 800B7AC8 000B4A08  D3 FE 01 18 */	stfs f31, 0x118(r30)
/* 800B7ACC 000B4A0C  D3 FE 01 14 */	stfs f31, 0x114(r30)
/* 800B7AD0 000B4A10  92 FE 01 20 */	stw r23, 0x120(r30)
/* 800B7AD4 000B4A14  D3 FE 01 28 */	stfs f31, 0x128(r30)
/* 800B7AD8 000B4A18  D3 FE 01 24 */	stfs f31, 0x124(r30)
/* 800B7ADC 000B4A1C  92 FE 01 30 */	stw r23, 0x130(r30)
/* 800B7AE0 000B4A20  D3 FE 01 38 */	stfs f31, 0x138(r30)
/* 800B7AE4 000B4A24  D3 FE 01 34 */	stfs f31, 0x134(r30)
/* 800B7AE8 000B4A28  92 FE 01 40 */	stw r23, 0x140(r30)
/* 800B7AEC 000B4A2C  D3 FE 01 48 */	stfs f31, 0x148(r30)
/* 800B7AF0 000B4A30  D3 FE 01 44 */	stfs f31, 0x144(r30)
/* 800B7AF4 000B4A34  92 FE 01 50 */	stw r23, 0x150(r30)
/* 800B7AF8 000B4A38  D3 FE 01 58 */	stfs f31, 0x158(r30)
/* 800B7AFC 000B4A3C  D3 FE 01 54 */	stfs f31, 0x154(r30)
/* 800B7B00 000B4A40  92 FE 01 60 */	stw r23, 0x160(r30)
/* 800B7B04 000B4A44  D3 FE 01 68 */	stfs f31, 0x168(r30)
/* 800B7B08 000B4A48  D3 FE 01 64 */	stfs f31, 0x164(r30)
/* 800B7B0C 000B4A4C  92 FE 01 70 */	stw r23, 0x170(r30)
/* 800B7B10 000B4A50  D3 FE 01 78 */	stfs f31, 0x178(r30)
/* 800B7B14 000B4A54  D3 FE 01 74 */	stfs f31, 0x174(r30)
/* 800B7B18 000B4A58  92 FE 01 80 */	stw r23, 0x180(r30)
/* 800B7B1C 000B4A5C  D3 FE 01 88 */	stfs f31, 0x188(r30)
/* 800B7B20 000B4A60  D3 FE 01 84 */	stfs f31, 0x184(r30)
/* 800B7B24 000B4A64  92 FE 01 90 */	stw r23, 0x190(r30)
/* 800B7B28 000B4A68  D3 FE 01 98 */	stfs f31, 0x198(r30)
/* 800B7B2C 000B4A6C  D3 FE 01 94 */	stfs f31, 0x194(r30)
/* 800B7B30 000B4A70  92 FE 01 A0 */	stw r23, 0x1a0(r30)
/* 800B7B34 000B4A74  48 00 00 60 */	b .L_800B7B94
.L_800B7B38:
/* 800B7B38 000B4A78  80 1E 01 A4 */	lwz r0, 0x1a4(r30)
/* 800B7B3C 000B4A7C  38 60 00 00 */	li r3, 0
/* 800B7B40 000B4A80  3A F7 00 01 */	addi r23, r23, 1
/* 800B7B44 000B4A84  7C 80 FA 14 */	add r4, r0, r31
/* 800B7B48 000B4A88  D3 E4 00 04 */	stfs f31, 4(r4)
/* 800B7B4C 000B4A8C  D3 E4 00 00 */	stfs f31, 0(r4)
/* 800B7B50 000B4A90  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7B54 000B4A94  80 1E 01 A8 */	lwz r0, 0x1a8(r30)
/* 800B7B58 000B4A98  7C 80 FA 14 */	add r4, r0, r31
/* 800B7B5C 000B4A9C  D3 C4 00 04 */	stfs f30, 4(r4)
/* 800B7B60 000B4AA0  D3 C4 00 00 */	stfs f30, 0(r4)
/* 800B7B64 000B4AA4  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7B68 000B4AA8  80 1E 01 AC */	lwz r0, 0x1ac(r30)
/* 800B7B6C 000B4AAC  7C 80 FA 14 */	add r4, r0, r31
/* 800B7B70 000B4AB0  D3 A4 00 04 */	stfs f29, 4(r4)
/* 800B7B74 000B4AB4  D3 A4 00 00 */	stfs f29, 0(r4)
/* 800B7B78 000B4AB8  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7B7C 000B4ABC  80 1E 01 B0 */	lwz r0, 0x1b0(r30)
/* 800B7B80 000B4AC0  7C 80 FA 14 */	add r4, r0, r31
/* 800B7B84 000B4AC4  3B FF 00 10 */	addi r31, r31, 0x10
/* 800B7B88 000B4AC8  D3 A4 00 04 */	stfs f29, 4(r4)
/* 800B7B8C 000B4ACC  D3 A4 00 00 */	stfs f29, 0(r4)
/* 800B7B90 000B4AD0  90 64 00 0C */	stw r3, 0xc(r4)
.L_800B7B94:
/* 800B7B94 000B4AD4  4B FF 60 01 */	bl getParamStreamParameterLines__18JAIGlobalParameterFv
/* 800B7B98 000B4AD8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 800B7B9C 000B4ADC  7C 17 00 40 */	cmplw r23, r0
/* 800B7BA0 000B4AE0  41 80 FF 98 */	blt .L_800B7B38
/* 800B7BA4 000B4AE4  3A E0 00 00 */	li r23, 0
/* 800B7BA8 000B4AE8  C3 A2 8C E0 */	lfs f29, lbl_80517040@sda21(r2)
/* 800B7BAC 000B4AEC  C3 C2 8C E4 */	lfs f30, lbl_80517044@sda21(r2)
/* 800B7BB0 000B4AF0  7E FF BB 78 */	mr r31, r23
/* 800B7BB4 000B4AF4  C3 E2 8C E8 */	lfs f31, lbl_80517048@sda21(r2)
/* 800B7BB8 000B4AF8  48 00 00 60 */	b .L_800B7C18
.L_800B7BBC:
/* 800B7BBC 000B4AFC  80 1E 01 C8 */	lwz r0, 0x1c8(r30)
/* 800B7BC0 000B4B00  38 60 00 00 */	li r3, 0
/* 800B7BC4 000B4B04  3A F7 00 01 */	addi r23, r23, 1
/* 800B7BC8 000B4B08  7C 80 FA 14 */	add r4, r0, r31
/* 800B7BCC 000B4B0C  D3 A4 00 04 */	stfs f29, 4(r4)
/* 800B7BD0 000B4B10  D3 A4 00 00 */	stfs f29, 0(r4)
/* 800B7BD4 000B4B14  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7BD8 000B4B18  80 1E 01 CC */	lwz r0, 0x1cc(r30)
/* 800B7BDC 000B4B1C  7C 80 FA 14 */	add r4, r0, r31
/* 800B7BE0 000B4B20  D3 C4 00 04 */	stfs f30, 4(r4)
/* 800B7BE4 000B4B24  D3 C4 00 00 */	stfs f30, 0(r4)
/* 800B7BE8 000B4B28  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7BEC 000B4B2C  80 1E 01 D0 */	lwz r0, 0x1d0(r30)
/* 800B7BF0 000B4B30  7C 80 FA 14 */	add r4, r0, r31
/* 800B7BF4 000B4B34  D3 E4 00 04 */	stfs f31, 4(r4)
/* 800B7BF8 000B4B38  D3 E4 00 00 */	stfs f31, 0(r4)
/* 800B7BFC 000B4B3C  90 64 00 0C */	stw r3, 0xc(r4)
/* 800B7C00 000B4B40  80 1E 01 D4 */	lwz r0, 0x1d4(r30)
/* 800B7C04 000B4B44  7C 80 FA 14 */	add r4, r0, r31
/* 800B7C08 000B4B48  3B FF 00 10 */	addi r31, r31, 0x10
/* 800B7C0C 000B4B4C  D3 E4 00 04 */	stfs f31, 4(r4)
/* 800B7C10 000B4B50  D3 E4 00 00 */	stfs f31, 0(r4)
/* 800B7C14 000B4B54  90 64 00 0C */	stw r3, 0xc(r4)
.L_800B7C18:
/* 800B7C18 000B4B58  48 00 12 C5 */	bl getChannelMax__Q27JAInter9StreamMgrFv
/* 800B7C1C 000B4B5C  7C 17 18 40 */	cmplw r23, r3
/* 800B7C20 000B4B60  41 80 FF 9C */	blt .L_800B7BBC
/* 800B7C24 000B4B64  39 60 00 00 */	li r11, 0
/* 800B7C28 000B4B68  39 40 00 01 */	li r10, 1
/* 800B7C2C 000B4B6C  91 7E 01 B8 */	stw r11, 0x1b8(r30)
/* 800B7C30 000B4B70  38 00 00 0A */	li r0, 0xa
/* 800B7C34 000B4B74  7F C3 F3 78 */	mr r3, r30
/* 800B7C38 000B4B78  7F 04 C3 78 */	mr r4, r24
/* 800B7C3C 000B4B7C  91 7E 01 BC */	stw r11, 0x1bc(r30)
/* 800B7C40 000B4B80  7F 25 CB 78 */	mr r5, r25
/* 800B7C44 000B4B84  7F 46 D3 78 */	mr r6, r26
/* 800B7C48 000B4B88  7F 67 DB 78 */	mr r7, r27
/* 800B7C4C 000B4B8C  91 7E 01 C0 */	stw r11, 0x1c0(r30)
/* 800B7C50 000B4B90  7F 88 E3 78 */	mr r8, r28
/* 800B7C54 000B4B94  7F A9 EB 78 */	mr r9, r29
/* 800B7C58 000B4B98  91 7E 01 C4 */	stw r11, 0x1c4(r30)
/* 800B7C5C 000B4B9C  99 5E 00 15 */	stb r10, 0x15(r30)
/* 800B7C60 000B4BA0  98 1E 00 16 */	stb r0, 0x16(r30)
/* 800B7C64 000B4BA4  81 4D 8C 48 */	lwz r10, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7C68 000B4BA8  99 6A 00 02 */	stb r11, 2(r10)
/* 800B7C6C 000B4BAC  80 0D 8C 48 */	lwz r0, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7C70 000B4BB0  81 4D 8C 50 */	lwz r10, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7C74 000B4BB4  90 0A 01 B4 */	stw r0, 0x1b4(r10)
/* 800B7C78 000B4BB8  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 800B7C7C 000B4BBC  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 800B7C80 000B4BC0  7D 89 03 A6 */	mtctr r12
/* 800B7C84 000B4BC4  4E 80 04 21 */	bctrl 
/* 800B7C88 000B4BC8  28 18 00 00 */	cmplwi r24, 0
/* 800B7C8C 000B4BCC  41 82 00 08 */	beq .L_800B7C94
/* 800B7C90 000B4BD0  93 D8 00 00 */	stw r30, 0(r24)
.L_800B7C94:
/* 800B7C94 000B4BD4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 800B7C98 000B4BD8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 800B7C9C 000B4BDC  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 800B7CA0 000B4BE0  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 800B7CA4 000B4BE4  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 800B7CA8 000B4BE8  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 800B7CAC 000B4BEC  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 800B7CB0 000B4BF0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800B7CB4 000B4BF4  7C 08 03 A6 */	mtlr r0
/* 800B7CB8 000B4BF8  38 21 00 60 */	addi r1, r1, 0x60
/* 800B7CBC 000B4BFC  4E 80 00 20 */	blr 
.endfn storeStreamBuffer__Q27JAInter9StreamMgrFPP9JAIStreamPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo

.fn releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl, global
/* 800B7CC0 000B4C00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B7CC4 000B4C04  7C 08 02 A6 */	mflr r0
/* 800B7CC8 000B4C08  28 04 00 00 */	cmplwi r4, 0
/* 800B7CCC 000B4C0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B7CD0 000B4C10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800B7CD4 000B4C14  7C 7F 1B 78 */	mr r31, r3
/* 800B7CD8 000B4C18  41 82 00 10 */	beq .L_800B7CE8
/* 800B7CDC 000B4C1C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 800B7CE0 000B4C20  28 00 00 04 */	cmplwi r0, 4
/* 800B7CE4 000B4C24  40 80 00 34 */	bge .L_800B7D18
.L_800B7CE8:
/* 800B7CE8 000B4C28  48 00 10 9D */	bl stopDirect__Q27JAInter9StreamMgrFv
/* 800B7CEC 000B4C2C  38 00 00 00 */	li r0, 0
/* 800B7CF0 000B4C30  7F E3 FB 78 */	mr r3, r31
/* 800B7CF4 000B4C34  98 1F 00 15 */	stb r0, 0x15(r31)
/* 800B7CF8 000B4C38  80 9F 01 B4 */	lwz r4, 0x1b4(r31)
/* 800B7CFC 000B4C3C  90 04 00 1C */	stw r0, 0x1c(r4)
/* 800B7D00 000B4C40  80 9F 01 B4 */	lwz r4, 0x1b4(r31)
/* 800B7D04 000B4C44  90 04 00 18 */	stw r0, 0x18(r4)
/* 800B7D08 000B4C48  4B FF BE 69 */	bl clearMainSoundPPointer__8JAISoundFv
/* 800B7D0C 000B4C4C  38 00 00 00 */	li r0, 0
/* 800B7D10 000B4C50  90 0D 8C 7C */	stw r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7D14 000B4C54  48 00 00 20 */	b .L_800B7D34
.L_800B7D18:
/* 800B7D18 000B4C58  80 7F 01 B4 */	lwz r3, 0x1b4(r31)
/* 800B7D1C 000B4C5C  28 03 00 00 */	cmplwi r3, 0
/* 800B7D20 000B4C60  41 82 00 14 */	beq .L_800B7D34
/* 800B7D24 000B4C64  80 03 00 18 */	lwz r0, 0x18(r3)
/* 800B7D28 000B4C68  60 00 00 02 */	ori r0, r0, 2
/* 800B7D2C 000B4C6C  90 03 00 18 */	stw r0, 0x18(r3)
/* 800B7D30 000B4C70  90 9F 00 28 */	stw r4, 0x28(r31)
.L_800B7D34:
/* 800B7D34 000B4C74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B7D38 000B4C78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800B7D3C 000B4C7C  7C 08 03 A6 */	mtlr r0
/* 800B7D40 000B4C80  38 21 00 10 */	addi r1, r1, 0x10
/* 800B7D44 000B4C84  4E 80 00 20 */	blr 
.endfn releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl

.fn checkSystem__Q27JAInter9StreamMgrFv, global
/* 800B7D48 000B4C88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B7D4C 000B4C8C  7C 08 02 A6 */	mflr r0
/* 800B7D50 000B4C90  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B7D54 000B4C94  88 0D 8C 45 */	lbz r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7D58 000B4C98  28 00 00 02 */	cmplwi r0, 2
/* 800B7D5C 000B4C9C  40 82 00 48 */	bne .L_800B7DA4
/* 800B7D60 000B4CA0  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7D64 000B4CA4  28 00 00 05 */	cmplwi r0, 5
/* 800B7D68 000B4CA8  40 82 00 24 */	bne .L_800B7D8C
/* 800B7D6C 000B4CAC  81 8D 8C 7C */	lwz r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7D70 000B4CB0  28 0C 00 00 */	cmplwi r12, 0
/* 800B7D74 000B4CB4  41 82 00 0C */	beq .L_800B7D80
/* 800B7D78 000B4CB8  7D 89 03 A6 */	mtctr r12
/* 800B7D7C 000B4CBC  4E 80 04 21 */	bctrl 
.L_800B7D80:
/* 800B7D80 000B4CC0  38 00 00 00 */	li r0, 0
/* 800B7D84 000B4CC4  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7D88 000B4CC8  48 00 00 14 */	b .L_800B7D9C
.L_800B7D8C:
/* 800B7D8C 000B4CCC  28 00 00 06 */	cmplwi r0, 6
/* 800B7D90 000B4CD0  40 82 00 0C */	bne .L_800B7D9C
/* 800B7D94 000B4CD4  38 00 00 00 */	li r0, 0
/* 800B7D98 000B4CD8  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
.L_800B7D9C:
/* 800B7D9C 000B4CDC  38 00 00 00 */	li r0, 0
/* 800B7DA0 000B4CE0  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
.L_800B7DA4:
/* 800B7DA4 000B4CE4  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DA8 000B4CE8  28 00 00 07 */	cmplwi r0, 7
/* 800B7DAC 000B4CEC  41 81 01 38 */	bgt .L_800B7EE4
/* 800B7DB0 000B4CF0  3C 60 80 4A */	lis r3, lbl_804A6638@ha
/* 800B7DB4 000B4CF4  54 00 10 3A */	slwi r0, r0, 2
/* 800B7DB8 000B4CF8  38 63 66 38 */	addi r3, r3, lbl_804A6638@l
/* 800B7DBC 000B4CFC  7C 03 00 2E */	lwzx r0, r3, r0
/* 800B7DC0 000B4D00  7C 09 03 A6 */	mtctr r0
/* 800B7DC4 000B4D04  4E 80 04 20 */	bctr 
.L_800B7DC8:
/* 800B7DC8 000B4D08  88 0D 8C 45 */	lbz r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DCC 000B4D0C  28 00 00 00 */	cmplwi r0, 0
/* 800B7DD0 000B4D10  40 82 01 14 */	bne .L_800B7EE4
/* 800B7DD4 000B4D14  80 0D 8C 78 */	lwz r0, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DD8 000B4D18  2C 00 00 00 */	cmpwi r0, 0
/* 800B7DDC 000B4D1C  40 82 00 10 */	bne .L_800B7DEC
/* 800B7DE0 000B4D20  38 00 00 00 */	li r0, 0
/* 800B7DE4 000B4D24  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DE8 000B4D28  48 00 00 FC */	b .L_800B7EE4
.L_800B7DEC:
/* 800B7DEC 000B4D2C  38 00 00 02 */	li r0, 2
/* 800B7DF0 000B4D30  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DF4 000B4D34  48 00 00 F0 */	b .L_800B7EE4
.L_800B7DF8:
/* 800B7DF8 000B4D38  80 6D 8C 78 */	lwz r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7DFC 000B4D3C  2C 03 00 00 */	cmpwi r3, 0
/* 800B7E00 000B4D40  40 82 00 10 */	bne .L_800B7E10
/* 800B7E04 000B4D44  38 00 00 00 */	li r0, 0
/* 800B7E08 000B4D48  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E0C 000B4D4C  48 00 00 D8 */	b .L_800B7EE4
.L_800B7E10:
/* 800B7E10 000B4D50  48 00 0D 15 */	bl prepareSystem__Q27JAInter9StreamMgrFl
/* 800B7E14 000B4D54  48 00 0F AD */	bl initChannel__Q27JAInter9StreamMgrFv
/* 800B7E18 000B4D58  38 00 00 04 */	li r0, 4
/* 800B7E1C 000B4D5C  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E20 000B4D60  48 00 00 C4 */	b .L_800B7EE4
.L_800B7E24:
/* 800B7E24 000B4D64  88 0D 8C 43 */	lbz r0, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E28 000B4D68  28 00 00 01 */	cmplwi r0, 1
/* 800B7E2C 000B4D6C  40 82 00 2C */	bne .L_800B7E58
/* 800B7E30 000B4D70  81 8D 8C 7C */	lwz r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E34 000B4D74  28 0C 00 00 */	cmplwi r12, 0
/* 800B7E38 000B4D78  41 82 00 0C */	beq .L_800B7E44
/* 800B7E3C 000B4D7C  7D 89 03 A6 */	mtctr r12
/* 800B7E40 000B4D80  4E 80 04 21 */	bctrl 
.L_800B7E44:
/* 800B7E44 000B4D84  88 0D 8C 42 */	lbz r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E48 000B4D88  28 00 00 00 */	cmplwi r0, 0
/* 800B7E4C 000B4D8C  40 82 00 98 */	bne .L_800B7EE4
/* 800B7E50 000B4D90  38 00 00 03 */	li r0, 3
/* 800B7E54 000B4D94  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
.L_800B7E58:
/* 800B7E58 000B4D98  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E5C 000B4D9C  28 00 00 03 */	cmplwi r0, 3
/* 800B7E60 000B4DA0  40 82 00 84 */	bne .L_800B7EE4
.L_800B7E64:
/* 800B7E64 000B4DA4  81 8D 8C 7C */	lwz r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E68 000B4DA8  28 0C 00 00 */	cmplwi r12, 0
/* 800B7E6C 000B4DAC  41 82 00 0C */	beq .L_800B7E78
/* 800B7E70 000B4DB0  7D 89 03 A6 */	mtctr r12
/* 800B7E74 000B4DB4  4E 80 04 21 */	bctrl 
.L_800B7E78:
/* 800B7E78 000B4DB8  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E7C 000B4DBC  4B FF 14 C1 */	bl start__13JASAramStreamFv
/* 800B7E80 000B4DC0  38 60 00 00 */	li r3, 0
/* 800B7E84 000B4DC4  38 00 00 05 */	li r0, 5
/* 800B7E88 000B4DC8  98 6D 8C 43 */	stb r3, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E8C 000B4DCC  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E90 000B4DD0  48 00 00 54 */	b .L_800B7EE4
.L_800B7E94:
/* 800B7E94 000B4DD4  38 00 00 01 */	li r0, 1
/* 800B7E98 000B4DD8  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7E9C 000B4DDC  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7EA0 000B4DE0  38 80 00 00 */	li r4, 0
/* 800B7EA4 000B4DE4  4B FF 14 CD */	bl stop__13JASAramStreamFUs
/* 800B7EA8 000B4DE8  38 00 00 01 */	li r0, 1
/* 800B7EAC 000B4DEC  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7EB0 000B4DF0  48 00 00 34 */	b .L_800B7EE4
.L_800B7EB4:
/* 800B7EB4 000B4DF4  38 00 00 01 */	li r0, 1
/* 800B7EB8 000B4DF8  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7EBC 000B4DFC  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7EC0 000B4E00  4B FF 15 31 */	bl cancel__13JASAramStreamFv
/* 800B7EC4 000B4E04  38 00 00 01 */	li r0, 1
/* 800B7EC8 000B4E08  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7ECC 000B4E0C  48 00 00 18 */	b .L_800B7EE4
.L_800B7ED0:
/* 800B7ED0 000B4E10  81 8D 8C 7C */	lwz r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7ED4 000B4E14  28 0C 00 00 */	cmplwi r12, 0
/* 800B7ED8 000B4E18  41 82 00 0C */	beq .L_800B7EE4
/* 800B7EDC 000B4E1C  7D 89 03 A6 */	mtctr r12
/* 800B7EE0 000B4E20  4E 80 04 21 */	bctrl 
.L_800B7EE4:
/* 800B7EE4 000B4E24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B7EE8 000B4E28  7C 08 03 A6 */	mtlr r0
/* 800B7EEC 000B4E2C  38 21 00 10 */	addi r1, r1, 0x10
/* 800B7EF0 000B4E30  4E 80 00 20 */	blr 
.endfn checkSystem__Q27JAInter9StreamMgrFv

.fn PlayingStream__Q27JAInter9StreamMgrFv, global
/* 800B7EF4 000B4E34  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800B7EF8 000B4E38  7C 08 02 A6 */	mflr r0
/* 800B7EFC 000B4E3C  90 01 00 64 */	stw r0, 0x64(r1)
/* 800B7F00 000B4E40  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 800B7F04 000B4E44  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 800B7F08 000B4E48  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 800B7F0C 000B4E4C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 800B7F10 000B4E50  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 800B7F14 000B4E54  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F18 000B4E58  28 04 00 00 */	cmplwi r4, 0
/* 800B7F1C 000B4E5C  41 82 09 B4 */	beq .L_800B88D0
/* 800B7F20 000B4E60  88 04 00 15 */	lbz r0, 0x15(r4)
/* 800B7F24 000B4E64  83 ED 8C 48 */	lwz r31, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F28 000B4E68  28 00 00 04 */	cmplwi r0, 4
/* 800B7F2C 000B4E6C  41 80 00 A4 */	blt .L_800B7FD0
/* 800B7F30 000B4E70  88 0D 8C 45 */	lbz r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F34 000B4E74  28 00 00 02 */	cmplwi r0, 2
/* 800B7F38 000B4E78  40 82 00 40 */	bne .L_800B7F78
/* 800B7F3C 000B4E7C  80 64 01 B4 */	lwz r3, 0x1b4(r4)
/* 800B7F40 000B4E80  28 03 00 00 */	cmplwi r3, 0
/* 800B7F44 000B4E84  41 82 00 18 */	beq .L_800B7F5C
/* 800B7F48 000B4E88  38 00 00 00 */	li r0, 0
/* 800B7F4C 000B4E8C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800B7F50 000B4E90  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F54 000B4E94  80 63 01 B4 */	lwz r3, 0x1b4(r3)
/* 800B7F58 000B4E98  90 03 00 18 */	stw r0, 0x18(r3)
.L_800B7F5C:
/* 800B7F5C 000B4E9C  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F60 000B4EA0  4B FF BC 11 */	bl clearMainSoundPPointer__8JAISoundFv
/* 800B7F64 000B4EA4  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F68 000B4EA8  38 00 00 00 */	li r0, 0
/* 800B7F6C 000B4EAC  98 03 00 15 */	stb r0, 0x15(r3)
/* 800B7F70 000B4EB0  90 0D 8C 7C */	stw r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F74 000B4EB4  48 00 09 5C */	b .L_800B88D0
.L_800B7F78:
/* 800B7F78 000B4EB8  88 64 00 16 */	lbz r3, 0x16(r4)
/* 800B7F7C 000B4EBC  28 03 00 00 */	cmplwi r3, 0
/* 800B7F80 000B4EC0  41 82 00 0C */	beq .L_800B7F8C
/* 800B7F84 000B4EC4  38 03 FF FF */	addi r0, r3, -1
/* 800B7F88 000B4EC8  98 04 00 16 */	stb r0, 0x16(r4)
.L_800B7F8C:
/* 800B7F8C 000B4ECC  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B7F90 000B4ED0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 800B7F94 000B4ED4  41 82 00 3C */	beq .L_800B7FD0
/* 800B7F98 000B4ED8  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7F9C 000B4EDC  38 A0 00 07 */	li r5, 7
/* 800B7FA0 000B4EE0  C0 22 8C E8 */	lfs f1, lbl_80517048@sda21(r2)
/* 800B7FA4 000B4EE4  81 83 00 10 */	lwz r12, 0x10(r3)
/* 800B7FA8 000B4EE8  80 83 00 28 */	lwz r4, 0x28(r3)
/* 800B7FAC 000B4EEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800B7FB0 000B4EF0  7D 89 03 A6 */	mtctr r12
/* 800B7FB4 000B4EF4  4E 80 04 21 */	bctrl 
/* 800B7FB8 000B4EF8  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7FBC 000B4EFC  38 00 00 05 */	li r0, 5
/* 800B7FC0 000B4F00  98 03 00 15 */	stb r0, 0x15(r3)
/* 800B7FC4 000B4F04  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B7FC8 000B4F08  68 00 00 02 */	xori r0, r0, 2
/* 800B7FCC 000B4F0C  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B7FD0:
/* 800B7FD0 000B4F10  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B7FD4 000B4F14  88 04 00 15 */	lbz r0, 0x15(r4)
/* 800B7FD8 000B4F18  28 00 00 03 */	cmplwi r0, 3
/* 800B7FDC 000B4F1C  41 80 08 F4 */	blt .L_800B88D0
/* 800B7FE0 000B4F20  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B7FE4 000B4F24  3C 60 80 48 */	lis r3, lbl_804796B0@ha
/* 800B7FE8 000B4F28  39 03 96 B0 */	addi r8, r3, lbl_804796B0@l
/* 800B7FEC 000B4F2C  3B C4 00 48 */	addi r30, r4, 0x48
/* 800B7FF0 000B4F30  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 800B7FF4 000B4F34  80 E8 00 00 */	lwz r7, 0(r8)
/* 800B7FF8 000B4F38  80 C8 00 04 */	lwz r6, 4(r8)
/* 800B7FFC 000B4F3C  3B 60 00 00 */	li r27, 0
/* 800B8000 000B4F40  80 A8 00 08 */	lwz r5, 8(r8)
/* 800B8004 000B4F44  80 88 00 0C */	lwz r4, 0xc(r8)
/* 800B8008 000B4F48  80 68 00 10 */	lwz r3, 0x10(r8)
/* 800B800C 000B4F4C  80 08 00 14 */	lwz r0, 0x14(r8)
/* 800B8010 000B4F50  90 E1 00 08 */	stw r7, 8(r1)
/* 800B8014 000B4F54  90 C1 00 0C */	stw r6, 0xc(r1)
/* 800B8018 000B4F58  90 A1 00 10 */	stw r5, 0x10(r1)
/* 800B801C 000B4F5C  90 81 00 14 */	stw r4, 0x14(r1)
/* 800B8020 000B4F60  90 61 00 18 */	stw r3, 0x18(r1)
/* 800B8024 000B4F64  90 01 00 1C */	stw r0, 0x1c(r1)
/* 800B8028 000B4F68  41 82 00 C4 */	beq .L_800B80EC
/* 800B802C 000B4F6C  C3 C2 8C E0 */	lfs f30, lbl_80517040@sda21(r2)
/* 800B8030 000B4F70  3B 00 00 00 */	li r24, 0
/* 800B8034 000B4F74  3B 20 00 01 */	li r25, 1
/* 800B8038 000B4F78  48 00 00 4C */	b .L_800B8084
.L_800B803C:
/* 800B803C 000B4F7C  57 03 06 3E */	clrlwi r3, r24, 0x18
/* 800B8040 000B4F80  80 1E 00 08 */	lwz r0, 8(r30)
/* 800B8044 000B4F84  7F 3A 18 30 */	slw r26, r25, r3
/* 800B8048 000B4F88  57 03 25 36 */	rlwinm r3, r24, 4, 0x14, 0x1b
/* 800B804C 000B4F8C  7C 00 D0 39 */	and. r0, r0, r26
/* 800B8050 000B4F90  3B 83 00 1C */	addi r28, r3, 0x1c
/* 800B8054 000B4F94  7F 9E E2 14 */	add r28, r30, r28
/* 800B8058 000B4F98  41 82 00 20 */	beq .L_800B8078
/* 800B805C 000B4F9C  7F 83 E3 78 */	mr r3, r28
/* 800B8060 000B4FA0  4B FF D8 91 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B8064 000B4FA4  2C 03 00 00 */	cmpwi r3, 0
/* 800B8068 000B4FA8  40 82 00 10 */	bne .L_800B8078
/* 800B806C 000B4FAC  80 1E 00 08 */	lwz r0, 8(r30)
/* 800B8070 000B4FB0  7C 00 D2 78 */	xor r0, r0, r26
/* 800B8074 000B4FB4  90 1E 00 08 */	stw r0, 8(r30)
.L_800B8078:
/* 800B8078 000B4FB8  C0 1C 00 04 */	lfs f0, 4(r28)
/* 800B807C 000B4FBC  3B 18 00 01 */	addi r24, r24, 1
/* 800B8080 000B4FC0  EF DE 00 32 */	fmuls f30, f30, f0
.L_800B8084:
/* 800B8084 000B4FC4  57 00 06 3E */	clrlwi r0, r24, 0x18
/* 800B8088 000B4FC8  28 00 00 14 */	cmplwi r0, 0x14
/* 800B808C 000B4FCC  41 80 FF B0 */	blt .L_800B803C
/* 800B8090 000B4FD0  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8094 000B4FD4  C0 03 00 04 */	lfs f0, 4(r3)
/* 800B8098 000B4FD8  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 800B809C 000B4FDC  41 82 00 38 */	beq .L_800B80D4
/* 800B80A0 000B4FE0  D3 C3 00 04 */	stfs f30, 4(r3)
/* 800B80A4 000B4FE4  38 61 00 08 */	addi r3, r1, 8
/* 800B80A8 000B4FE8  38 C0 00 00 */	li r6, 0
/* 800B80AC 000B4FEC  80 AD 82 10 */	lwz r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B80B0 000B4FF0  48 00 00 18 */	b .L_800B80C8
.L_800B80B4:
/* 800B80B4 000B4FF4  54 C4 15 BA */	rlwinm r4, r6, 2, 0x16, 0x1d
/* 800B80B8 000B4FF8  38 C6 00 01 */	addi r6, r6, 1
/* 800B80BC 000B4FFC  7C 03 20 2E */	lwzx r0, r3, r4
/* 800B80C0 000B5000  64 00 00 04 */	oris r0, r0, 4
/* 800B80C4 000B5004  7C 03 21 2E */	stwx r0, r3, r4
.L_800B80C8:
/* 800B80C8 000B5008  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 800B80CC 000B500C  7C 00 28 40 */	cmplw r0, r5
/* 800B80D0 000B5010  41 80 FF E4 */	blt .L_800B80B4
.L_800B80D4:
/* 800B80D4 000B5014  80 1E 00 08 */	lwz r0, 8(r30)
/* 800B80D8 000B5018  28 00 00 00 */	cmplwi r0, 0
/* 800B80DC 000B501C  40 82 00 10 */	bne .L_800B80EC
/* 800B80E0 000B5020  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B80E4 000B5024  6C 00 00 04 */	xoris r0, r0, 4
/* 800B80E8 000B5028  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B80EC:
/* 800B80EC 000B502C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B80F0 000B5030  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 800B80F4 000B5034  41 82 00 88 */	beq .L_800B817C
/* 800B80F8 000B5038  3B 21 00 08 */	addi r25, r1, 8
/* 800B80FC 000B503C  3B 80 00 00 */	li r28, 0
/* 800B8100 000B5040  3B 40 00 01 */	li r26, 1
/* 800B8104 000B5044  48 00 00 50 */	b .L_800B8154
.L_800B8108:
/* 800B8108 000B5048  80 1E 01 70 */	lwz r0, 0x170(r30)
/* 800B810C 000B504C  7F 5D 18 30 */	slw r29, r26, r3
/* 800B8110 000B5050  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 800B8114 000B5054  57 83 25 36 */	rlwinm r3, r28, 4, 0x14, 0x1b
/* 800B8118 000B5058  7C 00 E8 39 */	and. r0, r0, r29
/* 800B811C 000B505C  57 98 06 3E */	clrlwi r24, r28, 0x18
/* 800B8120 000B5060  7C 64 1A 14 */	add r3, r4, r3
/* 800B8124 000B5064  41 82 00 1C */	beq .L_800B8140
/* 800B8128 000B5068  4B FF D7 C9 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B812C 000B506C  2C 03 00 00 */	cmpwi r3, 0
/* 800B8130 000B5070  40 82 00 10 */	bne .L_800B8140
/* 800B8134 000B5074  80 1E 01 70 */	lwz r0, 0x170(r30)
/* 800B8138 000B5078  7C 00 EA 78 */	xor r0, r0, r29
/* 800B813C 000B507C  90 1E 01 70 */	stw r0, 0x170(r30)
.L_800B8140:
/* 800B8140 000B5080  57 03 10 3A */	slwi r3, r24, 2
/* 800B8144 000B5084  3B 9C 00 01 */	addi r28, r28, 1
/* 800B8148 000B5088  7C 19 18 2E */	lwzx r0, r25, r3
/* 800B814C 000B508C  64 00 00 04 */	oris r0, r0, 4
/* 800B8150 000B5090  7C 19 19 2E */	stwx r0, r25, r3
.L_800B8154:
/* 800B8154 000B5094  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8158 000B5098  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 800B815C 000B509C  7C 03 00 40 */	cmplw r3, r0
/* 800B8160 000B50A0  41 80 FF A8 */	blt .L_800B8108
/* 800B8164 000B50A4  80 1E 01 70 */	lwz r0, 0x170(r30)
/* 800B8168 000B50A8  28 00 00 00 */	cmplwi r0, 0
/* 800B816C 000B50AC  40 82 00 10 */	bne .L_800B817C
/* 800B8170 000B50B0  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B8174 000B50B4  68 00 00 40 */	xori r0, r0, 0x40
/* 800B8178 000B50B8  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B817C:
/* 800B817C 000B50BC  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8180 000B50C0  88 03 00 15 */	lbz r0, 0x15(r3)
/* 800B8184 000B50C4  28 00 00 05 */	cmplwi r0, 5
/* 800B8188 000B50C8  40 82 00 90 */	bne .L_800B8218
/* 800B818C 000B50CC  81 83 00 10 */	lwz r12, 0x10(r3)
/* 800B8190 000B50D0  38 80 00 07 */	li r4, 7
/* 800B8194 000B50D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 800B8198 000B50D8  7D 89 03 A6 */	mtctr r12
/* 800B819C 000B50DC  4E 80 04 21 */	bctrl 
/* 800B81A0 000B50E0  C0 02 8C E8 */	lfs f0, lbl_80517048@sda21(r2)
/* 800B81A4 000B50E4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 800B81A8 000B50E8  41 82 00 14 */	beq .L_800B81BC
/* 800B81AC 000B50EC  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81B0 000B50F0  80 03 00 28 */	lwz r0, 0x28(r3)
/* 800B81B4 000B50F4  28 00 00 00 */	cmplwi r0, 0
/* 800B81B8 000B50F8  40 82 00 60 */	bne .L_800B8218
.L_800B81BC:
/* 800B81BC 000B50FC  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81C0 000B5100  88 03 00 16 */	lbz r0, 0x16(r3)
/* 800B81C4 000B5104  28 00 00 00 */	cmplwi r0, 0
/* 800B81C8 000B5108  40 82 00 50 */	bne .L_800B8218
/* 800B81CC 000B510C  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81D0 000B5110  38 80 00 00 */	li r4, 0
/* 800B81D4 000B5114  4B FF 11 9D */	bl stop__13JASAramStreamFUs
/* 800B81D8 000B5118  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81DC 000B511C  38 00 00 00 */	li r0, 0
/* 800B81E0 000B5120  98 03 00 15 */	stb r0, 0x15(r3)
/* 800B81E4 000B5124  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81E8 000B5128  80 63 01 B4 */	lwz r3, 0x1b4(r3)
/* 800B81EC 000B512C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800B81F0 000B5130  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B81F4 000B5134  80 63 01 B4 */	lwz r3, 0x1b4(r3)
/* 800B81F8 000B5138  90 03 00 18 */	stw r0, 0x18(r3)
/* 800B81FC 000B513C  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8200 000B5140  4B FF B9 71 */	bl clearMainSoundPPointer__8JAISoundFv
/* 800B8204 000B5144  38 60 00 00 */	li r3, 0
/* 800B8208 000B5148  38 00 00 01 */	li r0, 1
/* 800B820C 000B514C  90 6D 8C 7C */	stw r3, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8210 000B5150  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8214 000B5154  90 6D 8C 78 */	stw r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8218:
/* 800B8218 000B5158  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B821C 000B515C  54 00 03 19 */	rlwinm. r0, r0, 0, 0xc, 0xc
/* 800B8220 000B5160  41 82 00 F8 */	beq .L_800B8318
/* 800B8224 000B5164  C3 C2 8C E8 */	lfs f30, lbl_80517048@sda21(r2)
/* 800B8228 000B5168  3B 40 00 00 */	li r26, 0
/* 800B822C 000B516C  C3 E2 8C E4 */	lfs f31, lbl_80517044@sda21(r2)
/* 800B8230 000B5170  3B 20 00 01 */	li r25, 1
/* 800B8234 000B5174  48 00 00 50 */	b .L_800B8284
.L_800B8238:
/* 800B8238 000B5178  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 800B823C 000B517C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800B8240 000B5180  7F 38 18 30 */	slw r24, r25, r3
/* 800B8244 000B5184  80 7E 01 60 */	lwz r3, 0x160(r30)
/* 800B8248 000B5188  7C 00 C0 39 */	and. r0, r0, r24
/* 800B824C 000B518C  57 40 25 36 */	rlwinm r0, r26, 4, 0x14, 0x1b
/* 800B8250 000B5190  7F 83 02 14 */	add r28, r3, r0
/* 800B8254 000B5194  41 82 00 20 */	beq .L_800B8274
/* 800B8258 000B5198  7F 83 E3 78 */	mr r3, r28
/* 800B825C 000B519C  4B FF D6 95 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B8260 000B51A0  2C 03 00 00 */	cmpwi r3, 0
/* 800B8264 000B51A4  40 82 00 10 */	bne .L_800B8274
/* 800B8268 000B51A8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800B826C 000B51AC  7C 00 C2 78 */	xor r0, r0, r24
/* 800B8270 000B51B0  90 1E 00 10 */	stw r0, 0x10(r30)
.L_800B8274:
/* 800B8274 000B51B4  C0 1C 00 04 */	lfs f0, 4(r28)
/* 800B8278 000B51B8  3B 5A 00 01 */	addi r26, r26, 1
/* 800B827C 000B51BC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 800B8280 000B51C0  EF DE 00 2A */	fadds f30, f30, f0
.L_800B8284:
/* 800B8284 000B51C4  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 800B8288 000B51C8  28 00 00 07 */	cmplwi r0, 7
/* 800B828C 000B51CC  41 80 FF AC */	blt .L_800B8238
/* 800B8290 000B51D0  C0 22 8C E4 */	lfs f1, lbl_80517044@sda21(r2)
/* 800B8294 000B51D4  C0 02 8C E0 */	lfs f0, lbl_80517040@sda21(r2)
/* 800B8298 000B51D8  EF DE 08 2A */	fadds f30, f30, f1
/* 800B829C 000B51DC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 800B82A0 000B51E0  40 81 00 0C */	ble .L_800B82AC
/* 800B82A4 000B51E4  FF C0 00 90 */	fmr f30, f0
/* 800B82A8 000B51E8  48 00 00 14 */	b .L_800B82BC
.L_800B82AC:
/* 800B82AC 000B51EC  C0 02 8C E8 */	lfs f0, lbl_80517048@sda21(r2)
/* 800B82B0 000B51F0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 800B82B4 000B51F4  40 80 00 08 */	bge .L_800B82BC
/* 800B82B8 000B51F8  FF C0 00 90 */	fmr f30, f0
.L_800B82BC:
/* 800B82BC 000B51FC  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B82C0 000B5200  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 800B82C4 000B5204  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 800B82C8 000B5208  41 82 00 38 */	beq .L_800B8300
/* 800B82CC 000B520C  D3 C3 00 0C */	stfs f30, 0xc(r3)
/* 800B82D0 000B5210  38 61 00 08 */	addi r3, r1, 8
/* 800B82D4 000B5214  38 C0 00 00 */	li r6, 0
/* 800B82D8 000B5218  80 AD 82 10 */	lwz r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B82DC 000B521C  48 00 00 18 */	b .L_800B82F4
.L_800B82E0:
/* 800B82E0 000B5220  54 C4 15 BA */	rlwinm r4, r6, 2, 0x16, 0x1d
/* 800B82E4 000B5224  38 C6 00 01 */	addi r6, r6, 1
/* 800B82E8 000B5228  7C 03 20 2E */	lwzx r0, r3, r4
/* 800B82EC 000B522C  64 00 00 08 */	oris r0, r0, 8
/* 800B82F0 000B5230  7C 03 21 2E */	stwx r0, r3, r4
.L_800B82F4:
/* 800B82F4 000B5234  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 800B82F8 000B5238  7C 00 28 40 */	cmplw r0, r5
/* 800B82FC 000B523C  41 80 FF E4 */	blt .L_800B82E0
.L_800B8300:
/* 800B8300 000B5240  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800B8304 000B5244  28 00 00 00 */	cmplwi r0, 0
/* 800B8308 000B5248  40 82 00 10 */	bne .L_800B8318
/* 800B830C 000B524C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B8310 000B5250  6C 00 00 08 */	xoris r0, r0, 8
/* 800B8314 000B5254  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B8318:
/* 800B8318 000B5258  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B831C 000B525C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 800B8320 000B5260  41 82 00 88 */	beq .L_800B83A8
/* 800B8324 000B5264  3B 21 00 08 */	addi r25, r1, 8
/* 800B8328 000B5268  3B 80 00 00 */	li r28, 0
/* 800B832C 000B526C  3B 40 00 01 */	li r26, 1
/* 800B8330 000B5270  48 00 00 50 */	b .L_800B8380
.L_800B8334:
/* 800B8334 000B5274  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 800B8338 000B5278  7F 58 18 30 */	slw r24, r26, r3
/* 800B833C 000B527C  80 9E 01 84 */	lwz r4, 0x184(r30)
/* 800B8340 000B5280  57 83 25 36 */	rlwinm r3, r28, 4, 0x14, 0x1b
/* 800B8344 000B5284  7C 00 C0 39 */	and. r0, r0, r24
/* 800B8348 000B5288  57 9D 06 3E */	clrlwi r29, r28, 0x18
/* 800B834C 000B528C  7C 64 1A 14 */	add r3, r4, r3
/* 800B8350 000B5290  41 82 00 1C */	beq .L_800B836C
/* 800B8354 000B5294  4B FF D5 9D */	bl move__Q27JAInter11MoveParaSetFv
/* 800B8358 000B5298  2C 03 00 00 */	cmpwi r3, 0
/* 800B835C 000B529C  40 82 00 10 */	bne .L_800B836C
/* 800B8360 000B52A0  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 800B8364 000B52A4  7C 00 C2 78 */	xor r0, r0, r24
/* 800B8368 000B52A8  90 1E 01 74 */	stw r0, 0x174(r30)
.L_800B836C:
/* 800B836C 000B52AC  57 A3 10 3A */	slwi r3, r29, 2
/* 800B8370 000B52B0  3B 9C 00 01 */	addi r28, r28, 1
/* 800B8374 000B52B4  7C 19 18 2E */	lwzx r0, r25, r3
/* 800B8378 000B52B8  64 00 00 08 */	oris r0, r0, 8
/* 800B837C 000B52BC  7C 19 19 2E */	stwx r0, r25, r3
.L_800B8380:
/* 800B8380 000B52C0  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8384 000B52C4  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 800B8388 000B52C8  7C 03 00 40 */	cmplw r3, r0
/* 800B838C 000B52CC  41 80 FF A8 */	blt .L_800B8334
/* 800B8390 000B52D0  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 800B8394 000B52D4  28 00 00 00 */	cmplwi r0, 0
/* 800B8398 000B52D8  40 82 00 10 */	bne .L_800B83A8
/* 800B839C 000B52DC  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B83A0 000B52E0  68 00 00 80 */	xori r0, r0, 0x80
/* 800B83A4 000B52E4  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B83A8:
/* 800B83A8 000B52E8  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B83AC 000B52EC  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 800B83B0 000B52F0  41 82 00 98 */	beq .L_800B8448
/* 800B83B4 000B52F4  C3 E2 8C E0 */	lfs f31, lbl_80517040@sda21(r2)
/* 800B83B8 000B52F8  3B 40 00 00 */	li r26, 0
/* 800B83BC 000B52FC  3B 20 00 01 */	li r25, 1
/* 800B83C0 000B5300  48 00 00 4C */	b .L_800B840C
.L_800B83C4:
/* 800B83C4 000B5304  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 800B83C8 000B5308  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 800B83CC 000B530C  7F 38 18 30 */	slw r24, r25, r3
/* 800B83D0 000B5310  80 7E 01 5C */	lwz r3, 0x15c(r30)
/* 800B83D4 000B5314  7C 00 C0 39 */	and. r0, r0, r24
/* 800B83D8 000B5318  57 40 25 36 */	rlwinm r0, r26, 4, 0x14, 0x1b
/* 800B83DC 000B531C  7F 83 02 14 */	add r28, r3, r0
/* 800B83E0 000B5320  41 82 00 20 */	beq .L_800B8400
/* 800B83E4 000B5324  7F 83 E3 78 */	mr r3, r28
/* 800B83E8 000B5328  4B FF D5 09 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B83EC 000B532C  2C 03 00 00 */	cmpwi r3, 0
/* 800B83F0 000B5330  40 82 00 10 */	bne .L_800B8400
/* 800B83F4 000B5334  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 800B83F8 000B5338  7C 00 C2 78 */	xor r0, r0, r24
/* 800B83FC 000B533C  90 1E 00 0C */	stw r0, 0xc(r30)
.L_800B8400:
/* 800B8400 000B5340  C0 1C 00 04 */	lfs f0, 4(r28)
/* 800B8404 000B5344  3B 5A 00 01 */	addi r26, r26, 1
/* 800B8408 000B5348  EF FF 00 32 */	fmuls f31, f31, f0
.L_800B840C:
/* 800B840C 000B534C  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 800B8410 000B5350  28 00 00 07 */	cmplwi r0, 7
/* 800B8414 000B5354  41 80 FF B0 */	blt .L_800B83C4
/* 800B8418 000B5358  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B841C 000B535C  C0 03 00 08 */	lfs f0, 8(r3)
/* 800B8420 000B5360  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 800B8424 000B5364  41 82 00 0C */	beq .L_800B8430
/* 800B8428 000B5368  3B 60 00 01 */	li r27, 1
/* 800B842C 000B536C  D3 E3 00 08 */	stfs f31, 8(r3)
.L_800B8430:
/* 800B8430 000B5370  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 800B8434 000B5374  28 00 00 00 */	cmplwi r0, 0
/* 800B8438 000B5378  40 82 00 10 */	bne .L_800B8448
/* 800B843C 000B537C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B8440 000B5380  6C 00 00 10 */	xoris r0, r0, 0x10
/* 800B8444 000B5384  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B8448:
/* 800B8448 000B5388  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B844C 000B538C  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 800B8450 000B5390  41 82 00 E8 */	beq .L_800B8538
/* 800B8454 000B5394  C3 E2 8C E8 */	lfs f31, lbl_80517048@sda21(r2)
/* 800B8458 000B5398  3B 40 00 00 */	li r26, 0
/* 800B845C 000B539C  3B 20 00 01 */	li r25, 1
/* 800B8460 000B53A0  48 00 00 4C */	b .L_800B84AC
.L_800B8464:
/* 800B8464 000B53A4  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 800B8468 000B53A8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800B846C 000B53AC  7F 38 18 30 */	slw r24, r25, r3
/* 800B8470 000B53B0  80 7E 01 64 */	lwz r3, 0x164(r30)
/* 800B8474 000B53B4  7C 00 C0 39 */	and. r0, r0, r24
/* 800B8478 000B53B8  57 40 25 36 */	rlwinm r0, r26, 4, 0x14, 0x1b
/* 800B847C 000B53BC  7F 83 02 14 */	add r28, r3, r0
/* 800B8480 000B53C0  41 82 00 20 */	beq .L_800B84A0
/* 800B8484 000B53C4  7F 83 E3 78 */	mr r3, r28
/* 800B8488 000B53C8  4B FF D4 69 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B848C 000B53CC  2C 03 00 00 */	cmpwi r3, 0
/* 800B8490 000B53D0  40 82 00 10 */	bne .L_800B84A0
/* 800B8494 000B53D4  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800B8498 000B53D8  7C 00 C2 78 */	xor r0, r0, r24
/* 800B849C 000B53DC  90 1E 00 14 */	stw r0, 0x14(r30)
.L_800B84A0:
/* 800B84A0 000B53E0  C0 1C 00 04 */	lfs f0, 4(r28)
/* 800B84A4 000B53E4  3B 5A 00 01 */	addi r26, r26, 1
/* 800B84A8 000B53E8  EF FF 00 2A */	fadds f31, f31, f0
.L_800B84AC:
/* 800B84AC 000B53EC  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 800B84B0 000B53F0  28 00 00 07 */	cmplwi r0, 7
/* 800B84B4 000B53F4  41 80 FF B0 */	blt .L_800B8464
/* 800B84B8 000B53F8  C0 02 8C E0 */	lfs f0, lbl_80517040@sda21(r2)
/* 800B84BC 000B53FC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800B84C0 000B5400  40 81 00 0C */	ble .L_800B84CC
/* 800B84C4 000B5404  FF E0 00 90 */	fmr f31, f0
/* 800B84C8 000B5408  48 00 00 14 */	b .L_800B84DC
.L_800B84CC:
/* 800B84CC 000B540C  C0 02 8C E8 */	lfs f0, lbl_80517048@sda21(r2)
/* 800B84D0 000B5410  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800B84D4 000B5414  40 80 00 08 */	bge .L_800B84DC
/* 800B84D8 000B5418  FF E0 00 90 */	fmr f31, f0
.L_800B84DC:
/* 800B84DC 000B541C  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B84E0 000B5420  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 800B84E4 000B5424  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 800B84E8 000B5428  41 82 00 38 */	beq .L_800B8520
/* 800B84EC 000B542C  D3 E3 00 10 */	stfs f31, 0x10(r3)
/* 800B84F0 000B5430  38 61 00 08 */	addi r3, r1, 8
/* 800B84F4 000B5434  38 C0 00 00 */	li r6, 0
/* 800B84F8 000B5438  80 AD 82 10 */	lwz r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B84FC 000B543C  48 00 00 18 */	b .L_800B8514
.L_800B8500:
/* 800B8500 000B5440  54 C4 15 BA */	rlwinm r4, r6, 2, 0x16, 0x1d
/* 800B8504 000B5444  38 C6 00 01 */	addi r6, r6, 1
/* 800B8508 000B5448  7C 03 20 2E */	lwzx r0, r3, r4
/* 800B850C 000B544C  64 00 00 20 */	oris r0, r0, 0x20
/* 800B8510 000B5450  7C 03 21 2E */	stwx r0, r3, r4
.L_800B8514:
/* 800B8514 000B5454  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 800B8518 000B5458  7C 00 28 40 */	cmplw r0, r5
/* 800B851C 000B545C  41 80 FF E4 */	blt .L_800B8500
.L_800B8520:
/* 800B8520 000B5460  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800B8524 000B5464  28 00 00 00 */	cmplwi r0, 0
/* 800B8528 000B5468  40 82 00 10 */	bne .L_800B8538
/* 800B852C 000B546C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B8530 000B5470  6C 00 00 20 */	xoris r0, r0, 0x20
/* 800B8534 000B5474  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B8538:
/* 800B8538 000B5478  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B853C 000B547C  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 800B8540 000B5480  41 82 00 88 */	beq .L_800B85C8
/* 800B8544 000B5484  3B 21 00 08 */	addi r25, r1, 8
/* 800B8548 000B5488  3B 80 00 00 */	li r28, 0
/* 800B854C 000B548C  3B 40 00 01 */	li r26, 1
/* 800B8550 000B5490  48 00 00 50 */	b .L_800B85A0
.L_800B8554:
/* 800B8554 000B5494  80 1E 01 78 */	lwz r0, 0x178(r30)
/* 800B8558 000B5498  7F 58 18 30 */	slw r24, r26, r3
/* 800B855C 000B549C  80 9E 01 88 */	lwz r4, 0x188(r30)
/* 800B8560 000B54A0  57 83 25 36 */	rlwinm r3, r28, 4, 0x14, 0x1b
/* 800B8564 000B54A4  7C 00 C0 39 */	and. r0, r0, r24
/* 800B8568 000B54A8  57 9D 06 3E */	clrlwi r29, r28, 0x18
/* 800B856C 000B54AC  7C 64 1A 14 */	add r3, r4, r3
/* 800B8570 000B54B0  41 82 00 1C */	beq .L_800B858C
/* 800B8574 000B54B4  4B FF D3 7D */	bl move__Q27JAInter11MoveParaSetFv
/* 800B8578 000B54B8  2C 03 00 00 */	cmpwi r3, 0
/* 800B857C 000B54BC  40 82 00 10 */	bne .L_800B858C
/* 800B8580 000B54C0  80 1E 01 78 */	lwz r0, 0x178(r30)
/* 800B8584 000B54C4  7C 00 C2 78 */	xor r0, r0, r24
/* 800B8588 000B54C8  90 1E 01 78 */	stw r0, 0x178(r30)
.L_800B858C:
/* 800B858C 000B54CC  57 A3 10 3A */	slwi r3, r29, 2
/* 800B8590 000B54D0  3B 9C 00 01 */	addi r28, r28, 1
/* 800B8594 000B54D4  7C 19 18 2E */	lwzx r0, r25, r3
/* 800B8598 000B54D8  64 00 00 20 */	oris r0, r0, 0x20
/* 800B859C 000B54DC  7C 19 19 2E */	stwx r0, r25, r3
.L_800B85A0:
/* 800B85A0 000B54E0  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B85A4 000B54E4  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 800B85A8 000B54E8  7C 03 00 40 */	cmplw r3, r0
/* 800B85AC 000B54EC  41 80 FF A8 */	blt .L_800B8554
/* 800B85B0 000B54F0  80 1E 01 78 */	lwz r0, 0x178(r30)
/* 800B85B4 000B54F4  28 00 00 00 */	cmplwi r0, 0
/* 800B85B8 000B54F8  40 82 00 10 */	bne .L_800B85C8
/* 800B85BC 000B54FC  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B85C0 000B5500  68 00 08 00 */	xori r0, r0, 0x800
/* 800B85C4 000B5504  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B85C8:
/* 800B85C8 000B5508  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B85CC 000B550C  54 00 02 53 */	rlwinm. r0, r0, 0, 9, 9
/* 800B85D0 000B5510  41 82 00 E8 */	beq .L_800B86B8
/* 800B85D4 000B5514  C3 E2 8C E8 */	lfs f31, lbl_80517048@sda21(r2)
/* 800B85D8 000B5518  3B 40 00 00 */	li r26, 0
/* 800B85DC 000B551C  3B 20 00 01 */	li r25, 1
/* 800B85E0 000B5520  48 00 00 4C */	b .L_800B862C
.L_800B85E4:
/* 800B85E4 000B5524  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 800B85E8 000B5528  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 800B85EC 000B552C  7F 38 18 30 */	slw r24, r25, r3
/* 800B85F0 000B5530  80 7E 01 68 */	lwz r3, 0x168(r30)
/* 800B85F4 000B5534  7C 00 C0 39 */	and. r0, r0, r24
/* 800B85F8 000B5538  57 40 25 36 */	rlwinm r0, r26, 4, 0x14, 0x1b
/* 800B85FC 000B553C  7F 83 02 14 */	add r28, r3, r0
/* 800B8600 000B5540  41 82 00 20 */	beq .L_800B8620
/* 800B8604 000B5544  7F 83 E3 78 */	mr r3, r28
/* 800B8608 000B5548  4B FF D2 E9 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B860C 000B554C  2C 03 00 00 */	cmpwi r3, 0
/* 800B8610 000B5550  40 82 00 10 */	bne .L_800B8620
/* 800B8614 000B5554  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 800B8618 000B5558  7C 00 C2 78 */	xor r0, r0, r24
/* 800B861C 000B555C  90 1E 00 18 */	stw r0, 0x18(r30)
.L_800B8620:
/* 800B8620 000B5560  C0 1C 00 04 */	lfs f0, 4(r28)
/* 800B8624 000B5564  3B 5A 00 01 */	addi r26, r26, 1
/* 800B8628 000B5568  EF FF 00 2A */	fadds f31, f31, f0
.L_800B862C:
/* 800B862C 000B556C  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 800B8630 000B5570  28 00 00 07 */	cmplwi r0, 7
/* 800B8634 000B5574  41 80 FF B0 */	blt .L_800B85E4
/* 800B8638 000B5578  C0 02 8C E0 */	lfs f0, lbl_80517040@sda21(r2)
/* 800B863C 000B557C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800B8640 000B5580  40 81 00 0C */	ble .L_800B864C
/* 800B8644 000B5584  FF E0 00 90 */	fmr f31, f0
/* 800B8648 000B5588  48 00 00 14 */	b .L_800B865C
.L_800B864C:
/* 800B864C 000B558C  C0 02 8C E8 */	lfs f0, lbl_80517048@sda21(r2)
/* 800B8650 000B5590  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800B8654 000B5594  40 80 00 08 */	bge .L_800B865C
/* 800B8658 000B5598  FF E0 00 90 */	fmr f31, f0
.L_800B865C:
/* 800B865C 000B559C  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8660 000B55A0  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 800B8664 000B55A4  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 800B8668 000B55A8  41 82 00 38 */	beq .L_800B86A0
/* 800B866C 000B55AC  D3 E3 00 14 */	stfs f31, 0x14(r3)
/* 800B8670 000B55B0  38 61 00 08 */	addi r3, r1, 8
/* 800B8674 000B55B4  38 C0 00 00 */	li r6, 0
/* 800B8678 000B55B8  80 AD 82 10 */	lwz r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B867C 000B55BC  48 00 00 18 */	b .L_800B8694
.L_800B8680:
/* 800B8680 000B55C0  54 C4 15 BA */	rlwinm r4, r6, 2, 0x16, 0x1d
/* 800B8684 000B55C4  38 C6 00 01 */	addi r6, r6, 1
/* 800B8688 000B55C8  7C 03 20 2E */	lwzx r0, r3, r4
/* 800B868C 000B55CC  64 00 00 40 */	oris r0, r0, 0x40
/* 800B8690 000B55D0  7C 03 21 2E */	stwx r0, r3, r4
.L_800B8694:
/* 800B8694 000B55D4  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 800B8698 000B55D8  7C 00 28 40 */	cmplw r0, r5
/* 800B869C 000B55DC  41 80 FF E4 */	blt .L_800B8680
.L_800B86A0:
/* 800B86A0 000B55E0  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 800B86A4 000B55E4  28 00 00 00 */	cmplwi r0, 0
/* 800B86A8 000B55E8  40 82 00 10 */	bne .L_800B86B8
/* 800B86AC 000B55EC  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B86B0 000B55F0  6C 00 00 40 */	xoris r0, r0, 0x40
/* 800B86B4 000B55F4  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B86B8:
/* 800B86B8 000B55F8  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B86BC 000B55FC  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 800B86C0 000B5600  41 82 00 88 */	beq .L_800B8748
/* 800B86C4 000B5604  3B 80 00 00 */	li r28, 0
/* 800B86C8 000B5608  48 00 00 58 */	b .L_800B8720
.L_800B86CC:
/* 800B86CC 000B560C  38 00 00 01 */	li r0, 1
/* 800B86D0 000B5610  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 800B86D4 000B5614  7C 18 20 30 */	slw r24, r0, r4
/* 800B86D8 000B5618  80 9E 01 8C */	lwz r4, 0x18c(r30)
/* 800B86DC 000B561C  7C 60 C0 39 */	and. r0, r3, r24
/* 800B86E0 000B5620  57 80 25 36 */	rlwinm r0, r28, 4, 0x14, 0x1b
/* 800B86E4 000B5624  57 99 06 3E */	clrlwi r25, r28, 0x18
/* 800B86E8 000B5628  7C 64 02 14 */	add r3, r4, r0
/* 800B86EC 000B562C  41 82 00 30 */	beq .L_800B871C
/* 800B86F0 000B5630  4B FF D2 01 */	bl move__Q27JAInter11MoveParaSetFv
/* 800B86F4 000B5634  2C 03 00 00 */	cmpwi r3, 0
/* 800B86F8 000B5638  40 82 00 10 */	bne .L_800B8708
/* 800B86FC 000B563C  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 800B8700 000B5640  7C 00 C2 78 */	xor r0, r0, r24
/* 800B8704 000B5644  90 1E 01 7C */	stw r0, 0x17c(r30)
.L_800B8708:
/* 800B8708 000B5648  57 24 10 3A */	slwi r4, r25, 2
/* 800B870C 000B564C  38 61 00 08 */	addi r3, r1, 8
/* 800B8710 000B5650  7C 03 20 2E */	lwzx r0, r3, r4
/* 800B8714 000B5654  64 00 00 40 */	oris r0, r0, 0x40
/* 800B8718 000B5658  7C 03 21 2E */	stwx r0, r3, r4
.L_800B871C:
/* 800B871C 000B565C  3B 9C 00 01 */	addi r28, r28, 1
.L_800B8720:
/* 800B8720 000B5660  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8724 000B5664  57 84 06 3E */	clrlwi r4, r28, 0x18
/* 800B8728 000B5668  7C 04 00 40 */	cmplw r4, r0
/* 800B872C 000B566C  41 80 FF A0 */	blt .L_800B86CC
/* 800B8730 000B5670  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 800B8734 000B5674  28 00 00 00 */	cmplwi r0, 0
/* 800B8738 000B5678  40 82 00 10 */	bne .L_800B8748
/* 800B873C 000B567C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 800B8740 000B5680  68 00 01 00 */	xori r0, r0, 0x100
/* 800B8744 000B5684  90 1F 00 18 */	stw r0, 0x18(r31)
.L_800B8748:
/* 800B8748 000B5688  80 01 00 08 */	lwz r0, 8(r1)
/* 800B874C 000B568C  28 00 00 00 */	cmplwi r0, 0
/* 800B8750 000B5690  40 82 00 48 */	bne .L_800B8798
/* 800B8754 000B5694  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800B8758 000B5698  28 00 00 00 */	cmplwi r0, 0
/* 800B875C 000B569C  40 82 00 3C */	bne .L_800B8798
/* 800B8760 000B56A0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 800B8764 000B56A4  28 00 00 00 */	cmplwi r0, 0
/* 800B8768 000B56A8  40 82 00 30 */	bne .L_800B8798
/* 800B876C 000B56AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B8770 000B56B0  28 00 00 00 */	cmplwi r0, 0
/* 800B8774 000B56B4  40 82 00 24 */	bne .L_800B8798
/* 800B8778 000B56B8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 800B877C 000B56BC  28 00 00 00 */	cmplwi r0, 0
/* 800B8780 000B56C0  40 82 00 18 */	bne .L_800B8798
/* 800B8784 000B56C4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800B8788 000B56C8  28 00 00 00 */	cmplwi r0, 0
/* 800B878C 000B56CC  40 82 00 0C */	bne .L_800B8798
/* 800B8790 000B56D0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 800B8794 000B56D4  41 82 01 2C */	beq .L_800B88C0
.L_800B8798:
/* 800B8798 000B56D8  48 03 64 A1 */	bl OSDisableInterrupts
/* 800B879C 000B56DC  3B A0 00 00 */	li r29, 0
/* 800B87A0 000B56E0  7C 7A 1B 78 */	mr r26, r3
/* 800B87A4 000B56E4  3B E1 00 08 */	addi r31, r1, 8
/* 800B87A8 000B56E8  3B 20 00 00 */	li r25, 0
/* 800B87AC 000B56EC  7F BC EB 78 */	mr r28, r29
/* 800B87B0 000B56F0  48 00 00 E4 */	b .L_800B8894
.L_800B87B4:
/* 800B87B4 000B56F4  80 1F 00 00 */	lwz r0, 0(r31)
/* 800B87B8 000B56F8  54 00 03 5B */	rlwinm. r0, r0, 0, 0xd, 0xd
/* 800B87BC 000B56FC  41 82 00 28 */	beq .L_800B87E4
/* 800B87C0 000B5700  80 AD 8C 48 */	lwz r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B87C4 000B5704  38 7D 00 04 */	addi r3, r29, 4
/* 800B87C8 000B5708  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 800B87CC 000B570C  38 1C 02 6C */	addi r0, r28, 0x26c
/* 800B87D0 000B5710  C0 25 00 04 */	lfs f1, 4(r5)
/* 800B87D4 000B5714  7C 04 1C 2E */	lfsx f0, r4, r3
/* 800B87D8 000B5718  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B87DC 000B571C  EC 01 00 32 */	fmuls f0, f1, f0
/* 800B87E0 000B5720  7C 03 05 2E */	stfsx f0, r3, r0
.L_800B87E4:
/* 800B87E4 000B5724  80 1F 00 00 */	lwz r0, 0(r31)
/* 800B87E8 000B5728  54 00 03 19 */	rlwinm. r0, r0, 0, 0xc, 0xc
/* 800B87EC 000B572C  41 82 00 38 */	beq .L_800B8824
/* 800B87F0 000B5730  80 CD 8C 48 */	lwz r6, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B87F4 000B5734  38 9D 00 04 */	addi r4, r29, 4
/* 800B87F8 000B5738  80 BE 01 84 */	lwz r5, 0x184(r30)
/* 800B87FC 000B573C  38 7C 02 84 */	addi r3, r28, 0x284
/* 800B8800 000B5740  C0 46 00 0C */	lfs f2, 0xc(r6)
/* 800B8804 000B5744  38 00 00 01 */	li r0, 1
/* 800B8808 000B5748  7C 25 24 2E */	lfsx f1, r5, r4
/* 800B880C 000B574C  C0 02 8C E4 */	lfs f0, lbl_80517044@sda21(r2)
/* 800B8810 000B5750  EC 22 08 2A */	fadds f1, f2, f1
/* 800B8814 000B5754  80 8D 8C 58 */	lwz r4, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8818 000B5758  EC 01 00 28 */	fsubs f0, f1, f0
/* 800B881C 000B575C  7C 04 1D 2E */	stfsx f0, r4, r3
/* 800B8820 000B5760  98 04 02 D8 */	stb r0, 0x2d8(r4)
.L_800B8824:
/* 800B8824 000B5764  80 1F 00 00 */	lwz r0, 0(r31)
/* 800B8828 000B5768  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 800B882C 000B576C  41 82 00 28 */	beq .L_800B8854
/* 800B8830 000B5770  80 AD 8C 48 */	lwz r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8834 000B5774  38 7D 00 04 */	addi r3, r29, 4
/* 800B8838 000B5778  80 9E 01 88 */	lwz r4, 0x188(r30)
/* 800B883C 000B577C  38 1C 02 9C */	addi r0, r28, 0x29c
/* 800B8840 000B5780  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 800B8844 000B5784  7C 04 1C 2E */	lfsx f0, r4, r3
/* 800B8848 000B5788  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B884C 000B578C  EC 01 00 2A */	fadds f0, f1, f0
/* 800B8850 000B5790  7C 03 05 2E */	stfsx f0, r3, r0
.L_800B8854:
/* 800B8854 000B5794  80 1F 00 00 */	lwz r0, 0(r31)
/* 800B8858 000B5798  54 00 02 53 */	rlwinm. r0, r0, 0, 9, 9
/* 800B885C 000B579C  41 82 00 28 */	beq .L_800B8884
/* 800B8860 000B57A0  80 AD 8C 48 */	lwz r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8864 000B57A4  38 7D 00 04 */	addi r3, r29, 4
/* 800B8868 000B57A8  80 9E 01 8C */	lwz r4, 0x18c(r30)
/* 800B886C 000B57AC  38 1C 02 B4 */	addi r0, r28, 0x2b4
/* 800B8870 000B57B0  C0 25 00 14 */	lfs f1, 0x14(r5)
/* 800B8874 000B57B4  7C 04 1C 2E */	lfsx f0, r4, r3
/* 800B8878 000B57B8  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B887C 000B57BC  EC 01 00 2A */	fadds f0, f1, f0
/* 800B8880 000B57C0  7C 03 05 2E */	stfsx f0, r3, r0
.L_800B8884:
/* 800B8884 000B57C4  3B FF 00 04 */	addi r31, r31, 4
/* 800B8888 000B57C8  3B BD 00 10 */	addi r29, r29, 0x10
/* 800B888C 000B57CC  3B 9C 00 04 */	addi r28, r28, 4
/* 800B8890 000B57D0  3B 39 00 01 */	addi r25, r25, 1
.L_800B8894:
/* 800B8894 000B57D4  48 00 06 49 */	bl getChannelMax__Q27JAInter9StreamMgrFv
/* 800B8898 000B57D8  7C 19 18 40 */	cmplw r25, r3
/* 800B889C 000B57DC  41 80 FF 18 */	blt .L_800B87B4
/* 800B88A0 000B57E0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 800B88A4 000B57E4  41 82 00 14 */	beq .L_800B88B8
/* 800B88A8 000B57E8  80 8D 8C 48 */	lwz r4, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B88AC 000B57EC  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B88B0 000B57F0  C0 04 00 08 */	lfs f0, 8(r4)
/* 800B88B4 000B57F4  D0 03 02 68 */	stfs f0, 0x268(r3)
.L_800B88B8:
/* 800B88B8 000B57F8  7F 43 D3 78 */	mr r3, r26
/* 800B88BC 000B57FC  48 03 63 A5 */	bl OSRestoreInterrupts
.L_800B88C0:
/* 800B88C0 000B5800  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B88C4 000B5804  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 800B88C8 000B5808  38 03 00 01 */	addi r0, r3, 1
/* 800B88CC 000B580C  90 04 00 2C */	stw r0, 0x2c(r4)
.L_800B88D0:
/* 800B88D0 000B5810  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 800B88D4 000B5814  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 800B88D8 000B5818  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 800B88DC 000B581C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 800B88E0 000B5820  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 800B88E4 000B5824  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800B88E8 000B5828  7C 08 03 A6 */	mtlr r0
/* 800B88EC 000B582C  38 21 00 60 */	addi r1, r1, 0x60
/* 800B88F0 000B5830  4E 80 00 20 */	blr 
.endfn PlayingStream__Q27JAInter9StreamMgrFv

.fn changeCallback__Q27JAInter9StreamMgrFv, global
/* 800B88F4 000B5834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B88F8 000B5838  7C 08 02 A6 */	mflr r0
/* 800B88FC 000B583C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B8900 000B5840  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8904 000B5844  2C 00 00 04 */	cmpwi r0, 4
/* 800B8908 000B5848  41 82 00 20 */	beq .L_800B8928
/* 800B890C 000B584C  40 80 00 10 */	bge .L_800B891C
/* 800B8910 000B5850  2C 00 00 03 */	cmpwi r0, 3
/* 800B8914 000B5854  40 80 00 30 */	bge .L_800B8944
/* 800B8918 000B5858  48 00 00 74 */	b .L_800B898C
.L_800B891C:
/* 800B891C 000B585C  2C 00 00 06 */	cmpwi r0, 6
/* 800B8920 000B5860  40 80 00 6C */	bge .L_800B898C
/* 800B8924 000B5864  48 00 00 4C */	b .L_800B8970
.L_800B8928:
/* 800B8928 000B5868  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B892C 000B586C  88 03 00 02 */	lbz r0, 2(r3)
/* 800B8930 000B5870  28 00 00 00 */	cmplwi r0, 0
/* 800B8934 000B5874  40 82 00 58 */	bne .L_800B898C
/* 800B8938 000B5878  38 00 00 00 */	li r0, 0
/* 800B893C 000B587C  98 0D 8C 42 */	stb r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8940 000B5880  48 00 00 4C */	b .L_800B898C
.L_800B8944:
/* 800B8944 000B5884  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8948 000B5888  38 00 00 03 */	li r0, 3
/* 800B894C 000B588C  98 03 00 15 */	stb r0, 0x15(r3)
/* 800B8950 000B5890  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800B8954 000B5894  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8958 000B5898  81 83 00 00 */	lwz r12, 0(r3)
/* 800B895C 000B589C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 800B8960 000B58A0  7D 89 03 A6 */	mtctr r12
/* 800B8964 000B58A4  4E 80 04 21 */	bctrl 
/* 800B8968 000B58A8  4B FF F5 8D */	bl PlayingStream__Q27JAInter9StreamMgrFv
/* 800B896C 000B58AC  48 00 00 20 */	b .L_800B898C
.L_800B8970:
/* 800B8970 000B58B0  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8974 000B58B4  88 03 00 15 */	lbz r0, 0x15(r3)
/* 800B8978 000B58B8  28 00 00 03 */	cmplwi r0, 3
/* 800B897C 000B58BC  40 82 00 0C */	bne .L_800B8988
/* 800B8980 000B58C0  38 00 00 04 */	li r0, 4
/* 800B8984 000B58C4  98 03 00 15 */	stb r0, 0x15(r3)
.L_800B8988:
/* 800B8988 000B58C8  4B FF F5 6D */	bl PlayingStream__Q27JAInter9StreamMgrFv
.L_800B898C:
/* 800B898C 000B58CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B8990 000B58D0  7C 08 03 A6 */	mtlr r0
/* 800B8994 000B58D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800B8998 000B58D8  4E 80 00 20 */	blr 
.endfn changeCallback__Q27JAInter9StreamMgrFv

.fn processGFrameStream__Q27JAInter9StreamMgrFv, global
/* 800B899C 000B58DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B89A0 000B58E0  7C 08 02 A6 */	mflr r0
/* 800B89A4 000B58E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B89A8 000B58E8  88 0D 8C 40 */	lbz r0, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800B89AC 000B58EC  54 00 D7 FF */	rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 800B89B0 000B58F0  40 82 00 0C */	bne .L_800B89BC
/* 800B89B4 000B58F4  4B FF F3 95 */	bl checkSystem__Q27JAInter9StreamMgrFv
/* 800B89B8 000B58F8  48 00 00 15 */	bl checkEntriedStream__Q27JAInter9StreamMgrFv
.L_800B89BC:
/* 800B89BC 000B58FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B89C0 000B5900  7C 08 03 A6 */	mtlr r0
/* 800B89C4 000B5904  38 21 00 10 */	addi r1, r1, 0x10
/* 800B89C8 000B5908  4E 80 00 20 */	blr 
.endfn processGFrameStream__Q27JAInter9StreamMgrFv

.fn checkEntriedStream__Q27JAInter9StreamMgrFv, global
/* 800B89CC 000B590C  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 800B89D0 000B5910  7C 08 02 A6 */	mflr r0
/* 800B89D4 000B5914  90 01 01 14 */	stw r0, 0x114(r1)
/* 800B89D8 000B5918  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 800B89DC 000B591C  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B89E0 000B5920  88 04 00 15 */	lbz r0, 0x15(r4)
/* 800B89E4 000B5924  28 00 00 01 */	cmplwi r0, 1
/* 800B89E8 000B5928  40 82 00 B8 */	bne .L_800B8AA0
/* 800B89EC 000B592C  38 60 00 02 */	li r3, 2
/* 800B89F0 000B5930  38 00 00 00 */	li r0, 0
/* 800B89F4 000B5934  98 64 00 15 */	stb r3, 0x15(r4)
/* 800B89F8 000B5938  C0 22 8C E0 */	lfs f1, lbl_80517040@sda21(r2)
/* 800B89FC 000B593C  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A00 000B5940  C0 02 8C E4 */	lfs f0, lbl_80517044@sda21(r2)
/* 800B8A04 000B5944  98 03 00 00 */	stb r0, 0(r3)
/* 800B8A08 000B5948  98 03 00 01 */	stb r0, 1(r3)
/* 800B8A0C 000B594C  D0 23 00 04 */	stfs f1, 4(r3)
/* 800B8A10 000B5950  D0 23 00 08 */	stfs f1, 8(r3)
/* 800B8A14 000B5954  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 800B8A18 000B5958  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 800B8A1C 000B595C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 800B8A20 000B5960  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800B8A24 000B5964  80 0D 8C 50 */	lwz r0, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A28 000B5968  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A2C 000B596C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800B8A30 000B5970  80 8D 8C 50 */	lwz r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A34 000B5974  83 ED 8C 4C */	lwz r31, streamList__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A38 000B5978  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800B8A3C 000B597C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 800B8A40 000B5980  4B FF 40 8D */	bl getSoundOffsetNumberFromID__8JAIBasicFUl
/* 800B8A44 000B5984  54 60 0B FC */	rlwinm r0, r3, 1, 0xf, 0x1e
/* 800B8A48 000B5988  7C 7F 02 14 */	add r3, r31, r0
/* 800B8A4C 000B598C  A0 03 00 04 */	lhz r0, 4(r3)
/* 800B8A50 000B5990  7F FF 02 14 */	add r31, r31, r0
/* 800B8A54 000B5994  4B FF 50 E9 */	bl getParamStreamPath__18JAIGlobalParameterFv
/* 800B8A58 000B5998  7C 64 1B 78 */	mr r4, r3
/* 800B8A5C 000B599C  38 61 00 08 */	addi r3, r1, 8
/* 800B8A60 000B59A0  48 01 1D F9 */	bl strcpy
/* 800B8A64 000B59A4  7F E4 FB 78 */	mr r4, r31
/* 800B8A68 000B59A8  38 61 00 08 */	addi r3, r1, 8
/* 800B8A6C 000B59AC  48 01 1D 7D */	bl strcat
/* 800B8A70 000B59B0  38 61 00 08 */	addi r3, r1, 8
/* 800B8A74 000B59B4  48 00 01 79 */	bl playDirect__Q27JAInter9StreamMgrFPc
/* 800B8A78 000B59B8  48 00 03 49 */	bl initChannel__Q27JAInter9StreamMgrFv
/* 800B8A7C 000B59BC  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8A80 000B59C0  88 03 00 02 */	lbz r0, 2(r3)
/* 800B8A84 000B59C4  28 00 00 00 */	cmplwi r0, 0
/* 800B8A88 000B59C8  41 82 00 0C */	beq .L_800B8A94
/* 800B8A8C 000B59CC  38 00 00 01 */	li r0, 1
/* 800B8A90 000B59D0  98 0D 8C 42 */	stb r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8A94:
/* 800B8A94 000B59D4  3C 60 80 0C */	lis r3, changeCallback__Q27JAInter9StreamMgrFv@ha
/* 800B8A98 000B59D8  38 03 88 F4 */	addi r0, r3, changeCallback__Q27JAInter9StreamMgrFv@l
/* 800B8A9C 000B59DC  90 0D 8C 7C */	stw r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8AA0:
/* 800B8AA0 000B59E0  80 01 01 14 */	lwz r0, 0x114(r1)
/* 800B8AA4 000B59E4  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 800B8AA8 000B59E8  7C 08 03 A6 */	mtlr r0
/* 800B8AAC 000B59EC  38 21 01 10 */	addi r1, r1, 0x110
/* 800B8AB0 000B59F0  4E 80 00 20 */	blr 
.endfn checkEntriedStream__Q27JAInter9StreamMgrFv

.fn systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv, global
/* 800B8AB4 000B59F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B8AB8 000B59F8  7C 08 02 A6 */	mflr r0
/* 800B8ABC 000B59FC  28 03 00 00 */	cmplwi r3, 0
/* 800B8AC0 000B5A00  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B8AC4 000B5A04  90 6D 8C 5C */	stw r3, systemStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8AC8 000B5A08  40 82 00 3C */	bne .L_800B8B04
/* 800B8ACC 000B5A0C  81 8D 8C 70 */	lwz r12, deallocCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8AD0 000B5A10  38 00 00 02 */	li r0, 2
/* 800B8AD4 000B5A14  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8AD8 000B5A18  28 0C 00 00 */	cmplwi r12, 0
/* 800B8ADC 000B5A1C  41 82 00 10 */	beq .L_800B8AEC
/* 800B8AE0 000B5A20  7D 89 03 A6 */	mtctr r12
/* 800B8AE4 000B5A24  4E 80 04 21 */	bctrl 
/* 800B8AE8 000B5A28  48 00 00 2C */	b .L_800B8B14
.L_800B8AEC:
/* 800B8AEC 000B5A2C  80 0D 8C 68 */	lwz r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8AF0 000B5A30  28 00 00 00 */	cmplwi r0, 0
/* 800B8AF4 000B5A34  41 82 00 20 */	beq .L_800B8B14
/* 800B8AF8 000B5A38  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8AFC 000B5A3C  4B FE E2 CD */	bl free__7JASHeapFv
/* 800B8B00 000B5A40  48 00 00 14 */	b .L_800B8B14
.L_800B8B04:
/* 800B8B04 000B5A44  28 03 00 01 */	cmplwi r3, 1
/* 800B8B08 000B5A48  40 82 00 0C */	bne .L_800B8B14
/* 800B8B0C 000B5A4C  38 00 00 01 */	li r0, 1
/* 800B8B10 000B5A50  98 0D 8C 43 */	stb r0, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8B14:
/* 800B8B14 000B5A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B8B18 000B5A58  7C 08 03 A6 */	mtlr r0
/* 800B8B1C 000B5A5C  38 21 00 10 */	addi r1, r1, 0x10
/* 800B8B20 000B5A60  4E 80 00 20 */	blr 
.endfn systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv

.fn prepareSystem__Q27JAInter9StreamMgrFl, global
/* 800B8B24 000B5A64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800B8B28 000B5A68  7C 08 02 A6 */	mflr r0
/* 800B8B2C 000B5A6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800B8B30 000B5A70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800B8B34 000B5A74  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800B8B38 000B5A78  7C 7E 1B 78 */	mr r30, r3
/* 800B8B3C 000B5A7C  81 8D 8C 6C */	lwz r12, allocCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B40 000B5A80  28 0C 00 00 */	cmplwi r12, 0
/* 800B8B44 000B5A84  41 82 00 20 */	beq .L_800B8B64
/* 800B8B48 000B5A88  7D 89 03 A6 */	mtctr r12
/* 800B8B4C 000B5A8C  4E 80 04 21 */	bctrl 
/* 800B8B50 000B5A90  90 81 00 0C */	stw r4, 0xc(r1)
/* 800B8B54 000B5A94  7C 7F 1B 78 */	mr r31, r3
/* 800B8B58 000B5A98  7C 85 23 78 */	mr r5, r4
/* 800B8B5C 000B5A9C  90 61 00 08 */	stw r3, 8(r1)
/* 800B8B60 000B5AA0  48 00 00 4C */	b .L_800B8BAC
.L_800B8B64:
/* 800B8B64 000B5AA4  80 0D 8C 68 */	lwz r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B68 000B5AA8  28 00 00 00 */	cmplwi r0, 0
/* 800B8B6C 000B5AAC  41 82 00 24 */	beq .L_800B8B90
/* 800B8B70 000B5AB0  4B FF 4F 7D */	bl getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
/* 800B8B74 000B5AB4  1C A3 00 0A */	mulli r5, r3, 0xa
/* 800B8B78 000B5AB8  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B7C 000B5ABC  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B80 000B5AC0  80 8D 8C 68 */	lwz r4, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B84 000B5AC4  7C 00 29 D6 */	mullw r0, r0, r5
/* 800B8B88 000B5AC8  54 05 F8 7E */	srwi r5, r0, 1
/* 800B8B8C 000B5ACC  4B FE DF 85 */	bl alloc__7JASHeapFP7JASHeapUl
.L_800B8B90:
/* 800B8B90 000B5AD0  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8B94 000B5AD4  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 800B8B98 000B5AD8  4B FF 4F 55 */	bl getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
/* 800B8B9C 000B5ADC  1C 63 00 0A */	mulli r3, r3, 0xa
/* 800B8BA0 000B5AE0  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8BA4 000B5AE4  7C 00 19 D6 */	mullw r0, r0, r3
/* 800B8BA8 000B5AE8  54 05 F8 7E */	srwi r5, r0, 1
.L_800B8BAC:
/* 800B8BAC 000B5AEC  3C 80 80 0C */	lis r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@ha
/* 800B8BB0 000B5AF0  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8BB4 000B5AF4  38 C4 8A B4 */	addi r6, r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@l
/* 800B8BB8 000B5AF8  38 E0 00 00 */	li r7, 0
/* 800B8BBC 000B5AFC  7F E4 FB 78 */	mr r4, r31
/* 800B8BC0 000B5B00  4B FF 05 CD */	bl init__13JASAramStreamFUlUlPFUlP13JASAramStreamPv_vPv
/* 800B8BC4 000B5B04  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8BC8 000B5B08  7F C4 F3 78 */	mr r4, r30
/* 800B8BCC 000B5B0C  38 A0 FF FF */	li r5, -1
/* 800B8BD0 000B5B10  4B FF 06 B5 */	bl prepare__13JASAramStreamFli
/* 800B8BD4 000B5B14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800B8BD8 000B5B18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800B8BDC 000B5B1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800B8BE0 000B5B20  7C 08 03 A6 */	mtlr r0
/* 800B8BE4 000B5B24  38 21 00 20 */	addi r1, r1, 0x20
/* 800B8BE8 000B5B28  4E 80 00 20 */	blr 
.endfn prepareSystem__Q27JAInter9StreamMgrFl

.fn playDirect__Q27JAInter9StreamMgrFPc, global
/* 800B8BEC 000B5B2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800B8BF0 000B5B30  7C 08 02 A6 */	mflr r0
/* 800B8BF4 000B5B34  90 01 00 24 */	stw r0, 0x24(r1)
/* 800B8BF8 000B5B38  38 00 00 00 */	li r0, 0
/* 800B8BFC 000B5B3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800B8C00 000B5B40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800B8C04 000B5B44  7C 7E 1B 78 */	mr r30, r3
/* 800B8C08 000B5B48  88 8D 8C 45 */	lbz r4, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C0C 000B5B4C  98 0D 8C 42 */	stb r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C10 000B5B50  28 04 00 00 */	cmplwi r4, 0
/* 800B8C14 000B5B54  90 0D 8C 7C */	stw r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C18 000B5B58  40 82 00 40 */	bne .L_800B8C58
/* 800B8C1C 000B5B5C  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C20 000B5B60  28 00 00 04 */	cmplwi r0, 4
/* 800B8C24 000B5B64  41 82 00 0C */	beq .L_800B8C30
/* 800B8C28 000B5B68  28 00 00 03 */	cmplwi r0, 3
/* 800B8C2C 000B5B6C  40 82 00 2C */	bne .L_800B8C58
.L_800B8C30:
/* 800B8C30 000B5B70  38 00 00 01 */	li r0, 1
/* 800B8C34 000B5B74  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C38 000B5B78  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C3C 000B5B7C  4B FF 07 B5 */	bl cancel__13JASAramStreamFv
/* 800B8C40 000B5B80  7F C3 F3 78 */	mr r3, r30
/* 800B8C44 000B5B84  48 02 35 21 */	bl DVDConvertPathToEntrynum
/* 800B8C48 000B5B88  38 00 00 01 */	li r0, 1
/* 800B8C4C 000B5B8C  90 6D 8C 78 */	stw r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C50 000B5B90  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C54 000B5B94  48 00 01 18 */	b .L_800B8D6C
.L_800B8C58:
/* 800B8C58 000B5B98  28 04 00 01 */	cmplwi r4, 1
/* 800B8C5C 000B5B9C  41 82 00 3C */	beq .L_800B8C98
/* 800B8C60 000B5BA0  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C64 000B5BA4  28 00 00 05 */	cmplwi r0, 5
/* 800B8C68 000B5BA8  40 82 00 30 */	bne .L_800B8C98
/* 800B8C6C 000B5BAC  38 00 00 01 */	li r0, 1
/* 800B8C70 000B5BB0  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C74 000B5BB4  98 0D 8C 45 */	stb r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C78 000B5BB8  38 80 00 00 */	li r4, 0
/* 800B8C7C 000B5BBC  4B FF 06 F5 */	bl stop__13JASAramStreamFUs
/* 800B8C80 000B5BC0  7F C3 F3 78 */	mr r3, r30
/* 800B8C84 000B5BC4  48 02 34 E1 */	bl DVDConvertPathToEntrynum
/* 800B8C88 000B5BC8  38 00 00 01 */	li r0, 1
/* 800B8C8C 000B5BCC  90 6D 8C 78 */	stw r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C90 000B5BD0  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C94 000B5BD4  48 00 00 D8 */	b .L_800B8D6C
.L_800B8C98:
/* 800B8C98 000B5BD8  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8C9C 000B5BDC  28 00 00 00 */	cmplwi r0, 0
/* 800B8CA0 000B5BE0  40 82 00 C0 */	bne .L_800B8D60
/* 800B8CA4 000B5BE4  7F C3 F3 78 */	mr r3, r30
/* 800B8CA8 000B5BE8  48 02 34 BD */	bl DVDConvertPathToEntrynum
/* 800B8CAC 000B5BEC  7F C3 F3 78 */	mr r3, r30
/* 800B8CB0 000B5BF0  48 02 34 B5 */	bl DVDConvertPathToEntrynum
/* 800B8CB4 000B5BF4  81 8D 8C 6C */	lwz r12, allocCallback__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8CB8 000B5BF8  7C 7E 1B 78 */	mr r30, r3
/* 800B8CBC 000B5BFC  90 6D 8C 78 */	stw r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8CC0 000B5C00  28 0C 00 00 */	cmplwi r12, 0
/* 800B8CC4 000B5C04  41 82 00 20 */	beq .L_800B8CE4
/* 800B8CC8 000B5C08  7D 89 03 A6 */	mtctr r12
/* 800B8CCC 000B5C0C  4E 80 04 21 */	bctrl 
/* 800B8CD0 000B5C10  90 81 00 0C */	stw r4, 0xc(r1)
/* 800B8CD4 000B5C14  7C 7F 1B 78 */	mr r31, r3
/* 800B8CD8 000B5C18  7C 85 23 78 */	mr r5, r4
/* 800B8CDC 000B5C1C  90 61 00 08 */	stw r3, 8(r1)
/* 800B8CE0 000B5C20  48 00 00 4C */	b .L_800B8D2C
.L_800B8CE4:
/* 800B8CE4 000B5C24  80 0D 8C 68 */	lwz r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8CE8 000B5C28  28 00 00 00 */	cmplwi r0, 0
/* 800B8CEC 000B5C2C  41 82 00 24 */	beq .L_800B8D10
/* 800B8CF0 000B5C30  4B FF 4D FD */	bl getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
/* 800B8CF4 000B5C34  1C A3 00 0A */	mulli r5, r3, 0xa
/* 800B8CF8 000B5C38  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8CFC 000B5C3C  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D00 000B5C40  80 8D 8C 68 */	lwz r4, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D04 000B5C44  7C 00 29 D6 */	mullw r0, r0, r5
/* 800B8D08 000B5C48  54 05 F8 7E */	srwi r5, r0, 1
/* 800B8D0C 000B5C4C  4B FE DE 05 */	bl alloc__7JASHeapFP7JASHeapUl
.L_800B8D10:
/* 800B8D10 000B5C50  80 6D 8C 64 */	lwz r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D14 000B5C54  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 800B8D18 000B5C58  4B FF 4D D5 */	bl getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
/* 800B8D1C 000B5C5C  1C 63 00 0A */	mulli r3, r3, 0xa
/* 800B8D20 000B5C60  80 0D 82 10 */	lwz r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D24 000B5C64  7C 00 19 D6 */	mullw r0, r0, r3
/* 800B8D28 000B5C68  54 05 F8 7E */	srwi r5, r0, 1
.L_800B8D2C:
/* 800B8D2C 000B5C6C  3C 80 80 0C */	lis r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@ha
/* 800B8D30 000B5C70  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D34 000B5C74  38 C4 8A B4 */	addi r6, r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@l
/* 800B8D38 000B5C78  38 E0 00 00 */	li r7, 0
/* 800B8D3C 000B5C7C  7F E4 FB 78 */	mr r4, r31
/* 800B8D40 000B5C80  4B FF 04 4D */	bl init__13JASAramStreamFUlUlPFUlP13JASAramStreamPv_vPv
/* 800B8D44 000B5C84  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D48 000B5C88  7F C4 F3 78 */	mr r4, r30
/* 800B8D4C 000B5C8C  38 A0 FF FF */	li r5, -1
/* 800B8D50 000B5C90  4B FF 05 35 */	bl prepare__13JASAramStreamFli
/* 800B8D54 000B5C94  38 00 00 04 */	li r0, 4
/* 800B8D58 000B5C98  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D5C 000B5C9C  48 00 00 10 */	b .L_800B8D6C
.L_800B8D60:
/* 800B8D60 000B5CA0  7F C3 F3 78 */	mr r3, r30
/* 800B8D64 000B5CA4  48 02 34 01 */	bl DVDConvertPathToEntrynum
/* 800B8D68 000B5CA8  90 6D 8C 78 */	stw r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8D6C:
/* 800B8D6C 000B5CAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800B8D70 000B5CB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800B8D74 000B5CB4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800B8D78 000B5CB8  7C 08 03 A6 */	mtlr r0
/* 800B8D7C 000B5CBC  38 21 00 20 */	addi r1, r1, 0x20
/* 800B8D80 000B5CC0  4E 80 00 20 */	blr 
.endfn playDirect__Q27JAInter9StreamMgrFPc

.fn stopDirect__Q27JAInter9StreamMgrFv, global
/* 800B8D84 000B5CC4  80 0D 8C 60 */	lwz r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D88 000B5CC8  28 00 00 05 */	cmplwi r0, 5
/* 800B8D8C 000B5CCC  40 82 00 10 */	bne .L_800B8D9C
/* 800B8D90 000B5CD0  38 00 00 06 */	li r0, 6
/* 800B8D94 000B5CD4  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8D98 000B5CD8  48 00 00 1C */	b .L_800B8DB4
.L_800B8D9C:
/* 800B8D9C 000B5CDC  28 00 00 03 */	cmplwi r0, 3
/* 800B8DA0 000B5CE0  41 82 00 0C */	beq .L_800B8DAC
/* 800B8DA4 000B5CE4  28 00 00 04 */	cmplwi r0, 4
/* 800B8DA8 000B5CE8  40 82 00 0C */	bne .L_800B8DB4
.L_800B8DAC:
/* 800B8DAC 000B5CEC  38 00 00 07 */	li r0, 7
/* 800B8DB0 000B5CF0  90 0D 8C 60 */	stw r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
.L_800B8DB4:
/* 800B8DB4 000B5CF4  38 00 00 00 */	li r0, 0
/* 800B8DB8 000B5CF8  90 0D 8C 78 */	stw r0, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8DBC 000B5CFC  4E 80 00 20 */	blr 
.endfn stopDirect__Q27JAInter9StreamMgrFv

.fn initChannel__Q27JAInter9StreamMgrFv, global
/* 800B8DC0 000B5D00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800B8DC4 000B5D04  7C 08 02 A6 */	mflr r0
/* 800B8DC8 000B5D08  90 01 00 24 */	stw r0, 0x24(r1)
/* 800B8DCC 000B5D0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800B8DD0 000B5D10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800B8DD4 000B5D14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800B8DD8 000B5D18  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8DDC 000B5D1C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 800B8DE0 000B5D20  83 E3 00 00 */	lwz r31, 0(r3)
/* 800B8DE4 000B5D24  28 1F 00 00 */	cmplwi r31, 0
/* 800B8DE8 000B5D28  41 82 00 A8 */	beq .L_800B8E90
/* 800B8DEC 000B5D2C  48 03 5E 4D */	bl OSDisableInterrupts
/* 800B8DF0 000B5D30  3B A0 00 00 */	li r29, 0
/* 800B8DF4 000B5D34  7C 7E 1B 78 */	mr r30, r3
/* 800B8DF8 000B5D38  48 00 00 84 */	b .L_800B8E7C
.L_800B8DFC:
/* 800B8DFC 000B5D3C  57 E0 07 FF */	clrlwi. r0, r31, 0x1f
/* 800B8E00 000B5D40  41 82 00 1C */	beq .L_800B8E1C
/* 800B8E04 000B5D44  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8E08 000B5D48  7F A4 EB 78 */	mr r4, r29
/* 800B8E0C 000B5D4C  C0 22 8C E8 */	lfs f1, lbl_80517048@sda21(r2)
/* 800B8E10 000B5D50  38 A0 00 00 */	li r5, 0
/* 800B8E14 000B5D54  4B FF C2 A5 */	bl setChannelPan__9JAIStreamFUcfUl
/* 800B8E18 000B5D58  48 00 00 40 */	b .L_800B8E58
.L_800B8E1C:
/* 800B8E1C 000B5D5C  57 E0 07 BD */	rlwinm. r0, r31, 0, 0x1e, 0x1e
/* 800B8E20 000B5D60  41 82 00 1C */	beq .L_800B8E3C
/* 800B8E24 000B5D64  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8E28 000B5D68  7F A4 EB 78 */	mr r4, r29
/* 800B8E2C 000B5D6C  C0 22 8C E0 */	lfs f1, lbl_80517040@sda21(r2)
/* 800B8E30 000B5D70  38 A0 00 00 */	li r5, 0
/* 800B8E34 000B5D74  4B FF C2 85 */	bl setChannelPan__9JAIStreamFUcfUl
/* 800B8E38 000B5D78  48 00 00 20 */	b .L_800B8E58
.L_800B8E3C:
/* 800B8E3C 000B5D7C  57 E0 07 BF */	clrlwi. r0, r31, 0x1e
/* 800B8E40 000B5D80  41 82 00 18 */	beq .L_800B8E58
/* 800B8E44 000B5D84  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8E48 000B5D88  7F A4 EB 78 */	mr r4, r29
/* 800B8E4C 000B5D8C  C0 22 8C E4 */	lfs f1, lbl_80517044@sda21(r2)
/* 800B8E50 000B5D90  38 A0 00 00 */	li r5, 0
/* 800B8E54 000B5D94  4B FF C2 65 */	bl setChannelPan__9JAIStreamFUcfUl
.L_800B8E58:
/* 800B8E58 000B5D98  57 E0 07 7B */	rlwinm. r0, r31, 0, 0x1d, 0x1d
/* 800B8E5C 000B5D9C  41 82 00 18 */	beq .L_800B8E74
/* 800B8E60 000B5DA0  80 6D 8C 50 */	lwz r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8E64 000B5DA4  7F A4 EB 78 */	mr r4, r29
/* 800B8E68 000B5DA8  C0 22 8C E8 */	lfs f1, lbl_80517048@sda21(r2)
/* 800B8E6C 000B5DAC  38 A0 00 00 */	li r5, 0
/* 800B8E70 000B5DB0  4B FF C1 A9 */	bl setChannelVolume__9JAIStreamFUcfUl
.L_800B8E74:
/* 800B8E74 000B5DB4  57 FF E1 3E */	srwi r31, r31, 4
/* 800B8E78 000B5DB8  3B BD 00 01 */	addi r29, r29, 1
.L_800B8E7C:
/* 800B8E7C 000B5DBC  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 800B8E80 000B5DC0  28 00 00 06 */	cmplwi r0, 6
/* 800B8E84 000B5DC4  41 80 FF 78 */	blt .L_800B8DFC
/* 800B8E88 000B5DC8  7F C3 F3 78 */	mr r3, r30
/* 800B8E8C 000B5DCC  48 03 5D D5 */	bl OSRestoreInterrupts
.L_800B8E90:
/* 800B8E90 000B5DD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800B8E94 000B5DD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800B8E98 000B5DD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800B8E9C 000B5DDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800B8EA0 000B5DE0  7C 08 03 A6 */	mtlr r0
/* 800B8EA4 000B5DE4  38 21 00 20 */	addi r1, r1, 0x20
/* 800B8EA8 000B5DE8  4E 80 00 20 */	blr 
.endfn initChannel__Q27JAInter9StreamMgrFv

.fn getStreamObjectPointer__Q27JAInter9StreamMgrFv, global
/* 800B8EAC 000B5DEC  80 6D 8C 58 */	lwz r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8EB0 000B5DF0  4E 80 00 20 */	blr 
.endfn getStreamObjectPointer__Q27JAInter9StreamMgrFv

.fn getSystemStatus__Q27JAInter9StreamMgrFv, global
/* 800B8EB4 000B5DF4  80 6D 8C 5C */	lwz r3, systemStatus__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8EB8 000B5DF8  4E 80 00 20 */	blr 
.endfn getSystemStatus__Q27JAInter9StreamMgrFv

.fn getDecodedBufferBlocks__Q27JAInter9StreamMgrFv, global
/* 800B8EBC 000B5DFC  80 6D 82 14 */	lwz r3, decodedBufferBlocks__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8EC0 000B5E00  4E 80 00 20 */	blr 
.endfn getDecodedBufferBlocks__Q27JAInter9StreamMgrFv

.fn getDecodedBufferSize__Q27JAInter9StreamMgrFUl, global
/* 800B8EC4 000B5E04  80 0D 82 14 */	lwz r0, decodedBufferBlocks__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8EC8 000B5E08  80 8D 82 10 */	lwz r4, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8ECC 000B5E0C  7C 00 19 D6 */	mullw r0, r0, r3
/* 800B8ED0 000B5E10  7C 04 01 D6 */	mullw r0, r4, r0
/* 800B8ED4 000B5E14  54 03 F8 7E */	srwi r3, r0, 1
/* 800B8ED8 000B5E18  4E 80 00 20 */	blr 
.endfn getDecodedBufferSize__Q27JAInter9StreamMgrFUl

.fn getChannelMax__Q27JAInter9StreamMgrFv, global
/* 800B8EDC 000B5E1C  80 6D 82 10 */	lwz r3, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
/* 800B8EE0 000B5E20  4E 80 00 20 */	blr 
.endfn getChannelMax__Q27JAInter9StreamMgrFv
