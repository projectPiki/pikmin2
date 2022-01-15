.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80481C88
lbl_80481C88:
	.asciz "efxModelObjects"
	.asciz "user/Kando/effect/modeleffect.szs"
	.skip 2
.global lbl_80481CBC
lbl_80481CBC:
	.asciz "efxModelObjects.cpp"
.global lbl_80481CD0
lbl_80481CD0:
	.asciz "P2Assert"
	.skip 3
	.asciz "onyonspot.bmd"
	.skip 2
	.asciz "onyonspot.btk"
	.skip 2
	.asciz "onyonspot_blue.brk"
	.skip 1
	.asciz "onyonspot_red.brk"
	.skip 2
	.asciz "onyonspot_yellow.brk"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23efx13OnyonSpotData
__vt__Q23efx13OnyonSpotData:
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx13OnyonSpotDataFv
	.4byte getChildCount__5CNodeFv
	.4byte loadResources__Q23efx13OnyonSpotDataFv
	.4byte getID__Q23efx13OnyonSpotDataFv
	.4byte onCreate__Q23efx13OnyonSpotDataFP20ModelEffectCreateArg
.global __vt__Q23efx9OnyonSpot
__vt__Q23efx9OnyonSpot:
	.4byte 0
	.4byte 0
	.4byte constructor__11ModelEffectFv
	.4byte doAnimation__11ModelEffectFv
	.4byte doEntry__11ModelEffectFv
	.4byte doSetView__11ModelEffectFi
	.4byte doViewCalc__11ModelEffectFv
	.4byte changeMaterial__Q23efx9OnyonSpotFv
	.4byte getLODSphere__Q23efx9OnyonSpotFRQ23Sys6Sphere
	.4byte useCylinderLOD__Q23efx9OnyonSpotFv
	.4byte getLODCylinder__Q23efx9OnyonSpotFRQ23Sys8Cylinder
	.4byte doSimulation__11ModelEffectFf
	.4byte doDirectDraw__11ModelEffectFR8Graphics

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519D70
lbl_80519D70:
	.4byte 0x41200000
.global lbl_80519D74
lbl_80519D74:
	.4byte 0x41A00000
.global lbl_80519D78
lbl_80519D78:
	.4byte 0x43480000
.global lbl_80519D7C
lbl_80519D7C:
	.float 0.5
.global lbl_80519D80
lbl_80519D80:
	.4byte 0x00000000
.global lbl_80519D84
lbl_80519D84:
	.float 1.0
.global lbl_80519D88
lbl_80519D88:
	.4byte 0x41F00000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getLODSphere__Q23efx9OnyonSpotFRQ23Sys6Sphere
getLODSphere__Q23efx9OnyonSpotFRQ23Sys6Sphere:
/* 802055A4 002024E4  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 802055A8 002024E8  C0 02 BA 10 */	lfs f0, lbl_80519D70@sda21(r2)
/* 802055AC 002024EC  D0 24 00 00 */	stfs f1, 0(r4)
/* 802055B0 002024F0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 802055B4 002024F4  D0 24 00 04 */	stfs f1, 4(r4)
/* 802055B8 002024F8  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 802055BC 002024FC  D0 24 00 08 */	stfs f1, 8(r4)
/* 802055C0 00202500  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 802055C4 00202504  4E 80 00 20 */	blr 

