.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80499E10
lbl_80499E10:
	.4byte 0x73797354
	.4byte 0x696D6572
	.4byte 0x73000000
.global lbl_80499E1C
lbl_80499E1C:
	.4byte 0x73797354
	.4byte 0x696D6572
	.4byte 0x732E6370
	.4byte 0x70000000
.global lbl_80499E2C
lbl_80499E2C:
	.asciz "P2Assert"
	.skip 3
.global lbl_80499E38
lbl_80499E38:
	.4byte 0x974C82E8
	.4byte 0x82A682C8
	.4byte 0x82A2815B
	.4byte 0x8140974C
	.4byte 0x82E882A6
	.4byte 0x82C882A2
	.4byte 0x815C2083
	.4byte 0x55837D83
	.4byte 0x56838183
	.4byte 0x62834E81
	.4byte 0x4981490A
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__8TimerInf
__vt__8TimerInf:
	.4byte 0
	.4byte 0
	.4byte __dt__8TimerInfFv
.global __vt__9SysTimers
__vt__9SysTimers:
	.4byte 0
	.4byte 0
	.4byte __dt__9SysTimersFv
	.4byte getChildCount__5CNodeFv
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.global drawFlag__9SysTimers
drawFlag__9SysTimers:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_80520588
lbl_80520588:
	.4byte 0x6E6F6E61
	.4byte 0x6D650000
.global lbl_80520590
lbl_80520590:
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__9SysTimersFv
__ct__9SysTimersFv:
/* 8042A7FC 0042773C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042A800 00427740  7C 08 02 A6 */	mflr r0
/* 8042A804 00427744  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042A808 00427748  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042A80C 0042774C  7C 7F 1B 78 */	mr r31, r3
/* 8042A810 00427750  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042A814 00427754  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8042A818 00427758  4B FE 6B 79 */	bl __ct__5CNodeFv
/* 8042A81C 0042775C  3C 60 80 4F */	lis r3, __vt__9SysTimers@ha
/* 8042A820 00427760  38 80 FF FF */	li r4, -1
/* 8042A824 00427764  38 03 BE 4C */	addi r0, r3, __vt__9SysTimers@l
/* 8042A828 00427768  38 60 00 00 */	li r3, 0
/* 8042A82C 0042776C  90 1F 00 00 */	stw r0, 0(r31)
/* 8042A830 00427770  38 00 00 40 */	li r0, 0x40
/* 8042A834 00427774  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8042A838 00427778  98 6D 9B 30 */	stb r3, drawFlag__9SysTimers@sda21(r13)
/* 8042A83C 0042777C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8042A840 00427780  83 DF 00 1C */	lwz r30, 0x1c(r31)
/* 8042A844 00427784  1C 7E 00 3C */	mulli r3, r30, 0x3c
/* 8042A848 00427788  38 63 00 10 */	addi r3, r3, 0x10
/* 8042A84C 0042778C  4B BF 97 61 */	bl __nwa__FUl
/* 8042A850 00427790  3C 80 80 43 */	lis r4, __defctor__8TimerInfFv@ha
/* 8042A854 00427794  3C A0 80 43 */	lis r5, __dt__8TimerInfFv@ha
/* 8042A858 00427798  38 84 A8 DC */	addi r4, r4, __defctor__8TimerInfFv@l
/* 8042A85C 0042779C  7F C7 F3 78 */	mr r7, r30
/* 8042A860 004277A0  38 A5 AA 2C */	addi r5, r5, __dt__8TimerInfFv@l
/* 8042A864 004277A4  38 C0 00 3C */	li r6, 0x3c
/* 8042A868 004277A8  4B C9 71 89 */	bl __construct_new_array
/* 8042A86C 004277AC  90 7F 00 20 */	stw r3, 0x20(r31)
/* 8042A870 004277B0  3B A0 00 00 */	li r29, 0
/* 8042A874 004277B4  3B C2 22 28 */	addi r30, r2, lbl_80520588@sda21
/* 8042A878 004277B8  48 00 00 24 */	b lbl_8042A89C
lbl_8042A87C:
/* 8042A87C 004277BC  7F E3 FB 78 */	mr r3, r31
/* 8042A880 004277C0  7F A4 EB 78 */	mr r4, r29
/* 8042A884 004277C4  48 00 01 2D */	bl get__9SysTimersFi
/* 8042A888 004277C8  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8042A88C 004277CC  3B BD 00 01 */	addi r29, r29, 1
/* 8042A890 004277D0  60 00 00 01 */	ori r0, r0, 1
/* 8042A894 004277D4  98 03 00 38 */	stb r0, 0x38(r3)
/* 8042A898 004277D8  93 C3 00 18 */	stw r30, 0x18(r3)
lbl_8042A89C:
/* 8042A89C 004277DC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8042A8A0 004277E0  7C 1D 00 00 */	cmpw r29, r0
/* 8042A8A4 004277E4  41 80 FF D8 */	blt lbl_8042A87C
/* 8042A8A8 004277E8  C0 02 22 30 */	lfs f0, lbl_80520590@sda21(r2)
/* 8042A8AC 004277EC  3C 60 80 4A */	lis r3, lbl_80499E10@ha
/* 8042A8B0 004277F0  38 03 9E 10 */	addi r0, r3, lbl_80499E10@l
/* 8042A8B4 004277F4  7F E3 FB 78 */	mr r3, r31
/* 8042A8B8 004277F8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8042A8BC 004277FC  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8042A8C0 00427800  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042A8C4 00427804  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042A8C8 00427808  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8042A8CC 0042780C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042A8D0 00427810  7C 08 03 A6 */	mtlr r0
/* 8042A8D4 00427814  38 21 00 20 */	addi r1, r1, 0x20
/* 8042A8D8 00427818  4E 80 00 20 */	blr 

