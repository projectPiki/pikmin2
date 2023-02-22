.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_JSTObjectCamera_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game5P2JST12ObjectCamera, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game5P2JST12ObjectCameraFv
	.4byte JSGFGetType__Q26JStage7TCameraCFv
	.4byte JSGGetName__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGUpdate__Q26JStage7TObjectFv
	.4byte JSGGetFlag__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetFlag__Q34Game5P2JST12ObjectCameraFUl
	.4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
	.4byte JSGSetData__Q34Game5P2JST12ObjectCameraFUlPCvUl
	.4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
	.4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
	.4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
	.4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
	.4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
	.4byte JSGGetProjectionType__Q26JStage7TCameraCFv
	.4byte JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection
	.4byte JSGGetProjectionNear__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetProjectionNear__Q34Game5P2JST12ObjectCameraFf
	.4byte JSGGetProjectionFar__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetProjectionFar__Q34Game5P2JST12ObjectCameraFf
	.4byte JSGGetProjectionFovy__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetProjectionFovy__Q34Game5P2JST12ObjectCameraFf
	.4byte JSGGetProjectionAspect__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetProjectionAspect__Q34Game5P2JST12ObjectCameraFf
	.4byte JSGGetProjectionField__Q26JStage7TCameraCFPf
	.4byte JSGSetProjectionField__Q26JStage7TCameraFPCf
	.4byte JSGGetViewType__Q26JStage7TCameraCFv
	.4byte JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView
	.4byte JSGGetViewPosition__Q34Game5P2JST12ObjectCameraCFP3Vec
	.4byte JSGSetViewPosition__Q34Game5P2JST12ObjectCameraFRC3Vec
	.4byte JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec
	.4byte JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec
	.4byte JSGGetViewTargetPosition__Q34Game5P2JST12ObjectCameraCFP3Vec
	.4byte JSGSetViewTargetPosition__Q34Game5P2JST12ObjectCameraFRC3Vec
	.4byte JSGGetViewRoll__Q34Game5P2JST12ObjectCameraCFv
	.4byte JSGSetViewRoll__Q34Game5P2JST12ObjectCameraFf
	.4byte 0
	.4byte 0
	.4byte "@4@reset__Q34Game5P2JST12ObjectCameraFv"
	.4byte "@4@update__Q34Game5P2JST12ObjectCameraFv"
	.4byte "@4@start__Q34Game5P2JST12ObjectCameraFv"
	.4byte "@4@stop__Q34Game5P2JST12ObjectCameraFv"
	.4byte parseUserData___Q34Game5P2JST10ObjectBaseFUlPCv
	.4byte updateCamera__Q34Game5P2JST12ObjectCameraFv
	.4byte setProjection__Q34Game5P2JST12ObjectCameraFv
	.4byte setView__Q34Game5P2JST12ObjectCameraFv
	.4byte isRunning__Q34Game5P2JST12ObjectCameraFv
	.4byte reset__Q34Game5P2JST12ObjectCameraFv
	.4byte update__Q34Game5P2JST12ObjectCameraFv
	.4byte start__Q34Game5P2JST12ObjectCameraFv
	.4byte stop__Q34Game5P2JST12ObjectCameraFv
.endobj __vt__Q34Game5P2JST12ObjectCamera

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj sFovBackup__Q24Game5P2JST, local
	.skip 0x4
.endobj sFovBackup__Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520698, local
	.float 45.0
.endobj lbl_80520698
.balign 8
.obj lbl_805206A0, local
	.8byte 0x4330000080000000
.endobj lbl_805206A0
.obj lbl_805206A8, local
	.float 0.0
.endobj lbl_805206A8
.obj lbl_805206AC, local
	.float 1.0
.endobj lbl_805206AC
.obj lbl_805206B0, local
	.float 0.017453292
.endobj lbl_805206B0
.obj lbl_805206B4, local
	.float 200.0