.global getLODCylinder__Q23efx9OnyonSpotFRQ23Sys8Cylinder
getLODCylinder__Q23efx9OnyonSpotFRQ23Sys8Cylinder:
/* 802055C8 00202508  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 802055CC 0020250C  C0 62 BA 14 */	lfs f3, lbl_80519D74@sda21(r2)
/* 802055D0 00202510  D0 04 00 00 */	stfs f0, 0(r4)
/* 802055D4 00202514  C0 42 BA 18 */	lfs f2, lbl_80519D78@sda21(r2)
/* 802055D8 00202518  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802055DC 0020251C  C0 82 BA 1C */	lfs f4, lbl_80519D7C@sda21(r2)
/* 802055E0 00202520  D0 04 00 04 */	stfs f0, 4(r4)
/* 802055E4 00202524  C0 22 BA 20 */	lfs f1, lbl_80519D80@sda21(r2)
/* 802055E8 00202528  C0 A3 00 34 */	lfs f5, 0x34(r3)
/* 802055EC 0020252C  C0 02 BA 24 */	lfs f0, lbl_80519D84@sda21(r2)
/* 802055F0 00202530  D0 A4 00 08 */	stfs f5, 8(r4)
/* 802055F4 00202534  D0 64 00 1C */	stfs f3, 0x1c(r4)
/* 802055F8 00202538  D0 44 00 18 */	stfs f2, 0x18(r4)
/* 802055FC 0020253C  C0 64 00 18 */	lfs f3, 0x18(r4)
/* 80205600 00202540  C0 44 00 04 */	lfs f2, 4(r4)
/* 80205604 00202544  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 80205608 00202548  D0 44 00 04 */	stfs f2, 4(r4)
/* 8020560C 0020254C  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80205610 00202550  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80205614 00202554  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 80205618 00202558  4E 80 00 20 */	blr 

.global changeMaterial__Q23efx9OnyonSpotFv
changeMaterial__Q23efx9OnyonSpotFv:
/* 8020561C 0020255C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80205620 00202560  7C 08 02 A6 */	mflr r0
/* 80205624 00202564  90 01 00 14 */	stw r0, 0x14(r1)
/* 80205628 00202568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020562C 0020256C  7C 7F 1B 78 */	mr r31, r3
/* 80205630 00202570  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80205634 00202574  4B FA F9 95 */	bl paused__Q24Game10GameSystemFv
/* 80205638 00202578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020563C 0020257C  40 82 00 10 */	bne lbl_8020564C
/* 80205640 00202580  C0 22 BA 28 */	lfs f1, lbl_80519D88@sda21(r2)
/* 80205644 00202584  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80205648 00202588  48 22 EF 05 */	bl animate__Q23Sys15MatBaseAnimatorFf
lbl_8020564C:
/* 8020564C 0020258C  C0 22 BA 20 */	lfs f1, lbl_80519D80@sda21(r2)
/* 80205650 00202590  38 7F 00 48 */	addi r3, r31, 0x48
/* 80205654 00202594  48 22 EE F9 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 80205658 00202598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020565C 0020259C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80205660 002025A0  7C 08 03 A6 */	mtlr r0
/* 80205664 002025A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80205668 002025A8  4E 80 00 20 */	blr 