.global __defctor__8TimerInfFv
__defctor__8TimerInfFv:
/* 8042A8DC 0042781C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042A8E0 00427820  7C 08 02 A6 */	mflr r0
/* 8042A8E4 00427824  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042A8E8 00427828  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042A8EC 0042782C  7C 7F 1B 78 */	mr r31, r3
/* 8042A8F0 00427830  4B BF 26 DD */	bl __ct__11JKRDisposerFv
/* 8042A8F4 00427834  3C 60 80 4F */	lis r3, __vt__8TimerInf@ha
/* 8042A8F8 00427838  38 A0 00 00 */	li r5, 0
/* 8042A8FC 0042783C  38 03 BE 40 */	addi r0, r3, __vt__8TimerInf@l
/* 8042A900 00427840  38 82 22 28 */	addi r4, r2, lbl_80520588@sda21
/* 8042A904 00427844  90 1F 00 00 */	stw r0, 0(r31)
/* 8042A908 00427848  38 00 FF FF */	li r0, -1
/* 8042A90C 0042784C  C0 02 22 30 */	lfs f0, lbl_80520590@sda21(r2)
/* 8042A910 00427850  7F E3 FB 78 */	mr r3, r31
/* 8042A914 00427854  98 BF 00 38 */	stb r5, 0x38(r31)
/* 8042A918 00427858  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8042A91C 0042785C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8042A920 00427860  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8042A924 00427864  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8042A928 00427868  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8042A92C 0042786C  90 BF 00 30 */	stw r5, 0x30(r31)
/* 8042A930 00427870  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8042A934 00427874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042A938 00427878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042A93C 0042787C  7C 08 03 A6 */	mtlr r0
/* 8042A940 00427880  38 21 00 10 */	addi r1, r1, 0x10
/* 8042A944 00427884  4E 80 00 20 */	blr 