.endobj lbl_805206B4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game5P2JST12ObjectCameraFPCcPQ24Game11MoviePlayer, global
/* 8042F6E4 0042C624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042F6E8 0042C628  7C 08 02 A6 */	mflr r0
/* 8042F6EC 0042C62C  3C C0 80 4A */	lis r6, __vt__Q26JStage7TObject@ha
/* 8042F6F0 0042C630  39 40 00 00 */	li r10, 0
/* 8042F6F4 0042C634  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042F6F8 0042C638  38 06 36 80 */	addi r0, r6, __vt__Q26JStage7TObject@l
/* 8042F6FC 0042C63C  3C C0 80 4F */	lis r6, __vt__Q34Game5P2JST10ObjectBase@ha
/* 8042F700 0042C640  39 20 FF FF */	li r9, -1
/* 8042F704 0042C644  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042F708 0042C648  7C 7F 1B 78 */	mr r31, r3
/* 8042F70C 0042C64C  3C 60 80 4A */	lis r3, __vt__Q26JStage7TCamera@ha
/* 8042F710 0042C650  C0 0D 9B 64 */	lfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8042F714 0042C654  90 1F 00 00 */	stw r0, 0(r31)
/* 8042F718 0042C658  38 03 35 E8 */	addi r0, r3, __vt__Q26JStage7TCamera@l
/* 8042F71C 0042C65C  3C 60 80 4F */	lis r3, __vt__Q34Game5P2JST12ObjectCamera@ha
/* 8042F720 0042C660  7F E7 FB 78 */	mr r7, r31
/* 8042F724 0042C664  90 1F 00 00 */	stw r0, 0(r31)
/* 8042F728 0042C668  39 03 C1 1C */	addi r8, r3, __vt__Q34Game5P2JST12ObjectCamera@l
/* 8042F72C 0042C66C  38 06 C0 F0 */	addi r0, r6, __vt__Q34Game5P2JST10ObjectBase@l
/* 8042F730 0042C670  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8042F734 0042C674  90 1F 00 04 */	stw r0, 4(r31)
/* 8042F738 0042C678  38 C3 C1 10 */	addi r6, r3, govNAN___Q24Game5P2JST@l
/* 8042F73C 0042C67C  38 E8 00 94 */	addi r7, r8, 0x94
/* 8042F740 0042C680  80 06 00 08 */	lwz r0, 8(r6)
/* 8042F744 0042C684  90 BF 00 08 */	stw r5, 8(r31)
/* 8042F748 0042C688  38 60 01 44 */	li r3, 0x144
/* 8042F74C 0042C68C  80 A6 00 00 */	lwz r5, 0(r6)
/* 8042F750 0042C690  90 9F 00 0C */	stw r4, 0xc(r31)
/* 8042F754 0042C694  80 86 00 04 */	lwz r4, 4(r6)
/* 8042F758 0042C698  91 5F 00 10 */	stw r10, 0x10(r31)
/* 8042F75C 0042C69C  91 3F 00 14 */	stw r9, 0x14(r31)
/* 8042F760 0042C6A0  91 5F 00 18 */	stw r10, 0x18(r31)
/* 8042F764 0042C6A4  91 5F 00 1C */	stw r10, 0x1c(r31)
/* 8042F768 0042C6A8  91 1F 00 00 */	stw r8, 0(r31)
/* 8042F76C 0042C6AC  90 FF 00 04 */	stw r7, 4(r31)
/* 8042F770 0042C6B0  90 BF 00 90 */	stw r5, 0x90(r31)
/* 8042F774 0042C6B4  90 9F 00 94 */	stw r4, 0x94(r31)
/* 8042F778 0042C6B8  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8042F77C 0042C6BC  90 BF 00 9C */	stw r5, 0x9c(r31)
/* 8042F780 0042C6C0  90 9F 00 A0 */	stw r4, 0xa0(r31)
/* 8042F784 0042C6C4  90 1F 00 A4 */	stw r0, 0xa4(r31)
/* 8042F788 0042C6C8  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 8042F78C 0042C6CC  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 8042F790 0042C6D0  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8042F794 0042C6D4  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8042F798 0042C6D8  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8042F79C 0042C6DC  91 5F 00 BC */	stw r10, 0xbc(r31)
/* 8042F7A0 0042C6E0  99 5F 00 C4 */	stb r10, 0xc4(r31)
/* 8042F7A4 0042C6E4  4B BF 47 01 */	bl __nw__FUl
/* 8042F7A8 0042C6E8  7C 60 1B 79 */	or. r0, r3, r3
/* 8042F7AC 0042C6EC  41 82 00 0C */	beq .L_8042F7B8
/* 8042F7B0 0042C6F0  4B FE AE 99 */	bl __ct__6CameraFv
/* 8042F7B4 0042C6F4  7C 60 1B 78 */	mr r0, r3
.L_8042F7B8:
/* 8042F7B8 0042C6F8  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8042F7BC 0042C6FC  7F E3 FB 78 */	mr r3, r31
/* 8042F7C0 0042C700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042F7C4 0042C704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042F7C8 0042C708  7C 08 03 A6 */	mtlr r0
/* 8042F7CC 0042C70C  38 21 00 10 */	addi r1, r1, 0x10
/* 8042F7D0 0042C710  4E 80 00 20 */	blr 
.endfn __ct__Q34Game5P2JST12ObjectCameraFPCcPQ24Game11MoviePlayer

.fn __dt__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F7D4 0042C714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042F7D8 0042C718  7C 08 02 A6 */	mflr r0
/* 8042F7DC 0042C71C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042F7E0 0042C720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042F7E4 0042C724  7C 9F 23 78 */	mr r31, r4
/* 8042F7E8 0042C728  93 C1 00 08 */	stw r30, 8(r1)
/* 8042F7EC 0042C72C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042F7F0 0042C730  41 82 00 30 */	beq .L_8042F820
/* 8042F7F4 0042C734  3C A0 80 4F */	lis r5, __vt__Q34Game5P2JST12ObjectCamera@ha
/* 8042F7F8 0042C738  38 80 00 00 */	li r4, 0
/* 8042F7FC 0042C73C  38 A5 C1 1C */	addi r5, r5, __vt__Q34Game5P2JST12ObjectCamera@l
/* 8042F800 0042C740  90 BE 00 00 */	stw r5, 0(r30)
/* 8042F804 0042C744  38 05 00 94 */	addi r0, r5, 0x94
/* 8042F808 0042C748  90 1E 00 04 */	stw r0, 4(r30)
/* 8042F80C 0042C74C  4B C6 8F E9 */	bl __dt__Q26JStage7TCameraFv
/* 8042F810 0042C750  7F E0 07 35 */	extsh. r0, r31
/* 8042F814 0042C754  40 81 00 0C */	ble .L_8042F820
/* 8042F818 0042C758  7F C3 F3 78 */	mr r3, r30
/* 8042F81C 0042C75C  4B BF 48 99 */	bl __dl__FPv
.L_8042F820:
/* 8042F820 0042C760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042F824 0042C764  7F C3 F3 78 */	mr r3, r30
/* 8042F828 0042C768  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042F82C 0042C76C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042F830 0042C770  7C 08 03 A6 */	mtlr r0
/* 8042F834 0042C774  38 21 00 10 */	addi r1, r1, 0x10
/* 8042F838 0042C778  4E 80 00 20 */	blr 
.endfn __dt__Q34Game5P2JST12ObjectCameraFv