.global loadResources__Q23efx13OnyonSpotDataFv
loadResources__Q23efx13OnyonSpotDataFv:
/* 8020566C 002025AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80205670 002025B0  7C 08 02 A6 */	mflr r0
/* 80205674 002025B4  3C 80 80 48 */	lis r4, lbl_80481C88@ha
/* 80205678 002025B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020567C 002025BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80205680 002025C0  3B E4 1C 88 */	addi r31, r4, lbl_80481C88@l
/* 80205684 002025C4  38 80 00 01 */	li r4, 1
/* 80205688 002025C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020568C 002025CC  7C 7E 1B 78 */	mr r30, r3
/* 80205690 002025D0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80205694 002025D4  48 23 7E 75 */	bl allocModelData__15ModelEffectDataFi
/* 80205698 002025D8  38 7F 00 10 */	addi r3, r31, 0x10
/* 8020569C 002025DC  38 80 00 01 */	li r4, 1
/* 802056A0 002025E0  38 A0 00 00 */	li r5, 0
/* 802056A4 002025E4  38 C0 00 01 */	li r6, 1
/* 802056A8 002025E8  4B E1 5A 89 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 802056AC 002025EC  28 03 00 00 */	cmplwi r3, 0
/* 802056B0 002025F0  40 82 00 18 */	bne lbl_802056C8
/* 802056B4 002025F4  38 7F 00 34 */	addi r3, r31, 0x34
/* 802056B8 002025F8  38 BF 00 48 */	addi r5, r31, 0x48
/* 802056BC 002025FC  38 80 00 5C */	li r4, 0x5c
/* 802056C0 00202600  4C C6 31 82 */	crclr 6
/* 802056C4 00202604  4B E2 4F 7D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802056C8:
/* 802056C8 00202608  38 7F 00 54 */	addi r3, r31, 0x54
/* 802056CC 0020260C  38 80 00 00 */	li r4, 0
/* 802056D0 00202610  4B E1 D9 49 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 802056D4 00202614  7C 7D 1B 79 */	or. r29, r3, r3
/* 802056D8 00202618  40 82 00 18 */	bne lbl_802056F0
/* 802056DC 0020261C  38 7F 00 34 */	addi r3, r31, 0x34
/* 802056E0 00202620  38 BF 00 48 */	addi r5, r31, 0x48
/* 802056E4 00202624  38 80 00 5F */	li r4, 0x5f
/* 802056E8 00202628  4C C6 31 82 */	crclr 6
/* 802056EC 0020262C  4B E2 4F 55 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802056F0:
/* 802056F0 00202630  7F A3 EB 78 */	mr r3, r29
/* 802056F4 00202634  3C 80 21 02 */	lis r4, 0x2102
/* 802056F8 00202638  4B E6 A1 9D */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 802056FC 0020263C  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 80205700 00202640  38 00 00 01 */	li r0, 1
/* 80205704 00202644  90 64 00 00 */	stw r3, 0(r4)
/* 80205708 00202648  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020570C 0020264C  83 BE 00 20 */	lwz r29, 0x20(r30)
/* 80205710 00202650  57 A3 20 36 */	slwi r3, r29, 4
/* 80205714 00202654  38 63 00 10 */	addi r3, r3, 0x10
/* 80205718 00202658  4B E1 E8 95 */	bl __nwa__FUl
/* 8020571C 0020265C  3C 80 80 43 */	lis r4, __ct__Q23Sys15MatTexAnimationFv@ha
/* 80205720 00202660  7F A7 EB 78 */	mr r7, r29
/* 80205724 00202664  38 84 41 34 */	addi r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
/* 80205728 00202668  38 A0 00 00 */	li r5, 0
/* 8020572C 0020266C  38 C0 00 10 */	li r6, 0x10
/* 80205730 00202670  4B EB C2 C1 */	bl __construct_new_array
/* 80205734 00202674  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80205738 00202678  38 00 00 03 */	li r0, 3
/* 8020573C 0020267C  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80205740 00202680  83 BE 00 28 */	lwz r29, 0x28(r30)
/* 80205744 00202684  1C 7D 00 14 */	mulli r3, r29, 0x14
/* 80205748 00202688  38 63 00 10 */	addi r3, r3, 0x10
/* 8020574C 0020268C  4B E1 E8 61 */	bl __nwa__FUl
/* 80205750 00202690  3C 80 80 43 */	lis r4, __ct__Q23Sys18MatTevRegAnimationFv@ha
/* 80205754 00202694  7F A7 EB 78 */	mr r7, r29
/* 80205758 00202698  38 84 42 40 */	addi r4, r4, __ct__Q23Sys18MatTevRegAnimationFv@l
/* 8020575C 0020269C  38 A0 00 00 */	li r5, 0
/* 80205760 002026A0  38 C0 00 14 */	li r6, 0x14
/* 80205764 002026A4  4B EB C2 8D */	bl __construct_new_array
/* 80205768 002026A8  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 8020576C 002026AC  38 7F 00 64 */	addi r3, r31, 0x64
/* 80205770 002026B0  38 80 00 00 */	li r4, 0
/* 80205774 002026B4  4B E1 D8 A5 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80205778 002026B8  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 8020577C 002026BC  7C 64 1B 78 */	mr r4, r3
/* 80205780 002026C0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80205784 002026C4  80 A5 00 00 */	lwz r5, 0(r5)
/* 80205788 002026C8  48 22 E8 99 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 8020578C 002026CC  38 7F 00 74 */	addi r3, r31, 0x74
/* 80205790 002026D0  38 80 00 00 */	li r4, 0
/* 80205794 002026D4  4B E1 D8 85 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80205798 002026D8  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 8020579C 002026DC  7C 64 1B 78 */	mr r4, r3
/* 802057A0 002026E0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 802057A4 002026E4  80 A5 00 00 */	lwz r5, 0(r5)
/* 802057A8 002026E8  48 22 E8 79 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 802057AC 002026EC  38 7F 00 88 */	addi r3, r31, 0x88
/* 802057B0 002026F0  38 80 00 00 */	li r4, 0
/* 802057B4 002026F4  4B E1 D8 65 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 802057B8 002026F8  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 802057BC 002026FC  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 802057C0 00202700  80 A4 00 00 */	lwz r5, 0(r4)
/* 802057C4 00202704  7C 64 1B 78 */	mr r4, r3
/* 802057C8 00202708  38 66 00 14 */	addi r3, r6, 0x14
/* 802057CC 0020270C  48 22 E8 55 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 802057D0 00202710  38 7F 00 9C */	addi r3, r31, 0x9c
/* 802057D4 00202714  38 80 00 00 */	li r4, 0
/* 802057D8 00202718  4B E1 D8 41 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 802057DC 0020271C  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 802057E0 00202720  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 802057E4 00202724  80 A4 00 00 */	lwz r5, 0(r4)
/* 802057E8 00202728  7C 64 1B 78 */	mr r4, r3
/* 802057EC 0020272C  38 66 00 28 */	addi r3, r6, 0x28
/* 802057F0 00202730  48 22 E8 31 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 802057F4 00202734  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802057F8 00202738  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802057FC 0020273C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80205800 00202740  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80205804 00202744  7C 08 03 A6 */	mtlr r0
/* 80205808 00202748  38 21 00 20 */	addi r1, r1, 0x20
/* 8020580C 0020274C  4E 80 00 20 */	blr 