.global __dt__9SysTimersFv
__dt__9SysTimersFv:
/* 8042A948 00427888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042A94C 0042788C  7C 08 02 A6 */	mflr r0
/* 8042A950 00427890  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042A954 00427894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042A958 00427898  7C 9F 23 78 */	mr r31, r4
/* 8042A95C 0042789C  93 C1 00 08 */	stw r30, 8(r1)
/* 8042A960 004278A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042A964 004278A4  41 82 00 30 */	beq lbl_8042A994
/* 8042A968 004278A8  3C 80 80 4F */	lis r4, __vt__9SysTimers@ha
/* 8042A96C 004278AC  38 04 BE 4C */	addi r0, r4, __vt__9SysTimers@l
/* 8042A970 004278B0  90 1E 00 00 */	stw r0, 0(r30)
/* 8042A974 004278B4  48 00 01 2D */	bl reset__9SysTimersFv
/* 8042A978 004278B8  7F C3 F3 78 */	mr r3, r30
/* 8042A97C 004278BC  38 80 00 00 */	li r4, 0
/* 8042A980 004278C0  4B FE 6C 09 */	bl __dt__5CNodeFv
/* 8042A984 004278C4  7F E0 07 35 */	extsh. r0, r31
/* 8042A988 004278C8  40 81 00 0C */	ble lbl_8042A994
/* 8042A98C 004278CC  7F C3 F3 78 */	mr r3, r30
/* 8042A990 004278D0  4B BF 97 25 */	bl __dl__FPv
lbl_8042A994:
/* 8042A994 004278D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042A998 004278D8  7F C3 F3 78 */	mr r3, r30
/* 8042A99C 004278DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042A9A0 004278E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042A9A4 004278E4  7C 08 03 A6 */	mtlr r0
/* 8042A9A8 004278E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042A9AC 004278EC  4E 80 00 20 */	blr 

.global get__9SysTimersFi
get__9SysTimersFi:
/* 8042A9B0 004278F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042A9B4 004278F4  7C 08 02 A6 */	mflr r0
/* 8042A9B8 004278F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042A9BC 004278FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042A9C0 00427900  7C 9F 23 79 */	or. r31, r4, r4
/* 8042A9C4 00427904  93 C1 00 08 */	stw r30, 8(r1)
/* 8042A9C8 00427908  7C 7E 1B 78 */	mr r30, r3
/* 8042A9CC 0042790C  38 60 00 00 */	li r3, 0
/* 8042A9D0 00427910  41 80 00 14 */	blt lbl_8042A9E4
/* 8042A9D4 00427914  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8042A9D8 00427918  7C 1F 00 00 */	cmpw r31, r0
/* 8042A9DC 0042791C  40 80 00 08 */	bge lbl_8042A9E4
/* 8042A9E0 00427920  38 60 00 01 */	li r3, 1
lbl_8042A9E4:
/* 8042A9E4 00427924  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042A9E8 00427928  40 82 00 20 */	bne lbl_8042AA08
/* 8042A9EC 0042792C  3C 60 80 4A */	lis r3, lbl_80499E1C@ha
/* 8042A9F0 00427930  3C A0 80 4A */	lis r5, lbl_80499E2C@ha
/* 8042A9F4 00427934  38 63 9E 1C */	addi r3, r3, lbl_80499E1C@l
/* 8042A9F8 00427938  38 80 00 77 */	li r4, 0x77
/* 8042A9FC 0042793C  38 A5 9E 2C */	addi r5, r5, lbl_80499E2C@l
/* 8042AA00 00427940  4C C6 31 82 */	crclr 6
/* 8042AA04 00427944  4B BF FC 3D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8042AA08:
/* 8042AA08 00427948  1C 1F 00 3C */	mulli r0, r31, 0x3c
/* 8042AA0C 0042794C  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 8042AA10 00427950  7C 63 02 14 */	add r3, r3, r0
/* 8042AA14 00427954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042AA18 00427958  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042AA1C 0042795C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042AA20 00427960  7C 08 03 A6 */	mtlr r0
/* 8042AA24 00427964  38 21 00 10 */	addi r1, r1, 0x10
/* 8042AA28 00427968  4E 80 00 20 */	blr 