.fn reset__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F83C 0042C77C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042F840 0042C780  7C 08 02 A6 */	mflr r0
/* 8042F844 0042C784  3C 80 80 4F */	lis r4, govNAN___Q24Game5P2JST@ha
/* 8042F848 0042C788  C0 2D 9B 64 */	lfs f1, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8042F84C 0042C78C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042F850 0042C790  C0 02 23 38 */	lfs f0, lbl_80520698@sda21(r2)
/* 8042F854 0042C794  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042F858 0042C798  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042F85C 0042C79C  7C 7E 1B 78 */	mr r30, r3
/* 8042F860 0042C7A0  38 64 C1 10 */	addi r3, r4, govNAN___Q24Game5P2JST@l
/* 8042F864 0042C7A4  C0 83 00 00 */	lfs f4, 0(r3)
/* 8042F868 0042C7A8  C0 63 00 04 */	lfs f3, 4(r3)
/* 8042F86C 0042C7AC  D0 9E 00 90 */	stfs f4, 0x90(r30)
/* 8042F870 0042C7B0  C0 43 00 08 */	lfs f2, 8(r3)
/* 8042F874 0042C7B4  D0 7E 00 94 */	stfs f3, 0x94(r30)
/* 8042F878 0042C7B8  D0 5E 00 98 */	stfs f2, 0x98(r30)
/* 8042F87C 0042C7BC  D0 9E 00 9C */	stfs f4, 0x9c(r30)
/* 8042F880 0042C7C0  D0 7E 00 A0 */	stfs f3, 0xa0(r30)
/* 8042F884 0042C7C4  D0 5E 00 A4 */	stfs f2, 0xa4(r30)
/* 8042F888 0042C7C8  D0 3E 00 A8 */	stfs f1, 0xa8(r30)
/* 8042F88C 0042C7CC  D0 3E 00 AC */	stfs f1, 0xac(r30)
/* 8042F890 0042C7D0  D0 3E 00 B0 */	stfs f1, 0xb0(r30)
/* 8042F894 0042C7D4  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 8042F898 0042C7D8  4B FF 39 8D */	bl getRenderModeObj__6SystemFv
/* 8042F89C 0042C7DC  A3 E3 00 06 */	lhz r31, 6(r3)
/* 8042F8A0 0042C7E0  4B FF 39 85 */	bl getRenderModeObj__6SystemFv
/* 8042F8A4 0042C7E4  A0 63 00 04 */	lhz r3, 4(r3)
/* 8042F8A8 0042C7E8  3C 00 43 30 */	lis r0, 0x4330
/* 8042F8AC 0042C7EC  90 01 00 08 */	stw r0, 8(r1)
/* 8042F8B0 0042C7F0  7C 03 FB D6 */	divw r0, r3, r31
/* 8042F8B4 0042C7F4  C8 22 23 40 */	lfd f1, lbl_805206A0@sda21(r2)
/* 8042F8B8 0042C7F8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8042F8BC 0042C7FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042F8C0 0042C800  C8 01 00 08 */	lfd f0, 8(r1)
/* 8042F8C4 0042C804  EC 00 08 28 */	fsubs f0, f0, f1
/* 8042F8C8 0042C808  D0 1E 00 B8 */	stfs f0, 0xb8(r30)
/* 8042F8CC 0042C80C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042F8D0 0042C810  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042F8D4 0042C814  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042F8D8 0042C818  7C 08 03 A6 */	mtlr r0
/* 8042F8DC 0042C81C  38 21 00 20 */	addi r1, r1, 0x20
/* 8042F8E0 0042C820  4E 80 00 20 */	blr 
.endfn reset__Q34Game5P2JST12ObjectCameraFv

.fn update__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F8E4 0042C824  4E 80 00 20 */	blr 
.endfn update__Q34Game5P2JST12ObjectCameraFv

.fn setProjection__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F8E8 0042C828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042F8EC 0042C82C  7C 08 02 A6 */	mflr r0
/* 8042F8F0 0042C830  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042F8F4 0042C834  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 8042F8F8 0042C838  4B FE B4 4D */	bl setProjection__6CameraFv
/* 8042F8FC 0042C83C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042F900 0042C840  7C 08 03 A6 */	mtlr r0
/* 8042F904 0042C844  38 21 00 10 */	addi r1, r1, 0x10
/* 8042F908 0042C848  4E 80 00 20 */	blr 
.endfn setProjection__Q34Game5P2JST12ObjectCameraFv