.global onCreate__Q23efx13OnyonSpotDataFP20ModelEffectCreateArg
onCreate__Q23efx13OnyonSpotDataFP20ModelEffectCreateArg:
/* 80205810 00202750  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80205814 00202754  7C 08 02 A6 */	mflr r0
/* 80205818 00202758  90 01 00 54 */	stw r0, 0x54(r1)
/* 8020581C 0020275C  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80205820 00202760  7C 7D 1B 78 */	mr r29, r3
/* 80205824 00202764  7C 9E 23 78 */	mr r30, r4
/* 80205828 00202768  81 83 00 00 */	lwz r12, 0(r3)
/* 8020582C 0020276C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80205830 00202770  7D 89 03 A6 */	mtctr r12
/* 80205834 00202774  4E 80 04 21 */	bctrl 
/* 80205838 00202778  7C 7F 1B 78 */	mr r31, r3
/* 8020583C 0020277C  7F C3 F3 78 */	mr r3, r30
/* 80205840 00202780  81 9E 00 00 */	lwz r12, 0(r30)
/* 80205844 00202784  7C 9C 23 78 */	mr r28, r4
/* 80205848 00202788  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020584C 0020278C  7D 89 03 A6 */	mtctr r12
/* 80205850 00202790  4E 80 04 21 */	bctrl 
/* 80205854 00202794  7C 84 E2 78 */	xor r4, r4, r28
/* 80205858 00202798  7C 60 FA 78 */	xor r0, r3, r31
/* 8020585C 0020279C  7C 80 03 79 */	or. r0, r4, r0
/* 80205860 002027A0  41 82 00 20 */	beq lbl_80205880
/* 80205864 002027A4  3C 60 80 48 */	lis r3, lbl_80481CBC@ha
/* 80205868 002027A8  3C A0 80 48 */	lis r5, lbl_80481CD0@ha
/* 8020586C 002027AC  38 63 1C BC */	addi r3, r3, lbl_80481CBC@l
/* 80205870 002027B0  38 80 00 81 */	li r4, 0x81
/* 80205874 002027B4  38 A5 1C D0 */	addi r5, r5, lbl_80481CD0@l
/* 80205878 002027B8  4C C6 31 82 */	crclr 6
/* 8020587C 002027BC  4B E2 4D C5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80205880:
/* 80205880 002027C0  38 60 00 14 */	li r3, 0x14
/* 80205884 002027C4  4B E1 E6 21 */	bl __nw__FUl
/* 80205888 002027C8  7C 7C 1B 79 */	or. r28, r3, r3
/* 8020588C 002027CC  41 82 00 1C */	beq lbl_802058A8
/* 80205890 002027D0  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 80205894 002027D4  38 A0 00 00 */	li r5, 0
/* 80205898 002027D8  38 C0 00 02 */	li r6, 2
/* 8020589C 002027DC  80 84 00 00 */	lwz r4, 0(r4)
/* 802058A0 002027E0  48 23 89 39 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 802058A4 002027E4  7C 7C 1B 78 */	mr r28, r3
lbl_802058A8:
/* 802058A8 002027E8  83 7E 00 10 */	lwz r27, 0x10(r30)
/* 802058AC 002027EC  38 60 00 54 */	li r3, 0x54
/* 802058B0 002027F0  4B E1 E5 F5 */	bl __nw__FUl
/* 802058B4 002027F4  7C 7F 1B 79 */	or. r31, r3, r3
/* 802058B8 002027F8  41 82 00 58 */	beq lbl_80205910
/* 802058BC 002027FC  3C 80 80 4F */	lis r4, __vt__11ModelEffect@ha
/* 802058C0 00202800  3C 60 80 4C */	lis r3, __vt__Q23efx9OnyonSpot@ha
/* 802058C4 00202804  38 04 CB AC */	addi r0, r4, __vt__11ModelEffect@l
/* 802058C8 00202808  38 A0 00 01 */	li r5, 1
/* 802058CC 0020280C  90 1F 00 00 */	stw r0, 0(r31)
/* 802058D0 00202810  38 80 00 00 */	li r4, 0
/* 802058D4 00202814  38 03 EF 2C */	addi r0, r3, __vt__Q23efx9OnyonSpot@l
/* 802058D8 00202818  38 7F 00 3C */	addi r3, r31, 0x3c
/* 802058DC 0020281C  98 BF 00 39 */	stb r5, 0x39(r31)
/* 802058E0 00202820  98 BF 00 38 */	stb r5, 0x38(r31)
/* 802058E4 00202824  98 9F 00 3A */	stb r4, 0x3a(r31)
/* 802058E8 00202828  90 1F 00 00 */	stw r0, 0(r31)
/* 802058EC 0020282C  48 22 EA 69 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 802058F0 00202830  3C 80 80 4F */	lis r4, __vt__Q23Sys15MatLoopAnimator@ha
/* 802058F4 00202834  38 7F 00 48 */	addi r3, r31, 0x48
/* 802058F8 00202838  38 04 C4 8C */	addi r0, r4, __vt__Q23Sys15MatLoopAnimator@l
/* 802058FC 0020283C  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 80205900 00202840  48 22 EA 55 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 80205904 00202844  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 80205908 00202848  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 8020590C 0020284C  90 1F 00 48 */	stw r0, 0x48(r31)
lbl_80205910:
/* 80205910 00202850  93 9F 00 04 */	stw r28, 4(r31)
/* 80205914 00202854  38 61 00 08 */	addi r3, r1, 8
/* 80205918 00202858  38 9E 00 04 */	addi r4, r30, 4
/* 8020591C 0020285C  48 22 2F 25 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80205920 00202860  38 61 00 08 */	addi r3, r1, 8
/* 80205924 00202864  38 9F 00 08 */	addi r4, r31, 8
/* 80205928 00202868  4B EE 49 A5 */	bl PSMTXCopy
/* 8020592C 0020286C  1C 1B 00 14 */	mulli r0, r27, 0x14
/* 80205930 00202870  80 BD 00 2C */	lwz r5, 0x2c(r29)
/* 80205934 00202874  83 9D 00 24 */	lwz r28, 0x24(r29)
/* 80205938 00202878  38 80 00 00 */	li r4, 0
/* 8020593C 0020287C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80205940 00202880  7F A5 02 14 */	add r29, r5, r0
/* 80205944 00202884  48 23 8A D5 */	bl enableMaterialAnim__Q28SysShape5ModelFi
/* 80205948 00202888  38 7F 00 48 */	addi r3, r31, 0x48
/* 8020594C 0020288C  7F A4 EB 78 */	mr r4, r29
/* 80205950 00202890  81 9F 00 48 */	lwz r12, 0x48(r31)
/* 80205954 00202894  81 8C 00 08 */	lwz r12, 8(r12)
/* 80205958 00202898  7D 89 03 A6 */	mtctr r12
/* 8020595C 0020289C  4E 80 04 21 */	bctrl 
/* 80205960 002028A0  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80205964 002028A4  7F 84 E3 78 */	mr r4, r28
/* 80205968 002028A8  81 9F 00 3C */	lwz r12, 0x3c(r31)
/* 8020596C 002028AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80205970 002028B0  7D 89 03 A6 */	mtctr r12
/* 80205974 002028B4  4E 80 04 21 */	bctrl 
/* 80205978 002028B8  7F E3 FB 78 */	mr r3, r31
/* 8020597C 002028BC  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80205980 002028C0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80205984 002028C4  7C 08 03 A6 */	mtlr r0
/* 80205988 002028C8  38 21 00 50 */	addi r1, r1, 0x50
/* 8020598C 002028CC  4E 80 00 20 */	blr 