.global __dt__8TimerInfFv
__dt__8TimerInfFv:
/* 8042AA2C 0042796C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042AA30 00427970  7C 08 02 A6 */	mflr r0
/* 8042AA34 00427974  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042AA38 00427978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042AA3C 0042797C  7C 9F 23 78 */	mr r31, r4
/* 8042AA40 00427980  93 C1 00 08 */	stw r30, 8(r1)
/* 8042AA44 00427984  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042AA48 00427988  41 82 00 3C */	beq lbl_8042AA84
/* 8042AA4C 0042798C  3C 60 80 4F */	lis r3, __vt__8TimerInf@ha
/* 8042AA50 00427990  7F C4 F3 78 */	mr r4, r30
/* 8042AA54 00427994  38 03 BE 40 */	addi r0, r3, __vt__8TimerInf@l
/* 8042AA58 00427998  90 1E 00 00 */	stw r0, 0(r30)
/* 8042AA5C 0042799C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042AA60 004279A0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8042AA64 004279A4  48 00 00 85 */	bl remove__9SysTimersFP8TimerInf
/* 8042AA68 004279A8  7F C3 F3 78 */	mr r3, r30
/* 8042AA6C 004279AC  38 80 00 00 */	li r4, 0
/* 8042AA70 004279B0  4B BF 25 C5 */	bl __dt__11JKRDisposerFv
/* 8042AA74 004279B4  7F E0 07 35 */	extsh. r0, r31
/* 8042AA78 004279B8  40 81 00 0C */	ble lbl_8042AA84
/* 8042AA7C 004279BC  7F C3 F3 78 */	mr r3, r30
/* 8042AA80 004279C0  4B BF 96 35 */	bl __dl__FPv
lbl_8042AA84:
/* 8042AA84 004279C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042AA88 004279C8  7F C3 F3 78 */	mr r3, r30
/* 8042AA8C 004279CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042AA90 004279D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042AA94 004279D4  7C 08 03 A6 */	mtlr r0
/* 8042AA98 004279D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042AA9C 004279DC  4E 80 00 20 */	blr 

.global reset__9SysTimersFv
reset__9SysTimersFv:
/* 8042AAA0 004279E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042AAA4 004279E4  7C 08 02 A6 */	mflr r0
/* 8042AAA8 004279E8  3C 60 80 4A */	lis r3, lbl_80499E1C@ha
/* 8042AAAC 004279EC  3C A0 80 4A */	lis r5, lbl_80499E38@ha
/* 8042AAB0 004279F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042AAB4 004279F4  38 63 9E 1C */	addi r3, r3, lbl_80499E1C@l
/* 8042AAB8 004279F8  38 80 00 88 */	li r4, 0x88
/* 8042AABC 004279FC  38 A5 9E 38 */	addi r5, r5, lbl_80499E38@l
/* 8042AAC0 00427A00  4C C6 31 82 */	crclr 6
/* 8042AAC4 00427A04  4B BF FB 7D */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042AAC8 00427A08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042AACC 00427A0C  7C 08 03 A6 */	mtlr r0
/* 8042AAD0 00427A10  38 21 00 10 */	addi r1, r1, 0x10
/* 8042AAD4 00427A14  4E 80 00 20 */	blr 

.global newFrame__9SysTimersFv
newFrame__9SysTimersFv:
/* 8042AAD8 00427A18  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8042AADC 00427A1C  38 04 00 01 */	addi r0, r4, 1
/* 8042AAE0 00427A20  90 03 00 18 */	stw r0, 0x18(r3)
/* 8042AAE4 00427A24  4E 80 00 20 */	blr 

.global remove__9SysTimersFP8TimerInf
remove__9SysTimersFP8TimerInf:
/* 8042AAE8 00427A28  88 04 00 38 */	lbz r0, 0x38(r4)
/* 8042AAEC 00427A2C  60 00 00 01 */	ori r0, r0, 1
/* 8042AAF0 00427A30  98 04 00 38 */	stb r0, 0x38(r4)
/* 8042AAF4 00427A34  4E 80 00 20 */	blr 

.global _start__9SysTimersFPcb
_start__9SysTimersFPcb:
/* 8042AAF8 00427A38  4E 80 00 20 */	blr 

.global _stop__9SysTimersFPc
_stop__9SysTimersFPc:
/* 8042AAFC 00427A3C  4E 80 00 20 */	blr 