.fn setView__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F90C 0042C84C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8042F910 0042C850  7C 08 02 A6 */	mflr r0
/* 8042F914 0042C854  C0 22 23 48 */	lfs f1, lbl_805206A8@sda21(r2)
/* 8042F918 0042C858  90 01 00 84 */	stw r0, 0x84(r1)
/* 8042F91C 0042C85C  38 A1 00 08 */	addi r5, r1, 8
/* 8042F920 0042C860  C0 02 23 4C */	lfs f0, lbl_805206AC@sda21(r2)
/* 8042F924 0042C864  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8042F928 0042C868  7C 7F 1B 78 */	mr r31, r3
/* 8042F92C 0042C86C  38 61 00 44 */	addi r3, r1, 0x44
/* 8042F930 0042C870  D0 21 00 08 */	stfs f1, 8(r1)
/* 8042F934 0042C874  38 9F 00 90 */	addi r4, r31, 0x90
/* 8042F938 0042C878  38 DF 00 9C */	addi r6, r31, 0x9c
/* 8042F93C 0042C87C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8042F940 0042C880  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8042F944 0042C884  4B CB AF B5 */	bl C_MTXLookAt
/* 8042F948 0042C888  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 8042F94C 0042C88C  38 61 00 14 */	addi r3, r1, 0x14
/* 8042F950 0042C890  C0 22 23 50 */	lfs f1, lbl_805206B0@sda21(r2)
/* 8042F954 0042C894  38 80 00 7A */	li r4, 0x7a
/* 8042F958 0042C898  FC 00 00 50 */	fneg f0, f0
/* 8042F95C 0042C89C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8042F960 0042C8A0  4B CB AB B5 */	bl PSMTXRotRad
/* 8042F964 0042C8A4  38 61 00 14 */	addi r3, r1, 0x14
/* 8042F968 0042C8A8  38 81 00 44 */	addi r4, r1, 0x44
/* 8042F96C 0042C8AC  38 BF 00 60 */	addi r5, r31, 0x60
/* 8042F970 0042C8B0  4B CB A9 91 */	bl PSMTXConcat
/* 8042F974 0042C8B4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8042F978 0042C8B8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8042F97C 0042C8BC  7C 08 03 A6 */	mtlr r0
/* 8042F980 0042C8C0  38 21 00 80 */	addi r1, r1, 0x80
/* 8042F984 0042C8C4  4E 80 00 20 */	blr 
.endfn setView__Q34Game5P2JST12ObjectCameraFv

.fn updateCamera__Q34Game5P2JST12ObjectCameraFv, global
/* 8042F988 0042C8C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042F98C 0042C8CC  7C 08 02 A6 */	mflr r0
/* 8042F990 0042C8D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042F994 0042C8D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042F998 0042C8D8  7C 7F 1B 78 */	mr r31, r3
/* 8042F99C 0042C8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8042F9A0 0042C8E0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8042F9A4 0042C8E4  7D 89 03 A6 */	mtctr r12
/* 8042F9A8 0042C8E8  4E 80 04 21 */	bctrl 
/* 8042F9AC 0042C8EC  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8042F9B0 0042C8F0  38 1F 00 60 */	addi r0, r31, 0x60
/* 8042F9B4 0042C8F4  90 03 00 30 */	stw r0, 0x30(r3)
/* 8042F9B8 0042C8F8  C0 0D 9B 68 */	lfs f0, sFovBackup__Q24Game5P2JST@sda21(r13)
/* 8042F9BC 0042C8FC  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8042F9C0 0042C900  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8042F9C4 0042C904  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8042F9C8 0042C908  D0 0D 9B 68 */	stfs f0, sFovBackup__Q24Game5P2JST@sda21(r13)
/* 8042F9CC 0042C90C  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 8042F9D0 0042C910  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8042F9D4 0042C914  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 8042F9D8 0042C918  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 8042F9DC 0042C91C  D0 23 00 74 */	stfs f1, 0x74(r3)
/* 8042F9E0 0042C920  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042F9E4 0042C924  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042F9E8 0042C928  7C 08 03 A6 */	mtlr r0
/* 8042F9EC 0042C92C  38 21 00 10 */	addi r1, r1, 0x10
/* 8042F9F0 0042C930  4E 80 00 20 */	blr 
.endfn updateCamera__Q34Game5P2JST12ObjectCameraFv

.fn JSGGetName__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042F9F4 0042C934  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8042F9F8 0042C938  4E 80 00 20 */	blr 
.endfn JSGGetName__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetFlag__Q34Game5P2JST12ObjectCameraFUl, global
/* 8042F9FC 0042C93C  90 83 00 10 */	stw r4, 0x10(r3)
/* 8042FA00 0042C940  4E 80 00 20 */	blr 
.endfn JSGSetFlag__Q34Game5P2JST12ObjectCameraFUl