.global getID__Q23efx13OnyonSpotDataFv
getID__Q23efx13OnyonSpotDataFv:
/* 80205990 002028D0  3C 80 53 50 */	lis r4, 0x53504F54@ha
/* 80205994 002028D4  3C 60 4F 4E */	lis r3, 0x4F4E595F@ha
/* 80205998 002028D8  38 84 4F 54 */	addi r4, r4, 0x53504F54@l
/* 8020599C 002028DC  38 63 59 5F */	addi r3, r3, 0x4F4E595F@l
/* 802059A0 002028E0  4E 80 00 20 */	blr 

.global __dt__Q23efx13OnyonSpotDataFv
__dt__Q23efx13OnyonSpotDataFv:
/* 802059A4 002028E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802059A8 002028E8  7C 08 02 A6 */	mflr r0
/* 802059AC 002028EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802059B0 002028F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802059B4 002028F4  7C 9F 23 78 */	mr r31, r4
/* 802059B8 002028F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802059BC 002028FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802059C0 00202900  41 82 00 38 */	beq lbl_802059F8
/* 802059C4 00202904  3C 80 80 4C */	lis r4, __vt__Q23efx13OnyonSpotData@ha
/* 802059C8 00202908  38 04 EF 10 */	addi r0, r4, __vt__Q23efx13OnyonSpotData@l
/* 802059CC 0020290C  90 1E 00 00 */	stw r0, 0(r30)
/* 802059D0 00202910  41 82 00 18 */	beq lbl_802059E8
/* 802059D4 00202914  3C A0 80 4B */	lis r5, __vt__15ModelEffectData@ha
/* 802059D8 00202918  38 80 00 00 */	li r4, 0
/* 802059DC 0020291C  38 05 0C EC */	addi r0, r5, __vt__15ModelEffectData@l
/* 802059E0 00202920  90 1E 00 00 */	stw r0, 0(r30)
/* 802059E4 00202924  48 20 BB A5 */	bl __dt__5CNodeFv
lbl_802059E8:
/* 802059E8 00202928  7F E0 07 35 */	extsh. r0, r31
/* 802059EC 0020292C  40 81 00 0C */	ble lbl_802059F8
/* 802059F0 00202930  7F C3 F3 78 */	mr r3, r30
/* 802059F4 00202934  4B E1 E6 C1 */	bl __dl__FPv
lbl_802059F8:
/* 802059F8 00202938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802059FC 0020293C  7F C3 F3 78 */	mr r3, r30
/* 80205A00 00202940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80205A04 00202944  83 C1 00 08 */	lwz r30, 8(r1)
/* 80205A08 00202948  7C 08 03 A6 */	mtlr r0
/* 80205A0C 0020294C  38 21 00 10 */	addi r1, r1, 0x10
/* 80205A10 00202950  4E 80 00 20 */	blr 

.global useCylinderLOD__Q23efx9OnyonSpotFv
useCylinderLOD__Q23efx9OnyonSpotFv:
/* 80205A14 00202954  38 60 00 01 */	li r3, 1
/* 80205A18 00202958  4E 80 00 20 */	blr 

.global constructor__11ModelEffectFv
constructor__11ModelEffectFv:
/* 80205A1C 0020295C  4E 80 00 20 */	blr 

.global doSimulation__11ModelEffectFf
doSimulation__11ModelEffectFf:
/* 80205A20 00202960  4E 80 00 20 */	blr 

.global doDirectDraw__11ModelEffectFR8Graphics
doDirectDraw__11ModelEffectFR8Graphics:
/* 80205A24 00202964  4E 80 00 20 */	blr 