.fn JSGGetFlag__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FA04 0042C944  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8042FA08 0042C948  4E 80 00 20 */	blr 
.endfn JSGGetFlag__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetData__Q34Game5P2JST12ObjectCameraFUlPCvUl, global
/* 8042FA0C 0042C94C  90 83 00 14 */	stw r4, 0x14(r3)
/* 8042FA10 0042C950  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8042FA14 0042C954  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 8042FA18 0042C958  4E 80 00 20 */	blr 
.endfn JSGSetData__Q34Game5P2JST12ObjectCameraFUlPCvUl

.fn JSGSetViewPosition__Q34Game5P2JST12ObjectCameraFRC3Vec, global
/* 8042FA1C 0042C95C  C0 04 00 00 */	lfs f0, 0(r4)
/* 8042FA20 0042C960  C0 24 00 04 */	lfs f1, 4(r4)
/* 8042FA24 0042C964  D0 03 00 90 */	stfs f0, 0x90(r3)
/* 8042FA28 0042C968  C0 04 00 08 */	lfs f0, 8(r4)
/* 8042FA2C 0042C96C  D0 23 00 94 */	stfs f1, 0x94(r3)
/* 8042FA30 0042C970  D0 03 00 98 */	stfs f0, 0x98(r3)
/* 8042FA34 0042C974  4E 80 00 20 */	blr 
.endfn JSGSetViewPosition__Q34Game5P2JST12ObjectCameraFRC3Vec

.fn JSGGetViewPosition__Q34Game5P2JST12ObjectCameraCFP3Vec, global
/* 8042FA38 0042C978  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 8042FA3C 0042C97C  C0 23 00 94 */	lfs f1, 0x94(r3)
/* 8042FA40 0042C980  D0 04 00 00 */	stfs f0, 0(r4)
/* 8042FA44 0042C984  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8042FA48 0042C988  D0 24 00 04 */	stfs f1, 4(r4)
/* 8042FA4C 0042C98C  D0 04 00 08 */	stfs f0, 8(r4)
/* 8042FA50 0042C990  4E 80 00 20 */	blr 
.endfn JSGGetViewPosition__Q34Game5P2JST12ObjectCameraCFP3Vec

.fn JSGSetViewTargetPosition__Q34Game5P2JST12ObjectCameraFRC3Vec, global
/* 8042FA54 0042C994  C0 04 00 00 */	lfs f0, 0(r4)
/* 8042FA58 0042C998  C0 24 00 04 */	lfs f1, 4(r4)
/* 8042FA5C 0042C99C  D0 03 00 9C */	stfs f0, 0x9c(r3)
/* 8042FA60 0042C9A0  C0 04 00 08 */	lfs f0, 8(r4)
/* 8042FA64 0042C9A4  D0 23 00 A0 */	stfs f1, 0xa0(r3)
/* 8042FA68 0042C9A8  D0 03 00 A4 */	stfs f0, 0xa4(r3)
/* 8042FA6C 0042C9AC  4E 80 00 20 */	blr 
.endfn JSGSetViewTargetPosition__Q34Game5P2JST12ObjectCameraFRC3Vec

.fn JSGGetViewTargetPosition__Q34Game5P2JST12ObjectCameraCFP3Vec, global
/* 8042FA70 0042C9B0  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8042FA74 0042C9B4  C0 23 00 A0 */	lfs f1, 0xa0(r3)
/* 8042FA78 0042C9B8  D0 04 00 00 */	stfs f0, 0(r4)
/* 8042FA7C 0042C9BC  C0 03 00 A4 */	lfs f0, 0xa4(r3)
/* 8042FA80 0042C9C0  D0 24 00 04 */	stfs f1, 4(r4)
/* 8042FA84 0042C9C4  D0 04 00 08 */	stfs f0, 8(r4)
/* 8042FA88 0042C9C8  4E 80 00 20 */	blr 
.endfn JSGGetViewTargetPosition__Q34Game5P2JST12ObjectCameraCFP3Vec

.fn JSGSetViewRoll__Q34Game5P2JST12ObjectCameraFf, global
/* 8042FA8C 0042C9CC  D0 23 00 A8 */	stfs f1, 0xa8(r3)
/* 8042FA90 0042C9D0  4E 80 00 20 */	blr 
.endfn JSGSetViewRoll__Q34Game5P2JST12ObjectCameraFf

.fn JSGGetViewRoll__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FA94 0042C9D4  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 8042FA98 0042C9D8  4E 80 00 20 */	blr 
.endfn JSGGetViewRoll__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetProjectionNear__Q34Game5P2JST12ObjectCameraFf, global
/* 8042FA9C 0042C9DC  D0 23 00 AC */	stfs f1, 0xac(r3)
/* 8042FAA0 0042C9E0  4E 80 00 20 */	blr 
.endfn JSGSetProjectionNear__Q34Game5P2JST12ObjectCameraFf

.fn JSGGetProjectionNear__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FAA4 0042C9E4  C0 23 00 AC */	lfs f1, 0xac(r3)
/* 8042FAA8 0042C9E8  4E 80 00 20 */	blr 
.endfn JSGGetProjectionNear__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetProjectionFar__Q34Game5P2JST12ObjectCameraFf, global
/* 8042FAAC 0042C9EC  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 8042FAB0 0042C9F0  4E 80 00 20 */	blr 
.endfn JSGSetProjectionFar__Q34Game5P2JST12ObjectCameraFf

.fn JSGGetProjectionFar__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FAB4 0042C9F4  C0 23 00 B0 */	lfs f1, 0xb0(r3)
/* 8042FAB8 0042C9F8  4E 80 00 20 */	blr 
.endfn JSGGetProjectionFar__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetProjectionFovy__Q34Game5P2JST12ObjectCameraFf, global
/* 8042FABC 0042C9FC  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 8042FAC0 0042CA00  4E 80 00 20 */	blr 
.endfn JSGSetProjectionFovy__Q34Game5P2JST12ObjectCameraFf

.fn JSGGetProjectionFovy__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FAC4 0042CA04  C0 23 00 B4 */	lfs f1, 0xb4(r3)
/* 8042FAC8 0042CA08  4E 80 00 20 */	blr 
.endfn JSGGetProjectionFovy__Q34Game5P2JST12ObjectCameraCFv

.fn JSGSetProjectionAspect__Q34Game5P2JST12ObjectCameraFf, global
/* 8042FACC 0042CA0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042FAD0 0042CA10  7C 08 02 A6 */	mflr r0
/* 8042FAD4 0042CA14  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042FAD8 0042CA18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042FADC 0042CA1C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042FAE0 0042CA20  7C 7E 1B 78 */	mr r30, r3
/* 8042FAE4 0042CA24  4B FF 37 41 */	bl getRenderModeObj__6SystemFv
/* 8042FAE8 0042CA28  A3 E3 00 06 */	lhz r31, 6(r3)
/* 8042FAEC 0042CA2C  4B FF 37 39 */	bl getRenderModeObj__6SystemFv
/* 8042FAF0 0042CA30  A0 63 00 04 */	lhz r3, 4(r3)
/* 8042FAF4 0042CA34  3C 00 43 30 */	lis r0, 0x4330
/* 8042FAF8 0042CA38  90 01 00 08 */	stw r0, 8(r1)
/* 8042FAFC 0042CA3C  7C 03 FB D6 */	divw r0, r3, r31
/* 8042FB00 0042CA40  C8 22 23 40 */	lfd f1, lbl_805206A0@sda21(r2)
/* 8042FB04 0042CA44  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8042FB08 0042CA48  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042FB0C 0042CA4C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8042FB10 0042CA50  EC 00 08 28 */	fsubs f0, f0, f1
/* 8042FB14 0042CA54  D0 1E 00 B8 */	stfs f0, 0xb8(r30)
/* 8042FB18 0042CA58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042FB1C 0042CA5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042FB20 0042CA60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042FB24 0042CA64  7C 08 03 A6 */	mtlr r0
/* 8042FB28 0042CA68  38 21 00 20 */	addi r1, r1, 0x20
/* 8042FB2C 0042CA6C  4E 80 00 20 */	blr 
.endfn JSGSetProjectionAspect__Q34Game5P2JST12ObjectCameraFf

.fn JSGGetProjectionAspect__Q34Game5P2JST12ObjectCameraCFv, global
/* 8042FB30 0042CA70  C0 23 00 B8 */	lfs f1, 0xb8(r3)
/* 8042FB34 0042CA74  4E 80 00 20 */	blr 
.endfn JSGGetProjectionAspect__Q34Game5P2JST12ObjectCameraCFv

.fn setCamera__Q34Game5P2JST12ObjectCameraFP6Camera, global
/* 8042FB38 0042CA78  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8042FB3C 0042CA7C  7C 08 02 A6 */	mflr r0
/* 8042FB40 0042CA80  90 01 00 44 */	stw r0, 0x44(r1)
/* 8042FB44 0042CA84  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8042FB48 0042CA88  7C 9F 23 78 */	mr r31, r4
/* 8042FB4C 0042CA8C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8042FB50 0042CA90  7C 7E 1B 78 */	mr r30, r3
/* 8042FB54 0042CA94  38 7E 00 60 */	addi r3, r30, 0x60
/* 8042FB58 0042CA98  4B CB A7 49 */	bl PSMTXIdentity
/* 8042FB5C 0042CA9C  93 FE 00 BC */	stw r31, 0xbc(r30)
/* 8042FB60 0042CAA0  38 61 00 14 */	addi r3, r1, 0x14
/* 8042FB64 0042CAA4  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FB68 0042CAA8  93 C4 01 40 */	stw r30, 0x140(r4)
/* 8042FB6C 0042CAAC  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FB70 0042CAB0  81 84 00 00 */	lwz r12, 0(r4)
/* 8042FB74 0042CAB4  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8042FB78 0042CAB8  7D 89 03 A6 */	mtctr r12
/* 8042FB7C 0042CABC  4E 80 04 21 */	bctrl 
/* 8042FB80 0042CAC0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8042FB84 0042CAC4  7F C3 F3 78 */	mr r3, r30
/* 8042FB88 0042CAC8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8042FB8C 0042CACC  38 81 00 08 */	addi r4, r1, 8
/* 8042FB90 0042CAD0  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8042FB94 0042CAD4  D0 01 00 08 */	stfs f0, 8(r1)
/* 8042FB98 0042CAD8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8042FB9C 0042CADC  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8042FBA0 0042CAE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FBA4 0042CAE4  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8042FBA8 0042CAE8  7D 89 03 A6 */	mtctr r12
/* 8042FBAC 0042CAEC  4E 80 04 21 */	bctrl 
/* 8042FBB0 0042CAF0  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FBB4 0042CAF4  38 61 00 20 */	addi r3, r1, 0x20
/* 8042FBB8 0042CAF8  4B FE A7 1D */	bl getViewVector__11CullFrustumFv
/* 8042FBBC 0042CAFC  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 8042FBC0 0042CB00  7F C3 F3 78 */	mr r3, r30
/* 8042FBC4 0042CB04  C0 02 23 54 */	lfs f0, lbl_805206B4@sda21(r2)
/* 8042FBC8 0042CB08  38 81 00 08 */	addi r4, r1, 8
/* 8042FBCC 0042CB0C  C0 81 00 24 */	lfs f4, 0x24(r1)
/* 8042FBD0 0042CB10  C0 A1 00 28 */	lfs f5, 0x28(r1)
/* 8042FBD4 0042CB14  EC 63 00 32 */	fmuls f3, f3, f0
/* 8042FBD8 0042CB18  C0 41 00 08 */	lfs f2, 8(r1)
/* 8042FBDC 0042CB1C  EC 84 00 32 */	fmuls f4, f4, f0
/* 8042FBE0 0042CB20  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8042FBE4 0042CB24  EC A5 00 32 */	fmuls f5, f5, f0
/* 8042FBE8 0042CB28  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8042FBEC 0042CB2C  EC 42 18 2A */	fadds f2, f2, f3
/* 8042FBF0 0042CB30  EC 21 20 2A */	fadds f1, f1, f4
/* 8042FBF4 0042CB34  EC 00 28 2A */	fadds f0, f0, f5
/* 8042FBF8 0042CB38  D0 41 00 08 */	stfs f2, 8(r1)
/* 8042FBFC 0042CB3C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8042FC00 0042CB40  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8042FC04 0042CB44  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC08 0042CB48  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8042FC0C 0042CB4C  7D 89 03 A6 */	mtctr r12
/* 8042FC10 0042CB50  4E 80 04 21 */	bctrl 
/* 8042FC14 0042CB54  7F C3 F3 78 */	mr r3, r30
/* 8042FC18 0042CB58  C0 22 23 48 */	lfs f1, lbl_805206A8@sda21(r2)
/* 8042FC1C 0042CB5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC20 0042CB60  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8042FC24 0042CB64  7D 89 03 A6 */	mtctr r12
/* 8042FC28 0042CB68  4E 80 04 21 */	bctrl 
/* 8042FC2C 0042CB6C  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8042FC30 0042CB70  4B FE B0 DD */	bl getNear__6CameraFv
/* 8042FC34 0042CB74  7F C3 F3 78 */	mr r3, r30
/* 8042FC38 0042CB78  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC3C 0042CB7C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8042FC40 0042CB80  7D 89 03 A6 */	mtctr r12
/* 8042FC44 0042CB84  4E 80 04 21 */	bctrl 
/* 8042FC48 0042CB88  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8042FC4C 0042CB8C  4B FE B0 DD */	bl getFar__6CameraFv
/* 8042FC50 0042CB90  7F C3 F3 78 */	mr r3, r30
/* 8042FC54 0042CB94  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC58 0042CB98  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8042FC5C 0042CB9C  7D 89 03 A6 */	mtctr r12
/* 8042FC60 0042CBA0  4E 80 04 21 */	bctrl 
/* 8042FC64 0042CBA4  7F C3 F3 78 */	mr r3, r30
/* 8042FC68 0042CBA8  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FC6C 0042CBAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC70 0042CBB0  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8042FC74 0042CBB4  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8042FC78 0042CBB8  7D 89 03 A6 */	mtctr r12
/* 8042FC7C 0042CBBC  4E 80 04 21 */	bctrl 
/* 8042FC80 0042CBC0  7F C3 F3 78 */	mr r3, r30
/* 8042FC84 0042CBC4  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FC88 0042CBC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8042FC8C 0042CBCC  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 8042FC90 0042CBD0  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8042FC94 0042CBD4  7D 89 03 A6 */	mtctr r12
/* 8042FC98 0042CBD8  4E 80 04 21 */	bctrl 
/* 8042FC9C 0042CBDC  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8042FCA0 0042CBE0  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8042FCA4 0042CBE4  D0 0D 9B 68 */	stfs f0, sFovBackup__Q24Game5P2JST@sda21(r13)
/* 8042FCA8 0042CBE8  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8042FCAC 0042CBEC  80 9E 00 BC */	lwz r4, 0xbc(r30)
/* 8042FCB0 0042CBF0  4B FE AB A9 */	bl copyFrom__6CameraFP6Camera
/* 8042FCB4 0042CBF4  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8042FCB8 0042CBF8  38 1E 00 60 */	addi r0, r30, 0x60
/* 8042FCBC 0042CBFC  90 03 00 30 */	stw r0, 0x30(r3)
/* 8042FCC0 0042CC00  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8042FCC4 0042CC04  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8042FCC8 0042CC08  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8042FCCC 0042CC0C  7C 08 03 A6 */	mtlr r0
/* 8042FCD0 0042CC10  38 21 00 40 */	addi r1, r1, 0x40
/* 8042FCD4 0042CC14  4E 80 00 20 */	blr 
.endfn setCamera__Q34Game5P2JST12ObjectCameraFP6Camera

.fn start__Q34Game5P2JST12ObjectCameraFv, global
/* 8042FCD8 0042CC18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042FCDC 0042CC1C  7C 08 02 A6 */	mflr r0
/* 8042FCE0 0042CC20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042FCE4 0042CC24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042FCE8 0042CC28  7C 7F 1B 78 */	mr r31, r3
/* 8042FCEC 0042CC2C  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 8042FCF0 0042CC30  4B FE B0 C5 */	bl update__6CameraFv
/* 8042FCF4 0042CC34  38 00 00 01 */	li r0, 1
/* 8042FCF8 0042CC38  98 1F 00 C4 */	stb r0, 0xc4(r31)
/* 8042FCFC 0042CC3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042FD00 0042CC40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042FD04 0042CC44  7C 08 03 A6 */	mtlr r0
/* 8042FD08 0042CC48  38 21 00 10 */	addi r1, r1, 0x10
/* 8042FD0C 0042CC4C  4E 80 00 20 */	blr 
.endfn start__Q34Game5P2JST12ObjectCameraFv

.fn stop__Q34Game5P2JST12ObjectCameraFv, global
/* 8042FD10 0042CC50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042FD14 0042CC54  7C 08 02 A6 */	mflr r0
/* 8042FD18 0042CC58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042FD1C 0042CC5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042FD20 0042CC60  7C 7F 1B 78 */	mr r31, r3
/* 8042FD24 0042CC64  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 8042FD28 0042CC68  28 03 00 00 */	cmplwi r3, 0
/* 8042FD2C 0042CC6C  41 82 00 18 */	beq .L_8042FD44
/* 8042FD30 0042CC70  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8042FD34 0042CC74  4B FE AB 25 */	bl copyFrom__6CameraFP6Camera
/* 8042FD38 0042CC78  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8042FD3C 0042CC7C  38 00 00 00 */	li r0, 0
/* 8042FD40 0042CC80  90 03 01 40 */	stw r0, 0x140(r3)
.L_8042FD44:
/* 8042FD44 0042CC84  38 00 00 00 */	li r0, 0
/* 8042FD48 0042CC88  98 1F 00 C4 */	stb r0, 0xc4(r31)
/* 8042FD4C 0042CC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042FD50 0042CC90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042FD54 0042CC94  7C 08 03 A6 */	mtlr r0
/* 8042FD58 0042CC98  38 21 00 10 */	addi r1, r1, 0x10
/* 8042FD5C 0042CC9C  4E 80 00 20 */	blr 
.endfn stop__Q34Game5P2JST12ObjectCameraFv

.fn __sinit_JSTObjectCamera_cpp, local
/* 8042FD60 0042CCA0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8042FD64 0042CCA4  38 00 FF FF */	li r0, -1
/* 8042FD68 0042CCA8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8042FD6C 0042CCAC  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8042FD70 0042CCB0  90 0D 9B 60 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8042FD74 0042CCB4  D4 03 C1 10 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8042FD78 0042CCB8  D0 0D 9B 64 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8042FD7C 0042CCBC  D0 03 00 04 */	stfs f0, 4(r3)
/* 8042FD80 0042CCC0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8042FD84 0042CCC4  4E 80 00 20 */	blr 
.endfn __sinit_JSTObjectCamera_cpp

.fn "@4@stop__Q34Game5P2JST12ObjectCameraFv", weak
/* 8042FD88 0042CCC8  38 63 FF FC */	addi r3, r3, -4
/* 8042FD8C 0042CCCC  4B FF FF 84 */	b stop__Q34Game5P2JST12ObjectCameraFv
.endfn "@4@stop__Q34Game5P2JST12ObjectCameraFv"

.fn "@4@start__Q34Game5P2JST12ObjectCameraFv", weak
/* 8042FD90 0042CCD0  38 63 FF FC */	addi r3, r3, -4
/* 8042FD94 0042CCD4  4B FF FF 44 */	b start__Q34Game5P2JST12ObjectCameraFv
.endfn "@4@start__Q34Game5P2JST12ObjectCameraFv"

.fn "@4@update__Q34Game5P2JST12ObjectCameraFv", weak
/* 8042FD98 0042CCD8  38 63 FF FC */	addi r3, r3, -4
/* 8042FD9C 0042CCDC  4B FF FB 48 */	b update__Q34Game5P2JST12ObjectCameraFv
.endfn "@4@update__Q34Game5P2JST12ObjectCameraFv"

.fn "@4@reset__Q34Game5P2JST12ObjectCameraFv", weak
/* 8042FDA0 0042CCE0  38 63 FF FC */	addi r3, r3, -4
/* 8042FDA4 0042CCE4  4B FF FA 98 */	b reset__Q34Game5P2JST12ObjectCameraFv
.endfn "@4@reset__Q34Game5P2JST12ObjectCameraFv"
