.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049D080:
	.asciz "PSMainSide_Demo.cpp"
.balign 4
lbl_8049D094:
	.asciz "P2Assert"
.balign 4
lbl_8049D0A0:
	.asciz "PSGame.h"
.balign 4
lbl_8049D0AC:
	.asciz "PSScene.h"
.balign 4
lbl_8049D0B8:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_8049D0DC:
	.asciz "s21_dayend_takeoff"
.balign 4
audio_info: # unnamed rodata struct formatted as u32 array at 0x8049D0F0
	.4byte 0
	.4byte 0x7F030000
	.float 1.0
	.float 0.0078125
.balign 4
lbl_8049D100:
	.asciz "s02_dayend_result"
.balign 4
lbl_8049D114:
	.asciz "s01_dayend"
.balign 4
lbl_8049D120:
	.asciz "s03_orimadown"
.balign 4
lbl_8049D130:
	.asciz "s05_pikminzero"
.balign 4
lbl_8049D140:
	.asciz "s11_dope_first_b"
.balign 4
lbl_8049D154:
	.asciz "s11_dope_first_r"
.balign 4
lbl_8049D168:
	.asciz "s11_dopebin_first_b"
.balign 4
lbl_8049D17C:
	.asciz "s11_dopebin_first_r"
.balign 4
lbl_8049D190:
	.asciz "s17_suck_equipment"
.balign 4
lbl_8049D1A4:
	.asciz "s22_cv_suck_equipment"
.balign 4
lbl_8049D1BC:
	.asciz "s10_suck_treasure"
.balign 4
lbl_8049D1D0:
	.asciz "s22_cv_suck_treasure"
.balign 4
lbl_8049D1E8:
	.asciz "s04_dayend_orimadown"
.balign 4
lbl_8049D200:
	.asciz "s06_dayend_pikminzero"
.balign 4
lbl_8049D218:
	.asciz "g1A_red_doping"
.balign 4
lbl_8049D228:
	.asciz "g1B_black_doping"
.balign 4
lbl_8049D23C:
	.asciz "g02_boot_onyonR"
.balign 4
lbl_8049D24C:
	.asciz "g1E_boot_onyonY"
.balign 4
lbl_8049D25C:
	.asciz "g20_boot_onyonB"
.balign 4
lbl_8049D26C:
	.asciz "g03_meet_redpikmin"
.balign 4
lbl_8049D280:
	.asciz "g1F_meet_yellowpikmin"
.balign 4
lbl_8049D298:
	.asciz "g21_meet_bluepikmin"
.balign 4
lbl_8049D2AC:
	.asciz "g24_meet_blackpikmin"
.balign 4
lbl_8049D2C4:
	.asciz "g27_meet_whitepikmin"
.balign 4
lbl_8049D2DC:
	.asciz "g33_camera_demo"
.balign 4
lbl_8049D2EC:
	.asciz "s09_holein"
.balign 4
lbl_8049D2F8:
	.asciz "s16_find_item_00"
.balign 4
lbl_8049D30C:
	.asciz "s16_find_item_01"
.balign 4
lbl_8049D320:
	.asciz "s16_find_item_02"
.balign 4
lbl_8049D334:
	.asciz "s16_find_item_03"
.balign 4
lbl_8049D348:
	.asciz "s16_find_item_04"
.balign 4
lbl_8049D35C:
	.asciz "s16_find_item_05"
.balign 4
lbl_8049D370:
	.asciz "s16_find_item_06"
.balign 4
lbl_8049D384:
	.asciz "s16_find_item_07"
.balign 4
lbl_8049D398:
	.asciz "s16_find_item_08"
.balign 4
lbl_8049D3AC:
	.asciz "s16_find_item_09"
.balign 4
lbl_8049D3C0:
	.asciz "s16_find_item_10"
.balign 4
lbl_8049D3D4:
	.asciz "s16_find_item_11"
.balign 4
lbl_8049D3E8:
	.asciz "s16_find_item_12"
.balign 4
lbl_8049D3FC:
	.asciz "s0C_cv_escape"
.balign 4
lbl_8049D40C:
	.asciz "g01_pick_me"
.balign 4
lbl_8049D418:
	.asciz "g04_find_treasure"
.balign 4
lbl_8049D42C:
	.asciz "g05_find_cave_f_01"
.balign 4
lbl_8049D440:
	.asciz "g05_find_cave_f_02"
.balign 4
lbl_8049D454:
	.asciz "g05_find_cave_f_03"
.balign 4
lbl_8049D468:
	.asciz "g05_find_cave_f_04"
.balign 4
lbl_8049D47C:
	.asciz "g05_find_cave_l_01"
.balign 4
lbl_8049D490:
	.asciz "g05_find_cave_l_02"
.balign 4
lbl_8049D4A4:
	.asciz "g05_find_cave_l_03"
.balign 4
lbl_8049D4B8:
	.asciz "g05_find_cave_t_01"
.balign 4
lbl_8049D4CC:
	.asciz "g05_find_cave_t_02"
.balign 4
lbl_8049D4E0:
	.asciz "g05_find_cave_t_03"
.balign 4
lbl_8049D4F4:
	.asciz "g05_find_cave_y_01"
.balign 4
lbl_8049D508:
	.asciz "g05_find_cave_y_02"
.balign 4
lbl_8049D51C:
	.asciz "g05_find_cave_y_03"
.balign 4
lbl_8049D530:
	.asciz "g05_find_cave_y_04"
.balign 4
lbl_8049D544:
	.asciz "g0A_cv_find_hole"
.balign 4
lbl_8049D558:
	.asciz "g0B_cv_find_fountain"
.balign 4
lbl_8049D570:
	.asciz "g18_find_gate"
.balign 4
lbl_8049D580:
	.asciz "g19_find_rock"
.balign 4
lbl_8049D590:
	.asciz "g2D_red_extract"
.balign 4
lbl_8049D5A0:
	.asciz "g2E_black_extract"
.balign 4
lbl_8049D5B4:
	.asciz "g34_yellow_extract"
.balign 4
lbl_8049D5C8:
	.asciz "g37_get_louie"
.balign 4
lbl_8049D5D8:
	.asciz "g38_find_whitepom"
.balign 4
lbl_8049D5EC:
	.asciz "g39_find_blackpom"
.balign 4
lbl_8049D600:
	.asciz "x01_gamestart"
.balign 4
lbl_8049D610:
	.asciz "x02_watch_red_pikmin"
.balign 4
lbl_8049D628:
	.asciz "x06_join"
.balign 4
lbl_8049D634:
	.asciz "x12_drain_water"
.balign 4
lbl_8049D644:
	.asciz "x10_find_yellow_onyon"
.balign 4
lbl_8049D65C:
	.asciz "x11_find_blue_onyon"
.balign 4
lbl_8049D670:
	.asciz "x16_hiba"
.balign 4
lbl_8049D67C:
	.asciz "x13_exp_leafchappy"
.balign 4
lbl_8049D690:
	.asciz "x20_blackman"
.balign 4
lbl_8049D6A0:
	.asciz "s13_pikmin_supply"
.balign 4
lbl_8049D6B4:
	.asciz "s0B_cv_coursein"
.balign 4
lbl_8049D6C4:
	.asciz "s0E_return_cave"
.balign 4
lbl_8049D6D4:
	.asciz "e00_E3_cavestart"
.balign 4
lbl_8049D6E8:
	.asciz "g07_cv_gamestart"
.balign 4
lbl_8049D6FC:
	.asciz "g08_first_return"
.balign 4
lbl_8049D710:
	.asciz "g09_first_sunset"
.balign 4
lbl_8049D724:
	.asciz "g16_100_pikmin"
.balign 4
lbl_8049D734:
	.asciz "g16_95_pikmin"
.balign 4
lbl_8049D744:
	.asciz "g26_inout_black"
.balign 4
lbl_8049D754:
	.asciz "g29_inout_white"
.balign 4
lbl_8049D764:
	.asciz "g2B_white_poison"
.balign 4
lbl_8049D778:
	.asciz "g2C_inout_red"
.balign 4
lbl_8049D788:
	.asciz "g36_find_louie"
.balign 4
lbl_8049D798:
	.asciz "x01_coursein_forest"
.balign 4
lbl_8049D7AC:
	.asciz "x01_coursein_yakushima"
.balign 4
lbl_8049D7C4:
	.asciz "x01_coursein_last"
.balign 4
lbl_8049D7D8:
	.asciz "x04_exp_y"
.balign 4
lbl_8049D7E4:
	.asciz "x05_louiestart"
.balign 4
lbl_8049D7F4:
	.asciz "x07_first_recovery"
.balign 4
lbl_8049D808:
	.asciz "x08_cv_suck_carcass"
.balign 4
lbl_8049D81C:
	.asciz "x09_exp_detector"
.balign 4
lbl_8049D830:
	.asciz "x14_white_dig"
.balign 4
lbl_8049D840:
	.asciz "g32_get_map"
.balign 4
lbl_8049D84C:
	.asciz "g35_president_gamestart"
.balign 4
lbl_8049D864:
	.asciz "x15_exp_x"
.balign 4
lbl_8049D870:
	.asciz "x17_join_guide"
.balign 4
lbl_8049D880:
	.asciz "x18_exp_pellet"
.balign 4
lbl_8049D890:
	.asciz "x03_find_red_onyon"
.balign 4
lbl_8049D8A4:
	.asciz "x19_vs_bedama"
.balign 4
lbl_8049D8B4:
	.asciz "g2F_appear_hole"
.balign 4
lbl_8049D8C4:
	.asciz "g30_appear_fountain"
.balign 4
lbl_8049D8D8:
	.asciz "PSMainSide_Scene.h"
.balign 4
lbl_8049D8EC:
	.asciz "PSCommon.h"
.balign 4
lbl_8049D8F8:
	.asciz "s12_cv_giveup"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q23PSM4Demo
__vt__Q23PSM4Demo:
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM4DemoFv
	.4byte init__Q23PSM4DemoFP3VecP3VecPA4_fQ23PSM7DemoArg
	.4byte initiate__Q23PSM4DemoFQ23PSM7DemoArgPUc
	.4byte initDemoScene__Q23PSM4DemoFRQ23PSM7DemoArgPQ23PSM10Scene_Demo

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520C90:
	.asciz ""
.balign 4
lbl_80520C94:
	.asciz "key"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q23PSM4DemoFv
__ct__Q23PSM4DemoFv:
/* 80463FE8 00460F28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80463FEC 00460F2C  7C 08 02 A6 */	mflr r0
/* 80463FF0 00460F30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80463FF4 00460F34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80463FF8 00460F38  7C 7F 1B 78 */	mr r31, r3
/* 80463FFC 00460F3C  4B BB 8F D1 */	bl __ct__11JKRDisposerFv
/* 80464000 00460F40  3C 60 80 4F */	lis r3, __vt__Q23PSM4Demo@ha
/* 80464004 00460F44  38 A0 00 00 */	li r5, 0
/* 80464008 00460F48  38 03 F2 50 */	addi r0, r3, __vt__Q23PSM4Demo@l
/* 8046400C 00460F4C  38 80 00 01 */	li r4, 1
/* 80464010 00460F50  90 1F 00 00 */	stw r0, 0(r31)
/* 80464014 00460F54  38 00 FF FF */	li r0, -1
/* 80464018 00460F58  7F E3 FB 78 */	mr r3, r31
/* 8046401C 00460F5C  98 BF 00 18 */	stb r5, 0x18(r31)
/* 80464020 00460F60  98 9F 00 19 */	stb r4, 0x19(r31)
/* 80464024 00460F64  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80464028 00460F68  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8046402C 00460F6C  90 BF 00 24 */	stw r5, 0x24(r31)
/* 80464030 00460F70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80464034 00460F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80464038 00460F78  7C 08 03 A6 */	mtlr r0
/* 8046403C 00460F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80464040 00460F80  4E 80 00 20 */	blr 

.global init__Q23PSM4DemoFP3VecP3VecPA4_fQ23PSM7DemoArg
init__Q23PSM4DemoFP3VecP3VecPA4_fQ23PSM7DemoArg:
/* 80464044 00460F84  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80464048 00460F88  7C 08 02 A6 */	mflr r0
/* 8046404C 00460F8C  3D 00 80 4A */	lis r8, lbl_8049D080@ha
/* 80464050 00460F90  90 01 00 44 */	stw r0, 0x44(r1)
/* 80464054 00460F94  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 80464058 00460F98  7C 7E 1B 78 */	mr r30, r3
/* 8046405C 00460F9C  7C 99 23 78 */	mr r25, r4
/* 80464060 00460FA0  7C BB 2B 78 */	mr r27, r5
/* 80464064 00460FA4  7C DA 33 78 */	mr r26, r6
/* 80464068 00460FA8  7C FF 3B 78 */	mr r31, r7
/* 8046406C 00460FAC  3B A8 D0 80 */	addi r29, r8, lbl_8049D080@l
/* 80464070 00460FB0  38 60 00 38 */	li r3, 0x38
/* 80464074 00460FB4  4B BB FE 31 */	bl __nw__FUl
/* 80464078 00460FB8  7C 7C 1B 79 */	or. r28, r3, r3
/* 8046407C 00460FBC  41 82 00 0C */	beq .L_80464088
/* 80464080 00460FC0  4B ED 14 31 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80464084 00460FC4  7C 7C 1B 78 */	mr r28, r3
.L_80464088:
/* 80464088 00460FC8  7F 83 E3 78 */	mr r3, r28
/* 8046408C 00460FCC  38 80 00 01 */	li r4, 1
/* 80464090 00460FD0  38 A0 00 02 */	li r5, 2
/* 80464094 00460FD4  4B ED 14 55 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 80464098 00460FD8  38 00 00 01 */	li r0, 1
/* 8046409C 00460FDC  39 00 00 FF */	li r8, 0xff
/* 804640A0 00460FE0  98 1C 00 07 */	stb r0, 7(r28)
/* 804640A4 00460FE4  7F C3 F3 78 */	mr r3, r30
/* 804640A8 00460FE8  38 81 00 0C */	addi r4, r1, 0xc
/* 804640AC 00460FEC  38 A1 00 08 */	addi r5, r1, 8
/* 804640B0 00460FF0  93 3C 00 08 */	stw r25, 8(r28)
/* 804640B4 00460FF4  93 7C 00 10 */	stw r27, 0x10(r28)
/* 804640B8 00460FF8  93 5C 00 18 */	stw r26, 0x18(r28)
/* 804640BC 00460FFC  99 1C 00 06 */	stb r8, 6(r28)
/* 804640C0 00461000  80 FF 00 00 */	lwz r7, 0(r31)
/* 804640C4 00461004  80 DF 00 04 */	lwz r6, 4(r31)
/* 804640C8 00461008  80 1F 00 08 */	lwz r0, 8(r31)
/* 804640CC 0046100C  99 01 00 08 */	stb r8, 8(r1)
/* 804640D0 00461010  90 E1 00 0C */	stw r7, 0xc(r1)
/* 804640D4 00461014  90 C1 00 10 */	stw r6, 0x10(r1)
/* 804640D8 00461018  90 01 00 14 */	stw r0, 0x14(r1)
/* 804640DC 0046101C  81 9E 00 00 */	lwz r12, 0(r30)
/* 804640E0 00461020  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804640E4 00461024  7D 89 03 A6 */	mtctr r12
/* 804640E8 00461028  4E 80 04 21 */	bctrl 
/* 804640EC 0046102C  7C 60 1B 78 */	mr r0, r3
/* 804640F0 00461030  80 7F 00 04 */	lwz r3, 4(r31)
/* 804640F4 00461034  7C 1A 03 78 */	mr r26, r0
/* 804640F8 00461038  4B C6 68 19 */	bl strlen
/* 804640FC 0046103C  38 63 00 01 */	addi r3, r3, 1
/* 80464100 00461040  4B BB FE AD */	bl __nwa__FUl
/* 80464104 00461044  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80464108 00461048  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 8046410C 0046104C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80464110 00461050  4B C6 67 49 */	bl strcpy
/* 80464114 00461054  38 60 00 2C */	li r3, 0x2c
/* 80464118 00461058  4B BB FD 8D */	bl __nw__FUl
/* 8046411C 0046105C  7C 7B 1B 79 */	or. r27, r3, r3
/* 80464120 00461060  41 82 00 14 */	beq .L_80464134
/* 80464124 00461064  88 81 00 08 */	lbz r4, 8(r1)
/* 80464128 00461068  7F 85 E3 78 */	mr r5, r28
/* 8046412C 0046106C  48 00 39 41 */	bl __ct__Q23PSM10Scene_DemoFUcPQ26PSGame9SceneInfo
/* 80464130 00461070  7C 7B 1B 78 */	mr r27, r3
.L_80464134:
/* 80464134 00461074  28 1B 00 00 */	cmplwi r27, 0
/* 80464138 00461078  40 82 00 18 */	bne .L_80464150
/* 8046413C 0046107C  38 7D 00 00 */	addi r3, r29, 0
/* 80464140 00461080  38 BD 00 14 */	addi r5, r29, 0x14
/* 80464144 00461084  38 80 00 C7 */	li r4, 0xc7
/* 80464148 00461088  4C C6 31 82 */	crclr 6
/* 8046414C 0046108C  4B BC 64 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80464150:
/* 80464150 00461090  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80464154 00461094  28 00 00 00 */	cmplwi r0, 0
/* 80464158 00461098  40 82 00 18 */	bne .L_80464170
/* 8046415C 0046109C  38 7D 00 20 */	addi r3, r29, 0x20
/* 80464160 004610A0  38 BD 00 14 */	addi r5, r29, 0x14
/* 80464164 004610A4  38 80 01 D3 */	li r4, 0x1d3
/* 80464168 004610A8  4C C6 31 82 */	crclr 6
/* 8046416C 004610AC  4B BC 64 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80464170:
/* 80464170 004610B0  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80464174 004610B4  28 1C 00 00 */	cmplwi r28, 0
/* 80464178 004610B8  40 82 00 18 */	bne .L_80464190
/* 8046417C 004610BC  38 7D 00 20 */	addi r3, r29, 0x20
/* 80464180 004610C0  38 BD 00 14 */	addi r5, r29, 0x14
/* 80464184 004610C4  38 80 01 DC */	li r4, 0x1dc
/* 80464188 004610C8  4C C6 31 82 */	crclr 6
/* 8046418C 004610CC  4B BC 64 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80464190:
/* 80464190 004610D0  80 1C 00 04 */	lwz r0, 4(r28)
/* 80464194 004610D4  28 00 00 00 */	cmplwi r0, 0
/* 80464198 004610D8  40 82 00 18 */	bne .L_804641B0
/* 8046419C 004610DC  38 7D 00 2C */	addi r3, r29, 0x2c
/* 804641A0 004610E0  38 BD 00 14 */	addi r5, r29, 0x14
/* 804641A4 004610E4  38 80 00 CF */	li r4, 0xcf
/* 804641A8 004610E8  4C C6 31 82 */	crclr 6
/* 804641AC 004610EC  4B BC 64 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804641B0:
/* 804641B0 004610F0  80 7C 00 04 */	lwz r3, 4(r28)
/* 804641B4 004610F4  83 83 00 04 */	lwz r28, 4(r3)
/* 804641B8 004610F8  28 1C 00 00 */	cmplwi r28, 0
/* 804641BC 004610FC  40 82 00 18 */	bne .L_804641D4
/* 804641C0 00461100  38 7D 00 2C */	addi r3, r29, 0x2c
/* 804641C4 00461104  38 BD 00 38 */	addi r5, r29, 0x38
/* 804641C8 00461108  38 80 00 D1 */	li r4, 0xd1
/* 804641CC 0046110C  4C C6 31 82 */	crclr 6
/* 804641D0 00461110  4B BC 64 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804641D4:
/* 804641D4 00461114  7F 83 E3 78 */	mr r3, r28
/* 804641D8 00461118  7F 64 DB 78 */	mr r4, r27
/* 804641DC 0046111C  4B ED D5 39 */	bl adaptChildScene__Q28PSSystem5SceneFPQ28PSSystem5Scene
/* 804641E0 00461120  28 1B 00 00 */	cmplwi r27, 0
/* 804641E4 00461124  40 82 00 18 */	bne .L_804641FC
/* 804641E8 00461128  38 7D 00 00 */	addi r3, r29, 0
/* 804641EC 0046112C  38 BD 00 14 */	addi r5, r29, 0x14
/* 804641F0 00461130  38 80 00 CB */	li r4, 0xcb
/* 804641F4 00461134  4C C6 31 82 */	crclr 6
/* 804641F8 00461138  4B BC 64 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804641FC:
/* 804641FC 0046113C  28 1A 00 00 */	cmplwi r26, 0
/* 80464200 00461140  41 82 00 10 */	beq .L_80464210
/* 80464204 00461144  7F 63 DB 78 */	mr r3, r27
/* 80464208 00461148  7F 44 D3 78 */	mr r4, r26
/* 8046420C 0046114C  4B ED D6 8D */	bl appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
.L_80464210:
/* 80464210 00461150  7F C3 F3 78 */	mr r3, r30
/* 80464214 00461154  7F E4 FB 78 */	mr r4, r31
/* 80464218 00461158  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046421C 0046115C  7F 65 DB 78 */	mr r5, r27
/* 80464220 00461160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80464224 00461164  7D 89 03 A6 */	mtctr r12
/* 80464228 00461168  4E 80 04 21 */	bctrl 
/* 8046422C 0046116C  38 00 00 01 */	li r0, 1
/* 80464230 00461170  7F C3 F3 78 */	mr r3, r30
/* 80464234 00461174  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80464238 00461178  48 00 00 19 */	bl demo1stLoadSync__Q23PSM4DemoFv
/* 8046423C 0046117C  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 80464240 00461180  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80464244 00461184  7C 08 03 A6 */	mtlr r0
/* 80464248 00461188  38 21 00 40 */	addi r1, r1, 0x40
/* 8046424C 0046118C  4E 80 00 20 */	blr 

.global demo1stLoadSync__Q23PSM4DemoFv
demo1stLoadSync__Q23PSM4DemoFv:
/* 80464250 00461190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80464254 00461194  7C 08 02 A6 */	mflr r0
/* 80464258 00461198  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 8046425C 0046119C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80464260 004611A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80464264 004611A4  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 80464268 004611A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8046426C 004611AC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80464270 004611B0  28 00 00 00 */	cmplwi r0, 0
/* 80464274 004611B4  40 82 00 18 */	bne .L_8046428C
/* 80464278 004611B8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046427C 004611BC  38 BF 00 14 */	addi r5, r31, 0x14
/* 80464280 004611C0  38 80 01 D3 */	li r4, 0x1d3
/* 80464284 004611C4  4C C6 31 82 */	crclr 6
/* 80464288 004611C8  4B BC 63 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046428C:
/* 8046428C 004611CC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80464290 004611D0  28 1E 00 00 */	cmplwi r30, 0
/* 80464294 004611D4  40 82 00 18 */	bne .L_804642AC
/* 80464298 004611D8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046429C 004611DC  38 BF 00 14 */	addi r5, r31, 0x14
/* 804642A0 004611E0  38 80 01 DC */	li r4, 0x1dc
/* 804642A4 004611E4  4C C6 31 82 */	crclr 6
/* 804642A8 004611E8  4B BC 63 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804642AC:
/* 804642AC 004611EC  80 1E 00 04 */	lwz r0, 4(r30)
/* 804642B0 004611F0  28 00 00 00 */	cmplwi r0, 0
/* 804642B4 004611F4  40 82 00 18 */	bne .L_804642CC
/* 804642B8 004611F8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804642BC 004611FC  38 BF 00 14 */	addi r5, r31, 0x14
/* 804642C0 00461200  38 80 00 CF */	li r4, 0xcf
/* 804642C4 00461204  4C C6 31 82 */	crclr 6
/* 804642C8 00461208  4B BC 63 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804642CC:
/* 804642CC 0046120C  80 7E 00 04 */	lwz r3, 4(r30)
/* 804642D0 00461210  83 C3 00 04 */	lwz r30, 4(r3)
/* 804642D4 00461214  28 1E 00 00 */	cmplwi r30, 0
/* 804642D8 00461218  40 82 00 18 */	bne .L_804642F0
/* 804642DC 0046121C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804642E0 00461220  38 BF 00 38 */	addi r5, r31, 0x38
/* 804642E4 00461224  38 80 00 D1 */	li r4, 0xd1
/* 804642E8 00461228  4C C6 31 82 */	crclr 6
/* 804642EC 0046122C  4B BC 63 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804642F0:
/* 804642F0 00461230  80 1E 00 04 */	lwz r0, 4(r30)
/* 804642F4 00461234  28 00 00 00 */	cmplwi r0, 0
/* 804642F8 00461238  40 82 00 18 */	bne .L_80464310
/* 804642FC 0046123C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80464300 00461240  38 BF 00 14 */	addi r5, r31, 0x14
/* 80464304 00461244  38 80 00 5B */	li r4, 0x5b
/* 80464308 00461248  4C C6 31 82 */	crclr 6
/* 8046430C 0046124C  4B BC 63 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80464310:
/* 80464310 00461250  80 7E 00 04 */	lwz r3, 4(r30)
/* 80464314 00461254  81 83 00 00 */	lwz r12, 0(r3)
/* 80464318 00461258  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046431C 0046125C  7D 89 03 A6 */	mtctr r12
/* 80464320 00461260  4E 80 04 21 */	bctrl 
/* 80464324 00461264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80464328 00461268  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046432C 0046126C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80464330 00461270  7C 08 03 A6 */	mtlr r0
/* 80464334 00461274  38 21 00 10 */	addi r1, r1, 0x10
/* 80464338 00461278  4E 80 00 20 */	blr 

.global initDemoScene__Q23PSM4DemoFRQ23PSM7DemoArgPQ23PSM10Scene_Demo
initDemoScene__Q23PSM4DemoFRQ23PSM7DemoArgPQ23PSM10Scene_Demo:
/* 8046433C 0046127C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80464340 00461280  7C 08 02 A6 */	mflr r0
/* 80464344 00461284  3C C0 80 4A */	lis r6, lbl_8049D0DC@ha
/* 80464348 00461288  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046434C 0046128C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80464350 00461290  7C BF 2B 78 */	mr r31, r5
/* 80464354 00461294  80 64 00 04 */	lwz r3, 4(r4)
/* 80464358 00461298  38 86 D0 DC */	addi r4, r6, lbl_8049D0DC@l
/* 8046435C 0046129C  4B C6 63 65 */	bl strcmp
/* 80464360 004612A0  2C 03 00 00 */	cmpwi r3, 0
/* 80464364 004612A4  40 82 00 0C */	bne .L_80464370
/* 80464368 004612A8  38 00 00 01 */	li r0, 1
/* 8046436C 004612AC  98 1F 00 28 */	stb r0, 0x28(r31)
.L_80464370:
/* 80464370 004612B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80464374 004612B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80464378 004612B8  7C 08 03 A6 */	mtlr r0
/* 8046437C 004612BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80464380 004612C0  4E 80 00 20 */	blr 

.global initiate__Q23PSM4DemoFQ23PSM7DemoArgPUc
initiate__Q23PSM4DemoFQ23PSM7DemoArgPUc:
/* 80464384 004612C4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80464388 004612C8  7C 08 02 A6 */	mflr r0
/* 8046438C 004612CC  90 01 00 74 */	stw r0, 0x74(r1)
/* 80464390 004612D0  38 00 FF FF */	li r0, -1
/* 80464394 004612D4  BE C1 00 48 */	stmw r22, 0x48(r1)
/* 80464398 004612D8  7C 98 23 78 */	mr r24, r4
/* 8046439C 004612DC  3C 80 80 4A */	lis r4, lbl_8049D080@ha
/* 804643A0 004612E0  83 98 00 04 */	lwz r28, 4(r24)
/* 804643A4 004612E4  3B C4 D0 80 */	addi r30, r4, lbl_8049D080@l
/* 804643A8 004612E8  90 01 00 08 */	stw r0, 8(r1)
/* 804643AC 004612EC  38 80 00 00 */	li r4, 0
/* 804643B0 004612F0  28 1C 00 00 */	cmplwi r28, 0
/* 804643B4 004612F4  7C 77 1B 78 */	mr r23, r3
/* 804643B8 004612F8  7C B9 2B 78 */	mr r25, r5
/* 804643BC 004612FC  3B 40 00 00 */	li r26, 0
/* 804643C0 00461300  81 3E 00 70 */	lwz r9, 0x70(r30)
/* 804643C4 00461304  81 1E 00 74 */	lwz r8, 0x74(r30)
/* 804643C8 00461308  80 FE 00 78 */	lwz r7, 0x78(r30)
/* 804643CC 0046130C  80 DE 00 7C */	lwz r6, 0x7c(r30)
/* 804643D0 00461310  91 21 00 0C */	stw r9, 0xc(r1)
/* 804643D4 00461314  91 01 00 10 */	stw r8, 0x10(r1)
/* 804643D8 00461318  90 E1 00 14 */	stw r7, 0x14(r1)
/* 804643DC 0046131C  90 C1 00 18 */	stw r6, 0x18(r1)
/* 804643E0 00461320  98 81 00 1C */	stb r4, 0x1c(r1)
/* 804643E4 00461324  40 82 00 18 */	bne .L_804643FC
/* 804643E8 00461328  38 7E 00 00 */	addi r3, r30, 0
/* 804643EC 0046132C  38 BE 00 14 */	addi r5, r30, 0x14
/* 804643F0 00461330  38 80 01 00 */	li r4, 0x100
/* 804643F4 00461334  4C C6 31 82 */	crclr 6
/* 804643F8 00461338  4B BC 62 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804643FC:
/* 804643FC 0046133C  28 19 00 00 */	cmplwi r25, 0
/* 80464400 00461340  3B 60 00 00 */	li r27, 0
/* 80464404 00461344  3A C1 00 1C */	addi r22, r1, 0x1c
/* 80464408 00461348  7F 60 DB 78 */	mr r0, r27
/* 8046440C 0046134C  41 82 00 10 */	beq .L_8046441C
/* 80464410 00461350  28 1C 00 00 */	cmplwi r28, 0
/* 80464414 00461354  41 82 00 08 */	beq .L_8046441C
/* 80464418 00461358  38 00 00 01 */	li r0, 1
.L_8046441C:
/* 8046441C 0046135C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80464420 00461360  40 82 00 18 */	bne .L_80464438
/* 80464424 00461364  38 7E 00 00 */	addi r3, r30, 0
/* 80464428 00461368  38 BE 00 14 */	addi r5, r30, 0x14
/* 8046442C 0046136C  38 80 00 29 */	li r4, 0x29
/* 80464430 00461370  4C C6 31 82 */	crclr 6
/* 80464434 00461374  4B BC 62 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80464438:
/* 80464438 00461378  38 00 FF FF */	li r0, -1
/* 8046443C 0046137C  7E C3 B3 78 */	mr r3, r22
/* 80464440 00461380  90 01 00 08 */	stw r0, 8(r1)
/* 80464444 00461384  38 82 29 30 */	addi r4, r2, lbl_80520C90@sda21
/* 80464448 00461388  4B C6 64 11 */	bl strcpy
/* 8046444C 0046138C  38 00 00 FF */	li r0, 0xff
/* 80464450 00461390  7F 83 E3 78 */	mr r3, r28
/* 80464454 00461394  98 19 00 00 */	stb r0, 0(r25)
/* 80464458 00461398  38 9E 00 80 */	addi r4, r30, 0x80
/* 8046445C 0046139C  4B C6 62 65 */	bl strcmp
/* 80464460 004613A0  2C 03 00 00 */	cmpwi r3, 0
/* 80464464 004613A4  40 82 00 1C */	bne .L_80464480
/* 80464468 004613A8  3C 60 C0 01 */	lis r3, 0xC0011012@ha
/* 8046446C 004613AC  38 00 00 FF */	li r0, 0xff
/* 80464470 004613B0  38 63 10 12 */	addi r3, r3, 0xC0011012@l
/* 80464474 004613B4  98 19 00 00 */	stb r0, 0(r25)
/* 80464478 004613B8  3B 60 00 01 */	li r27, 1
/* 8046447C 004613BC  90 61 00 08 */	stw r3, 8(r1)
.L_80464480:
/* 80464480 004613C0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464484 004613C4  83 B8 00 08 */	lwz r29, 8(r24)
/* 80464488 004613C8  40 82 00 28 */	bne .L_804644B0
/* 8046448C 004613CC  7F 83 E3 78 */	mr r3, r28
/* 80464490 004613D0  38 9E 00 94 */	addi r4, r30, 0x94
/* 80464494 004613D4  4B C6 62 2D */	bl strcmp
/* 80464498 004613D8  2C 03 00 00 */	cmpwi r3, 0
/* 8046449C 004613DC  40 82 00 14 */	bne .L_804644B0
/* 804644A0 004613E0  38 00 00 FF */	li r0, 0xff
/* 804644A4 004613E4  93 A1 00 08 */	stw r29, 8(r1)
/* 804644A8 004613E8  3B 60 00 01 */	li r27, 1
/* 804644AC 004613EC  98 19 00 00 */	stb r0, 0(r25)
.L_804644B0:
/* 804644B0 004613F0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804644B4 004613F4  40 82 00 30 */	bne .L_804644E4
/* 804644B8 004613F8  7F 83 E3 78 */	mr r3, r28
/* 804644BC 004613FC  38 9E 00 A0 */	addi r4, r30, 0xa0
/* 804644C0 00461400  4B C6 62 01 */	bl strcmp
/* 804644C4 00461404  2C 03 00 00 */	cmpwi r3, 0
/* 804644C8 00461408  40 82 00 1C */	bne .L_804644E4
/* 804644CC 0046140C  3C 60 C0 01 */	lis r3, 0xC0011005@ha
/* 804644D0 00461410  38 00 00 FF */	li r0, 0xff
/* 804644D4 00461414  38 63 10 05 */	addi r3, r3, 0xC0011005@l
/* 804644D8 00461418  98 19 00 00 */	stb r0, 0(r25)
/* 804644DC 0046141C  3B 60 00 01 */	li r27, 1
/* 804644E0 00461420  90 61 00 08 */	stw r3, 8(r1)
.L_804644E4:
/* 804644E4 00461424  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804644E8 00461428  40 82 00 30 */	bne .L_80464518
/* 804644EC 0046142C  7F 83 E3 78 */	mr r3, r28
/* 804644F0 00461430  38 9E 00 B0 */	addi r4, r30, 0xb0
/* 804644F4 00461434  4B C6 61 CD */	bl strcmp
/* 804644F8 00461438  2C 03 00 00 */	cmpwi r3, 0
/* 804644FC 0046143C  40 82 00 1C */	bne .L_80464518
/* 80464500 00461440  3C 60 C0 01 */	lis r3, 0xC0011006@ha
/* 80464504 00461444  38 00 00 FF */	li r0, 0xff
/* 80464508 00461448  38 63 10 06 */	addi r3, r3, 0xC0011006@l
/* 8046450C 0046144C  98 19 00 00 */	stb r0, 0(r25)
/* 80464510 00461450  3B 60 00 01 */	li r27, 1
/* 80464514 00461454  90 61 00 08 */	stw r3, 8(r1)
.L_80464518:
/* 80464518 00461458  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046451C 0046145C  40 82 00 30 */	bne .L_8046454C
/* 80464520 00461460  7F 83 E3 78 */	mr r3, r28
/* 80464524 00461464  38 9E 00 C0 */	addi r4, r30, 0xc0
/* 80464528 00461468  4B C6 61 99 */	bl strcmp
/* 8046452C 0046146C  2C 03 00 00 */	cmpwi r3, 0
/* 80464530 00461470  40 82 00 1C */	bne .L_8046454C
/* 80464534 00461474  3C 60 C0 01 */	lis r3, 0xC0011001@ha
/* 80464538 00461478  38 00 00 FF */	li r0, 0xff
/* 8046453C 0046147C  38 63 10 01 */	addi r3, r3, 0xC0011001@l
/* 80464540 00461480  98 19 00 00 */	stb r0, 0(r25)
/* 80464544 00461484  3B 60 00 01 */	li r27, 1
/* 80464548 00461488  90 61 00 08 */	stw r3, 8(r1)
.L_8046454C:
/* 8046454C 0046148C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464550 00461490  40 82 00 30 */	bne .L_80464580
/* 80464554 00461494  7F 83 E3 78 */	mr r3, r28
/* 80464558 00461498  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8046455C 0046149C  4B C6 61 65 */	bl strcmp
/* 80464560 004614A0  2C 03 00 00 */	cmpwi r3, 0
/* 80464564 004614A4  40 82 00 1C */	bne .L_80464580
/* 80464568 004614A8  3C 60 C0 01 */	lis r3, 0xC0011001@ha
/* 8046456C 004614AC  38 00 00 FF */	li r0, 0xff
/* 80464570 004614B0  38 63 10 01 */	addi r3, r3, 0xC0011001@l
/* 80464574 004614B4  98 19 00 00 */	stb r0, 0(r25)
/* 80464578 004614B8  3B 60 00 01 */	li r27, 1
/* 8046457C 004614BC  90 61 00 08 */	stw r3, 8(r1)
.L_80464580:
/* 80464580 004614C0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464584 004614C4  40 82 00 30 */	bne .L_804645B4
/* 80464588 004614C8  7F 83 E3 78 */	mr r3, r28
/* 8046458C 004614CC  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 80464590 004614D0  4B C6 61 31 */	bl strcmp
/* 80464594 004614D4  2C 03 00 00 */	cmpwi r3, 0
/* 80464598 004614D8  40 82 00 1C */	bne .L_804645B4
/* 8046459C 004614DC  3C 60 C0 01 */	lis r3, 0xC0011008@ha
/* 804645A0 004614E0  38 00 00 FF */	li r0, 0xff
/* 804645A4 004614E4  38 63 10 08 */	addi r3, r3, 0xC0011008@l
/* 804645A8 004614E8  98 19 00 00 */	stb r0, 0(r25)
/* 804645AC 004614EC  3B 60 00 01 */	li r27, 1
/* 804645B0 004614F0  90 61 00 08 */	stw r3, 8(r1)
.L_804645B4:
/* 804645B4 004614F4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804645B8 004614F8  40 82 00 30 */	bne .L_804645E8
/* 804645BC 004614FC  7F 83 E3 78 */	mr r3, r28
/* 804645C0 00461500  38 9E 00 FC */	addi r4, r30, 0xfc
/* 804645C4 00461504  4B C6 60 FD */	bl strcmp
/* 804645C8 00461508  2C 03 00 00 */	cmpwi r3, 0
/* 804645CC 0046150C  40 82 00 1C */	bne .L_804645E8
/* 804645D0 00461510  3C 60 C0 01 */	lis r3, 0xC0011008@ha
/* 804645D4 00461514  38 00 00 FF */	li r0, 0xff
/* 804645D8 00461518  38 63 10 08 */	addi r3, r3, 0xC0011008@l
/* 804645DC 0046151C  98 19 00 00 */	stb r0, 0(r25)
/* 804645E0 00461520  3B 60 00 01 */	li r27, 1
/* 804645E4 00461524  90 61 00 08 */	stw r3, 8(r1)
.L_804645E8:
/* 804645E8 00461528  34 1E 00 94 */	addic. r0, r30, 0x94
/* 804645EC 0046152C  41 82 00 0C */	beq .L_804645F8
/* 804645F0 00461530  28 1C 00 00 */	cmplwi r28, 0
/* 804645F4 00461534  40 82 00 0C */	bne .L_80464600
.L_804645F8:
/* 804645F8 00461538  38 00 00 00 */	li r0, 0
/* 804645FC 0046153C  48 00 00 24 */	b .L_80464620
.L_80464600:
/* 80464600 00461540  7F 84 E3 78 */	mr r4, r28
/* 80464604 00461544  38 7E 00 94 */	addi r3, r30, 0x94
/* 80464608 00461548  4B C6 60 B9 */	bl strcmp
/* 8046460C 0046154C  2C 03 00 00 */	cmpwi r3, 0
/* 80464610 00461550  40 82 00 0C */	bne .L_8046461C
/* 80464614 00461554  38 00 00 01 */	li r0, 1
/* 80464618 00461558  48 00 00 08 */	b .L_80464620
.L_8046461C:
/* 8046461C 0046155C  38 00 00 00 */	li r0, 0
.L_80464620:
/* 80464620 00461560  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80464624 00461564  40 82 02 34 */	bne .L_80464858
/* 80464628 00461568  80 78 00 00 */	lwz r3, 0(r24)
/* 8046462C 0046156C  7C 03 00 D0 */	neg r0, r3
/* 80464630 00461570  7C 00 1B 78 */	or r0, r0, r3
/* 80464634 00461574  54 1D 0F FF */	rlwinm. r29, r0, 1, 0x1f, 0x1f
/* 80464638 00461578  41 82 00 3C */	beq .L_80464674
/* 8046463C 0046157C  28 03 00 00 */	cmplwi r3, 0
/* 80464640 00461580  41 82 00 10 */	beq .L_80464650
/* 80464644 00461584  38 02 29 34 */	addi r0, r2, lbl_80520C94@sda21
/* 80464648 00461588  28 00 00 00 */	cmplwi r0, 0
/* 8046464C 0046158C  40 82 00 0C */	bne .L_80464658
.L_80464650:
/* 80464650 00461590  3B A0 00 00 */	li r29, 0
/* 80464654 00461594  48 00 00 20 */	b .L_80464674
.L_80464658:
/* 80464658 00461598  38 82 29 34 */	addi r4, r2, lbl_80520C94@sda21
/* 8046465C 0046159C  4B C6 60 65 */	bl strcmp
/* 80464660 004615A0  2C 03 00 00 */	cmpwi r3, 0
/* 80464664 004615A4  40 82 00 0C */	bne .L_80464670
/* 80464668 004615A8  3B A0 00 01 */	li r29, 1
/* 8046466C 004615AC  48 00 00 08 */	b .L_80464674
.L_80464670:
/* 80464670 004615B0  3B A0 00 00 */	li r29, 0
.L_80464674:
/* 80464674 004615B4  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 80464678 004615B8  82 D8 00 08 */	lwz r22, 8(r24)
/* 8046467C 004615BC  7C 03 00 34 */	cntlzw r3, r0
/* 80464680 004615C0  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 80464684 004615C4  54 7F D9 7E */	srwi r31, r3, 5
/* 80464688 004615C8  41 82 00 30 */	beq .L_804646B8
/* 8046468C 004615CC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464690 004615D0  40 82 00 28 */	bne .L_804646B8
/* 80464694 004615D4  7F 83 E3 78 */	mr r3, r28
/* 80464698 004615D8  38 9E 01 10 */	addi r4, r30, 0x110
/* 8046469C 004615DC  4B C6 60 25 */	bl strcmp
/* 804646A0 004615E0  2C 03 00 00 */	cmpwi r3, 0
/* 804646A4 004615E4  40 82 00 14 */	bne .L_804646B8
/* 804646A8 004615E8  38 00 00 FF */	li r0, 0xff
/* 804646AC 004615EC  92 C1 00 08 */	stw r22, 8(r1)
/* 804646B0 004615F0  3B 60 00 01 */	li r27, 1
/* 804646B4 004615F4  98 19 00 00 */	stb r0, 0(r25)
.L_804646B8:
/* 804646B8 004615F8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 804646BC 004615FC  41 82 00 38 */	beq .L_804646F4
/* 804646C0 00461600  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804646C4 00461604  40 82 00 30 */	bne .L_804646F4
/* 804646C8 00461608  7F 83 E3 78 */	mr r3, r28
/* 804646CC 0046160C  38 9E 01 10 */	addi r4, r30, 0x110
/* 804646D0 00461610  4B C6 5F F1 */	bl strcmp
/* 804646D4 00461614  2C 03 00 00 */	cmpwi r3, 0
/* 804646D8 00461618  40 82 00 1C */	bne .L_804646F4
/* 804646DC 0046161C  3C 60 C0 01 */	lis r3, 0xC0011007@ha
/* 804646E0 00461620  38 00 00 FF */	li r0, 0xff
/* 804646E4 00461624  38 63 10 07 */	addi r3, r3, 0xC0011007@l
/* 804646E8 00461628  98 19 00 00 */	stb r0, 0(r25)
/* 804646EC 0046162C  3B 60 00 01 */	li r27, 1
/* 804646F0 00461630  90 61 00 08 */	stw r3, 8(r1)
.L_804646F4:
/* 804646F4 00461634  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 804646F8 00461638  82 D8 00 08 */	lwz r22, 8(r24)
/* 804646FC 0046163C  41 82 00 30 */	beq .L_8046472C
/* 80464700 00461640  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464704 00461644  40 82 00 28 */	bne .L_8046472C
/* 80464708 00461648  7F 83 E3 78 */	mr r3, r28
/* 8046470C 0046164C  38 9E 01 24 */	addi r4, r30, 0x124
/* 80464710 00461650  4B C6 5F B1 */	bl strcmp
/* 80464714 00461654  2C 03 00 00 */	cmpwi r3, 0
/* 80464718 00461658  40 82 00 14 */	bne .L_8046472C
/* 8046471C 0046165C  38 00 00 FF */	li r0, 0xff
/* 80464720 00461660  92 C1 00 08 */	stw r22, 8(r1)
/* 80464724 00461664  3B 60 00 01 */	li r27, 1
/* 80464728 00461668  98 19 00 00 */	stb r0, 0(r25)
.L_8046472C:
/* 8046472C 0046166C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80464730 00461670  41 82 00 38 */	beq .L_80464768
/* 80464734 00461674  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464738 00461678  40 82 00 30 */	bne .L_80464768
/* 8046473C 0046167C  7F 83 E3 78 */	mr r3, r28
/* 80464740 00461680  38 9E 01 24 */	addi r4, r30, 0x124
/* 80464744 00461684  4B C6 5F 7D */	bl strcmp
/* 80464748 00461688  2C 03 00 00 */	cmpwi r3, 0
/* 8046474C 0046168C  40 82 00 1C */	bne .L_80464768
/* 80464750 00461690  3C 60 C0 01 */	lis r3, 0xC0011007@ha
/* 80464754 00461694  38 00 00 FF */	li r0, 0xff
/* 80464758 00461698  38 63 10 07 */	addi r3, r3, 0xC0011007@l
/* 8046475C 0046169C  98 19 00 00 */	stb r0, 0(r25)
/* 80464760 004616A0  3B 60 00 01 */	li r27, 1
/* 80464764 004616A4  90 61 00 08 */	stw r3, 8(r1)
.L_80464768:
/* 80464768 004616A8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8046476C 004616AC  41 82 00 38 */	beq .L_804647A4
/* 80464770 004616B0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464774 004616B4  40 82 00 30 */	bne .L_804647A4
/* 80464778 004616B8  7F 83 E3 78 */	mr r3, r28
/* 8046477C 004616BC  38 9E 01 3C */	addi r4, r30, 0x13c
/* 80464780 004616C0  4B C6 5F 41 */	bl strcmp
/* 80464784 004616C4  2C 03 00 00 */	cmpwi r3, 0
/* 80464788 004616C8  40 82 00 1C */	bne .L_804647A4
/* 8046478C 004616CC  3C 60 C0 01 */	lis r3, 0xC0011001@ha
/* 80464790 004616D0  38 00 00 FF */	li r0, 0xff
/* 80464794 004616D4  38 63 10 01 */	addi r3, r3, 0xC0011001@l
/* 80464798 004616D8  98 19 00 00 */	stb r0, 0(r25)
/* 8046479C 004616DC  3B 60 00 01 */	li r27, 1
/* 804647A0 004616E0  90 61 00 08 */	stw r3, 8(r1)
.L_804647A4:
/* 804647A4 004616E4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 804647A8 004616E8  41 82 00 38 */	beq .L_804647E0
/* 804647AC 004616EC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804647B0 004616F0  40 82 00 30 */	bne .L_804647E0
/* 804647B4 004616F4  7F 83 E3 78 */	mr r3, r28
/* 804647B8 004616F8  38 9E 01 3C */	addi r4, r30, 0x13c
/* 804647BC 004616FC  4B C6 5F 05 */	bl strcmp
/* 804647C0 00461700  2C 03 00 00 */	cmpwi r3, 0
/* 804647C4 00461704  40 82 00 1C */	bne .L_804647E0
/* 804647C8 00461708  3C 60 C0 01 */	lis r3, 0xC0011007@ha
/* 804647CC 0046170C  38 00 00 FF */	li r0, 0xff
/* 804647D0 00461710  38 63 10 07 */	addi r3, r3, 0xC0011007@l
/* 804647D4 00461714  98 19 00 00 */	stb r0, 0(r25)
/* 804647D8 00461718  3B 60 00 01 */	li r27, 1
/* 804647DC 0046171C  90 61 00 08 */	stw r3, 8(r1)
.L_804647E0:
/* 804647E0 00461720  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 804647E4 00461724  41 82 00 38 */	beq .L_8046481C
/* 804647E8 00461728  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804647EC 0046172C  40 82 00 30 */	bne .L_8046481C
/* 804647F0 00461730  7F 83 E3 78 */	mr r3, r28
/* 804647F4 00461734  38 9E 01 50 */	addi r4, r30, 0x150
/* 804647F8 00461738  4B C6 5E C9 */	bl strcmp
/* 804647FC 0046173C  2C 03 00 00 */	cmpwi r3, 0
/* 80464800 00461740  40 82 00 1C */	bne .L_8046481C
/* 80464804 00461744  3C 60 C0 01 */	lis r3, 0xC0011007@ha
/* 80464808 00461748  38 00 00 FF */	li r0, 0xff
/* 8046480C 0046174C  38 63 10 07 */	addi r3, r3, 0xC0011007@l
/* 80464810 00461750  98 19 00 00 */	stb r0, 0(r25)
/* 80464814 00461754  3B 60 00 01 */	li r27, 1
/* 80464818 00461758  90 61 00 08 */	stw r3, 8(r1)
.L_8046481C:
/* 8046481C 0046175C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80464820 00461760  41 82 00 38 */	beq .L_80464858
/* 80464824 00461764  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464828 00461768  40 82 00 30 */	bne .L_80464858
/* 8046482C 0046176C  7F 83 E3 78 */	mr r3, r28
/* 80464830 00461770  38 9E 01 50 */	addi r4, r30, 0x150
/* 80464834 00461774  4B C6 5E 8D */	bl strcmp
/* 80464838 00461778  2C 03 00 00 */	cmpwi r3, 0
/* 8046483C 0046177C  40 82 00 1C */	bne .L_80464858
/* 80464840 00461780  3C 60 C0 01 */	lis r3, 0xC0011001@ha
/* 80464844 00461784  38 00 00 FF */	li r0, 0xff
/* 80464848 00461788  38 63 10 01 */	addi r3, r3, 0xC0011001@l
/* 8046484C 0046178C  98 19 00 00 */	stb r0, 0(r25)
/* 80464850 00461790  3B 60 00 01 */	li r27, 1
/* 80464854 00461794  90 61 00 08 */	stw r3, 8(r1)
.L_80464858:
/* 80464858 00461798  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046485C 0046179C  40 82 00 30 */	bne .L_8046488C
/* 80464860 004617A0  7F 83 E3 78 */	mr r3, r28
/* 80464864 004617A4  38 9E 01 68 */	addi r4, r30, 0x168
/* 80464868 004617A8  4B C6 5E 59 */	bl strcmp
/* 8046486C 004617AC  2C 03 00 00 */	cmpwi r3, 0
/* 80464870 004617B0  40 82 00 1C */	bne .L_8046488C
/* 80464874 004617B4  3C 60 C0 01 */	lis r3, 0xC001101D@ha
/* 80464878 004617B8  38 00 00 FF */	li r0, 0xff
/* 8046487C 004617BC  38 63 10 1D */	addi r3, r3, 0xC001101D@l
/* 80464880 004617C0  98 19 00 00 */	stb r0, 0(r25)
/* 80464884 004617C4  3B 60 00 01 */	li r27, 1
/* 80464888 004617C8  90 61 00 08 */	stw r3, 8(r1)
.L_8046488C:
/* 8046488C 004617CC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464890 004617D0  40 82 00 30 */	bne .L_804648C0
/* 80464894 004617D4  7F 83 E3 78 */	mr r3, r28
/* 80464898 004617D8  38 9E 01 80 */	addi r4, r30, 0x180
/* 8046489C 004617DC  4B C6 5E 25 */	bl strcmp
/* 804648A0 004617E0  2C 03 00 00 */	cmpwi r3, 0
/* 804648A4 004617E4  40 82 00 1C */	bne .L_804648C0
/* 804648A8 004617E8  3C 60 C0 01 */	lis r3, 0xC001101D@ha
/* 804648AC 004617EC  38 00 00 FF */	li r0, 0xff
/* 804648B0 004617F0  38 63 10 1D */	addi r3, r3, 0xC001101D@l
/* 804648B4 004617F4  98 19 00 00 */	stb r0, 0(r25)
/* 804648B8 004617F8  3B 60 00 01 */	li r27, 1
/* 804648BC 004617FC  90 61 00 08 */	stw r3, 8(r1)
.L_804648C0:
/* 804648C0 00461800  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804648C4 00461804  40 82 00 30 */	bne .L_804648F4
/* 804648C8 00461808  7F 83 E3 78 */	mr r3, r28
/* 804648CC 0046180C  38 9E 01 98 */	addi r4, r30, 0x198
/* 804648D0 00461810  4B C6 5D F1 */	bl strcmp
/* 804648D4 00461814  2C 03 00 00 */	cmpwi r3, 0
/* 804648D8 00461818  40 82 00 1C */	bne .L_804648F4
/* 804648DC 0046181C  3C 60 C0 01 */	lis r3, 0xC0011009@ha
/* 804648E0 00461820  38 00 00 FF */	li r0, 0xff
/* 804648E4 00461824  38 63 10 09 */	addi r3, r3, 0xC0011009@l
/* 804648E8 00461828  98 19 00 00 */	stb r0, 0(r25)
/* 804648EC 0046182C  3B 60 00 01 */	li r27, 1
/* 804648F0 00461830  90 61 00 08 */	stw r3, 8(r1)
.L_804648F4:
/* 804648F4 00461834  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804648F8 00461838  40 82 00 30 */	bne .L_80464928
/* 804648FC 0046183C  7F 83 E3 78 */	mr r3, r28
/* 80464900 00461840  38 9E 01 98 */	addi r4, r30, 0x198
/* 80464904 00461844  4B C6 5D BD */	bl strcmp
/* 80464908 00461848  2C 03 00 00 */	cmpwi r3, 0
/* 8046490C 0046184C  40 82 00 1C */	bne .L_80464928
/* 80464910 00461850  3C 60 C0 01 */	lis r3, 0xC0011009@ha
/* 80464914 00461854  38 00 00 FF */	li r0, 0xff
/* 80464918 00461858  38 63 10 09 */	addi r3, r3, 0xC0011009@l
/* 8046491C 0046185C  98 19 00 00 */	stb r0, 0(r25)
/* 80464920 00461860  3B 60 00 01 */	li r27, 1
/* 80464924 00461864  90 61 00 08 */	stw r3, 8(r1)
.L_80464928:
/* 80464928 00461868  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046492C 0046186C  40 82 00 30 */	bne .L_8046495C
/* 80464930 00461870  7F 83 E3 78 */	mr r3, r28
/* 80464934 00461874  38 9E 01 A8 */	addi r4, r30, 0x1a8
/* 80464938 00461878  4B C6 5D 89 */	bl strcmp
/* 8046493C 0046187C  2C 03 00 00 */	cmpwi r3, 0
/* 80464940 00461880  40 82 00 1C */	bne .L_8046495C
/* 80464944 00461884  3C 60 C0 01 */	lis r3, 0xC0011047@ha
/* 80464948 00461888  38 00 00 FF */	li r0, 0xff
/* 8046494C 0046188C  38 63 10 47 */	addi r3, r3, 0xC0011047@l
/* 80464950 00461890  98 19 00 00 */	stb r0, 0(r25)
/* 80464954 00461894  3B 60 00 01 */	li r27, 1
/* 80464958 00461898  90 61 00 08 */	stw r3, 8(r1)
.L_8046495C:
/* 8046495C 0046189C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464960 004618A0  40 82 00 30 */	bne .L_80464990
/* 80464964 004618A4  7F 83 E3 78 */	mr r3, r28
/* 80464968 004618A8  38 9E 01 BC */	addi r4, r30, 0x1bc
/* 8046496C 004618AC  4B C6 5D 55 */	bl strcmp
/* 80464970 004618B0  2C 03 00 00 */	cmpwi r3, 0
/* 80464974 004618B4  40 82 00 1C */	bne .L_80464990
/* 80464978 004618B8  3C 60 C0 01 */	lis r3, 0xC001100C@ha
/* 8046497C 004618BC  38 00 00 FF */	li r0, 0xff
/* 80464980 004618C0  38 63 10 0C */	addi r3, r3, 0xC001100C@l
/* 80464984 004618C4  98 19 00 00 */	stb r0, 0(r25)
/* 80464988 004618C8  3B 60 00 01 */	li r27, 1
/* 8046498C 004618CC  90 61 00 08 */	stw r3, 8(r1)
.L_80464990:
/* 80464990 004618D0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464994 004618D4  40 82 00 30 */	bne .L_804649C4
/* 80464998 004618D8  7F 83 E3 78 */	mr r3, r28
/* 8046499C 004618DC  38 9E 01 CC */	addi r4, r30, 0x1cc
/* 804649A0 004618E0  4B C6 5D 21 */	bl strcmp
/* 804649A4 004618E4  2C 03 00 00 */	cmpwi r3, 0
/* 804649A8 004618E8  40 82 00 1C */	bne .L_804649C4
/* 804649AC 004618EC  3C 60 C0 01 */	lis r3, 0xC001100C@ha
/* 804649B0 004618F0  38 00 00 FF */	li r0, 0xff
/* 804649B4 004618F4  38 63 10 0C */	addi r3, r3, 0xC001100C@l
/* 804649B8 004618F8  98 19 00 00 */	stb r0, 0(r25)
/* 804649BC 004618FC  3B 60 00 01 */	li r27, 1
/* 804649C0 00461900  90 61 00 08 */	stw r3, 8(r1)
.L_804649C4:
/* 804649C4 00461904  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804649C8 00461908  40 82 00 30 */	bne .L_804649F8
/* 804649CC 0046190C  7F 83 E3 78 */	mr r3, r28
/* 804649D0 00461910  38 9E 01 DC */	addi r4, r30, 0x1dc
/* 804649D4 00461914  4B C6 5C ED */	bl strcmp
/* 804649D8 00461918  2C 03 00 00 */	cmpwi r3, 0
/* 804649DC 0046191C  40 82 00 1C */	bne .L_804649F8
/* 804649E0 00461920  3C 60 C0 01 */	lis r3, 0xC001100C@ha
/* 804649E4 00461924  38 00 00 FF */	li r0, 0xff
/* 804649E8 00461928  38 63 10 0C */	addi r3, r3, 0xC001100C@l
/* 804649EC 0046192C  98 19 00 00 */	stb r0, 0(r25)
/* 804649F0 00461930  3B 60 00 01 */	li r27, 1
/* 804649F4 00461934  90 61 00 08 */	stw r3, 8(r1)
.L_804649F8:
/* 804649F8 00461938  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804649FC 0046193C  40 82 00 30 */	bne .L_80464A2C
/* 80464A00 00461940  7F 83 E3 78 */	mr r3, r28
/* 80464A04 00461944  38 9E 01 EC */	addi r4, r30, 0x1ec
/* 80464A08 00461948  4B C6 5C B9 */	bl strcmp
/* 80464A0C 0046194C  2C 03 00 00 */	cmpwi r3, 0
/* 80464A10 00461950  40 82 00 1C */	bne .L_80464A2C
/* 80464A14 00461954  3C 60 C0 01 */	lis r3, 0xC001100D@ha
/* 80464A18 00461958  38 00 00 FF */	li r0, 0xff
/* 80464A1C 0046195C  38 63 10 0D */	addi r3, r3, 0xC001100D@l
/* 80464A20 00461960  98 19 00 00 */	stb r0, 0(r25)
/* 80464A24 00461964  3B 60 00 01 */	li r27, 1
/* 80464A28 00461968  90 61 00 08 */	stw r3, 8(r1)
.L_80464A2C:
/* 80464A2C 0046196C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464A30 00461970  40 82 00 30 */	bne .L_80464A60
/* 80464A34 00461974  7F 83 E3 78 */	mr r3, r28
/* 80464A38 00461978  38 9E 02 00 */	addi r4, r30, 0x200
/* 80464A3C 0046197C  4B C6 5C 85 */	bl strcmp
/* 80464A40 00461980  2C 03 00 00 */	cmpwi r3, 0
/* 80464A44 00461984  40 82 00 1C */	bne .L_80464A60
/* 80464A48 00461988  3C 60 C0 01 */	lis r3, 0xC001100D@ha
/* 80464A4C 0046198C  38 00 00 FF */	li r0, 0xff
/* 80464A50 00461990  38 63 10 0D */	addi r3, r3, 0xC001100D@l
/* 80464A54 00461994  98 19 00 00 */	stb r0, 0(r25)
/* 80464A58 00461998  3B 60 00 01 */	li r27, 1
/* 80464A5C 0046199C  90 61 00 08 */	stw r3, 8(r1)
.L_80464A60:
/* 80464A60 004619A0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464A64 004619A4  40 82 00 30 */	bne .L_80464A94
/* 80464A68 004619A8  7F 83 E3 78 */	mr r3, r28
/* 80464A6C 004619AC  38 9E 02 18 */	addi r4, r30, 0x218
/* 80464A70 004619B0  4B C6 5C 51 */	bl strcmp
/* 80464A74 004619B4  2C 03 00 00 */	cmpwi r3, 0
/* 80464A78 004619B8  40 82 00 1C */	bne .L_80464A94
/* 80464A7C 004619BC  3C 60 C0 01 */	lis r3, 0xC001100D@ha
/* 80464A80 004619C0  38 00 00 FF */	li r0, 0xff
/* 80464A84 004619C4  38 63 10 0D */	addi r3, r3, 0xC001100D@l
/* 80464A88 004619C8  98 19 00 00 */	stb r0, 0(r25)
/* 80464A8C 004619CC  3B 60 00 01 */	li r27, 1
/* 80464A90 004619D0  90 61 00 08 */	stw r3, 8(r1)
.L_80464A94:
/* 80464A94 004619D4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464A98 004619D8  40 82 00 30 */	bne .L_80464AC8
/* 80464A9C 004619DC  7F 83 E3 78 */	mr r3, r28
/* 80464AA0 004619E0  38 9E 02 2C */	addi r4, r30, 0x22c
/* 80464AA4 004619E4  4B C6 5C 1D */	bl strcmp
/* 80464AA8 004619E8  2C 03 00 00 */	cmpwi r3, 0
/* 80464AAC 004619EC  40 82 00 1C */	bne .L_80464AC8
/* 80464AB0 004619F0  3C 60 C0 01 */	lis r3, 0xC001100D@ha
/* 80464AB4 004619F4  38 00 00 FF */	li r0, 0xff
/* 80464AB8 004619F8  38 63 10 0D */	addi r3, r3, 0xC001100D@l
/* 80464ABC 004619FC  98 19 00 00 */	stb r0, 0(r25)
/* 80464AC0 00461A00  3B 60 00 01 */	li r27, 1
/* 80464AC4 00461A04  90 61 00 08 */	stw r3, 8(r1)
.L_80464AC8:
/* 80464AC8 00461A08  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464ACC 00461A0C  40 82 00 30 */	bne .L_80464AFC
/* 80464AD0 00461A10  7F 83 E3 78 */	mr r3, r28
/* 80464AD4 00461A14  38 9E 02 44 */	addi r4, r30, 0x244
/* 80464AD8 00461A18  4B C6 5B E9 */	bl strcmp
/* 80464ADC 00461A1C  2C 03 00 00 */	cmpwi r3, 0
/* 80464AE0 00461A20  40 82 00 1C */	bne .L_80464AFC
/* 80464AE4 00461A24  3C 60 C0 01 */	lis r3, 0xC001100D@ha
/* 80464AE8 00461A28  38 00 00 FF */	li r0, 0xff
/* 80464AEC 00461A2C  38 63 10 0D */	addi r3, r3, 0xC001100D@l
/* 80464AF0 00461A30  98 19 00 00 */	stb r0, 0(r25)
/* 80464AF4 00461A34  3B 60 00 01 */	li r27, 1
/* 80464AF8 00461A38  90 61 00 08 */	stw r3, 8(r1)
.L_80464AFC:
/* 80464AFC 00461A3C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464B00 00461A40  40 82 00 30 */	bne .L_80464B30
/* 80464B04 00461A44  7F 83 E3 78 */	mr r3, r28
/* 80464B08 00461A48  38 9E 02 5C */	addi r4, r30, 0x25c
/* 80464B0C 00461A4C  4B C6 5B B5 */	bl strcmp
/* 80464B10 00461A50  2C 03 00 00 */	cmpwi r3, 0
/* 80464B14 00461A54  40 82 00 1C */	bne .L_80464B30
/* 80464B18 00461A58  3C 60 C0 01 */	lis r3, 0xC0011024@ha
/* 80464B1C 00461A5C  38 00 00 FF */	li r0, 0xff
/* 80464B20 00461A60  38 63 10 24 */	addi r3, r3, 0xC0011024@l
/* 80464B24 00461A64  98 19 00 00 */	stb r0, 0(r25)
/* 80464B28 00461A68  3B 60 00 01 */	li r27, 1
/* 80464B2C 00461A6C  90 61 00 08 */	stw r3, 8(r1)
.L_80464B30:
/* 80464B30 00461A70  48 00 29 ED */	bl PSMGetGameSceneA__Fv
/* 80464B34 00461A74  81 83 00 00 */	lwz r12, 0(r3)
/* 80464B38 00461A78  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80464B3C 00461A7C  7D 89 03 A6 */	mtctr r12
/* 80464B40 00461A80  4E 80 04 21 */	bctrl 
/* 80464B44 00461A84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80464B48 00461A88  41 82 00 3C */	beq .L_80464B84
/* 80464B4C 00461A8C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464B50 00461A90  40 82 00 68 */	bne .L_80464BB8
/* 80464B54 00461A94  7F 83 E3 78 */	mr r3, r28
/* 80464B58 00461A98  38 9E 02 6C */	addi r4, r30, 0x26c
/* 80464B5C 00461A9C  4B C6 5B 65 */	bl strcmp
/* 80464B60 00461AA0  2C 03 00 00 */	cmpwi r3, 0
/* 80464B64 00461AA4  40 82 00 54 */	bne .L_80464BB8
/* 80464B68 00461AA8  3C 60 C0 01 */	lis r3, 0xC0011046@ha
/* 80464B6C 00461AAC  38 00 00 FF */	li r0, 0xff
/* 80464B70 00461AB0  38 63 10 46 */	addi r3, r3, 0xC0011046@l
/* 80464B74 00461AB4  98 19 00 00 */	stb r0, 0(r25)
/* 80464B78 00461AB8  3B 60 00 01 */	li r27, 1
/* 80464B7C 00461ABC  90 61 00 08 */	stw r3, 8(r1)
/* 80464B80 00461AC0  48 00 00 38 */	b .L_80464BB8
.L_80464B84:
/* 80464B84 00461AC4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464B88 00461AC8  40 82 00 30 */	bne .L_80464BB8
/* 80464B8C 00461ACC  7F 83 E3 78 */	mr r3, r28
/* 80464B90 00461AD0  38 9E 02 6C */	addi r4, r30, 0x26c
/* 80464B94 00461AD4  4B C6 5B 2D */	bl strcmp
/* 80464B98 00461AD8  2C 03 00 00 */	cmpwi r3, 0
/* 80464B9C 00461ADC  40 82 00 1C */	bne .L_80464BB8
/* 80464BA0 00461AE0  3C 60 C0 01 */	lis r3, 0xC0011026@ha
/* 80464BA4 00461AE4  38 00 00 FF */	li r0, 0xff
/* 80464BA8 00461AE8  38 63 10 26 */	addi r3, r3, 0xC0011026@l
/* 80464BAC 00461AEC  98 19 00 00 */	stb r0, 0(r25)
/* 80464BB0 00461AF0  3B 60 00 01 */	li r27, 1
/* 80464BB4 00461AF4  90 61 00 08 */	stw r3, 8(r1)
.L_80464BB8:
/* 80464BB8 00461AF8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464BBC 00461AFC  40 82 00 30 */	bne .L_80464BEC
/* 80464BC0 00461B00  7F 83 E3 78 */	mr r3, r28
/* 80464BC4 00461B04  38 9E 02 78 */	addi r4, r30, 0x278
/* 80464BC8 00461B08  4B C6 5A F9 */	bl strcmp
/* 80464BCC 00461B0C  2C 03 00 00 */	cmpwi r3, 0
/* 80464BD0 00461B10  40 82 00 1C */	bne .L_80464BEC
/* 80464BD4 00461B14  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464BD8 00461B18  38 00 00 FF */	li r0, 0xff
/* 80464BDC 00461B1C  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464BE0 00461B20  98 19 00 00 */	stb r0, 0(r25)
/* 80464BE4 00461B24  3B 60 00 01 */	li r27, 1
/* 80464BE8 00461B28  90 61 00 08 */	stw r3, 8(r1)
.L_80464BEC:
/* 80464BEC 00461B2C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464BF0 00461B30  40 82 00 30 */	bne .L_80464C20
/* 80464BF4 00461B34  7F 83 E3 78 */	mr r3, r28
/* 80464BF8 00461B38  38 9E 02 8C */	addi r4, r30, 0x28c
/* 80464BFC 00461B3C  4B C6 5A C5 */	bl strcmp
/* 80464C00 00461B40  2C 03 00 00 */	cmpwi r3, 0
/* 80464C04 00461B44  40 82 00 1C */	bne .L_80464C20
/* 80464C08 00461B48  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464C0C 00461B4C  38 00 00 FF */	li r0, 0xff
/* 80464C10 00461B50  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464C14 00461B54  98 19 00 00 */	stb r0, 0(r25)
/* 80464C18 00461B58  3B 60 00 01 */	li r27, 1
/* 80464C1C 00461B5C  90 61 00 08 */	stw r3, 8(r1)
.L_80464C20:
/* 80464C20 00461B60  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464C24 00461B64  40 82 00 30 */	bne .L_80464C54
/* 80464C28 00461B68  7F 83 E3 78 */	mr r3, r28
/* 80464C2C 00461B6C  38 9E 02 A0 */	addi r4, r30, 0x2a0
/* 80464C30 00461B70  4B C6 5A 91 */	bl strcmp
/* 80464C34 00461B74  2C 03 00 00 */	cmpwi r3, 0
/* 80464C38 00461B78  40 82 00 1C */	bne .L_80464C54
/* 80464C3C 00461B7C  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464C40 00461B80  38 00 00 FF */	li r0, 0xff
/* 80464C44 00461B84  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464C48 00461B88  98 19 00 00 */	stb r0, 0(r25)
/* 80464C4C 00461B8C  3B 60 00 01 */	li r27, 1
/* 80464C50 00461B90  90 61 00 08 */	stw r3, 8(r1)
.L_80464C54:
/* 80464C54 00461B94  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464C58 00461B98  40 82 00 30 */	bne .L_80464C88
/* 80464C5C 00461B9C  7F 83 E3 78 */	mr r3, r28
/* 80464C60 00461BA0  38 9E 02 B4 */	addi r4, r30, 0x2b4
/* 80464C64 00461BA4  4B C6 5A 5D */	bl strcmp
/* 80464C68 00461BA8  2C 03 00 00 */	cmpwi r3, 0
/* 80464C6C 00461BAC  40 82 00 1C */	bne .L_80464C88
/* 80464C70 00461BB0  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464C74 00461BB4  38 00 00 FF */	li r0, 0xff
/* 80464C78 00461BB8  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464C7C 00461BBC  98 19 00 00 */	stb r0, 0(r25)
/* 80464C80 00461BC0  3B 60 00 01 */	li r27, 1
/* 80464C84 00461BC4  90 61 00 08 */	stw r3, 8(r1)
.L_80464C88:
/* 80464C88 00461BC8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464C8C 00461BCC  40 82 00 30 */	bne .L_80464CBC
/* 80464C90 00461BD0  7F 83 E3 78 */	mr r3, r28
/* 80464C94 00461BD4  38 9E 02 C8 */	addi r4, r30, 0x2c8
/* 80464C98 00461BD8  4B C6 5A 29 */	bl strcmp
/* 80464C9C 00461BDC  2C 03 00 00 */	cmpwi r3, 0
/* 80464CA0 00461BE0  40 82 00 1C */	bne .L_80464CBC
/* 80464CA4 00461BE4  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464CA8 00461BE8  38 00 00 FF */	li r0, 0xff
/* 80464CAC 00461BEC  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464CB0 00461BF0  98 19 00 00 */	stb r0, 0(r25)
/* 80464CB4 00461BF4  3B 60 00 01 */	li r27, 1
/* 80464CB8 00461BF8  90 61 00 08 */	stw r3, 8(r1)
.L_80464CBC:
/* 80464CBC 00461BFC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464CC0 00461C00  40 82 00 30 */	bne .L_80464CF0
/* 80464CC4 00461C04  7F 83 E3 78 */	mr r3, r28
/* 80464CC8 00461C08  38 9E 02 DC */	addi r4, r30, 0x2dc
/* 80464CCC 00461C0C  4B C6 59 F5 */	bl strcmp
/* 80464CD0 00461C10  2C 03 00 00 */	cmpwi r3, 0
/* 80464CD4 00461C14  40 82 00 1C */	bne .L_80464CF0
/* 80464CD8 00461C18  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464CDC 00461C1C  38 00 00 FF */	li r0, 0xff
/* 80464CE0 00461C20  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464CE4 00461C24  98 19 00 00 */	stb r0, 0(r25)
/* 80464CE8 00461C28  3B 60 00 01 */	li r27, 1
/* 80464CEC 00461C2C  90 61 00 08 */	stw r3, 8(r1)
.L_80464CF0:
/* 80464CF0 00461C30  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464CF4 00461C34  40 82 00 30 */	bne .L_80464D24
/* 80464CF8 00461C38  7F 83 E3 78 */	mr r3, r28
/* 80464CFC 00461C3C  38 9E 02 F0 */	addi r4, r30, 0x2f0
/* 80464D00 00461C40  4B C6 59 C1 */	bl strcmp
/* 80464D04 00461C44  2C 03 00 00 */	cmpwi r3, 0
/* 80464D08 00461C48  40 82 00 1C */	bne .L_80464D24
/* 80464D0C 00461C4C  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464D10 00461C50  38 00 00 FF */	li r0, 0xff
/* 80464D14 00461C54  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464D18 00461C58  98 19 00 00 */	stb r0, 0(r25)
/* 80464D1C 00461C5C  3B 60 00 01 */	li r27, 1
/* 80464D20 00461C60  90 61 00 08 */	stw r3, 8(r1)
.L_80464D24:
/* 80464D24 00461C64  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464D28 00461C68  40 82 00 30 */	bne .L_80464D58
/* 80464D2C 00461C6C  7F 83 E3 78 */	mr r3, r28
/* 80464D30 00461C70  38 9E 03 04 */	addi r4, r30, 0x304
/* 80464D34 00461C74  4B C6 59 8D */	bl strcmp
/* 80464D38 00461C78  2C 03 00 00 */	cmpwi r3, 0
/* 80464D3C 00461C7C  40 82 00 1C */	bne .L_80464D58
/* 80464D40 00461C80  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464D44 00461C84  38 00 00 FF */	li r0, 0xff
/* 80464D48 00461C88  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464D4C 00461C8C  98 19 00 00 */	stb r0, 0(r25)
/* 80464D50 00461C90  3B 60 00 01 */	li r27, 1
/* 80464D54 00461C94  90 61 00 08 */	stw r3, 8(r1)
.L_80464D58:
/* 80464D58 00461C98  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464D5C 00461C9C  40 82 00 30 */	bne .L_80464D8C
/* 80464D60 00461CA0  7F 83 E3 78 */	mr r3, r28
/* 80464D64 00461CA4  38 9E 03 18 */	addi r4, r30, 0x318
/* 80464D68 00461CA8  4B C6 59 59 */	bl strcmp
/* 80464D6C 00461CAC  2C 03 00 00 */	cmpwi r3, 0
/* 80464D70 00461CB0  40 82 00 1C */	bne .L_80464D8C
/* 80464D74 00461CB4  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464D78 00461CB8  38 00 00 FF */	li r0, 0xff
/* 80464D7C 00461CBC  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464D80 00461CC0  98 19 00 00 */	stb r0, 0(r25)
/* 80464D84 00461CC4  3B 60 00 01 */	li r27, 1
/* 80464D88 00461CC8  90 61 00 08 */	stw r3, 8(r1)
.L_80464D8C:
/* 80464D8C 00461CCC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464D90 00461CD0  40 82 00 30 */	bne .L_80464DC0
/* 80464D94 00461CD4  7F 83 E3 78 */	mr r3, r28
/* 80464D98 00461CD8  38 9E 03 2C */	addi r4, r30, 0x32c
/* 80464D9C 00461CDC  4B C6 59 25 */	bl strcmp
/* 80464DA0 00461CE0  2C 03 00 00 */	cmpwi r3, 0
/* 80464DA4 00461CE4  40 82 00 1C */	bne .L_80464DC0
/* 80464DA8 00461CE8  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464DAC 00461CEC  38 00 00 FF */	li r0, 0xff
/* 80464DB0 00461CF0  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464DB4 00461CF4  98 19 00 00 */	stb r0, 0(r25)
/* 80464DB8 00461CF8  3B 60 00 01 */	li r27, 1
/* 80464DBC 00461CFC  90 61 00 08 */	stw r3, 8(r1)
.L_80464DC0:
/* 80464DC0 00461D00  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464DC4 00461D04  40 82 00 30 */	bne .L_80464DF4
/* 80464DC8 00461D08  7F 83 E3 78 */	mr r3, r28
/* 80464DCC 00461D0C  38 9E 03 40 */	addi r4, r30, 0x340
/* 80464DD0 00461D10  4B C6 58 F1 */	bl strcmp
/* 80464DD4 00461D14  2C 03 00 00 */	cmpwi r3, 0
/* 80464DD8 00461D18  40 82 00 1C */	bne .L_80464DF4
/* 80464DDC 00461D1C  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464DE0 00461D20  38 00 00 FF */	li r0, 0xff
/* 80464DE4 00461D24  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464DE8 00461D28  98 19 00 00 */	stb r0, 0(r25)
/* 80464DEC 00461D2C  3B 60 00 01 */	li r27, 1
/* 80464DF0 00461D30  90 61 00 08 */	stw r3, 8(r1)
.L_80464DF4:
/* 80464DF4 00461D34  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464DF8 00461D38  40 82 00 30 */	bne .L_80464E28
/* 80464DFC 00461D3C  7F 83 E3 78 */	mr r3, r28
/* 80464E00 00461D40  38 9E 03 54 */	addi r4, r30, 0x354
/* 80464E04 00461D44  4B C6 58 BD */	bl strcmp
/* 80464E08 00461D48  2C 03 00 00 */	cmpwi r3, 0
/* 80464E0C 00461D4C  40 82 00 1C */	bne .L_80464E28
/* 80464E10 00461D50  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464E14 00461D54  38 00 00 FF */	li r0, 0xff
/* 80464E18 00461D58  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464E1C 00461D5C  98 19 00 00 */	stb r0, 0(r25)
/* 80464E20 00461D60  3B 60 00 01 */	li r27, 1
/* 80464E24 00461D64  90 61 00 08 */	stw r3, 8(r1)
.L_80464E28:
/* 80464E28 00461D68  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464E2C 00461D6C  40 82 00 30 */	bne .L_80464E5C
/* 80464E30 00461D70  7F 83 E3 78 */	mr r3, r28
/* 80464E34 00461D74  38 9E 03 68 */	addi r4, r30, 0x368
/* 80464E38 00461D78  4B C6 58 89 */	bl strcmp
/* 80464E3C 00461D7C  2C 03 00 00 */	cmpwi r3, 0
/* 80464E40 00461D80  40 82 00 1C */	bne .L_80464E5C
/* 80464E44 00461D84  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464E48 00461D88  38 00 00 FF */	li r0, 0xff
/* 80464E4C 00461D8C  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464E50 00461D90  98 19 00 00 */	stb r0, 0(r25)
/* 80464E54 00461D94  3B 60 00 01 */	li r27, 1
/* 80464E58 00461D98  90 61 00 08 */	stw r3, 8(r1)
.L_80464E5C:
/* 80464E5C 00461D9C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464E60 00461DA0  40 82 00 30 */	bne .L_80464E90
/* 80464E64 00461DA4  7F 83 E3 78 */	mr r3, r28
/* 80464E68 00461DA8  38 9E 03 7C */	addi r4, r30, 0x37c
/* 80464E6C 00461DAC  4B C6 58 55 */	bl strcmp
/* 80464E70 00461DB0  2C 03 00 00 */	cmpwi r3, 0
/* 80464E74 00461DB4  40 82 00 1C */	bne .L_80464E90
/* 80464E78 00461DB8  3C 60 C0 01 */	lis r3, 0xC0011028@ha
/* 80464E7C 00461DBC  38 00 00 FF */	li r0, 0xff
/* 80464E80 00461DC0  38 63 10 28 */	addi r3, r3, 0xC0011028@l
/* 80464E84 00461DC4  98 19 00 00 */	stb r0, 0(r25)
/* 80464E88 00461DC8  3B 60 00 01 */	li r27, 1
/* 80464E8C 00461DCC  90 61 00 08 */	stw r3, 8(r1)
.L_80464E90:
/* 80464E90 00461DD0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464E94 00461DD4  40 82 00 30 */	bne .L_80464EC4
/* 80464E98 00461DD8  7F 83 E3 78 */	mr r3, r28
/* 80464E9C 00461DDC  38 9E 03 8C */	addi r4, r30, 0x38c
/* 80464EA0 00461DE0  4B C6 58 21 */	bl strcmp
/* 80464EA4 00461DE4  2C 03 00 00 */	cmpwi r3, 0
/* 80464EA8 00461DE8  40 82 00 1C */	bne .L_80464EC4
/* 80464EAC 00461DEC  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464EB0 00461DF0  38 00 00 FF */	li r0, 0xff
/* 80464EB4 00461DF4  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464EB8 00461DF8  98 19 00 00 */	stb r0, 0(r25)
/* 80464EBC 00461DFC  3B 60 00 01 */	li r27, 1
/* 80464EC0 00461E00  90 61 00 08 */	stw r3, 8(r1)
.L_80464EC4:
/* 80464EC4 00461E04  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464EC8 00461E08  40 82 00 30 */	bne .L_80464EF8
/* 80464ECC 00461E0C  7F 83 E3 78 */	mr r3, r28
/* 80464ED0 00461E10  38 9E 03 98 */	addi r4, r30, 0x398
/* 80464ED4 00461E14  4B C6 57 ED */	bl strcmp
/* 80464ED8 00461E18  2C 03 00 00 */	cmpwi r3, 0
/* 80464EDC 00461E1C  40 82 00 1C */	bne .L_80464EF8
/* 80464EE0 00461E20  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 80464EE4 00461E24  38 00 00 FF */	li r0, 0xff
/* 80464EE8 00461E28  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80464EEC 00461E2C  98 19 00 00 */	stb r0, 0(r25)
/* 80464EF0 00461E30  3B 60 00 01 */	li r27, 1
/* 80464EF4 00461E34  90 61 00 08 */	stw r3, 8(r1)
.L_80464EF8:
/* 80464EF8 00461E38  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464EFC 00461E3C  40 82 00 30 */	bne .L_80464F2C
/* 80464F00 00461E40  7F 83 E3 78 */	mr r3, r28
/* 80464F04 00461E44  38 9E 03 AC */	addi r4, r30, 0x3ac
/* 80464F08 00461E48  4B C6 57 B9 */	bl strcmp
/* 80464F0C 00461E4C  2C 03 00 00 */	cmpwi r3, 0
/* 80464F10 00461E50  40 82 00 1C */	bne .L_80464F2C
/* 80464F14 00461E54  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464F18 00461E58  38 00 00 FF */	li r0, 0xff
/* 80464F1C 00461E5C  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464F20 00461E60  98 19 00 00 */	stb r0, 0(r25)
/* 80464F24 00461E64  3B 60 00 01 */	li r27, 1
/* 80464F28 00461E68  90 61 00 08 */	stw r3, 8(r1)
.L_80464F2C:
/* 80464F2C 00461E6C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464F30 00461E70  40 82 00 30 */	bne .L_80464F60
/* 80464F34 00461E74  7F 83 E3 78 */	mr r3, r28
/* 80464F38 00461E78  38 9E 03 C0 */	addi r4, r30, 0x3c0
/* 80464F3C 00461E7C  4B C6 57 85 */	bl strcmp
/* 80464F40 00461E80  2C 03 00 00 */	cmpwi r3, 0
/* 80464F44 00461E84  40 82 00 1C */	bne .L_80464F60
/* 80464F48 00461E88  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464F4C 00461E8C  38 00 00 FF */	li r0, 0xff
/* 80464F50 00461E90  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464F54 00461E94  98 19 00 00 */	stb r0, 0(r25)
/* 80464F58 00461E98  3B 60 00 01 */	li r27, 1
/* 80464F5C 00461E9C  90 61 00 08 */	stw r3, 8(r1)
.L_80464F60:
/* 80464F60 00461EA0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464F64 00461EA4  40 82 00 30 */	bne .L_80464F94
/* 80464F68 00461EA8  7F 83 E3 78 */	mr r3, r28
/* 80464F6C 00461EAC  38 9E 03 D4 */	addi r4, r30, 0x3d4
/* 80464F70 00461EB0  4B C6 57 51 */	bl strcmp
/* 80464F74 00461EB4  2C 03 00 00 */	cmpwi r3, 0
/* 80464F78 00461EB8  40 82 00 1C */	bne .L_80464F94
/* 80464F7C 00461EBC  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464F80 00461EC0  38 00 00 FF */	li r0, 0xff
/* 80464F84 00461EC4  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464F88 00461EC8  98 19 00 00 */	stb r0, 0(r25)
/* 80464F8C 00461ECC  3B 60 00 01 */	li r27, 1
/* 80464F90 00461ED0  90 61 00 08 */	stw r3, 8(r1)
.L_80464F94:
/* 80464F94 00461ED4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464F98 00461ED8  40 82 00 30 */	bne .L_80464FC8
/* 80464F9C 00461EDC  7F 83 E3 78 */	mr r3, r28
/* 80464FA0 00461EE0  38 9E 03 E8 */	addi r4, r30, 0x3e8
/* 80464FA4 00461EE4  4B C6 57 1D */	bl strcmp
/* 80464FA8 00461EE8  2C 03 00 00 */	cmpwi r3, 0
/* 80464FAC 00461EEC  40 82 00 1C */	bne .L_80464FC8
/* 80464FB0 00461EF0  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464FB4 00461EF4  38 00 00 FF */	li r0, 0xff
/* 80464FB8 00461EF8  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464FBC 00461EFC  98 19 00 00 */	stb r0, 0(r25)
/* 80464FC0 00461F00  3B 60 00 01 */	li r27, 1
/* 80464FC4 00461F04  90 61 00 08 */	stw r3, 8(r1)
.L_80464FC8:
/* 80464FC8 00461F08  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80464FCC 00461F0C  40 82 00 30 */	bne .L_80464FFC
/* 80464FD0 00461F10  7F 83 E3 78 */	mr r3, r28
/* 80464FD4 00461F14  38 9E 03 FC */	addi r4, r30, 0x3fc
/* 80464FD8 00461F18  4B C6 56 E9 */	bl strcmp
/* 80464FDC 00461F1C  2C 03 00 00 */	cmpwi r3, 0
/* 80464FE0 00461F20  40 82 00 1C */	bne .L_80464FFC
/* 80464FE4 00461F24  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80464FE8 00461F28  38 00 00 FF */	li r0, 0xff
/* 80464FEC 00461F2C  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80464FF0 00461F30  98 19 00 00 */	stb r0, 0(r25)
/* 80464FF4 00461F34  3B 60 00 01 */	li r27, 1
/* 80464FF8 00461F38  90 61 00 08 */	stw r3, 8(r1)
.L_80464FFC:
/* 80464FFC 00461F3C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465000 00461F40  40 82 00 30 */	bne .L_80465030
/* 80465004 00461F44  7F 83 E3 78 */	mr r3, r28
/* 80465008 00461F48  38 9E 04 10 */	addi r4, r30, 0x410
/* 8046500C 00461F4C  4B C6 56 B5 */	bl strcmp
/* 80465010 00461F50  2C 03 00 00 */	cmpwi r3, 0
/* 80465014 00461F54  40 82 00 1C */	bne .L_80465030
/* 80465018 00461F58  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 8046501C 00461F5C  38 00 00 FF */	li r0, 0xff
/* 80465020 00461F60  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465024 00461F64  98 19 00 00 */	stb r0, 0(r25)
/* 80465028 00461F68  3B 60 00 01 */	li r27, 1
/* 8046502C 00461F6C  90 61 00 08 */	stw r3, 8(r1)
.L_80465030:
/* 80465030 00461F70  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465034 00461F74  40 82 00 30 */	bne .L_80465064
/* 80465038 00461F78  7F 83 E3 78 */	mr r3, r28
/* 8046503C 00461F7C  38 9E 04 24 */	addi r4, r30, 0x424
/* 80465040 00461F80  4B C6 56 81 */	bl strcmp
/* 80465044 00461F84  2C 03 00 00 */	cmpwi r3, 0
/* 80465048 00461F88  40 82 00 1C */	bne .L_80465064
/* 8046504C 00461F8C  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465050 00461F90  38 00 00 FF */	li r0, 0xff
/* 80465054 00461F94  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465058 00461F98  98 19 00 00 */	stb r0, 0(r25)
/* 8046505C 00461F9C  3B 60 00 01 */	li r27, 1
/* 80465060 00461FA0  90 61 00 08 */	stw r3, 8(r1)
.L_80465064:
/* 80465064 00461FA4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465068 00461FA8  40 82 00 30 */	bne .L_80465098
/* 8046506C 00461FAC  7F 83 E3 78 */	mr r3, r28
/* 80465070 00461FB0  38 9E 04 38 */	addi r4, r30, 0x438
/* 80465074 00461FB4  4B C6 56 4D */	bl strcmp
/* 80465078 00461FB8  2C 03 00 00 */	cmpwi r3, 0
/* 8046507C 00461FBC  40 82 00 1C */	bne .L_80465098
/* 80465080 00461FC0  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465084 00461FC4  38 00 00 FF */	li r0, 0xff
/* 80465088 00461FC8  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 8046508C 00461FCC  98 19 00 00 */	stb r0, 0(r25)
/* 80465090 00461FD0  3B 60 00 01 */	li r27, 1
/* 80465094 00461FD4  90 61 00 08 */	stw r3, 8(r1)
.L_80465098:
/* 80465098 00461FD8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046509C 00461FDC  40 82 00 30 */	bne .L_804650CC
/* 804650A0 00461FE0  7F 83 E3 78 */	mr r3, r28
/* 804650A4 00461FE4  38 9E 04 4C */	addi r4, r30, 0x44c
/* 804650A8 00461FE8  4B C6 56 19 */	bl strcmp
/* 804650AC 00461FEC  2C 03 00 00 */	cmpwi r3, 0
/* 804650B0 00461FF0  40 82 00 1C */	bne .L_804650CC
/* 804650B4 00461FF4  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 804650B8 00461FF8  38 00 00 FF */	li r0, 0xff
/* 804650BC 00461FFC  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 804650C0 00462000  98 19 00 00 */	stb r0, 0(r25)
/* 804650C4 00462004  3B 60 00 01 */	li r27, 1
/* 804650C8 00462008  90 61 00 08 */	stw r3, 8(r1)
.L_804650CC:
/* 804650CC 0046200C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804650D0 00462010  40 82 00 30 */	bne .L_80465100
/* 804650D4 00462014  7F 83 E3 78 */	mr r3, r28
/* 804650D8 00462018  38 9E 04 60 */	addi r4, r30, 0x460
/* 804650DC 0046201C  4B C6 55 E5 */	bl strcmp
/* 804650E0 00462020  2C 03 00 00 */	cmpwi r3, 0
/* 804650E4 00462024  40 82 00 1C */	bne .L_80465100
/* 804650E8 00462028  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 804650EC 0046202C  38 00 00 FF */	li r0, 0xff
/* 804650F0 00462030  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 804650F4 00462034  98 19 00 00 */	stb r0, 0(r25)
/* 804650F8 00462038  3B 60 00 01 */	li r27, 1
/* 804650FC 0046203C  90 61 00 08 */	stw r3, 8(r1)
.L_80465100:
/* 80465100 00462040  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465104 00462044  40 82 00 30 */	bne .L_80465134
/* 80465108 00462048  7F 83 E3 78 */	mr r3, r28
/* 8046510C 0046204C  38 9E 04 74 */	addi r4, r30, 0x474
/* 80465110 00462050  4B C6 55 B1 */	bl strcmp
/* 80465114 00462054  2C 03 00 00 */	cmpwi r3, 0
/* 80465118 00462058  40 82 00 1C */	bne .L_80465134
/* 8046511C 0046205C  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465120 00462060  38 00 00 FF */	li r0, 0xff
/* 80465124 00462064  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465128 00462068  98 19 00 00 */	stb r0, 0(r25)
/* 8046512C 0046206C  3B 60 00 01 */	li r27, 1
/* 80465130 00462070  90 61 00 08 */	stw r3, 8(r1)
.L_80465134:
/* 80465134 00462074  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465138 00462078  40 82 00 30 */	bne .L_80465168
/* 8046513C 0046207C  7F 83 E3 78 */	mr r3, r28
/* 80465140 00462080  38 9E 04 88 */	addi r4, r30, 0x488
/* 80465144 00462084  4B C6 55 7D */	bl strcmp
/* 80465148 00462088  2C 03 00 00 */	cmpwi r3, 0
/* 8046514C 0046208C  40 82 00 1C */	bne .L_80465168
/* 80465150 00462090  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465154 00462094  38 00 00 FF */	li r0, 0xff
/* 80465158 00462098  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 8046515C 0046209C  98 19 00 00 */	stb r0, 0(r25)
/* 80465160 004620A0  3B 60 00 01 */	li r27, 1
/* 80465164 004620A4  90 61 00 08 */	stw r3, 8(r1)
.L_80465168:
/* 80465168 004620A8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046516C 004620AC  40 82 00 30 */	bne .L_8046519C
/* 80465170 004620B0  7F 83 E3 78 */	mr r3, r28
/* 80465174 004620B4  38 9E 04 9C */	addi r4, r30, 0x49c
/* 80465178 004620B8  4B C6 55 49 */	bl strcmp
/* 8046517C 004620BC  2C 03 00 00 */	cmpwi r3, 0
/* 80465180 004620C0  40 82 00 1C */	bne .L_8046519C
/* 80465184 004620C4  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465188 004620C8  38 00 00 FF */	li r0, 0xff
/* 8046518C 004620CC  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465190 004620D0  98 19 00 00 */	stb r0, 0(r25)
/* 80465194 004620D4  3B 60 00 01 */	li r27, 1
/* 80465198 004620D8  90 61 00 08 */	stw r3, 8(r1)
.L_8046519C:
/* 8046519C 004620DC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804651A0 004620E0  40 82 00 30 */	bne .L_804651D0
/* 804651A4 004620E4  7F 83 E3 78 */	mr r3, r28
/* 804651A8 004620E8  38 9E 04 B0 */	addi r4, r30, 0x4b0
/* 804651AC 004620EC  4B C6 55 15 */	bl strcmp
/* 804651B0 004620F0  2C 03 00 00 */	cmpwi r3, 0
/* 804651B4 004620F4  40 82 00 1C */	bne .L_804651D0
/* 804651B8 004620F8  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 804651BC 004620FC  38 00 00 FF */	li r0, 0xff
/* 804651C0 00462100  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 804651C4 00462104  98 19 00 00 */	stb r0, 0(r25)
/* 804651C8 00462108  3B 60 00 01 */	li r27, 1
/* 804651CC 0046210C  90 61 00 08 */	stw r3, 8(r1)
.L_804651D0:
/* 804651D0 00462110  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804651D4 00462114  40 82 00 30 */	bne .L_80465204
/* 804651D8 00462118  7F 83 E3 78 */	mr r3, r28
/* 804651DC 0046211C  38 9E 04 C4 */	addi r4, r30, 0x4c4
/* 804651E0 00462120  4B C6 54 E1 */	bl strcmp
/* 804651E4 00462124  2C 03 00 00 */	cmpwi r3, 0
/* 804651E8 00462128  40 82 00 1C */	bne .L_80465204
/* 804651EC 0046212C  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 804651F0 00462130  38 00 00 FF */	li r0, 0xff
/* 804651F4 00462134  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 804651F8 00462138  98 19 00 00 */	stb r0, 0(r25)
/* 804651FC 0046213C  3B 60 00 01 */	li r27, 1
/* 80465200 00462140  90 61 00 08 */	stw r3, 8(r1)
.L_80465204:
/* 80465204 00462144  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465208 00462148  40 82 00 30 */	bne .L_80465238
/* 8046520C 0046214C  7F 83 E3 78 */	mr r3, r28
/* 80465210 00462150  38 9E 04 D8 */	addi r4, r30, 0x4d8
/* 80465214 00462154  4B C6 54 AD */	bl strcmp
/* 80465218 00462158  2C 03 00 00 */	cmpwi r3, 0
/* 8046521C 0046215C  40 82 00 1C */	bne .L_80465238
/* 80465220 00462160  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465224 00462164  38 00 00 FF */	li r0, 0xff
/* 80465228 00462168  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 8046522C 0046216C  98 19 00 00 */	stb r0, 0(r25)
/* 80465230 00462170  3B 60 00 01 */	li r27, 1
/* 80465234 00462174  90 61 00 08 */	stw r3, 8(r1)
.L_80465238:
/* 80465238 00462178  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046523C 0046217C  40 82 00 30 */	bne .L_8046526C
/* 80465240 00462180  7F 83 E3 78 */	mr r3, r28
/* 80465244 00462184  38 9E 04 F0 */	addi r4, r30, 0x4f0
/* 80465248 00462188  4B C6 54 79 */	bl strcmp
/* 8046524C 0046218C  2C 03 00 00 */	cmpwi r3, 0
/* 80465250 00462190  40 82 00 1C */	bne .L_8046526C
/* 80465254 00462194  3C 60 C0 01 */	lis r3, 0xC001102A@ha
/* 80465258 00462198  38 00 00 FF */	li r0, 0xff
/* 8046525C 0046219C  38 63 10 2A */	addi r3, r3, 0xC001102A@l
/* 80465260 004621A0  98 19 00 00 */	stb r0, 0(r25)
/* 80465264 004621A4  3B 60 00 01 */	li r27, 1
/* 80465268 004621A8  90 61 00 08 */	stw r3, 8(r1)
.L_8046526C:
/* 8046526C 004621AC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465270 004621B0  40 82 00 30 */	bne .L_804652A0
/* 80465274 004621B4  7F 83 E3 78 */	mr r3, r28
/* 80465278 004621B8  38 9E 05 00 */	addi r4, r30, 0x500
/* 8046527C 004621BC  4B C6 54 45 */	bl strcmp
/* 80465280 004621C0  2C 03 00 00 */	cmpwi r3, 0
/* 80465284 004621C4  40 82 00 1C */	bne .L_804652A0
/* 80465288 004621C8  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 8046528C 004621CC  38 00 00 FF */	li r0, 0xff
/* 80465290 004621D0  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465294 004621D4  98 19 00 00 */	stb r0, 0(r25)
/* 80465298 004621D8  3B 60 00 01 */	li r27, 1
/* 8046529C 004621DC  90 61 00 08 */	stw r3, 8(r1)
.L_804652A0:
/* 804652A0 004621E0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804652A4 004621E4  40 82 00 30 */	bne .L_804652D4
/* 804652A8 004621E8  7F 83 E3 78 */	mr r3, r28
/* 804652AC 004621EC  38 9E 05 10 */	addi r4, r30, 0x510
/* 804652B0 004621F0  4B C6 54 11 */	bl strcmp
/* 804652B4 004621F4  2C 03 00 00 */	cmpwi r3, 0
/* 804652B8 004621F8  40 82 00 1C */	bne .L_804652D4
/* 804652BC 004621FC  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 804652C0 00462200  38 00 00 FF */	li r0, 0xff
/* 804652C4 00462204  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 804652C8 00462208  98 19 00 00 */	stb r0, 0(r25)
/* 804652CC 0046220C  3B 60 00 01 */	li r27, 1
/* 804652D0 00462210  90 61 00 08 */	stw r3, 8(r1)
.L_804652D4:
/* 804652D4 00462214  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804652D8 00462218  40 82 00 30 */	bne .L_80465308
/* 804652DC 0046221C  7F 83 E3 78 */	mr r3, r28
/* 804652E0 00462220  38 9E 05 20 */	addi r4, r30, 0x520
/* 804652E4 00462224  4B C6 53 DD */	bl strcmp
/* 804652E8 00462228  2C 03 00 00 */	cmpwi r3, 0
/* 804652EC 0046222C  40 82 00 1C */	bne .L_80465308
/* 804652F0 00462230  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 804652F4 00462234  38 00 00 FF */	li r0, 0xff
/* 804652F8 00462238  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 804652FC 0046223C  98 19 00 00 */	stb r0, 0(r25)
/* 80465300 00462240  3B 60 00 01 */	li r27, 1
/* 80465304 00462244  90 61 00 08 */	stw r3, 8(r1)
.L_80465308:
/* 80465308 00462248  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046530C 0046224C  40 82 00 30 */	bne .L_8046533C
/* 80465310 00462250  7F 83 E3 78 */	mr r3, r28
/* 80465314 00462254  38 9E 05 34 */	addi r4, r30, 0x534
/* 80465318 00462258  4B C6 53 A9 */	bl strcmp
/* 8046531C 0046225C  2C 03 00 00 */	cmpwi r3, 0
/* 80465320 00462260  40 82 00 1C */	bne .L_8046533C
/* 80465324 00462264  3C 60 C0 01 */	lis r3, 0xC001102B@ha
/* 80465328 00462268  38 00 00 FF */	li r0, 0xff
/* 8046532C 0046226C  38 63 10 2B */	addi r3, r3, 0xC001102B@l
/* 80465330 00462270  98 19 00 00 */	stb r0, 0(r25)
/* 80465334 00462274  3B 60 00 01 */	li r27, 1
/* 80465338 00462278  90 61 00 08 */	stw r3, 8(r1)
.L_8046533C:
/* 8046533C 0046227C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465340 00462280  40 82 00 30 */	bne .L_80465370
/* 80465344 00462284  7F 83 E3 78 */	mr r3, r28
/* 80465348 00462288  38 9E 05 48 */	addi r4, r30, 0x548
/* 8046534C 0046228C  4B C6 53 75 */	bl strcmp
/* 80465350 00462290  2C 03 00 00 */	cmpwi r3, 0
/* 80465354 00462294  40 82 00 1C */	bne .L_80465370
/* 80465358 00462298  3C 60 C0 01 */	lis r3, 0xC0011027@ha
/* 8046535C 0046229C  38 00 00 FF */	li r0, 0xff
/* 80465360 004622A0  38 63 10 27 */	addi r3, r3, 0xC0011027@l
/* 80465364 004622A4  98 19 00 00 */	stb r0, 0(r25)
/* 80465368 004622A8  3B 60 00 01 */	li r27, 1
/* 8046536C 004622AC  90 61 00 08 */	stw r3, 8(r1)
.L_80465370:
/* 80465370 004622B0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465374 004622B4  40 82 00 30 */	bne .L_804653A4
/* 80465378 004622B8  7F 83 E3 78 */	mr r3, r28
/* 8046537C 004622BC  38 9E 05 58 */	addi r4, r30, 0x558
/* 80465380 004622C0  4B C6 53 41 */	bl strcmp
/* 80465384 004622C4  2C 03 00 00 */	cmpwi r3, 0
/* 80465388 004622C8  40 82 00 1C */	bne .L_804653A4
/* 8046538C 004622CC  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 80465390 004622D0  38 00 00 FF */	li r0, 0xff
/* 80465394 004622D4  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 80465398 004622D8  98 19 00 00 */	stb r0, 0(r25)
/* 8046539C 004622DC  3B 60 00 01 */	li r27, 1
/* 804653A0 004622E0  90 61 00 08 */	stw r3, 8(r1)
.L_804653A4:
/* 804653A4 004622E4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804653A8 004622E8  40 82 00 30 */	bne .L_804653D8
/* 804653AC 004622EC  7F 83 E3 78 */	mr r3, r28
/* 804653B0 004622F0  38 9E 05 6C */	addi r4, r30, 0x56c
/* 804653B4 004622F4  4B C6 53 0D */	bl strcmp
/* 804653B8 004622F8  2C 03 00 00 */	cmpwi r3, 0
/* 804653BC 004622FC  40 82 00 1C */	bne .L_804653D8
/* 804653C0 00462300  3C 60 C0 01 */	lis r3, 0xC0011029@ha
/* 804653C4 00462304  38 00 00 FF */	li r0, 0xff
/* 804653C8 00462308  38 63 10 29 */	addi r3, r3, 0xC0011029@l
/* 804653CC 0046230C  98 19 00 00 */	stb r0, 0(r25)
/* 804653D0 00462310  3B 60 00 01 */	li r27, 1
/* 804653D4 00462314  90 61 00 08 */	stw r3, 8(r1)
.L_804653D8:
/* 804653D8 00462318  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804653DC 0046231C  40 82 00 30 */	bne .L_8046540C
/* 804653E0 00462320  7F 83 E3 78 */	mr r3, r28
/* 804653E4 00462324  38 9E 05 80 */	addi r4, r30, 0x580
/* 804653E8 00462328  4B C6 52 D9 */	bl strcmp
/* 804653EC 0046232C  2C 03 00 00 */	cmpwi r3, 0
/* 804653F0 00462330  40 82 00 1C */	bne .L_8046540C
/* 804653F4 00462334  3C 60 C0 01 */	lis r3, 0xC001102C@ha
/* 804653F8 00462338  38 00 00 FF */	li r0, 0xff
/* 804653FC 0046233C  38 63 10 2C */	addi r3, r3, 0xC001102C@l
/* 80465400 00462340  98 19 00 00 */	stb r0, 0(r25)
/* 80465404 00462344  3B 60 00 01 */	li r27, 1
/* 80465408 00462348  90 61 00 08 */	stw r3, 8(r1)
.L_8046540C:
/* 8046540C 0046234C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465410 00462350  40 82 00 30 */	bne .L_80465440
/* 80465414 00462354  7F 83 E3 78 */	mr r3, r28
/* 80465418 00462358  38 9E 05 90 */	addi r4, r30, 0x590
/* 8046541C 0046235C  4B C6 52 A5 */	bl strcmp
/* 80465420 00462360  2C 03 00 00 */	cmpwi r3, 0
/* 80465424 00462364  40 82 00 1C */	bne .L_80465440
/* 80465428 00462368  3C 60 C0 01 */	lis r3, 0xC001102D@ha
/* 8046542C 0046236C  38 00 00 FF */	li r0, 0xff
/* 80465430 00462370  38 63 10 2D */	addi r3, r3, 0xC001102D@l
/* 80465434 00462374  98 19 00 00 */	stb r0, 0(r25)
/* 80465438 00462378  3B 60 00 01 */	li r27, 1
/* 8046543C 0046237C  90 61 00 08 */	stw r3, 8(r1)
.L_80465440:
/* 80465440 00462380  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465444 00462384  40 82 00 30 */	bne .L_80465474
/* 80465448 00462388  7F 83 E3 78 */	mr r3, r28
/* 8046544C 0046238C  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 80465450 00462390  4B C6 52 71 */	bl strcmp
/* 80465454 00462394  2C 03 00 00 */	cmpwi r3, 0
/* 80465458 00462398  40 82 00 1C */	bne .L_80465474
/* 8046545C 0046239C  3C 60 C0 01 */	lis r3, 0xC001102E@ha
/* 80465460 004623A0  38 00 00 FF */	li r0, 0xff
/* 80465464 004623A4  38 63 10 2E */	addi r3, r3, 0xC001102E@l
/* 80465468 004623A8  98 19 00 00 */	stb r0, 0(r25)
/* 8046546C 004623AC  3B 60 00 01 */	li r27, 1
/* 80465470 004623B0  90 61 00 08 */	stw r3, 8(r1)
.L_80465474:
/* 80465474 004623B4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465478 004623B8  40 82 00 30 */	bne .L_804654A8
/* 8046547C 004623BC  7F 83 E3 78 */	mr r3, r28
/* 80465480 004623C0  38 9E 05 B4 */	addi r4, r30, 0x5b4
/* 80465484 004623C4  4B C6 52 3D */	bl strcmp
/* 80465488 004623C8  2C 03 00 00 */	cmpwi r3, 0
/* 8046548C 004623CC  40 82 00 1C */	bne .L_804654A8
/* 80465490 004623D0  3C 60 C0 01 */	lis r3, 0xC001102A@ha
/* 80465494 004623D4  38 00 00 FF */	li r0, 0xff
/* 80465498 004623D8  38 63 10 2A */	addi r3, r3, 0xC001102A@l
/* 8046549C 004623DC  98 19 00 00 */	stb r0, 0(r25)
/* 804654A0 004623E0  3B 60 00 01 */	li r27, 1
/* 804654A4 004623E4  90 61 00 08 */	stw r3, 8(r1)
.L_804654A8:
/* 804654A8 004623E8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804654AC 004623EC  40 82 00 30 */	bne .L_804654DC
/* 804654B0 004623F0  7F 83 E3 78 */	mr r3, r28
/* 804654B4 004623F4  38 9E 05 C4 */	addi r4, r30, 0x5c4
/* 804654B8 004623F8  4B C6 52 09 */	bl strcmp
/* 804654BC 004623FC  2C 03 00 00 */	cmpwi r3, 0
/* 804654C0 00462400  40 82 00 1C */	bne .L_804654DC
/* 804654C4 00462404  3C 60 C0 01 */	lis r3, 0xC001102F@ha
/* 804654C8 00462408  38 00 00 FF */	li r0, 0xff
/* 804654CC 0046240C  38 63 10 2F */	addi r3, r3, 0xC001102F@l
/* 804654D0 00462410  98 19 00 00 */	stb r0, 0(r25)
/* 804654D4 00462414  3B 60 00 01 */	li r27, 1
/* 804654D8 00462418  90 61 00 08 */	stw r3, 8(r1)
.L_804654DC:
/* 804654DC 0046241C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804654E0 00462420  40 82 00 30 */	bne .L_80465510
/* 804654E4 00462424  7F 83 E3 78 */	mr r3, r28
/* 804654E8 00462428  38 9E 05 DC */	addi r4, r30, 0x5dc
/* 804654EC 0046242C  4B C6 51 D5 */	bl strcmp
/* 804654F0 00462430  2C 03 00 00 */	cmpwi r3, 0
/* 804654F4 00462434  40 82 00 1C */	bne .L_80465510
/* 804654F8 00462438  3C 60 C0 01 */	lis r3, 0xC0011030@ha
/* 804654FC 0046243C  38 00 00 FF */	li r0, 0xff
/* 80465500 00462440  38 63 10 30 */	addi r3, r3, 0xC0011030@l
/* 80465504 00462444  98 19 00 00 */	stb r0, 0(r25)
/* 80465508 00462448  3B 60 00 01 */	li r27, 1
/* 8046550C 0046244C  90 61 00 08 */	stw r3, 8(r1)
.L_80465510:
/* 80465510 00462450  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465514 00462454  40 82 00 30 */	bne .L_80465544
/* 80465518 00462458  7F 83 E3 78 */	mr r3, r28
/* 8046551C 0046245C  38 9E 05 F0 */	addi r4, r30, 0x5f0
/* 80465520 00462460  4B C6 51 A1 */	bl strcmp
/* 80465524 00462464  2C 03 00 00 */	cmpwi r3, 0
/* 80465528 00462468  40 82 00 1C */	bne .L_80465544
/* 8046552C 0046246C  3C 60 C0 01 */	lis r3, 0xC0011031@ha
/* 80465530 00462470  38 00 00 FF */	li r0, 0xff
/* 80465534 00462474  38 63 10 31 */	addi r3, r3, 0xC0011031@l
/* 80465538 00462478  98 19 00 00 */	stb r0, 0(r25)
/* 8046553C 0046247C  3B 60 00 01 */	li r27, 1
/* 80465540 00462480  90 61 00 08 */	stw r3, 8(r1)
.L_80465544:
/* 80465544 00462484  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465548 00462488  40 82 00 30 */	bne .L_80465578
/* 8046554C 0046248C  7F 83 E3 78 */	mr r3, r28
/* 80465550 00462490  38 9E 05 FC */	addi r4, r30, 0x5fc
/* 80465554 00462494  4B C6 51 6D */	bl strcmp
/* 80465558 00462498  2C 03 00 00 */	cmpwi r3, 0
/* 8046555C 0046249C  40 82 00 1C */	bne .L_80465578
/* 80465560 004624A0  3C 60 C0 01 */	lis r3, 0xC001102A@ha
/* 80465564 004624A4  38 00 00 FF */	li r0, 0xff
/* 80465568 004624A8  38 63 10 2A */	addi r3, r3, 0xC001102A@l
/* 8046556C 004624AC  98 19 00 00 */	stb r0, 0(r25)
/* 80465570 004624B0  3B 60 00 01 */	li r27, 1
/* 80465574 004624B4  90 61 00 08 */	stw r3, 8(r1)
.L_80465578:
/* 80465578 004624B8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046557C 004624BC  40 82 00 30 */	bne .L_804655AC
/* 80465580 004624C0  7F 83 E3 78 */	mr r3, r28
/* 80465584 004624C4  38 9E 06 10 */	addi r4, r30, 0x610
/* 80465588 004624C8  4B C6 51 39 */	bl strcmp
/* 8046558C 004624CC  2C 03 00 00 */	cmpwi r3, 0
/* 80465590 004624D0  40 82 00 1C */	bne .L_804655AC
/* 80465594 004624D4  3C 60 C0 01 */	lis r3, 0xC0011032@ha
/* 80465598 004624D8  38 00 00 FF */	li r0, 0xff
/* 8046559C 004624DC  38 63 10 32 */	addi r3, r3, 0xC0011032@l
/* 804655A0 004624E0  98 19 00 00 */	stb r0, 0(r25)
/* 804655A4 004624E4  3B 60 00 01 */	li r27, 1
/* 804655A8 004624E8  90 61 00 08 */	stw r3, 8(r1)
.L_804655AC:
/* 804655AC 004624EC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804655B0 004624F0  40 82 00 30 */	bne .L_804655E0
/* 804655B4 004624F4  7F 83 E3 78 */	mr r3, r28
/* 804655B8 004624F8  38 9E 06 20 */	addi r4, r30, 0x620
/* 804655BC 004624FC  4B C6 51 05 */	bl strcmp
/* 804655C0 00462500  2C 03 00 00 */	cmpwi r3, 0
/* 804655C4 00462504  40 82 00 1C */	bne .L_804655E0
/* 804655C8 00462508  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 804655CC 0046250C  38 00 00 FF */	li r0, 0xff
/* 804655D0 00462510  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 804655D4 00462514  98 19 00 00 */	stb r0, 0(r25)
/* 804655D8 00462518  3B 60 00 01 */	li r27, 1
/* 804655DC 0046251C  90 61 00 08 */	stw r3, 8(r1)
.L_804655E0:
/* 804655E0 00462520  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804655E4 00462524  40 82 00 30 */	bne .L_80465614
/* 804655E8 00462528  7F 83 E3 78 */	mr r3, r28
/* 804655EC 0046252C  38 9E 06 34 */	addi r4, r30, 0x634
/* 804655F0 00462530  4B C6 50 D1 */	bl strcmp
/* 804655F4 00462534  2C 03 00 00 */	cmpwi r3, 0
/* 804655F8 00462538  40 82 00 1C */	bne .L_80465614
/* 804655FC 0046253C  3C 60 C0 01 */	lis r3, 0xC0011036@ha
/* 80465600 00462540  38 00 00 FF */	li r0, 0xff
/* 80465604 00462544  38 63 10 36 */	addi r3, r3, 0xC0011036@l
/* 80465608 00462548  98 19 00 00 */	stb r0, 0(r25)
/* 8046560C 0046254C  3B 60 00 01 */	li r27, 1
/* 80465610 00462550  90 61 00 08 */	stw r3, 8(r1)
.L_80465614:
/* 80465614 00462554  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465618 00462558  40 82 00 30 */	bne .L_80465648
/* 8046561C 0046255C  7F 83 E3 78 */	mr r3, r28
/* 80465620 00462560  38 9E 06 44 */	addi r4, r30, 0x644
/* 80465624 00462564  4B C6 50 9D */	bl strcmp
/* 80465628 00462568  2C 03 00 00 */	cmpwi r3, 0
/* 8046562C 0046256C  40 82 00 1C */	bne .L_80465648
/* 80465630 00462570  3C 60 C0 01 */	lis r3, 0xC0011037@ha
/* 80465634 00462574  38 00 00 FF */	li r0, 0xff
/* 80465638 00462578  38 63 10 37 */	addi r3, r3, 0xC0011037@l
/* 8046563C 0046257C  98 19 00 00 */	stb r0, 0(r25)
/* 80465640 00462580  3B 60 00 01 */	li r27, 1
/* 80465644 00462584  90 61 00 08 */	stw r3, 8(r1)
.L_80465648:
/* 80465648 00462588  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046564C 0046258C  40 82 00 30 */	bne .L_8046567C
/* 80465650 00462590  7F 83 E3 78 */	mr r3, r28
/* 80465654 00462594  38 9E 06 54 */	addi r4, r30, 0x654
/* 80465658 00462598  4B C6 50 69 */	bl strcmp
/* 8046565C 0046259C  2C 03 00 00 */	cmpwi r3, 0
/* 80465660 004625A0  40 82 00 1C */	bne .L_8046567C
/* 80465664 004625A4  3C 60 C0 01 */	lis r3, 0xC0011039@ha
/* 80465668 004625A8  38 00 00 FF */	li r0, 0xff
/* 8046566C 004625AC  38 63 10 39 */	addi r3, r3, 0xC0011039@l
/* 80465670 004625B0  98 19 00 00 */	stb r0, 0(r25)
/* 80465674 004625B4  3B 60 00 01 */	li r27, 1
/* 80465678 004625B8  90 61 00 08 */	stw r3, 8(r1)
.L_8046567C:
/* 8046567C 004625BC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465680 004625C0  40 82 00 30 */	bne .L_804656B0
/* 80465684 004625C4  7F 83 E3 78 */	mr r3, r28
/* 80465688 004625C8  38 9E 06 68 */	addi r4, r30, 0x668
/* 8046568C 004625CC  4B C6 50 35 */	bl strcmp
/* 80465690 004625D0  2C 03 00 00 */	cmpwi r3, 0
/* 80465694 004625D4  40 82 00 1C */	bne .L_804656B0
/* 80465698 004625D8  3C 60 C0 01 */	lis r3, 0xC001103A@ha
/* 8046569C 004625DC  38 00 00 FF */	li r0, 0xff
/* 804656A0 004625E0  38 63 10 3A */	addi r3, r3, 0xC001103A@l
/* 804656A4 004625E4  98 19 00 00 */	stb r0, 0(r25)
/* 804656A8 004625E8  3B 60 00 01 */	li r27, 1
/* 804656AC 004625EC  90 61 00 08 */	stw r3, 8(r1)
.L_804656B0:
/* 804656B0 004625F0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804656B4 004625F4  40 82 00 30 */	bne .L_804656E4
/* 804656B8 004625F8  7F 83 E3 78 */	mr r3, r28
/* 804656BC 004625FC  38 9E 06 7C */	addi r4, r30, 0x67c
/* 804656C0 00462600  4B C6 50 01 */	bl strcmp
/* 804656C4 00462604  2C 03 00 00 */	cmpwi r3, 0
/* 804656C8 00462608  40 82 00 1C */	bne .L_804656E4
/* 804656CC 0046260C  3C 60 C0 01 */	lis r3, 0xC001103B@ha
/* 804656D0 00462610  38 00 00 FF */	li r0, 0xff
/* 804656D4 00462614  38 63 10 3B */	addi r3, r3, 0xC001103B@l
/* 804656D8 00462618  98 19 00 00 */	stb r0, 0(r25)
/* 804656DC 0046261C  3B 60 00 01 */	li r27, 1
/* 804656E0 00462620  90 61 00 08 */	stw r3, 8(r1)
.L_804656E4:
/* 804656E4 00462624  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804656E8 00462628  40 82 00 30 */	bne .L_80465718
/* 804656EC 0046262C  7F 83 E3 78 */	mr r3, r28
/* 804656F0 00462630  38 9E 06 90 */	addi r4, r30, 0x690
/* 804656F4 00462634  4B C6 4F CD */	bl strcmp
/* 804656F8 00462638  2C 03 00 00 */	cmpwi r3, 0
/* 804656FC 0046263C  40 82 00 1C */	bne .L_80465718
/* 80465700 00462640  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465704 00462644  38 00 00 FF */	li r0, 0xff
/* 80465708 00462648  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 8046570C 0046264C  98 19 00 00 */	stb r0, 0(r25)
/* 80465710 00462650  3B 60 00 01 */	li r27, 1
/* 80465714 00462654  90 61 00 08 */	stw r3, 8(r1)
.L_80465718:
/* 80465718 00462658  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046571C 0046265C  40 82 00 30 */	bne .L_8046574C
/* 80465720 00462660  7F 83 E3 78 */	mr r3, r28
/* 80465724 00462664  38 9E 06 A4 */	addi r4, r30, 0x6a4
/* 80465728 00462668  4B C6 4F 99 */	bl strcmp
/* 8046572C 0046266C  2C 03 00 00 */	cmpwi r3, 0
/* 80465730 00462670  40 82 00 1C */	bne .L_8046574C
/* 80465734 00462674  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465738 00462678  38 00 00 FF */	li r0, 0xff
/* 8046573C 0046267C  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465740 00462680  98 19 00 00 */	stb r0, 0(r25)
/* 80465744 00462684  3B 60 00 01 */	li r27, 1
/* 80465748 00462688  90 61 00 08 */	stw r3, 8(r1)
.L_8046574C:
/* 8046574C 0046268C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465750 00462690  40 82 00 30 */	bne .L_80465780
/* 80465754 00462694  7F 83 E3 78 */	mr r3, r28
/* 80465758 00462698  38 9E 06 B4 */	addi r4, r30, 0x6b4
/* 8046575C 0046269C  4B C6 4F 65 */	bl strcmp
/* 80465760 004626A0  2C 03 00 00 */	cmpwi r3, 0
/* 80465764 004626A4  40 82 00 1C */	bne .L_80465780
/* 80465768 004626A8  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 8046576C 004626AC  38 00 00 FF */	li r0, 0xff
/* 80465770 004626B0  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465774 004626B4  98 19 00 00 */	stb r0, 0(r25)
/* 80465778 004626B8  3B 60 00 01 */	li r27, 1
/* 8046577C 004626BC  90 61 00 08 */	stw r3, 8(r1)
.L_80465780:
/* 80465780 004626C0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465784 004626C4  40 82 00 30 */	bne .L_804657B4
/* 80465788 004626C8  7F 83 E3 78 */	mr r3, r28
/* 8046578C 004626CC  38 9E 06 C4 */	addi r4, r30, 0x6c4
/* 80465790 004626D0  4B C6 4F 31 */	bl strcmp
/* 80465794 004626D4  2C 03 00 00 */	cmpwi r3, 0
/* 80465798 004626D8  40 82 00 1C */	bne .L_804657B4
/* 8046579C 004626DC  3C 60 C0 01 */	lis r3, 0xC001104A@ha
/* 804657A0 004626E0  38 00 00 FF */	li r0, 0xff
/* 804657A4 004626E4  38 63 10 4A */	addi r3, r3, 0xC001104A@l
/* 804657A8 004626E8  98 19 00 00 */	stb r0, 0(r25)
/* 804657AC 004626EC  3B 60 00 01 */	li r27, 1
/* 804657B0 004626F0  90 61 00 08 */	stw r3, 8(r1)
.L_804657B4:
/* 804657B4 004626F4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804657B8 004626F8  40 82 00 30 */	bne .L_804657E8
/* 804657BC 004626FC  7F 83 E3 78 */	mr r3, r28
/* 804657C0 00462700  38 9E 06 D4 */	addi r4, r30, 0x6d4
/* 804657C4 00462704  4B C6 4E FD */	bl strcmp
/* 804657C8 00462708  2C 03 00 00 */	cmpwi r3, 0
/* 804657CC 0046270C  40 82 00 1C */	bne .L_804657E8
/* 804657D0 00462710  3C 60 C0 01 */	lis r3, 0xC0011048@ha
/* 804657D4 00462714  38 00 00 FF */	li r0, 0xff
/* 804657D8 00462718  38 63 10 48 */	addi r3, r3, 0xC0011048@l
/* 804657DC 0046271C  98 19 00 00 */	stb r0, 0(r25)
/* 804657E0 00462720  3B 60 00 01 */	li r27, 1
/* 804657E4 00462724  90 61 00 08 */	stw r3, 8(r1)
.L_804657E8:
/* 804657E8 00462728  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804657EC 0046272C  40 82 00 30 */	bne .L_8046581C
/* 804657F0 00462730  7F 83 E3 78 */	mr r3, r28
/* 804657F4 00462734  38 9E 06 E4 */	addi r4, r30, 0x6e4
/* 804657F8 00462738  4B C6 4E C9 */	bl strcmp
/* 804657FC 0046273C  2C 03 00 00 */	cmpwi r3, 0
/* 80465800 00462740  40 82 00 1C */	bne .L_8046581C
/* 80465804 00462744  3C 60 C0 01 */	lis r3, 0xC0011031@ha
/* 80465808 00462748  38 00 00 FF */	li r0, 0xff
/* 8046580C 0046274C  38 63 10 31 */	addi r3, r3, 0xC0011031@l
/* 80465810 00462750  98 19 00 00 */	stb r0, 0(r25)
/* 80465814 00462754  3B 60 00 01 */	li r27, 1
/* 80465818 00462758  90 61 00 08 */	stw r3, 8(r1)
.L_8046581C:
/* 8046581C 0046275C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465820 00462760  40 82 00 30 */	bne .L_80465850
/* 80465824 00462764  7F 83 E3 78 */	mr r3, r28
/* 80465828 00462768  38 9E 06 F8 */	addi r4, r30, 0x6f8
/* 8046582C 0046276C  4B C6 4E 95 */	bl strcmp
/* 80465830 00462770  2C 03 00 00 */	cmpwi r3, 0
/* 80465834 00462774  40 82 00 1C */	bne .L_80465850
/* 80465838 00462778  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 8046583C 0046277C  38 00 00 FF */	li r0, 0xff
/* 80465840 00462780  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465844 00462784  98 19 00 00 */	stb r0, 0(r25)
/* 80465848 00462788  3B 60 00 01 */	li r27, 1
/* 8046584C 0046278C  90 61 00 08 */	stw r3, 8(r1)
.L_80465850:
/* 80465850 00462790  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465854 00462794  40 82 00 30 */	bne .L_80465884
/* 80465858 00462798  7F 83 E3 78 */	mr r3, r28
/* 8046585C 0046279C  38 9E 07 08 */	addi r4, r30, 0x708
/* 80465860 004627A0  4B C6 4E 61 */	bl strcmp
/* 80465864 004627A4  2C 03 00 00 */	cmpwi r3, 0
/* 80465868 004627A8  40 82 00 1C */	bne .L_80465884
/* 8046586C 004627AC  3C 60 C0 01 */	lis r3, 0xC0011031@ha
/* 80465870 004627B0  38 00 00 FF */	li r0, 0xff
/* 80465874 004627B4  38 63 10 31 */	addi r3, r3, 0xC0011031@l
/* 80465878 004627B8  98 19 00 00 */	stb r0, 0(r25)
/* 8046587C 004627BC  3B 60 00 01 */	li r27, 1
/* 80465880 004627C0  90 61 00 08 */	stw r3, 8(r1)
.L_80465884:
/* 80465884 004627C4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465888 004627C8  40 82 00 30 */	bne .L_804658B8
/* 8046588C 004627CC  7F 83 E3 78 */	mr r3, r28
/* 80465890 004627D0  38 9E 07 18 */	addi r4, r30, 0x718
/* 80465894 004627D4  4B C6 4E 2D */	bl strcmp
/* 80465898 004627D8  2C 03 00 00 */	cmpwi r3, 0
/* 8046589C 004627DC  40 82 00 1C */	bne .L_804658B8
/* 804658A0 004627E0  3C 60 C0 01 */	lis r3, 0xC0011034@ha
/* 804658A4 004627E4  38 00 00 FF */	li r0, 0xff
/* 804658A8 004627E8  38 63 10 34 */	addi r3, r3, 0xC0011034@l
/* 804658AC 004627EC  98 19 00 00 */	stb r0, 0(r25)
/* 804658B0 004627F0  3B 60 00 01 */	li r27, 1
/* 804658B4 004627F4  90 61 00 08 */	stw r3, 8(r1)
.L_804658B8:
/* 804658B8 004627F8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804658BC 004627FC  40 82 00 30 */	bne .L_804658EC
/* 804658C0 00462800  7F 83 E3 78 */	mr r3, r28
/* 804658C4 00462804  38 9E 07 2C */	addi r4, r30, 0x72c
/* 804658C8 00462808  4B C6 4D F9 */	bl strcmp
/* 804658CC 0046280C  2C 03 00 00 */	cmpwi r3, 0
/* 804658D0 00462810  40 82 00 1C */	bne .L_804658EC
/* 804658D4 00462814  3C 60 C0 01 */	lis r3, 0xC0011034@ha
/* 804658D8 00462818  38 00 00 FF */	li r0, 0xff
/* 804658DC 0046281C  38 63 10 34 */	addi r3, r3, 0xC0011034@l
/* 804658E0 00462820  98 19 00 00 */	stb r0, 0(r25)
/* 804658E4 00462824  3B 60 00 01 */	li r27, 1
/* 804658E8 00462828  90 61 00 08 */	stw r3, 8(r1)
.L_804658EC:
/* 804658EC 0046282C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804658F0 00462830  40 82 00 30 */	bne .L_80465920
/* 804658F4 00462834  7F 83 E3 78 */	mr r3, r28
/* 804658F8 00462838  38 9E 07 44 */	addi r4, r30, 0x744
/* 804658FC 0046283C  4B C6 4D C5 */	bl strcmp
/* 80465900 00462840  2C 03 00 00 */	cmpwi r3, 0
/* 80465904 00462844  40 82 00 1C */	bne .L_80465920
/* 80465908 00462848  3C 60 C0 01 */	lis r3, 0xC0011034@ha
/* 8046590C 0046284C  38 00 00 FF */	li r0, 0xff
/* 80465910 00462850  38 63 10 34 */	addi r3, r3, 0xC0011034@l
/* 80465914 00462854  98 19 00 00 */	stb r0, 0(r25)
/* 80465918 00462858  3B 60 00 01 */	li r27, 1
/* 8046591C 0046285C  90 61 00 08 */	stw r3, 8(r1)
.L_80465920:
/* 80465920 00462860  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465924 00462864  40 82 00 30 */	bne .L_80465954
/* 80465928 00462868  7F 83 E3 78 */	mr r3, r28
/* 8046592C 0046286C  38 9E 07 58 */	addi r4, r30, 0x758
/* 80465930 00462870  4B C6 4D 91 */	bl strcmp
/* 80465934 00462874  2C 03 00 00 */	cmpwi r3, 0
/* 80465938 00462878  40 82 00 1C */	bne .L_80465954
/* 8046593C 0046287C  3C 60 C0 01 */	lis r3, 0xC0011049@ha
/* 80465940 00462880  38 00 00 FF */	li r0, 0xff
/* 80465944 00462884  38 63 10 49 */	addi r3, r3, 0xC0011049@l
/* 80465948 00462888  98 19 00 00 */	stb r0, 0(r25)
/* 8046594C 0046288C  3B 60 00 01 */	li r27, 1
/* 80465950 00462890  90 61 00 08 */	stw r3, 8(r1)
.L_80465954:
/* 80465954 00462894  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465958 00462898  40 82 00 30 */	bne .L_80465988
/* 8046595C 0046289C  7F 83 E3 78 */	mr r3, r28
/* 80465960 004628A0  38 9E 07 64 */	addi r4, r30, 0x764
/* 80465964 004628A4  4B C6 4D 5D */	bl strcmp
/* 80465968 004628A8  2C 03 00 00 */	cmpwi r3, 0
/* 8046596C 004628AC  40 82 00 1C */	bne .L_80465988
/* 80465970 004628B0  3C 60 C0 01 */	lis r3, 0xC0011035@ha
/* 80465974 004628B4  38 00 00 FF */	li r0, 0xff
/* 80465978 004628B8  38 63 10 35 */	addi r3, r3, 0xC0011035@l
/* 8046597C 004628BC  98 19 00 00 */	stb r0, 0(r25)
/* 80465980 004628C0  3B 60 00 01 */	li r27, 1
/* 80465984 004628C4  90 61 00 08 */	stw r3, 8(r1)
.L_80465988:
/* 80465988 004628C8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8046598C 004628CC  40 82 00 30 */	bne .L_804659BC
/* 80465990 004628D0  7F 83 E3 78 */	mr r3, r28
/* 80465994 004628D4  38 9E 07 74 */	addi r4, r30, 0x774
/* 80465998 004628D8  4B C6 4D 29 */	bl strcmp
/* 8046599C 004628DC  2C 03 00 00 */	cmpwi r3, 0
/* 804659A0 004628E0  40 82 00 1C */	bne .L_804659BC
/* 804659A4 004628E4  3C 60 C0 01 */	lis r3, 0xC0011049@ha
/* 804659A8 004628E8  38 00 00 FF */	li r0, 0xff
/* 804659AC 004628EC  38 63 10 49 */	addi r3, r3, 0xC0011049@l
/* 804659B0 004628F0  98 19 00 00 */	stb r0, 0(r25)
/* 804659B4 004628F4  3B 60 00 01 */	li r27, 1
/* 804659B8 004628F8  90 61 00 08 */	stw r3, 8(r1)
.L_804659BC:
/* 804659BC 004628FC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804659C0 00462900  40 82 00 30 */	bne .L_804659F0
/* 804659C4 00462904  7F 83 E3 78 */	mr r3, r28
/* 804659C8 00462908  38 9E 07 88 */	addi r4, r30, 0x788
/* 804659CC 0046290C  4B C6 4C F5 */	bl strcmp
/* 804659D0 00462910  2C 03 00 00 */	cmpwi r3, 0
/* 804659D4 00462914  40 82 00 1C */	bne .L_804659F0
/* 804659D8 00462918  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 804659DC 0046291C  38 00 00 FF */	li r0, 0xff
/* 804659E0 00462920  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 804659E4 00462924  98 19 00 00 */	stb r0, 0(r25)
/* 804659E8 00462928  3B 60 00 01 */	li r27, 1
/* 804659EC 0046292C  90 61 00 08 */	stw r3, 8(r1)
.L_804659F0:
/* 804659F0 00462930  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 804659F4 00462934  40 82 00 30 */	bne .L_80465A24
/* 804659F8 00462938  7F 83 E3 78 */	mr r3, r28
/* 804659FC 0046293C  38 9E 07 9C */	addi r4, r30, 0x79c
/* 80465A00 00462940  4B C6 4C C1 */	bl strcmp
/* 80465A04 00462944  2C 03 00 00 */	cmpwi r3, 0
/* 80465A08 00462948  40 82 00 1C */	bne .L_80465A24
/* 80465A0C 0046294C  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465A10 00462950  38 00 00 FF */	li r0, 0xff
/* 80465A14 00462954  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465A18 00462958  98 19 00 00 */	stb r0, 0(r25)
/* 80465A1C 0046295C  3B 60 00 01 */	li r27, 1
/* 80465A20 00462960  90 61 00 08 */	stw r3, 8(r1)
.L_80465A24:
/* 80465A24 00462964  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465A28 00462968  40 82 00 30 */	bne .L_80465A58
/* 80465A2C 0046296C  7F 83 E3 78 */	mr r3, r28
/* 80465A30 00462970  38 9E 07 B0 */	addi r4, r30, 0x7b0
/* 80465A34 00462974  4B C6 4C 8D */	bl strcmp
/* 80465A38 00462978  2C 03 00 00 */	cmpwi r3, 0
/* 80465A3C 0046297C  40 82 00 1C */	bne .L_80465A58
/* 80465A40 00462980  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465A44 00462984  38 00 00 FF */	li r0, 0xff
/* 80465A48 00462988  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465A4C 0046298C  98 19 00 00 */	stb r0, 0(r25)
/* 80465A50 00462990  3B 60 00 01 */	li r27, 1
/* 80465A54 00462994  90 61 00 08 */	stw r3, 8(r1)
.L_80465A58:
/* 80465A58 00462998  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465A5C 0046299C  40 82 00 30 */	bne .L_80465A8C
/* 80465A60 004629A0  7F 83 E3 78 */	mr r3, r28
/* 80465A64 004629A4  38 9E 07 C0 */	addi r4, r30, 0x7c0
/* 80465A68 004629A8  4B C6 4C 59 */	bl strcmp
/* 80465A6C 004629AC  2C 03 00 00 */	cmpwi r3, 0
/* 80465A70 004629B0  40 82 00 1C */	bne .L_80465A8C
/* 80465A74 004629B4  3C 60 C0 01 */	lis r3, 0xC0011048@ha
/* 80465A78 004629B8  38 00 00 FF */	li r0, 0xff
/* 80465A7C 004629BC  38 63 10 48 */	addi r3, r3, 0xC0011048@l
/* 80465A80 004629C0  98 19 00 00 */	stb r0, 0(r25)
/* 80465A84 004629C4  3B 60 00 01 */	li r27, 1
/* 80465A88 004629C8  90 61 00 08 */	stw r3, 8(r1)
.L_80465A8C:
/* 80465A8C 004629CC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465A90 004629D0  40 82 00 30 */	bne .L_80465AC0
/* 80465A94 004629D4  7F 83 E3 78 */	mr r3, r28
/* 80465A98 004629D8  38 9E 07 CC */	addi r4, r30, 0x7cc
/* 80465A9C 004629DC  4B C6 4C 25 */	bl strcmp
/* 80465AA0 004629E0  2C 03 00 00 */	cmpwi r3, 0
/* 80465AA4 004629E4  40 82 00 1C */	bne .L_80465AC0
/* 80465AA8 004629E8  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465AAC 004629EC  38 00 00 FF */	li r0, 0xff
/* 80465AB0 004629F0  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465AB4 004629F4  98 19 00 00 */	stb r0, 0(r25)
/* 80465AB8 004629F8  3B 60 00 01 */	li r27, 1
/* 80465ABC 004629FC  90 61 00 08 */	stw r3, 8(r1)
.L_80465AC0:
/* 80465AC0 00462A00  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465AC4 00462A04  40 82 00 30 */	bne .L_80465AF4
/* 80465AC8 00462A08  7F 83 E3 78 */	mr r3, r28
/* 80465ACC 00462A0C  38 9E 07 E4 */	addi r4, r30, 0x7e4
/* 80465AD0 00462A10  4B C6 4B F1 */	bl strcmp
/* 80465AD4 00462A14  2C 03 00 00 */	cmpwi r3, 0
/* 80465AD8 00462A18  40 82 00 1C */	bne .L_80465AF4
/* 80465ADC 00462A1C  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465AE0 00462A20  38 00 00 FF */	li r0, 0xff
/* 80465AE4 00462A24  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465AE8 00462A28  98 19 00 00 */	stb r0, 0(r25)
/* 80465AEC 00462A2C  3B 60 00 01 */	li r27, 1
/* 80465AF0 00462A30  90 61 00 08 */	stw r3, 8(r1)
.L_80465AF4:
/* 80465AF4 00462A34  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465AF8 00462A38  40 82 00 30 */	bne .L_80465B28
/* 80465AFC 00462A3C  7F 83 E3 78 */	mr r3, r28
/* 80465B00 00462A40  38 9E 07 F0 */	addi r4, r30, 0x7f0
/* 80465B04 00462A44  4B C6 4B BD */	bl strcmp
/* 80465B08 00462A48  2C 03 00 00 */	cmpwi r3, 0
/* 80465B0C 00462A4C  40 82 00 1C */	bne .L_80465B28
/* 80465B10 00462A50  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465B14 00462A54  38 00 00 FF */	li r0, 0xff
/* 80465B18 00462A58  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465B1C 00462A5C  98 19 00 00 */	stb r0, 0(r25)
/* 80465B20 00462A60  3B 60 00 01 */	li r27, 1
/* 80465B24 00462A64  90 61 00 08 */	stw r3, 8(r1)
.L_80465B28:
/* 80465B28 00462A68  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465B2C 00462A6C  40 82 00 30 */	bne .L_80465B5C
/* 80465B30 00462A70  7F 83 E3 78 */	mr r3, r28
/* 80465B34 00462A74  38 9E 08 00 */	addi r4, r30, 0x800
/* 80465B38 00462A78  4B C6 4B 89 */	bl strcmp
/* 80465B3C 00462A7C  2C 03 00 00 */	cmpwi r3, 0
/* 80465B40 00462A80  40 82 00 1C */	bne .L_80465B5C
/* 80465B44 00462A84  3C 60 C0 01 */	lis r3, 0xC0011033@ha
/* 80465B48 00462A88  38 00 00 FF */	li r0, 0xff
/* 80465B4C 00462A8C  38 63 10 33 */	addi r3, r3, 0xC0011033@l
/* 80465B50 00462A90  98 19 00 00 */	stb r0, 0(r25)
/* 80465B54 00462A94  3B 60 00 01 */	li r27, 1
/* 80465B58 00462A98  90 61 00 08 */	stw r3, 8(r1)
.L_80465B5C:
/* 80465B5C 00462A9C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80465B60 00462AA0  40 82 00 2C */	bne .L_80465B8C
/* 80465B64 00462AA4  7F 83 E3 78 */	mr r3, r28
/* 80465B68 00462AA8  38 9E 08 10 */	addi r4, r30, 0x810
/* 80465B6C 00462AAC  4B C6 4B 55 */	bl strcmp
/* 80465B70 00462AB0  2C 03 00 00 */	cmpwi r3, 0
/* 80465B74 00462AB4  40 82 00 18 */	bne .L_80465B8C
/* 80465B78 00462AB8  3C 60 C0 01 */	lis r3, 0xC001103C@ha
/* 80465B7C 00462ABC  38 00 00 FF */	li r0, 0xff
/* 80465B80 00462AC0  38 63 10 3C */	addi r3, r3, 0xC001103C@l
/* 80465B84 00462AC4  98 19 00 00 */	stb r0, 0(r25)
/* 80465B88 00462AC8  90 61 00 08 */	stw r3, 8(r1)
.L_80465B8C:
/* 80465B8C 00462ACC  34 1E 00 80 */	addic. r0, r30, 0x80
/* 80465B90 00462AD0  41 82 00 0C */	beq .L_80465B9C
/* 80465B94 00462AD4  28 1C 00 00 */	cmplwi r28, 0
/* 80465B98 00462AD8  40 82 00 0C */	bne .L_80465BA4
.L_80465B9C:
/* 80465B9C 00462ADC  38 00 00 00 */	li r0, 0
/* 80465BA0 00462AE0  48 00 00 24 */	b .L_80465BC4
.L_80465BA4:
/* 80465BA4 00462AE4  7F 84 E3 78 */	mr r4, r28
/* 80465BA8 00462AE8  38 7E 00 80 */	addi r3, r30, 0x80
/* 80465BAC 00462AEC  4B C6 4B 15 */	bl strcmp
/* 80465BB0 00462AF0  2C 03 00 00 */	cmpwi r3, 0
/* 80465BB4 00462AF4  40 82 00 0C */	bne .L_80465BC0
/* 80465BB8 00462AF8  38 00 00 01 */	li r0, 1
/* 80465BBC 00462AFC  48 00 00 08 */	b .L_80465BC4
.L_80465BC0:
/* 80465BC0 00462B00  38 00 00 00 */	li r0, 0
.L_80465BC4:
/* 80465BC4 00462B04  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465BC8 00462B08  41 82 00 10 */	beq .L_80465BD8
/* 80465BCC 00462B0C  88 61 00 18 */	lbz r3, 0x18(r1)
/* 80465BD0 00462B10  38 03 FF F1 */	addi r0, r3, -15
/* 80465BD4 00462B14  98 01 00 18 */	stb r0, 0x18(r1)
.L_80465BD8:
/* 80465BD8 00462B18  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 80465BDC 00462B1C  41 82 00 0C */	beq .L_80465BE8
/* 80465BE0 00462B20  28 1C 00 00 */	cmplwi r28, 0
/* 80465BE4 00462B24  40 82 00 0C */	bne .L_80465BF0
.L_80465BE8:
/* 80465BE8 00462B28  38 00 00 00 */	li r0, 0
/* 80465BEC 00462B2C  48 00 00 24 */	b .L_80465C10
.L_80465BF0:
/* 80465BF0 00462B30  7F 84 E3 78 */	mr r4, r28
/* 80465BF4 00462B34  38 7E 01 3C */	addi r3, r30, 0x13c
/* 80465BF8 00462B38  4B C6 4A C9 */	bl strcmp
/* 80465BFC 00462B3C  2C 03 00 00 */	cmpwi r3, 0
/* 80465C00 00462B40  40 82 00 0C */	bne .L_80465C0C
/* 80465C04 00462B44  38 00 00 01 */	li r0, 1
/* 80465C08 00462B48  48 00 00 08 */	b .L_80465C10
.L_80465C0C:
/* 80465C0C 00462B4C  38 00 00 00 */	li r0, 0
.L_80465C10:
/* 80465C10 00462B50  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465C14 00462B54  40 82 02 04 */	bne .L_80465E18
/* 80465C18 00462B58  34 1E 00 C0 */	addic. r0, r30, 0xc0
/* 80465C1C 00462B5C  41 82 00 0C */	beq .L_80465C28
/* 80465C20 00462B60  28 1C 00 00 */	cmplwi r28, 0
/* 80465C24 00462B64  40 82 00 0C */	bne .L_80465C30
.L_80465C28:
/* 80465C28 00462B68  38 00 00 00 */	li r0, 0
/* 80465C2C 00462B6C  48 00 00 24 */	b .L_80465C50
.L_80465C30:
/* 80465C30 00462B70  7F 84 E3 78 */	mr r4, r28
/* 80465C34 00462B74  38 7E 00 C0 */	addi r3, r30, 0xc0
/* 80465C38 00462B78  4B C6 4A 89 */	bl strcmp
/* 80465C3C 00462B7C  2C 03 00 00 */	cmpwi r3, 0
/* 80465C40 00462B80  40 82 00 0C */	bne .L_80465C4C
/* 80465C44 00462B84  38 00 00 01 */	li r0, 1
/* 80465C48 00462B88  48 00 00 08 */	b .L_80465C50
.L_80465C4C:
/* 80465C4C 00462B8C  38 00 00 00 */	li r0, 0
.L_80465C50:
/* 80465C50 00462B90  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465C54 00462B94  40 82 01 C4 */	bne .L_80465E18
/* 80465C58 00462B98  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 80465C5C 00462B9C  41 82 00 0C */	beq .L_80465C68
/* 80465C60 00462BA0  28 1C 00 00 */	cmplwi r28, 0
/* 80465C64 00462BA4  40 82 00 0C */	bne .L_80465C70
.L_80465C68:
/* 80465C68 00462BA8  38 00 00 00 */	li r0, 0
/* 80465C6C 00462BAC  48 00 00 24 */	b .L_80465C90
.L_80465C70:
/* 80465C70 00462BB0  7F 84 E3 78 */	mr r4, r28
/* 80465C74 00462BB4  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 80465C78 00462BB8  4B C6 4A 49 */	bl strcmp
/* 80465C7C 00462BBC  2C 03 00 00 */	cmpwi r3, 0
/* 80465C80 00462BC0  40 82 00 0C */	bne .L_80465C8C
/* 80465C84 00462BC4  38 00 00 01 */	li r0, 1
/* 80465C88 00462BC8  48 00 00 08 */	b .L_80465C90
.L_80465C8C:
/* 80465C8C 00462BCC  38 00 00 00 */	li r0, 0
.L_80465C90:
/* 80465C90 00462BD0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465C94 00462BD4  40 82 01 84 */	bne .L_80465E18
/* 80465C98 00462BD8  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 80465C9C 00462BDC  41 82 00 0C */	beq .L_80465CA8
/* 80465CA0 00462BE0  28 1C 00 00 */	cmplwi r28, 0
/* 80465CA4 00462BE4  40 82 00 0C */	bne .L_80465CB0
.L_80465CA8:
/* 80465CA8 00462BE8  38 00 00 00 */	li r0, 0
/* 80465CAC 00462BEC  48 00 00 24 */	b .L_80465CD0
.L_80465CB0:
/* 80465CB0 00462BF0  7F 84 E3 78 */	mr r4, r28
/* 80465CB4 00462BF4  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 80465CB8 00462BF8  4B C6 4A 09 */	bl strcmp
/* 80465CBC 00462BFC  2C 03 00 00 */	cmpwi r3, 0
/* 80465CC0 00462C00  40 82 00 0C */	bne .L_80465CCC
/* 80465CC4 00462C04  38 00 00 01 */	li r0, 1
/* 80465CC8 00462C08  48 00 00 08 */	b .L_80465CD0
.L_80465CCC:
/* 80465CCC 00462C0C  38 00 00 00 */	li r0, 0
.L_80465CD0:
/* 80465CD0 00462C10  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465CD4 00462C14  40 82 01 44 */	bne .L_80465E18
/* 80465CD8 00462C18  34 1E 00 FC */	addic. r0, r30, 0xfc
/* 80465CDC 00462C1C  41 82 00 0C */	beq .L_80465CE8
/* 80465CE0 00462C20  28 1C 00 00 */	cmplwi r28, 0
/* 80465CE4 00462C24  40 82 00 0C */	bne .L_80465CF0
.L_80465CE8:
/* 80465CE8 00462C28  38 00 00 00 */	li r0, 0
/* 80465CEC 00462C2C  48 00 00 24 */	b .L_80465D10
.L_80465CF0:
/* 80465CF0 00462C30  7F 84 E3 78 */	mr r4, r28
/* 80465CF4 00462C34  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80465CF8 00462C38  4B C6 49 C9 */	bl strcmp
/* 80465CFC 00462C3C  2C 03 00 00 */	cmpwi r3, 0
/* 80465D00 00462C40  40 82 00 0C */	bne .L_80465D0C
/* 80465D04 00462C44  38 00 00 01 */	li r0, 1
/* 80465D08 00462C48  48 00 00 08 */	b .L_80465D10
.L_80465D0C:
/* 80465D0C 00462C4C  38 00 00 00 */	li r0, 0
.L_80465D10:
/* 80465D10 00462C50  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465D14 00462C54  40 82 01 04 */	bne .L_80465E18
/* 80465D18 00462C58  34 1E 01 10 */	addic. r0, r30, 0x110
/* 80465D1C 00462C5C  41 82 00 0C */	beq .L_80465D28
/* 80465D20 00462C60  28 1C 00 00 */	cmplwi r28, 0
/* 80465D24 00462C64  40 82 00 0C */	bne .L_80465D30
.L_80465D28:
/* 80465D28 00462C68  38 00 00 00 */	li r0, 0
/* 80465D2C 00462C6C  48 00 00 24 */	b .L_80465D50
.L_80465D30:
/* 80465D30 00462C70  7F 84 E3 78 */	mr r4, r28
/* 80465D34 00462C74  38 7E 01 10 */	addi r3, r30, 0x110
/* 80465D38 00462C78  4B C6 49 89 */	bl strcmp
/* 80465D3C 00462C7C  2C 03 00 00 */	cmpwi r3, 0
/* 80465D40 00462C80  40 82 00 0C */	bne .L_80465D4C
/* 80465D44 00462C84  38 00 00 01 */	li r0, 1
/* 80465D48 00462C88  48 00 00 08 */	b .L_80465D50
.L_80465D4C:
/* 80465D4C 00462C8C  38 00 00 00 */	li r0, 0
.L_80465D50:
/* 80465D50 00462C90  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465D54 00462C94  40 82 00 C4 */	bne .L_80465E18
/* 80465D58 00462C98  34 1E 01 24 */	addic. r0, r30, 0x124
/* 80465D5C 00462C9C  41 82 00 0C */	beq .L_80465D68
/* 80465D60 00462CA0  28 1C 00 00 */	cmplwi r28, 0
/* 80465D64 00462CA4  40 82 00 0C */	bne .L_80465D70
.L_80465D68:
/* 80465D68 00462CA8  38 00 00 00 */	li r0, 0
/* 80465D6C 00462CAC  48 00 00 24 */	b .L_80465D90
.L_80465D70:
/* 80465D70 00462CB0  7F 84 E3 78 */	mr r4, r28
/* 80465D74 00462CB4  38 7E 01 24 */	addi r3, r30, 0x124
/* 80465D78 00462CB8  4B C6 49 49 */	bl strcmp
/* 80465D7C 00462CBC  2C 03 00 00 */	cmpwi r3, 0
/* 80465D80 00462CC0  40 82 00 0C */	bne .L_80465D8C
/* 80465D84 00462CC4  38 00 00 01 */	li r0, 1
/* 80465D88 00462CC8  48 00 00 08 */	b .L_80465D90
.L_80465D8C:
/* 80465D8C 00462CCC  38 00 00 00 */	li r0, 0
.L_80465D90:
/* 80465D90 00462CD0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465D94 00462CD4  40 82 00 84 */	bne .L_80465E18
/* 80465D98 00462CD8  34 1E 01 50 */	addic. r0, r30, 0x150
/* 80465D9C 00462CDC  41 82 00 0C */	beq .L_80465DA8
/* 80465DA0 00462CE0  28 1C 00 00 */	cmplwi r28, 0
/* 80465DA4 00462CE4  40 82 00 0C */	bne .L_80465DB0
.L_80465DA8:
/* 80465DA8 00462CE8  38 00 00 00 */	li r0, 0
/* 80465DAC 00462CEC  48 00 00 24 */	b .L_80465DD0
.L_80465DB0:
/* 80465DB0 00462CF0  7F 84 E3 78 */	mr r4, r28
/* 80465DB4 00462CF4  38 7E 01 50 */	addi r3, r30, 0x150
/* 80465DB8 00462CF8  4B C6 49 09 */	bl strcmp
/* 80465DBC 00462CFC  2C 03 00 00 */	cmpwi r3, 0
/* 80465DC0 00462D00  40 82 00 0C */	bne .L_80465DCC
/* 80465DC4 00462D04  38 00 00 01 */	li r0, 1
/* 80465DC8 00462D08  48 00 00 08 */	b .L_80465DD0
.L_80465DCC:
/* 80465DCC 00462D0C  38 00 00 00 */	li r0, 0
.L_80465DD0:
/* 80465DD0 00462D10  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465DD4 00462D14  40 82 00 44 */	bne .L_80465E18
/* 80465DD8 00462D18  34 1E 08 24 */	addic. r0, r30, 0x824
/* 80465DDC 00462D1C  41 82 00 0C */	beq .L_80465DE8
/* 80465DE0 00462D20  28 1C 00 00 */	cmplwi r28, 0
/* 80465DE4 00462D24  40 82 00 0C */	bne .L_80465DF0
.L_80465DE8:
/* 80465DE8 00462D28  38 00 00 00 */	li r0, 0
/* 80465DEC 00462D2C  48 00 00 24 */	b .L_80465E10
.L_80465DF0:
/* 80465DF0 00462D30  7F 84 E3 78 */	mr r4, r28
/* 80465DF4 00462D34  38 7E 08 24 */	addi r3, r30, 0x824
/* 80465DF8 00462D38  4B C6 48 C9 */	bl strcmp
/* 80465DFC 00462D3C  2C 03 00 00 */	cmpwi r3, 0
/* 80465E00 00462D40  40 82 00 0C */	bne .L_80465E0C
/* 80465E04 00462D44  38 00 00 01 */	li r0, 1
/* 80465E08 00462D48  48 00 00 08 */	b .L_80465E10
.L_80465E0C:
/* 80465E0C 00462D4C  38 00 00 00 */	li r0, 0
.L_80465E10:
/* 80465E10 00462D50  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465E14 00462D54  41 82 00 18 */	beq .L_80465E2C
.L_80465E18:
/* 80465E18 00462D58  38 60 00 00 */	li r3, 0
/* 80465E1C 00462D5C  38 00 38 04 */	li r0, 0x3804
/* 80465E20 00462D60  98 77 00 19 */	stb r3, 0x19(r23)
/* 80465E24 00462D64  90 17 00 1C */	stw r0, 0x1c(r23)
/* 80465E28 00462D68  48 00 01 B8 */	b .L_80465FE0
.L_80465E2C:
/* 80465E2C 00462D6C  34 1E 08 34 */	addic. r0, r30, 0x834
/* 80465E30 00462D70  41 82 00 0C */	beq .L_80465E3C
/* 80465E34 00462D74  28 1C 00 00 */	cmplwi r28, 0
/* 80465E38 00462D78  40 82 00 0C */	bne .L_80465E44
.L_80465E3C:
/* 80465E3C 00462D7C  38 00 00 00 */	li r0, 0
/* 80465E40 00462D80  48 00 00 24 */	b .L_80465E64
.L_80465E44:
/* 80465E44 00462D84  7F 84 E3 78 */	mr r4, r28
/* 80465E48 00462D88  38 7E 08 34 */	addi r3, r30, 0x834
/* 80465E4C 00462D8C  4B C6 48 75 */	bl strcmp
/* 80465E50 00462D90  2C 03 00 00 */	cmpwi r3, 0
/* 80465E54 00462D94  40 82 00 0C */	bne .L_80465E60
/* 80465E58 00462D98  38 00 00 01 */	li r0, 1
/* 80465E5C 00462D9C  48 00 00 08 */	b .L_80465E64
.L_80465E60:
/* 80465E60 00462DA0  38 00 00 00 */	li r0, 0
.L_80465E64:
/* 80465E64 00462DA4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465E68 00462DA8  41 82 00 1C */	beq .L_80465E84
/* 80465E6C 00462DAC  38 00 18 1C */	li r0, 0x181c
/* 80465E70 00462DB0  3C 60 80 47 */	lis r3, PSChangeBgm_ChallengeGame__Fv@ha
/* 80465E74 00462DB4  90 17 00 1C */	stw r0, 0x1c(r23)
/* 80465E78 00462DB8  38 03 B5 B8 */	addi r0, r3, PSChangeBgm_ChallengeGame__Fv@l
/* 80465E7C 00462DBC  90 17 00 24 */	stw r0, 0x24(r23)
/* 80465E80 00462DC0  48 00 01 60 */	b .L_80465FE0
.L_80465E84:
/* 80465E84 00462DC4  34 1E 08 44 */	addic. r0, r30, 0x844
/* 80465E88 00462DC8  41 82 00 0C */	beq .L_80465E94
/* 80465E8C 00462DCC  28 1C 00 00 */	cmplwi r28, 0
/* 80465E90 00462DD0  40 82 00 0C */	bne .L_80465E9C
.L_80465E94:
/* 80465E94 00462DD4  38 00 00 00 */	li r0, 0
/* 80465E98 00462DD8  48 00 00 24 */	b .L_80465EBC
.L_80465E9C:
/* 80465E9C 00462DDC  7F 84 E3 78 */	mr r4, r28
/* 80465EA0 00462DE0  38 7E 08 44 */	addi r3, r30, 0x844
/* 80465EA4 00462DE4  4B C6 48 1D */	bl strcmp
/* 80465EA8 00462DE8  2C 03 00 00 */	cmpwi r3, 0
/* 80465EAC 00462DEC  40 82 00 0C */	bne .L_80465EB8
/* 80465EB0 00462DF0  38 00 00 01 */	li r0, 1
/* 80465EB4 00462DF4  48 00 00 08 */	b .L_80465EBC
.L_80465EB8:
/* 80465EB8 00462DF8  38 00 00 00 */	li r0, 0
.L_80465EBC:
/* 80465EBC 00462DFC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465EC0 00462E00  41 82 00 14 */	beq .L_80465ED4
/* 80465EC4 00462E04  3C 60 80 47 */	lis r3, PSChangeBgm_ChallengeGame__Fv@ha
/* 80465EC8 00462E08  38 03 B5 B8 */	addi r0, r3, PSChangeBgm_ChallengeGame__Fv@l
/* 80465ECC 00462E0C  90 17 00 24 */	stw r0, 0x24(r23)
/* 80465ED0 00462E10  48 00 01 10 */	b .L_80465FE0
.L_80465ED4:
/* 80465ED4 00462E14  34 1E 06 10 */	addic. r0, r30, 0x610
/* 80465ED8 00462E18  41 82 00 0C */	beq .L_80465EE4
/* 80465EDC 00462E1C  28 1C 00 00 */	cmplwi r28, 0
/* 80465EE0 00462E20  40 82 00 0C */	bne .L_80465EEC
.L_80465EE4:
/* 80465EE4 00462E24  38 00 00 00 */	li r0, 0
/* 80465EE8 00462E28  48 00 00 24 */	b .L_80465F0C
.L_80465EEC:
/* 80465EEC 00462E2C  7F 84 E3 78 */	mr r4, r28
/* 80465EF0 00462E30  38 7E 06 10 */	addi r3, r30, 0x610
/* 80465EF4 00462E34  4B C6 47 CD */	bl strcmp
/* 80465EF8 00462E38  2C 03 00 00 */	cmpwi r3, 0
/* 80465EFC 00462E3C  40 82 00 0C */	bne .L_80465F08
/* 80465F00 00462E40  38 00 00 01 */	li r0, 1
/* 80465F04 00462E44  48 00 00 08 */	b .L_80465F0C
.L_80465F08:
/* 80465F08 00462E48  38 00 00 00 */	li r0, 0
.L_80465F0C:
/* 80465F0C 00462E4C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465F10 00462E50  40 82 00 44 */	bne .L_80465F54
/* 80465F14 00462E54  34 1E 08 10 */	addic. r0, r30, 0x810
/* 80465F18 00462E58  41 82 00 0C */	beq .L_80465F24
/* 80465F1C 00462E5C  28 1C 00 00 */	cmplwi r28, 0
/* 80465F20 00462E60  40 82 00 0C */	bne .L_80465F2C
.L_80465F24:
/* 80465F24 00462E64  38 00 00 00 */	li r0, 0
/* 80465F28 00462E68  48 00 00 24 */	b .L_80465F4C
.L_80465F2C:
/* 80465F2C 00462E6C  7F 84 E3 78 */	mr r4, r28
/* 80465F30 00462E70  38 7E 08 10 */	addi r3, r30, 0x810
/* 80465F34 00462E74  4B C6 47 8D */	bl strcmp
/* 80465F38 00462E78  2C 03 00 00 */	cmpwi r3, 0
/* 80465F3C 00462E7C  40 82 00 0C */	bne .L_80465F48
/* 80465F40 00462E80  38 00 00 01 */	li r0, 1
/* 80465F44 00462E84  48 00 00 08 */	b .L_80465F4C
.L_80465F48:
/* 80465F48 00462E88  38 00 00 00 */	li r0, 0
.L_80465F4C:
/* 80465F4C 00462E8C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465F50 00462E90  41 82 00 10 */	beq .L_80465F60
.L_80465F54:
/* 80465F54 00462E94  38 00 00 00 */	li r0, 0
/* 80465F58 00462E98  98 17 00 19 */	stb r0, 0x19(r23)
/* 80465F5C 00462E9C  48 00 00 84 */	b .L_80465FE0
.L_80465F60:
/* 80465F60 00462EA0  34 1E 00 94 */	addic. r0, r30, 0x94
/* 80465F64 00462EA4  41 82 00 0C */	beq .L_80465F70
/* 80465F68 00462EA8  28 1C 00 00 */	cmplwi r28, 0
/* 80465F6C 00462EAC  40 82 00 0C */	bne .L_80465F78
.L_80465F70:
/* 80465F70 00462EB0  38 00 00 00 */	li r0, 0
/* 80465F74 00462EB4  48 00 00 24 */	b .L_80465F98
.L_80465F78:
/* 80465F78 00462EB8  7F 84 E3 78 */	mr r4, r28
/* 80465F7C 00462EBC  38 7E 00 94 */	addi r3, r30, 0x94
/* 80465F80 00462EC0  4B C6 47 41 */	bl strcmp
/* 80465F84 00462EC4  2C 03 00 00 */	cmpwi r3, 0
/* 80465F88 00462EC8  40 82 00 0C */	bne .L_80465F94
/* 80465F8C 00462ECC  38 00 00 01 */	li r0, 1
/* 80465F90 00462ED0  48 00 00 08 */	b .L_80465F98
.L_80465F94:
/* 80465F94 00462ED4  38 00 00 00 */	li r0, 0
.L_80465F98:
/* 80465F98 00462ED8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80465F9C 00462EDC  41 82 00 44 */	beq .L_80465FE0
/* 80465FA0 00462EE0  80 18 00 00 */	lwz r0, 0(r24)
/* 80465FA4 00462EE4  2C 00 00 01 */	cmpwi r0, 1
/* 80465FA8 00462EE8  41 82 00 18 */	beq .L_80465FC0
/* 80465FAC 00462EEC  40 80 00 08 */	bge .L_80465FB4
/* 80465FB0 00462EF0  48 00 00 28 */	b .L_80465FD8
.L_80465FB4:
/* 80465FB4 00462EF4  2C 00 00 03 */	cmpwi r0, 3
/* 80465FB8 00462EF8  40 80 00 20 */	bge .L_80465FD8
/* 80465FBC 00462EFC  48 00 00 10 */	b .L_80465FCC
.L_80465FC0:
/* 80465FC0 00462F00  38 00 08 A4 */	li r0, 0x8a4
/* 80465FC4 00462F04  90 17 00 1C */	stw r0, 0x1c(r23)
/* 80465FC8 00462F08  48 00 00 18 */	b .L_80465FE0
.L_80465FCC:
/* 80465FCC 00462F0C  38 00 08 A5 */	li r0, 0x8a5
/* 80465FD0 00462F10  90 17 00 1C */	stw r0, 0x1c(r23)
/* 80465FD4 00462F14  48 00 00 0C */	b .L_80465FE0
.L_80465FD8:
/* 80465FD8 00462F18  38 00 08 A3 */	li r0, 0x8a3
/* 80465FDC 00462F1C  90 17 00 1C */	stw r0, 0x1c(r23)
.L_80465FE0:
/* 80465FE0 00462F20  34 1E 06 10 */	addic. r0, r30, 0x610
/* 80465FE4 00462F24  41 82 00 0C */	beq .L_80465FF0
/* 80465FE8 00462F28  28 1C 00 00 */	cmplwi r28, 0
/* 80465FEC 00462F2C  40 82 00 0C */	bne .L_80465FF8
.L_80465FF0:
/* 80465FF0 00462F30  38 00 00 00 */	li r0, 0
/* 80465FF4 00462F34  48 00 00 24 */	b .L_80466018
.L_80465FF8:
/* 80465FF8 00462F38  7F 84 E3 78 */	mr r4, r28
/* 80465FFC 00462F3C  38 7E 06 10 */	addi r3, r30, 0x610
/* 80466000 00462F40  4B C6 46 C1 */	bl strcmp
/* 80466004 00462F44  2C 03 00 00 */	cmpwi r3, 0
/* 80466008 00462F48  40 82 00 0C */	bne .L_80466014
/* 8046600C 00462F4C  38 00 00 01 */	li r0, 1
/* 80466010 00462F50  48 00 00 08 */	b .L_80466018
.L_80466014:
/* 80466014 00462F54  38 00 00 00 */	li r0, 0
.L_80466018:
/* 80466018 00462F58  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8046601C 00462F5C  41 82 00 0C */	beq .L_80466028
/* 80466020 00462F60  38 00 59 7B */	li r0, 0x597b
/* 80466024 00462F64  90 17 00 1C */	stw r0, 0x1c(r23)
.L_80466028:
/* 80466028 00462F68  80 61 00 08 */	lwz r3, 8(r1)
/* 8046602C 00462F6C  3C 03 00 01 */	addis r0, r3, 1
/* 80466030 00462F70  28 00 FF FF */	cmplwi r0, 0xffff
/* 80466034 00462F74  41 82 00 64 */	beq .L_80466098
/* 80466038 00462F78  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046603C 00462F7C  28 00 00 00 */	cmplwi r0, 0
/* 80466040 00462F80  40 82 00 18 */	bne .L_80466058
/* 80466044 00462F84  38 7E 00 20 */	addi r3, r30, 0x20
/* 80466048 00462F88  38 BE 00 14 */	addi r5, r30, 0x14
/* 8046604C 00462F8C  38 80 01 D3 */	li r4, 0x1d3
/* 80466050 00462F90  4C C6 31 82 */	crclr 6
/* 80466054 00462F94  4B BC 45 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466058:
/* 80466058 00462F98  82 CD 98 80 */	lwz r22, spSceneMgr__8PSSystem@sda21(r13)
/* 8046605C 00462F9C  28 16 00 00 */	cmplwi r22, 0
/* 80466060 00462FA0  40 82 00 18 */	bne .L_80466078
/* 80466064 00462FA4  38 7E 00 20 */	addi r3, r30, 0x20
/* 80466068 00462FA8  38 BE 00 14 */	addi r5, r30, 0x14
/* 8046606C 00462FAC  38 80 01 DC */	li r4, 0x1dc
/* 80466070 00462FB0  4C C6 31 82 */	crclr 6
/* 80466074 00462FB4  4B BC 45 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466078:
/* 80466078 00462FB8  80 81 00 08 */	lwz r4, 8(r1)
/* 8046607C 00462FBC  7E C3 B3 78 */	mr r3, r22
/* 80466080 00462FC0  38 A1 00 0C */	addi r5, r1, 0xc
/* 80466084 00462FC4  4B EC FF 61 */	bl newStreamBgm__Q26PSGame11PikSceneMgrFUlRQ27JAInter9SoundInfo
/* 80466088 00462FC8  38 00 00 FF */	li r0, 0xff
/* 8046608C 00462FCC  7C 7A 1B 78 */	mr r26, r3
/* 80466090 00462FD0  98 19 00 00 */	stb r0, 0(r25)
/* 80466094 00462FD4  48 00 00 7C */	b .L_80466110
.L_80466098:
/* 80466098 00462FD8  88 01 00 1C */	lbz r0, 0x1c(r1)
/* 8046609C 00462FDC  7C 00 07 75 */	extsb. r0, r0
/* 804660A0 00462FE0  41 82 00 70 */	beq .L_80466110
/* 804660A4 00462FE4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804660A8 00462FE8  28 00 00 00 */	cmplwi r0, 0
/* 804660AC 00462FEC  40 82 00 18 */	bne .L_804660C4
/* 804660B0 00462FF0  38 7E 00 20 */	addi r3, r30, 0x20
/* 804660B4 00462FF4  38 BE 00 14 */	addi r5, r30, 0x14
/* 804660B8 00462FF8  38 80 01 D3 */	li r4, 0x1d3
/* 804660BC 00462FFC  4C C6 31 82 */	crclr 6
/* 804660C0 00463000  4B BC 45 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804660C4:
/* 804660C4 00463004  82 CD 98 80 */	lwz r22, spSceneMgr__8PSSystem@sda21(r13)
/* 804660C8 00463008  28 16 00 00 */	cmplwi r22, 0
/* 804660CC 0046300C  40 82 00 18 */	bne .L_804660E4
/* 804660D0 00463010  38 7E 00 20 */	addi r3, r30, 0x20
/* 804660D4 00463014  38 BE 00 14 */	addi r5, r30, 0x14
/* 804660D8 00463018  38 80 01 DC */	li r4, 0x1dc
/* 804660DC 0046301C  4C C6 31 82 */	crclr 6
/* 804660E0 00463020  4B BC 45 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804660E4:
/* 804660E4 00463024  7E C3 B3 78 */	mr r3, r22
/* 804660E8 00463028  38 81 00 1C */	addi r4, r1, 0x1c
/* 804660EC 0046302C  38 A1 00 0C */	addi r5, r1, 0xc
/* 804660F0 00463030  4B EC FE 5D */	bl newBgmSeq__Q26PSGame11PikSceneMgrFPCcRQ27JAInter9SoundInfo
/* 804660F4 00463034  7C 7A 1B 79 */	or. r26, r3, r3
/* 804660F8 00463038  40 82 00 18 */	bne .L_80466110
/* 804660FC 0046303C  38 7E 00 00 */	addi r3, r30, 0
/* 80466100 00463040  38 BE 00 14 */	addi r5, r30, 0x14
/* 80466104 00463044  38 80 02 78 */	li r4, 0x278
/* 80466108 00463048  4C C6 31 82 */	crclr 6
/* 8046610C 0046304C  4B BC 45 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466110:
/* 80466110 00463050  7F 43 D3 78 */	mr r3, r26
/* 80466114 00463054  BA C1 00 48 */	lmw r22, 0x48(r1)
/* 80466118 00463058  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8046611C 0046305C  7C 08 03 A6 */	mtlr r0
/* 80466120 00463060  38 21 00 70 */	addi r1, r1, 0x70
/* 80466124 00463064  4E 80 00 20 */	blr 

.global __dt__Q23PSM4DemoFv
__dt__Q23PSM4DemoFv:
/* 80466128 00463068  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046612C 0046306C  7C 08 02 A6 */	mflr r0
/* 80466130 00463070  3C A0 80 4A */	lis r5, lbl_8049D080@ha
/* 80466134 00463074  90 01 00 24 */	stw r0, 0x24(r1)
/* 80466138 00463078  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8046613C 0046307C  7C 7B 1B 79 */	or. r27, r3, r3
/* 80466140 00463080  7C 9C 23 78 */	mr r28, r4
/* 80466144 00463084  3B E5 D0 80 */	addi r31, r5, lbl_8049D080@l
/* 80466148 00463088  41 82 01 4C */	beq .L_80466294
/* 8046614C 0046308C  3C 80 80 4F */	lis r4, __vt__Q23PSM4Demo@ha
/* 80466150 00463090  38 04 F2 50 */	addi r0, r4, __vt__Q23PSM4Demo@l
/* 80466154 00463094  90 1B 00 00 */	stw r0, 0(r27)
/* 80466158 00463098  48 00 08 15 */	bl becomeSceneCamera__Q23PSM4DemoFv
/* 8046615C 0046309C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466160 004630A0  28 00 00 00 */	cmplwi r0, 0
/* 80466164 004630A4  40 82 00 18 */	bne .L_8046617C
/* 80466168 004630A8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046616C 004630AC  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466170 004630B0  38 80 01 D3 */	li r4, 0x1d3
/* 80466174 004630B4  4C C6 31 82 */	crclr 6
/* 80466178 004630B8  4B BC 44 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046617C:
/* 8046617C 004630BC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80466180 004630C0  28 1E 00 00 */	cmplwi r30, 0
/* 80466184 004630C4  40 82 00 18 */	bne .L_8046619C
/* 80466188 004630C8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046618C 004630CC  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466190 004630D0  38 80 01 DC */	li r4, 0x1dc
/* 80466194 004630D4  4C C6 31 82 */	crclr 6
/* 80466198 004630D8  4B BC 44 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046619C:
/* 8046619C 004630DC  80 1E 00 04 */	lwz r0, 4(r30)
/* 804661A0 004630E0  28 00 00 00 */	cmplwi r0, 0
/* 804661A4 004630E4  40 82 00 18 */	bne .L_804661BC
/* 804661A8 004630E8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804661AC 004630EC  38 BF 00 14 */	addi r5, r31, 0x14
/* 804661B0 004630F0  38 80 00 CF */	li r4, 0xcf
/* 804661B4 004630F4  4C C6 31 82 */	crclr 6
/* 804661B8 004630F8  4B BC 44 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804661BC:
/* 804661BC 004630FC  80 7E 00 04 */	lwz r3, 4(r30)
/* 804661C0 00463100  83 C3 00 04 */	lwz r30, 4(r3)
/* 804661C4 00463104  28 1E 00 00 */	cmplwi r30, 0
/* 804661C8 00463108  40 82 00 18 */	bne .L_804661E0
/* 804661CC 0046310C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804661D0 00463110  38 BF 00 38 */	addi r5, r31, 0x38
/* 804661D4 00463114  38 80 00 D1 */	li r4, 0xd1
/* 804661D8 00463118  4C C6 31 82 */	crclr 6
/* 804661DC 0046311C  4B BC 44 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804661E0:
/* 804661E0 00463120  80 1E 00 04 */	lwz r0, 4(r30)
/* 804661E4 00463124  28 00 00 00 */	cmplwi r0, 0
/* 804661E8 00463128  40 82 00 18 */	bne .L_80466200
/* 804661EC 0046312C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804661F0 00463130  38 BF 00 14 */	addi r5, r31, 0x14
/* 804661F4 00463134  38 80 00 5A */	li r4, 0x5a
/* 804661F8 00463138  4C C6 31 82 */	crclr 6
/* 804661FC 0046313C  4B BC 44 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466200:
/* 80466200 00463140  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466204 00463144  83 DE 00 04 */	lwz r30, 4(r30)
/* 80466208 00463148  28 00 00 00 */	cmplwi r0, 0
/* 8046620C 0046314C  40 82 00 18 */	bne .L_80466224
/* 80466210 00463150  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466214 00463154  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466218 00463158  38 80 01 D3 */	li r4, 0x1d3
/* 8046621C 0046315C  4C C6 31 82 */	crclr 6
/* 80466220 00463160  4B BC 44 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466224:
/* 80466224 00463164  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 80466228 00463168  28 1D 00 00 */	cmplwi r29, 0
/* 8046622C 0046316C  40 82 00 18 */	bne .L_80466244
/* 80466230 00463170  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466234 00463174  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466238 00463178  38 80 01 DC */	li r4, 0x1dc
/* 8046623C 0046317C  4C C6 31 82 */	crclr 6
/* 80466240 00463180  4B BC 44 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466244:
/* 80466244 00463184  7F A3 EB 78 */	mr r3, r29
/* 80466248 00463188  7F C4 F3 78 */	mr r4, r30
/* 8046624C 0046318C  4B ED BB 55 */	bl deleteScene__Q28PSSystem8SceneMgrFPQ28PSSystem5Scene
/* 80466250 00463190  80 7B 00 28 */	lwz r3, 0x28(r27)
/* 80466254 00463194  4B BB DE 61 */	bl __dl__FPv
/* 80466258 00463198  28 1E 00 00 */	cmplwi r30, 0
/* 8046625C 0046319C  41 82 00 1C */	beq .L_80466278
/* 80466260 004631A0  7F C3 F3 78 */	mr r3, r30
/* 80466264 004631A4  38 80 00 01 */	li r4, 1
/* 80466268 004631A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046626C 004631AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80466270 004631B0  7D 89 03 A6 */	mtctr r12
/* 80466274 004631B4  4E 80 04 21 */	bctrl 
.L_80466278:
/* 80466278 004631B8  7F 63 DB 78 */	mr r3, r27
/* 8046627C 004631BC  38 80 00 00 */	li r4, 0
/* 80466280 004631C0  4B BB 6D B5 */	bl __dt__11JKRDisposerFv
/* 80466284 004631C4  7F 80 07 35 */	extsh. r0, r28
/* 80466288 004631C8  40 81 00 0C */	ble .L_80466294
/* 8046628C 004631CC  7F 63 DB 78 */	mr r3, r27
/* 80466290 004631D0  4B BB DE 25 */	bl __dl__FPv
.L_80466294:
/* 80466294 004631D4  7F 63 DB 78 */	mr r3, r27
/* 80466298 004631D8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8046629C 004631DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804662A0 004631E0  7C 08 03 A6 */	mtlr r0
/* 804662A4 004631E4  38 21 00 20 */	addi r1, r1, 0x20
/* 804662A8 004631E8  4E 80 00 20 */	blr 

.global onDemoTop__Q23PSM4DemoFv
onDemoTop__Q23PSM4DemoFv:
/* 804662AC 004631EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804662B0 004631F0  7C 08 02 A6 */	mflr r0
/* 804662B4 004631F4  3C 80 80 4A */	lis r4, lbl_8049D080@ha
/* 804662B8 004631F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804662BC 004631FC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 804662C0 00463200  7C 7D 1B 78 */	mr r29, r3
/* 804662C4 00463204  3B E4 D0 80 */	addi r31, r4, lbl_8049D080@l
/* 804662C8 00463208  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804662CC 0046320C  28 00 00 00 */	cmplwi r0, 0
/* 804662D0 00463210  40 82 00 18 */	bne .L_804662E8
/* 804662D4 00463214  38 7F 00 20 */	addi r3, r31, 0x20
/* 804662D8 00463218  38 BF 00 14 */	addi r5, r31, 0x14
/* 804662DC 0046321C  38 80 01 D3 */	li r4, 0x1d3
/* 804662E0 00463220  4C C6 31 82 */	crclr 6
/* 804662E4 00463224  4B BC 43 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804662E8:
/* 804662E8 00463228  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 804662EC 0046322C  28 1C 00 00 */	cmplwi r28, 0
/* 804662F0 00463230  40 82 00 18 */	bne .L_80466308
/* 804662F4 00463234  38 7F 00 20 */	addi r3, r31, 0x20
/* 804662F8 00463238  38 BF 00 14 */	addi r5, r31, 0x14
/* 804662FC 0046323C  38 80 01 DC */	li r4, 0x1dc
/* 80466300 00463240  4C C6 31 82 */	crclr 6
/* 80466304 00463244  4B BC 43 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466308:
/* 80466308 00463248  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046630C 0046324C  28 00 00 00 */	cmplwi r0, 0
/* 80466310 00463250  40 82 00 18 */	bne .L_80466328
/* 80466314 00463254  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466318 00463258  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046631C 0046325C  38 80 00 CF */	li r4, 0xcf
/* 80466320 00463260  4C C6 31 82 */	crclr 6
/* 80466324 00463264  4B BC 43 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466328:
/* 80466328 00463268  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046632C 0046326C  83 83 00 04 */	lwz r28, 4(r3)
/* 80466330 00463270  28 1C 00 00 */	cmplwi r28, 0
/* 80466334 00463274  40 82 00 18 */	bne .L_8046634C
/* 80466338 00463278  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8046633C 0046327C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466340 00463280  38 80 00 D1 */	li r4, 0xd1
/* 80466344 00463284  4C C6 31 82 */	crclr 6
/* 80466348 00463288  4B BC 42 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046634C:
/* 8046634C 0046328C  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466350 00463290  28 00 00 00 */	cmplwi r0, 0
/* 80466354 00463294  40 82 00 18 */	bne .L_8046636C
/* 80466358 00463298  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8046635C 0046329C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466360 004632A0  38 80 00 5B */	li r4, 0x5b
/* 80466364 004632A4  4C C6 31 82 */	crclr 6
/* 80466368 004632A8  4B BC 42 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046636C:
/* 8046636C 004632AC  80 7C 00 04 */	lwz r3, 4(r28)
/* 80466370 004632B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80466374 004632B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80466378 004632B8  7D 89 03 A6 */	mtctr r12
/* 8046637C 004632BC  4E 80 04 21 */	bctrl 
/* 80466380 004632C0  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80466384 004632C4  28 00 00 00 */	cmplwi r0, 0
/* 80466388 004632C8  40 82 00 18 */	bne .L_804663A0
/* 8046638C 004632CC  38 7F 08 6C */	addi r3, r31, 0x86c
/* 80466390 004632D0  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466394 004632D4  38 80 00 89 */	li r4, 0x89
/* 80466398 004632D8  4C C6 31 82 */	crclr 6
/* 8046639C 004632DC  4B BC 42 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804663A0:
/* 804663A0 004632E0  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 804663A4 004632E4  38 80 00 01 */	li r4, 1
/* 804663A8 004632E8  81 83 00 00 */	lwz r12, 0(r3)
/* 804663AC 004632EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804663B0 004632F0  7D 89 03 A6 */	mtctr r12
/* 804663B4 004632F4  4E 80 04 21 */	bctrl 
/* 804663B8 004632F8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804663BC 004632FC  28 00 00 00 */	cmplwi r0, 0
/* 804663C0 00463300  40 82 00 18 */	bne .L_804663D8
/* 804663C4 00463304  38 7F 00 20 */	addi r3, r31, 0x20
/* 804663C8 00463308  38 BF 00 14 */	addi r5, r31, 0x14
/* 804663CC 0046330C  38 80 01 D3 */	li r4, 0x1d3
/* 804663D0 00463310  4C C6 31 82 */	crclr 6
/* 804663D4 00463314  4B BC 42 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804663D8:
/* 804663D8 00463318  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 804663DC 0046331C  28 1C 00 00 */	cmplwi r28, 0
/* 804663E0 00463320  40 82 00 18 */	bne .L_804663F8
/* 804663E4 00463324  38 7F 00 20 */	addi r3, r31, 0x20
/* 804663E8 00463328  38 BF 00 14 */	addi r5, r31, 0x14
/* 804663EC 0046332C  38 80 01 DC */	li r4, 0x1dc
/* 804663F0 00463330  4C C6 31 82 */	crclr 6
/* 804663F4 00463334  4B BC 42 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804663F8:
/* 804663F8 00463338  80 1C 00 04 */	lwz r0, 4(r28)
/* 804663FC 0046333C  28 00 00 00 */	cmplwi r0, 0
/* 80466400 00463340  40 82 00 18 */	bne .L_80466418
/* 80466404 00463344  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466408 00463348  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046640C 0046334C  38 80 00 CF */	li r4, 0xcf
/* 80466410 00463350  4C C6 31 82 */	crclr 6
/* 80466414 00463354  4B BC 42 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466418:
/* 80466418 00463358  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046641C 0046335C  83 83 00 04 */	lwz r28, 4(r3)
/* 80466420 00463360  28 1C 00 00 */	cmplwi r28, 0
/* 80466424 00463364  40 82 00 18 */	bne .L_8046643C
/* 80466428 00463368  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8046642C 0046336C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466430 00463370  38 80 00 D1 */	li r4, 0xd1
/* 80466434 00463374  4C C6 31 82 */	crclr 6
/* 80466438 00463378  4B BC 42 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046643C:
/* 8046643C 0046337C  7F 83 E3 78 */	mr r3, r28
/* 80466440 00463380  81 9C 00 00 */	lwz r12, 0(r28)
/* 80466444 00463384  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80466448 00463388  7D 89 03 A6 */	mtctr r12
/* 8046644C 0046338C  4E 80 04 21 */	bctrl 
/* 80466450 00463390  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466454 00463394  28 00 00 00 */	cmplwi r0, 0
/* 80466458 00463398  40 82 00 18 */	bne .L_80466470
/* 8046645C 0046339C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466460 004633A0  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466464 004633A4  38 80 01 D3 */	li r4, 0x1d3
/* 80466468 004633A8  4C C6 31 82 */	crclr 6
/* 8046646C 004633AC  4B BC 41 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466470:
/* 80466470 004633B0  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466474 004633B4  28 1C 00 00 */	cmplwi r28, 0
/* 80466478 004633B8  40 82 00 18 */	bne .L_80466490
/* 8046647C 004633BC  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466480 004633C0  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466484 004633C4  38 80 01 DC */	li r4, 0x1dc
/* 80466488 004633C8  4C C6 31 82 */	crclr 6
/* 8046648C 004633CC  4B BC 41 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466490:
/* 80466490 004633D0  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466494 004633D4  28 00 00 00 */	cmplwi r0, 0
/* 80466498 004633D8  40 82 00 18 */	bne .L_804664B0
/* 8046649C 004633DC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804664A0 004633E0  38 BF 00 14 */	addi r5, r31, 0x14
/* 804664A4 004633E4  38 80 00 CF */	li r4, 0xcf
/* 804664A8 004633E8  4C C6 31 82 */	crclr 6
/* 804664AC 004633EC  4B BC 41 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804664B0:
/* 804664B0 004633F0  80 7C 00 04 */	lwz r3, 4(r28)
/* 804664B4 004633F4  83 83 00 04 */	lwz r28, 4(r3)
/* 804664B8 004633F8  28 1C 00 00 */	cmplwi r28, 0
/* 804664BC 004633FC  40 82 00 18 */	bne .L_804664D4
/* 804664C0 00463400  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804664C4 00463404  38 BF 00 38 */	addi r5, r31, 0x38
/* 804664C8 00463408  38 80 00 D1 */	li r4, 0xd1
/* 804664CC 0046340C  4C C6 31 82 */	crclr 6
/* 804664D0 00463410  4B BC 41 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804664D4:
/* 804664D4 00463414  7F 83 E3 78 */	mr r3, r28
/* 804664D8 00463418  81 9C 00 00 */	lwz r12, 0(r28)
/* 804664DC 0046341C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804664E0 00463420  7D 89 03 A6 */	mtctr r12
/* 804664E4 00463424  4E 80 04 21 */	bctrl 
/* 804664E8 00463428  7C 7B 1B 79 */	or. r27, r3, r3
/* 804664EC 0046342C  41 82 00 0C */	beq .L_804664F8
/* 804664F0 00463430  38 00 00 00 */	li r0, 0
/* 804664F4 00463434  B0 1B 00 10 */	sth r0, 0x10(r27)
.L_804664F8:
/* 804664F8 00463438  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804664FC 0046343C  28 00 00 00 */	cmplwi r0, 0
/* 80466500 00463440  40 82 00 18 */	bne .L_80466518
/* 80466504 00463444  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466508 00463448  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046650C 0046344C  38 80 01 D3 */	li r4, 0x1d3
/* 80466510 00463450  4C C6 31 82 */	crclr 6
/* 80466514 00463454  4B BC 41 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466518:
/* 80466518 00463458  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046651C 0046345C  28 1C 00 00 */	cmplwi r28, 0
/* 80466520 00463460  40 82 00 18 */	bne .L_80466538
/* 80466524 00463464  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466528 00463468  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046652C 0046346C  38 80 01 DC */	li r4, 0x1dc
/* 80466530 00463470  4C C6 31 82 */	crclr 6
/* 80466534 00463474  4B BC 41 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466538:
/* 80466538 00463478  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046653C 0046347C  28 00 00 00 */	cmplwi r0, 0
/* 80466540 00463480  40 82 00 18 */	bne .L_80466558
/* 80466544 00463484  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466548 00463488  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046654C 0046348C  38 80 00 CF */	li r4, 0xcf
/* 80466550 00463490  4C C6 31 82 */	crclr 6
/* 80466554 00463494  4B BC 40 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466558:
/* 80466558 00463498  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046655C 0046349C  83 C3 00 04 */	lwz r30, 4(r3)
/* 80466560 004634A0  28 1E 00 00 */	cmplwi r30, 0
/* 80466564 004634A4  40 82 00 18 */	bne .L_8046657C
/* 80466568 004634A8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8046656C 004634AC  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466570 004634B0  38 80 00 D1 */	li r4, 0xd1
/* 80466574 004634B4  4C C6 31 82 */	crclr 6
/* 80466578 004634B8  4B BC 40 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046657C:
/* 8046657C 004634BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466580 004634C0  7F C3 F3 78 */	mr r3, r30
/* 80466584 004634C4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80466588 004634C8  7D 89 03 A6 */	mtctr r12
/* 8046658C 004634CC  4E 80 04 21 */	bctrl 
/* 80466590 004634D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80466594 004634D4  40 82 00 18 */	bne .L_804665AC
/* 80466598 004634D8  38 7F 08 58 */	addi r3, r31, 0x858
/* 8046659C 004634DC  38 BF 00 14 */	addi r5, r31, 0x14
/* 804665A0 004634E0  38 80 01 77 */	li r4, 0x177
/* 804665A4 004634E4  4C C6 31 82 */	crclr 6
/* 804665A8 004634E8  4B BC 40 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804665AC:
/* 804665AC 004634EC  83 9D 00 28 */	lwz r28, 0x28(r29)
/* 804665B0 004634F0  38 9F 00 94 */	addi r4, r31, 0x94
/* 804665B4 004634F4  7F 83 E3 78 */	mr r3, r28
/* 804665B8 004634F8  4B C6 41 09 */	bl strcmp
/* 804665BC 004634FC  2C 03 00 00 */	cmpwi r3, 0
/* 804665C0 00463500  41 82 00 A4 */	beq .L_80466664
/* 804665C4 00463504  7F 83 E3 78 */	mr r3, r28
/* 804665C8 00463508  38 9F 00 80 */	addi r4, r31, 0x80
/* 804665CC 0046350C  4B C6 40 F5 */	bl strcmp
/* 804665D0 00463510  2C 03 00 00 */	cmpwi r3, 0
/* 804665D4 00463514  41 82 00 90 */	beq .L_80466664
/* 804665D8 00463518  7F 83 E3 78 */	mr r3, r28
/* 804665DC 0046351C  38 9F 01 68 */	addi r4, r31, 0x168
/* 804665E0 00463520  4B C6 40 E1 */	bl strcmp
/* 804665E4 00463524  2C 03 00 00 */	cmpwi r3, 0
/* 804665E8 00463528  41 82 00 7C */	beq .L_80466664
/* 804665EC 0046352C  7F 83 E3 78 */	mr r3, r28
/* 804665F0 00463530  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 804665F4 00463534  4B C6 40 CD */	bl strcmp
/* 804665F8 00463538  2C 03 00 00 */	cmpwi r3, 0
/* 804665FC 0046353C  41 82 00 68 */	beq .L_80466664
/* 80466600 00463540  7F 83 E3 78 */	mr r3, r28
/* 80466604 00463544  38 9F 01 80 */	addi r4, r31, 0x180
/* 80466608 00463548  4B C6 40 B9 */	bl strcmp
/* 8046660C 0046354C  2C 03 00 00 */	cmpwi r3, 0
/* 80466610 00463550  41 82 00 54 */	beq .L_80466664
/* 80466614 00463554  7F 83 E3 78 */	mr r3, r28
/* 80466618 00463558  38 9F 02 6C */	addi r4, r31, 0x26c
/* 8046661C 0046355C  4B C6 40 A5 */	bl strcmp
/* 80466620 00463560  2C 03 00 00 */	cmpwi r3, 0
/* 80466624 00463564  41 82 00 40 */	beq .L_80466664
/* 80466628 00463568  7F 83 E3 78 */	mr r3, r28
/* 8046662C 0046356C  38 9F 03 7C */	addi r4, r31, 0x37c
/* 80466630 00463570  4B C6 40 91 */	bl strcmp
/* 80466634 00463574  2C 03 00 00 */	cmpwi r3, 0
/* 80466638 00463578  41 82 00 2C */	beq .L_80466664
/* 8046663C 0046357C  7F 83 E3 78 */	mr r3, r28
/* 80466640 00463580  38 9F 08 78 */	addi r4, r31, 0x878
/* 80466644 00463584  4B C6 40 7D */	bl strcmp
/* 80466648 00463588  2C 03 00 00 */	cmpwi r3, 0
/* 8046664C 0046358C  41 82 00 18 */	beq .L_80466664
/* 80466650 00463590  7F 83 E3 78 */	mr r3, r28
/* 80466654 00463594  38 9F 00 5C */	addi r4, r31, 0x5c
/* 80466658 00463598  4B C6 40 69 */	bl strcmp
/* 8046665C 0046359C  2C 03 00 00 */	cmpwi r3, 0
/* 80466660 004635A0  40 82 00 9C */	bne .L_804666FC
.L_80466664:
/* 80466664 004635A4  38 7E 00 10 */	addi r3, r30, 0x10
/* 80466668 004635A8  38 80 00 0F */	li r4, 0xf
/* 8046666C 004635AC  4B EC D5 D1 */	bl stopAllSound__Q28PSSystem6SeqMgrFUl
/* 80466670 004635B0  28 1B 00 00 */	cmplwi r27, 0
/* 80466674 004635B4  41 82 00 A8 */	beq .L_8046671C
/* 80466678 004635B8  7F 63 DB 78 */	mr r3, r27
/* 8046667C 004635BC  4B ED A6 A5 */	bl off__Q28PSSystem8EnvSeMgrFv
/* 80466680 004635C0  7F C3 F3 78 */	mr r3, r30
/* 80466684 004635C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466688 004635C8  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8046668C 004635CC  7D 89 03 A6 */	mtctr r12
/* 80466690 004635D0  4E 80 04 21 */	bctrl 
/* 80466694 004635D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80466698 004635D8  41 82 00 40 */	beq .L_804666D8
/* 8046669C 004635DC  7F C3 F3 78 */	mr r3, r30
/* 804666A0 004635E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 804666A4 004635E4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 804666A8 004635E8  7D 89 03 A6 */	mtctr r12
/* 804666AC 004635EC  4E 80 04 21 */	bctrl 
/* 804666B0 004635F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804666B4 004635F4  40 82 00 24 */	bne .L_804666D8
/* 804666B8 004635F8  7F 63 DB 78 */	mr r3, r27
/* 804666BC 004635FC  38 80 30 79 */	li r4, 0x3079
/* 804666C0 00463600  38 A0 00 01 */	li r5, 1
/* 804666C4 00463604  4B ED A6 0D */	bl on__Q28PSSystem8EnvSeMgrFUlb
/* 804666C8 00463608  7F 63 DB 78 */	mr r3, r27
/* 804666CC 0046360C  38 80 30 7A */	li r4, 0x307a
/* 804666D0 00463610  38 A0 00 01 */	li r5, 1
/* 804666D4 00463614  4B ED A5 FD */	bl on__Q28PSSystem8EnvSeMgrFUlb
.L_804666D8:
/* 804666D8 00463618  7F 63 DB 78 */	mr r3, r27
/* 804666DC 0046361C  38 80 40 14 */	li r4, 0x4014
/* 804666E0 00463620  38 A0 00 01 */	li r5, 1
/* 804666E4 00463624  4B ED A6 61 */	bl off__Q28PSSystem8EnvSeMgrFUlb
/* 804666E8 00463628  7F 63 DB 78 */	mr r3, r27
/* 804666EC 0046362C  38 80 40 15 */	li r4, 0x4015
/* 804666F0 00463630  38 A0 00 01 */	li r5, 1
/* 804666F4 00463634  4B ED A6 51 */	bl off__Q28PSSystem8EnvSeMgrFUlb
/* 804666F8 00463638  48 00 00 24 */	b .L_8046671C
.L_804666FC:
/* 804666FC 0046363C  38 7E 00 10 */	addi r3, r30, 0x10
/* 80466700 00463640  38 80 00 01 */	li r4, 1
/* 80466704 00463644  4B EC D3 C9 */	bl pauseOnAllSeq__Q28PSSystem6SeqMgrFQ38PSSystem7SeqBase9PauseMode
/* 80466708 00463648  28 1B 00 00 */	cmplwi r27, 0
/* 8046670C 0046364C  41 82 00 10 */	beq .L_8046671C
/* 80466710 00463650  7F 63 DB 78 */	mr r3, r27
/* 80466714 00463654  38 80 00 02 */	li r4, 2
/* 80466718 00463658  4B ED A5 61 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
.L_8046671C:
/* 8046671C 0046365C  7F 83 E3 78 */	mr r3, r28
/* 80466720 00463660  38 9F 08 24 */	addi r4, r31, 0x824
/* 80466724 00463664  4B C6 3F 9D */	bl strcmp
/* 80466728 00463668  2C 03 00 00 */	cmpwi r3, 0
/* 8046672C 0046366C  40 82 00 14 */	bne .L_80466740
/* 80466730 00463670  38 7E 00 10 */	addi r3, r30, 0x10
/* 80466734 00463674  38 80 00 0F */	li r4, 0xf
/* 80466738 00463678  4B EC D5 05 */	bl stopAllSound__Q28PSSystem6SeqMgrFUl
/* 8046673C 0046367C  48 00 01 8C */	b .L_804668C8
.L_80466740:
/* 80466740 00463680  7F 83 E3 78 */	mr r3, r28
/* 80466744 00463684  38 9F 05 A8 */	addi r4, r31, 0x5a8
/* 80466748 00463688  4B C6 3F 79 */	bl strcmp
/* 8046674C 0046368C  2C 03 00 00 */	cmpwi r3, 0
/* 80466750 00463690  40 82 00 E8 */	bne .L_80466838
/* 80466754 00463694  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466758 00463698  28 00 00 00 */	cmplwi r0, 0
/* 8046675C 0046369C  40 82 00 18 */	bne .L_80466774
/* 80466760 004636A0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466764 004636A4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466768 004636A8  38 80 01 D3 */	li r4, 0x1d3
/* 8046676C 004636AC  4C C6 31 82 */	crclr 6
/* 80466770 004636B0  4B BC 3E D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466774:
/* 80466774 004636B4  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466778 004636B8  28 1C 00 00 */	cmplwi r28, 0
/* 8046677C 004636BC  40 82 00 18 */	bne .L_80466794
/* 80466780 004636C0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466784 004636C4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466788 004636C8  38 80 01 DC */	li r4, 0x1dc
/* 8046678C 004636CC  4C C6 31 82 */	crclr 6
/* 80466790 004636D0  4B BC 3E B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466794:
/* 80466794 004636D4  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466798 004636D8  28 00 00 00 */	cmplwi r0, 0
/* 8046679C 004636DC  40 82 00 18 */	bne .L_804667B4
/* 804667A0 004636E0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804667A4 004636E4  38 BF 00 14 */	addi r5, r31, 0x14
/* 804667A8 004636E8  38 80 00 C7 */	li r4, 0xc7
/* 804667AC 004636EC  4C C6 31 82 */	crclr 6
/* 804667B0 004636F0  4B BC 3E 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804667B4:
/* 804667B4 004636F4  80 7C 00 04 */	lwz r3, 4(r28)
/* 804667B8 004636F8  83 83 00 04 */	lwz r28, 4(r3)
/* 804667BC 004636FC  28 1C 00 00 */	cmplwi r28, 0
/* 804667C0 00463700  40 82 00 18 */	bne .L_804667D8
/* 804667C4 00463704  38 7F 00 20 */	addi r3, r31, 0x20
/* 804667C8 00463708  38 BF 00 14 */	addi r5, r31, 0x14
/* 804667CC 0046370C  38 80 01 E5 */	li r4, 0x1e5
/* 804667D0 00463710  4C C6 31 82 */	crclr 6
/* 804667D4 00463714  4B BC 3E 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804667D8:
/* 804667D8 00463718  38 7C 00 10 */	addi r3, r28, 0x10
/* 804667DC 0046371C  38 80 00 01 */	li r4, 1
/* 804667E0 00463720  4B EC D6 BD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 804667E4 00463724  7C 7C 1B 79 */	or. r28, r3, r3
/* 804667E8 00463728  40 82 00 18 */	bne .L_80466800
/* 804667EC 0046372C  38 7F 00 20 */	addi r3, r31, 0x20
/* 804667F0 00463730  38 BF 00 14 */	addi r5, r31, 0x14
/* 804667F4 00463734  38 80 01 E7 */	li r4, 0x1e7
/* 804667F8 00463738  4C C6 31 82 */	crclr 6
/* 804667FC 0046373C  4B BC 3E 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466800:
/* 80466800 00463740  28 1C 00 00 */	cmplwi r28, 0
/* 80466804 00463744  40 82 00 18 */	bne .L_8046681C
/* 80466808 00463748  38 7F 00 00 */	addi r3, r31, 0
/* 8046680C 0046374C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466810 00463750  38 80 02 DB */	li r4, 0x2db
/* 80466814 00463754  4C C6 31 82 */	crclr 6
/* 80466818 00463758  4B BC 3E 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046681C:
/* 8046681C 0046375C  7F 83 E3 78 */	mr r3, r28
/* 80466820 00463760  38 80 00 05 */	li r4, 5
/* 80466824 00463764  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 80466828 00463768  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046682C 0046376C  7D 89 03 A6 */	mtctr r12
/* 80466830 00463770  4E 80 04 21 */	bctrl 
/* 80466834 00463774  48 00 00 94 */	b .L_804668C8
.L_80466838:
/* 80466838 00463778  7F 83 E3 78 */	mr r3, r28
/* 8046683C 0046377C  38 9F 05 80 */	addi r4, r31, 0x580
/* 80466840 00463780  4B C6 3E 81 */	bl strcmp
/* 80466844 00463784  2C 03 00 00 */	cmpwi r3, 0
/* 80466848 00463788  40 82 00 80 */	bne .L_804668C8
/* 8046684C 0046378C  80 0D 91 C4 */	lwz r0, "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
/* 80466850 00463790  28 00 00 00 */	cmplwi r0, 0
/* 80466854 00463794  40 82 00 18 */	bne .L_8046686C
/* 80466858 00463798  38 7F 08 6C */	addi r3, r31, 0x86c
/* 8046685C 0046379C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466860 004637A0  38 80 00 89 */	li r4, 0x89
/* 80466864 004637A4  4C C6 31 82 */	crclr 6
/* 80466868 004637A8  4B BC 3D D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046686C:
/* 8046686C 004637AC  83 8D 91 C4 */	lwz r28, "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
/* 80466870 004637B0  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80466874 004637B4  28 00 00 00 */	cmplwi r0, 0
/* 80466878 004637B8  40 82 00 18 */	bne .L_80466890
/* 8046687C 004637BC  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466880 004637C0  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466884 004637C4  38 80 00 5D */	li r4, 0x5d
/* 80466888 004637C8  4C C6 31 82 */	crclr 6
/* 8046688C 004637CC  4B BC 3D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466890:
/* 80466890 004637D0  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 80466894 004637D4  38 00 00 01 */	li r0, 1
/* 80466898 004637D8  98 03 00 15 */	stb r0, 0x15(r3)
/* 8046689C 004637DC  80 1C 00 0C */	lwz r0, 0xc(r28)
/* 804668A0 004637E0  28 00 00 00 */	cmplwi r0, 0
/* 804668A4 004637E4  40 82 00 18 */	bne .L_804668BC
/* 804668A8 004637E8  38 7F 00 20 */	addi r3, r31, 0x20
/* 804668AC 004637EC  38 BF 00 14 */	addi r5, r31, 0x14
/* 804668B0 004637F0  38 80 00 5D */	li r4, 0x5d
/* 804668B4 004637F4  4C C6 31 82 */	crclr 6
/* 804668B8 004637F8  4B BC 3D 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804668BC:
/* 804668BC 004637FC  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 804668C0 00463800  38 00 00 01 */	li r0, 1
/* 804668C4 00463804  98 03 00 15 */	stb r0, 0x15(r3)
.L_804668C8:
/* 804668C8 00463808  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 804668CC 0046380C  3C 04 00 01 */	addis r0, r4, 1
/* 804668D0 00463810  28 00 FF FF */	cmplwi r0, 0xffff
/* 804668D4 00463814  41 82 00 10 */	beq .L_804668E4
/* 804668D8 00463818  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804668DC 0046381C  38 A0 00 00 */	li r5, 0
/* 804668E0 00463820  4B ED 1D 51 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_804668E4:
/* 804668E4 00463824  80 1E 00 04 */	lwz r0, 4(r30)
/* 804668E8 00463828  28 00 00 00 */	cmplwi r0, 0
/* 804668EC 0046382C  40 82 00 18 */	bne .L_80466904
/* 804668F0 00463830  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804668F4 00463834  38 BF 00 14 */	addi r5, r31, 0x14
/* 804668F8 00463838  38 80 00 5B */	li r4, 0x5b
/* 804668FC 0046383C  4C C6 31 82 */	crclr 6
/* 80466900 00463840  4B BC 3D 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466904:
/* 80466904 00463844  80 7E 00 04 */	lwz r3, 4(r30)
/* 80466908 00463848  38 63 00 10 */	addi r3, r3, 0x10
/* 8046690C 0046384C  4B EC D5 51 */	bl getFirstSeq__Q28PSSystem6SeqMgrFv
/* 80466910 00463850  28 03 00 00 */	cmplwi r3, 0
/* 80466914 00463854  41 82 00 44 */	beq .L_80466958
/* 80466918 00463858  88 1D 00 19 */	lbz r0, 0x19(r29)
/* 8046691C 0046385C  28 00 00 00 */	cmplwi r0, 0
/* 80466920 00463860  41 82 00 38 */	beq .L_80466958
/* 80466924 00463864  80 1E 00 04 */	lwz r0, 4(r30)
/* 80466928 00463868  28 00 00 00 */	cmplwi r0, 0
/* 8046692C 0046386C  40 82 00 18 */	bne .L_80466944
/* 80466930 00463870  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466934 00463874  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466938 00463878  38 80 00 5B */	li r4, 0x5b
/* 8046693C 0046387C  4C C6 31 82 */	crclr 6
/* 80466940 00463880  4B BC 3D 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466944:
/* 80466944 00463884  80 7E 00 04 */	lwz r3, 4(r30)
/* 80466948 00463888  81 83 00 00 */	lwz r12, 0(r3)
/* 8046694C 0046388C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80466950 00463890  7D 89 03 A6 */	mtctr r12
/* 80466954 00463894  4E 80 04 21 */	bctrl 
.L_80466958:
/* 80466958 00463898  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8046695C 0046389C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80466960 004638A0  7C 08 03 A6 */	mtlr r0
/* 80466964 004638A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80466968 004638A8  4E 80 00 20 */	blr 

.global becomeSceneCamera__Q23PSM4DemoFv
becomeSceneCamera__Q23PSM4DemoFv:
/* 8046696C 004638AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80466970 004638B0  7C 08 02 A6 */	mflr r0
/* 80466974 004638B4  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 80466978 004638B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046697C 004638BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80466980 004638C0  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 80466984 004638C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80466988 004638C8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046698C 004638CC  28 00 00 00 */	cmplwi r0, 0
/* 80466990 004638D0  40 82 00 18 */	bne .L_804669A8
/* 80466994 004638D4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466998 004638D8  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046699C 004638DC  38 80 01 D3 */	li r4, 0x1d3
/* 804669A0 004638E0  4C C6 31 82 */	crclr 6
/* 804669A4 004638E4  4B BC 3C 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804669A8:
/* 804669A8 004638E8  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 804669AC 004638EC  28 1E 00 00 */	cmplwi r30, 0
/* 804669B0 004638F0  40 82 00 18 */	bne .L_804669C8
/* 804669B4 004638F4  38 7F 00 20 */	addi r3, r31, 0x20
/* 804669B8 004638F8  38 BF 00 14 */	addi r5, r31, 0x14
/* 804669BC 004638FC  38 80 01 DC */	li r4, 0x1dc
/* 804669C0 00463900  4C C6 31 82 */	crclr 6
/* 804669C4 00463904  4B BC 3C 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804669C8:
/* 804669C8 00463908  80 1E 00 04 */	lwz r0, 4(r30)
/* 804669CC 0046390C  28 00 00 00 */	cmplwi r0, 0
/* 804669D0 00463910  40 82 00 18 */	bne .L_804669E8
/* 804669D4 00463914  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804669D8 00463918  38 BF 00 14 */	addi r5, r31, 0x14
/* 804669DC 0046391C  38 80 00 CF */	li r4, 0xcf
/* 804669E0 00463920  4C C6 31 82 */	crclr 6
/* 804669E4 00463924  4B BC 3C 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804669E8:
/* 804669E8 00463928  80 7E 00 04 */	lwz r3, 4(r30)
/* 804669EC 0046392C  83 C3 00 04 */	lwz r30, 4(r3)
/* 804669F0 00463930  28 1E 00 00 */	cmplwi r30, 0
/* 804669F4 00463934  40 82 00 18 */	bne .L_80466A0C
/* 804669F8 00463938  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804669FC 0046393C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466A00 00463940  38 80 00 D1 */	li r4, 0xd1
/* 80466A04 00463944  4C C6 31 82 */	crclr 6
/* 80466A08 00463948  4B BC 3C 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466A0C:
/* 80466A0C 0046394C  7F C3 F3 78 */	mr r3, r30
/* 80466A10 00463950  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466A14 00463954  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80466A18 00463958  7D 89 03 A6 */	mtctr r12
/* 80466A1C 0046395C  4E 80 04 21 */	bctrl 
/* 80466A20 00463960  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80466A24 00463964  28 00 00 00 */	cmplwi r0, 0
/* 80466A28 00463968  40 82 00 18 */	bne .L_80466A40
/* 80466A2C 0046396C  38 7F 08 6C */	addi r3, r31, 0x86c
/* 80466A30 00463970  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466A34 00463974  38 80 00 89 */	li r4, 0x89
/* 80466A38 00463978  4C C6 31 82 */	crclr 6
/* 80466A3C 0046397C  4B BC 3C 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466A40:
/* 80466A40 00463980  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80466A44 00463984  38 80 00 00 */	li r4, 0
/* 80466A48 00463988  81 83 00 00 */	lwz r12, 0(r3)
/* 80466A4C 0046398C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80466A50 00463990  7D 89 03 A6 */	mtctr r12
/* 80466A54 00463994  4E 80 04 21 */	bctrl 
/* 80466A58 00463998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80466A5C 0046399C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80466A60 004639A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80466A64 004639A4  7C 08 03 A6 */	mtlr r0
/* 80466A68 004639A8  38 21 00 10 */	addi r1, r1, 0x10
/* 80466A6C 004639AC  4E 80 00 20 */	blr 

.global onDemoFadeoutStart__Q23PSM4DemoFUl
onDemoFadeoutStart__Q23PSM4DemoFUl:
/* 80466A70 004639B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80466A74 004639B4  7C 08 02 A6 */	mflr r0
/* 80466A78 004639B8  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 80466A7C 004639BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80466A80 004639C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80466A84 004639C4  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 80466A88 004639C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80466A8C 004639CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80466A90 004639D0  7C 9D 23 78 */	mr r29, r4
/* 80466A94 004639D4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466A98 004639D8  28 00 00 00 */	cmplwi r0, 0
/* 80466A9C 004639DC  40 82 00 18 */	bne .L_80466AB4
/* 80466AA0 004639E0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466AA4 004639E4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466AA8 004639E8  38 80 01 D3 */	li r4, 0x1d3
/* 80466AAC 004639EC  4C C6 31 82 */	crclr 6
/* 80466AB0 004639F0  4B BC 3B 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466AB4:
/* 80466AB4 004639F4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80466AB8 004639F8  28 1E 00 00 */	cmplwi r30, 0
/* 80466ABC 004639FC  40 82 00 18 */	bne .L_80466AD4
/* 80466AC0 00463A00  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466AC4 00463A04  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466AC8 00463A08  38 80 01 DC */	li r4, 0x1dc
/* 80466ACC 00463A0C  4C C6 31 82 */	crclr 6
/* 80466AD0 00463A10  4B BC 3B 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466AD4:
/* 80466AD4 00463A14  80 1E 00 04 */	lwz r0, 4(r30)
/* 80466AD8 00463A18  28 00 00 00 */	cmplwi r0, 0
/* 80466ADC 00463A1C  40 82 00 18 */	bne .L_80466AF4
/* 80466AE0 00463A20  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466AE4 00463A24  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466AE8 00463A28  38 80 00 CF */	li r4, 0xcf
/* 80466AEC 00463A2C  4C C6 31 82 */	crclr 6
/* 80466AF0 00463A30  4B BC 3B 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466AF4:
/* 80466AF4 00463A34  80 7E 00 04 */	lwz r3, 4(r30)
/* 80466AF8 00463A38  83 C3 00 04 */	lwz r30, 4(r3)
/* 80466AFC 00463A3C  28 1E 00 00 */	cmplwi r30, 0
/* 80466B00 00463A40  40 82 00 18 */	bne .L_80466B18
/* 80466B04 00463A44  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466B08 00463A48  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466B0C 00463A4C  38 80 00 D1 */	li r4, 0xd1
/* 80466B10 00463A50  4C C6 31 82 */	crclr 6
/* 80466B14 00463A54  4B BC 3B 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466B18:
/* 80466B18 00463A58  80 1E 00 04 */	lwz r0, 4(r30)
/* 80466B1C 00463A5C  28 00 00 00 */	cmplwi r0, 0
/* 80466B20 00463A60  40 82 00 18 */	bne .L_80466B38
/* 80466B24 00463A64  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466B28 00463A68  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466B2C 00463A6C  38 80 00 5B */	li r4, 0x5b
/* 80466B30 00463A70  4C C6 31 82 */	crclr 6
/* 80466B34 00463A74  4B BC 3B 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466B38:
/* 80466B38 00463A78  80 7E 00 04 */	lwz r3, 4(r30)
/* 80466B3C 00463A7C  38 9D FF FE */	addi r4, r29, -2
/* 80466B40 00463A80  81 83 00 00 */	lwz r12, 0(r3)
/* 80466B44 00463A84  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80466B48 00463A88  7D 89 03 A6 */	mtctr r12
/* 80466B4C 00463A8C  4E 80 04 21 */	bctrl 
/* 80466B50 00463A90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80466B54 00463A94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80466B58 00463A98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80466B5C 00463A9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80466B60 00463AA0  7C 08 03 A6 */	mtlr r0
/* 80466B64 00463AA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80466B68 00463AA8  4E 80 00 20 */	blr 

.global onDemoEnd__Q23PSM4DemoFv
onDemoEnd__Q23PSM4DemoFv:
/* 80466B6C 00463AAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80466B70 00463AB0  7C 08 02 A6 */	mflr r0
/* 80466B74 00463AB4  3C 80 80 4A */	lis r4, lbl_8049D080@ha
/* 80466B78 00463AB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80466B7C 00463ABC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80466B80 00463AC0  7C 7D 1B 78 */	mr r29, r3
/* 80466B84 00463AC4  3B E4 D0 80 */	addi r31, r4, lbl_8049D080@l
/* 80466B88 00463AC8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466B8C 00463ACC  28 00 00 00 */	cmplwi r0, 0
/* 80466B90 00463AD0  40 82 00 18 */	bne .L_80466BA8
/* 80466B94 00463AD4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466B98 00463AD8  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466B9C 00463ADC  38 80 01 D3 */	li r4, 0x1d3
/* 80466BA0 00463AE0  4C C6 31 82 */	crclr 6
/* 80466BA4 00463AE4  4B BC 3A 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466BA8:
/* 80466BA8 00463AE8  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466BAC 00463AEC  28 1C 00 00 */	cmplwi r28, 0
/* 80466BB0 00463AF0  40 82 00 18 */	bne .L_80466BC8
/* 80466BB4 00463AF4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466BB8 00463AF8  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466BBC 00463AFC  38 80 01 DC */	li r4, 0x1dc
/* 80466BC0 00463B00  4C C6 31 82 */	crclr 6
/* 80466BC4 00463B04  4B BC 3A 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466BC8:
/* 80466BC8 00463B08  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466BCC 00463B0C  28 00 00 00 */	cmplwi r0, 0
/* 80466BD0 00463B10  40 82 00 18 */	bne .L_80466BE8
/* 80466BD4 00463B14  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466BD8 00463B18  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466BDC 00463B1C  38 80 00 CF */	li r4, 0xcf
/* 80466BE0 00463B20  4C C6 31 82 */	crclr 6
/* 80466BE4 00463B24  4B BC 3A 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466BE8:
/* 80466BE8 00463B28  80 7C 00 04 */	lwz r3, 4(r28)
/* 80466BEC 00463B2C  83 83 00 04 */	lwz r28, 4(r3)
/* 80466BF0 00463B30  28 1C 00 00 */	cmplwi r28, 0
/* 80466BF4 00463B34  40 82 00 18 */	bne .L_80466C0C
/* 80466BF8 00463B38  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466BFC 00463B3C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466C00 00463B40  38 80 00 D1 */	li r4, 0xd1
/* 80466C04 00463B44  4C C6 31 82 */	crclr 6
/* 80466C08 00463B48  4B BC 3A 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466C0C:
/* 80466C0C 00463B4C  7F 83 E3 78 */	mr r3, r28
/* 80466C10 00463B50  81 9C 00 00 */	lwz r12, 0(r28)
/* 80466C14 00463B54  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80466C18 00463B58  7D 89 03 A6 */	mtctr r12
/* 80466C1C 00463B5C  4E 80 04 21 */	bctrl 
/* 80466C20 00463B60  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80466C24 00463B64  28 00 00 00 */	cmplwi r0, 0
/* 80466C28 00463B68  40 82 00 18 */	bne .L_80466C40
/* 80466C2C 00463B6C  38 7F 08 6C */	addi r3, r31, 0x86c
/* 80466C30 00463B70  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466C34 00463B74  38 80 00 89 */	li r4, 0x89
/* 80466C38 00463B78  4C C6 31 82 */	crclr 6
/* 80466C3C 00463B7C  4B BC 3A 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466C40:
/* 80466C40 00463B80  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80466C44 00463B84  38 80 00 00 */	li r4, 0
/* 80466C48 00463B88  81 83 00 00 */	lwz r12, 0(r3)
/* 80466C4C 00463B8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80466C50 00463B90  7D 89 03 A6 */	mtctr r12
/* 80466C54 00463B94  4E 80 04 21 */	bctrl 
/* 80466C58 00463B98  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466C5C 00463B9C  28 00 00 00 */	cmplwi r0, 0
/* 80466C60 00463BA0  40 82 00 18 */	bne .L_80466C78
/* 80466C64 00463BA4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466C68 00463BA8  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466C6C 00463BAC  38 80 01 D3 */	li r4, 0x1d3
/* 80466C70 00463BB0  4C C6 31 82 */	crclr 6
/* 80466C74 00463BB4  4B BC 39 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466C78:
/* 80466C78 00463BB8  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466C7C 00463BBC  28 1C 00 00 */	cmplwi r28, 0
/* 80466C80 00463BC0  40 82 00 18 */	bne .L_80466C98
/* 80466C84 00463BC4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466C88 00463BC8  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466C8C 00463BCC  38 80 01 DC */	li r4, 0x1dc
/* 80466C90 00463BD0  4C C6 31 82 */	crclr 6
/* 80466C94 00463BD4  4B BC 39 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466C98:
/* 80466C98 00463BD8  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466C9C 00463BDC  28 00 00 00 */	cmplwi r0, 0
/* 80466CA0 00463BE0  40 82 00 18 */	bne .L_80466CB8
/* 80466CA4 00463BE4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466CA8 00463BE8  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466CAC 00463BEC  38 80 00 CF */	li r4, 0xcf
/* 80466CB0 00463BF0  4C C6 31 82 */	crclr 6
/* 80466CB4 00463BF4  4B BC 39 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466CB8:
/* 80466CB8 00463BF8  80 7C 00 04 */	lwz r3, 4(r28)
/* 80466CBC 00463BFC  83 83 00 04 */	lwz r28, 4(r3)
/* 80466CC0 00463C00  28 1C 00 00 */	cmplwi r28, 0
/* 80466CC4 00463C04  40 82 00 18 */	bne .L_80466CDC
/* 80466CC8 00463C08  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466CCC 00463C0C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466CD0 00463C10  38 80 00 D1 */	li r4, 0xd1
/* 80466CD4 00463C14  4C C6 31 82 */	crclr 6
/* 80466CD8 00463C18  4B BC 39 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466CDC:
/* 80466CDC 00463C1C  7F 83 E3 78 */	mr r3, r28
/* 80466CE0 00463C20  81 9C 00 00 */	lwz r12, 0(r28)
/* 80466CE4 00463C24  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80466CE8 00463C28  7D 89 03 A6 */	mtctr r12
/* 80466CEC 00463C2C  4E 80 04 21 */	bctrl 
/* 80466CF0 00463C30  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466CF4 00463C34  28 00 00 00 */	cmplwi r0, 0
/* 80466CF8 00463C38  40 82 00 18 */	bne .L_80466D10
/* 80466CFC 00463C3C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466D00 00463C40  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466D04 00463C44  38 80 01 D3 */	li r4, 0x1d3
/* 80466D08 00463C48  4C C6 31 82 */	crclr 6
/* 80466D0C 00463C4C  4B BC 39 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466D10:
/* 80466D10 00463C50  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466D14 00463C54  28 1C 00 00 */	cmplwi r28, 0
/* 80466D18 00463C58  40 82 00 18 */	bne .L_80466D30
/* 80466D1C 00463C5C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466D20 00463C60  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466D24 00463C64  38 80 01 DC */	li r4, 0x1dc
/* 80466D28 00463C68  4C C6 31 82 */	crclr 6
/* 80466D2C 00463C6C  4B BC 39 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466D30:
/* 80466D30 00463C70  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466D34 00463C74  28 00 00 00 */	cmplwi r0, 0
/* 80466D38 00463C78  40 82 00 18 */	bne .L_80466D50
/* 80466D3C 00463C7C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466D40 00463C80  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466D44 00463C84  38 80 00 CF */	li r4, 0xcf
/* 80466D48 00463C88  4C C6 31 82 */	crclr 6
/* 80466D4C 00463C8C  4B BC 38 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466D50:
/* 80466D50 00463C90  80 7C 00 04 */	lwz r3, 4(r28)
/* 80466D54 00463C94  83 C3 00 04 */	lwz r30, 4(r3)
/* 80466D58 00463C98  28 1E 00 00 */	cmplwi r30, 0
/* 80466D5C 00463C9C  40 82 00 18 */	bne .L_80466D74
/* 80466D60 00463CA0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466D64 00463CA4  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466D68 00463CA8  38 80 00 D1 */	li r4, 0xd1
/* 80466D6C 00463CAC  4C C6 31 82 */	crclr 6
/* 80466D70 00463CB0  4B BC 38 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466D74:
/* 80466D74 00463CB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466D78 00463CB8  7F C3 F3 78 */	mr r3, r30
/* 80466D7C 00463CBC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80466D80 00463CC0  7D 89 03 A6 */	mtctr r12
/* 80466D84 00463CC4  4E 80 04 21 */	bctrl 
/* 80466D88 00463CC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80466D8C 00463CCC  40 82 00 18 */	bne .L_80466DA4
/* 80466D90 00463CD0  38 7F 08 58 */	addi r3, r31, 0x858
/* 80466D94 00463CD4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466D98 00463CD8  38 80 01 77 */	li r4, 0x177
/* 80466D9C 00463CDC  4C C6 31 82 */	crclr 6
/* 80466DA0 00463CE0  4B BC 38 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466DA4:
/* 80466DA4 00463CE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466DA8 00463CE8  7F C3 F3 78 */	mr r3, r30
/* 80466DAC 00463CEC  83 9D 00 28 */	lwz r28, 0x28(r29)
/* 80466DB0 00463CF0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80466DB4 00463CF4  7D 89 03 A6 */	mtctr r12
/* 80466DB8 00463CF8  4E 80 04 21 */	bctrl 
/* 80466DBC 00463CFC  7C 7B 1B 79 */	or. r27, r3, r3
/* 80466DC0 00463D00  41 82 01 30 */	beq .L_80466EF0
/* 80466DC4 00463D04  7F 83 E3 78 */	mr r3, r28
/* 80466DC8 00463D08  38 9F 00 94 */	addi r4, r31, 0x94
/* 80466DCC 00463D0C  4B C6 38 F5 */	bl strcmp
/* 80466DD0 00463D10  2C 03 00 00 */	cmpwi r3, 0
/* 80466DD4 00463D14  41 82 00 A4 */	beq .L_80466E78
/* 80466DD8 00463D18  7F 83 E3 78 */	mr r3, r28
/* 80466DDC 00463D1C  38 9F 00 80 */	addi r4, r31, 0x80
/* 80466DE0 00463D20  4B C6 38 E1 */	bl strcmp
/* 80466DE4 00463D24  2C 03 00 00 */	cmpwi r3, 0
/* 80466DE8 00463D28  41 82 00 90 */	beq .L_80466E78
/* 80466DEC 00463D2C  7F 83 E3 78 */	mr r3, r28
/* 80466DF0 00463D30  38 9F 01 68 */	addi r4, r31, 0x168
/* 80466DF4 00463D34  4B C6 38 CD */	bl strcmp
/* 80466DF8 00463D38  2C 03 00 00 */	cmpwi r3, 0
/* 80466DFC 00463D3C  41 82 00 7C */	beq .L_80466E78
/* 80466E00 00463D40  7F 83 E3 78 */	mr r3, r28
/* 80466E04 00463D44  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 80466E08 00463D48  4B C6 38 B9 */	bl strcmp
/* 80466E0C 00463D4C  2C 03 00 00 */	cmpwi r3, 0
/* 80466E10 00463D50  41 82 00 68 */	beq .L_80466E78
/* 80466E14 00463D54  7F 83 E3 78 */	mr r3, r28
/* 80466E18 00463D58  38 9F 01 80 */	addi r4, r31, 0x180
/* 80466E1C 00463D5C  4B C6 38 A5 */	bl strcmp
/* 80466E20 00463D60  2C 03 00 00 */	cmpwi r3, 0
/* 80466E24 00463D64  41 82 00 54 */	beq .L_80466E78
/* 80466E28 00463D68  7F 83 E3 78 */	mr r3, r28
/* 80466E2C 00463D6C  38 9F 02 6C */	addi r4, r31, 0x26c
/* 80466E30 00463D70  4B C6 38 91 */	bl strcmp
/* 80466E34 00463D74  2C 03 00 00 */	cmpwi r3, 0
/* 80466E38 00463D78  41 82 00 40 */	beq .L_80466E78
/* 80466E3C 00463D7C  7F 83 E3 78 */	mr r3, r28
/* 80466E40 00463D80  38 9F 03 7C */	addi r4, r31, 0x37c
/* 80466E44 00463D84  4B C6 38 7D */	bl strcmp
/* 80466E48 00463D88  2C 03 00 00 */	cmpwi r3, 0
/* 80466E4C 00463D8C  41 82 00 2C */	beq .L_80466E78
/* 80466E50 00463D90  7F 83 E3 78 */	mr r3, r28
/* 80466E54 00463D94  38 9F 08 78 */	addi r4, r31, 0x878
/* 80466E58 00463D98  4B C6 38 69 */	bl strcmp
/* 80466E5C 00463D9C  2C 03 00 00 */	cmpwi r3, 0
/* 80466E60 00463DA0  41 82 00 18 */	beq .L_80466E78
/* 80466E64 00463DA4  7F 83 E3 78 */	mr r3, r28
/* 80466E68 00463DA8  38 9F 00 5C */	addi r4, r31, 0x5c
/* 80466E6C 00463DAC  4B C6 38 55 */	bl strcmp
/* 80466E70 00463DB0  2C 03 00 00 */	cmpwi r3, 0
/* 80466E74 00463DB4  40 82 00 74 */	bne .L_80466EE8
.L_80466E78:
/* 80466E78 00463DB8  7F 63 DB 78 */	mr r3, r27
/* 80466E7C 00463DBC  4B ED 9E A5 */	bl off__Q28PSSystem8EnvSeMgrFv
/* 80466E80 00463DC0  7F C3 F3 78 */	mr r3, r30
/* 80466E84 00463DC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466E88 00463DC8  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80466E8C 00463DCC  7D 89 03 A6 */	mtctr r12
/* 80466E90 00463DD0  4E 80 04 21 */	bctrl 
/* 80466E94 00463DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80466E98 00463DD8  41 82 00 40 */	beq .L_80466ED8
/* 80466E9C 00463DDC  7F C3 F3 78 */	mr r3, r30
/* 80466EA0 00463DE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80466EA4 00463DE4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80466EA8 00463DE8  7D 89 03 A6 */	mtctr r12
/* 80466EAC 00463DEC  4E 80 04 21 */	bctrl 
/* 80466EB0 00463DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80466EB4 00463DF4  40 82 00 24 */	bne .L_80466ED8
/* 80466EB8 00463DF8  7F 63 DB 78 */	mr r3, r27
/* 80466EBC 00463DFC  38 80 30 79 */	li r4, 0x3079
/* 80466EC0 00463E00  38 A0 00 01 */	li r5, 1
/* 80466EC4 00463E04  4B ED 9E 0D */	bl on__Q28PSSystem8EnvSeMgrFUlb
/* 80466EC8 00463E08  7F 63 DB 78 */	mr r3, r27
/* 80466ECC 00463E0C  38 80 30 7A */	li r4, 0x307a
/* 80466ED0 00463E10  38 A0 00 01 */	li r5, 1
/* 80466ED4 00463E14  4B ED 9D FD */	bl on__Q28PSSystem8EnvSeMgrFUlb
.L_80466ED8:
/* 80466ED8 00463E18  7F 63 DB 78 */	mr r3, r27
/* 80466EDC 00463E1C  38 80 00 00 */	li r4, 0
/* 80466EE0 00463E20  4B ED 9D 99 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
/* 80466EE4 00463E24  48 00 00 0C */	b .L_80466EF0
.L_80466EE8:
/* 80466EE8 00463E28  7F 63 DB 78 */	mr r3, r27
/* 80466EEC 00463E2C  4B ED 9E A9 */	bl reservePauseOff__Q28PSSystem8EnvSeMgrFv
.L_80466EF0:
/* 80466EF0 00463E30  7F 83 E3 78 */	mr r3, r28
/* 80466EF4 00463E34  38 9F 05 A8 */	addi r4, r31, 0x5a8
/* 80466EF8 00463E38  4B C6 37 C9 */	bl strcmp
/* 80466EFC 00463E3C  2C 03 00 00 */	cmpwi r3, 0
/* 80466F00 00463E40  40 82 00 A0 */	bne .L_80466FA0
/* 80466F04 00463E44  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466F08 00463E48  28 00 00 00 */	cmplwi r0, 0
/* 80466F0C 00463E4C  40 82 00 18 */	bne .L_80466F24
/* 80466F10 00463E50  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466F14 00463E54  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466F18 00463E58  38 80 01 D3 */	li r4, 0x1d3
/* 80466F1C 00463E5C  4C C6 31 82 */	crclr 6
/* 80466F20 00463E60  4B BC 37 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466F24:
/* 80466F24 00463E64  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466F28 00463E68  28 1C 00 00 */	cmplwi r28, 0
/* 80466F2C 00463E6C  40 82 00 18 */	bne .L_80466F44
/* 80466F30 00463E70  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466F34 00463E74  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466F38 00463E78  38 80 01 DC */	li r4, 0x1dc
/* 80466F3C 00463E7C  4C C6 31 82 */	crclr 6
/* 80466F40 00463E80  4B BC 37 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466F44:
/* 80466F44 00463E84  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466F48 00463E88  28 00 00 00 */	cmplwi r0, 0
/* 80466F4C 00463E8C  40 82 00 18 */	bne .L_80466F64
/* 80466F50 00463E90  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466F54 00463E94  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466F58 00463E98  38 80 00 CF */	li r4, 0xcf
/* 80466F5C 00463E9C  4C C6 31 82 */	crclr 6
/* 80466F60 00463EA0  4B BC 36 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466F64:
/* 80466F64 00463EA4  80 7C 00 04 */	lwz r3, 4(r28)
/* 80466F68 00463EA8  83 83 00 04 */	lwz r28, 4(r3)
/* 80466F6C 00463EAC  28 1C 00 00 */	cmplwi r28, 0
/* 80466F70 00463EB0  40 82 00 18 */	bne .L_80466F88
/* 80466F74 00463EB4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80466F78 00463EB8  38 BF 00 38 */	addi r5, r31, 0x38
/* 80466F7C 00463EBC  38 80 00 D1 */	li r4, 0xd1
/* 80466F80 00463EC0  4C C6 31 82 */	crclr 6
/* 80466F84 00463EC4  4B BC 36 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466F88:
/* 80466F88 00463EC8  7F 83 E3 78 */	mr r3, r28
/* 80466F8C 00463ECC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80466F90 00463ED0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80466F94 00463ED4  7D 89 03 A6 */	mtctr r12
/* 80466F98 00463ED8  4E 80 04 21 */	bctrl 
/* 80466F9C 00463EDC  48 00 01 E8 */	b .L_80467184
.L_80466FA0:
/* 80466FA0 00463EE0  7F 83 E3 78 */	mr r3, r28
/* 80466FA4 00463EE4  38 9F 01 EC */	addi r4, r31, 0x1ec
/* 80466FA8 00463EE8  4B C6 37 19 */	bl strcmp
/* 80466FAC 00463EEC  2C 03 00 00 */	cmpwi r3, 0
/* 80466FB0 00463EF0  40 82 00 E4 */	bne .L_80467094
/* 80466FB4 00463EF4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80466FB8 00463EF8  28 00 00 00 */	cmplwi r0, 0
/* 80466FBC 00463EFC  40 82 00 18 */	bne .L_80466FD4
/* 80466FC0 00463F00  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466FC4 00463F04  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466FC8 00463F08  38 80 01 D3 */	li r4, 0x1d3
/* 80466FCC 00463F0C  4C C6 31 82 */	crclr 6
/* 80466FD0 00463F10  4B BC 36 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466FD4:
/* 80466FD4 00463F14  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 80466FD8 00463F18  28 1C 00 00 */	cmplwi r28, 0
/* 80466FDC 00463F1C  40 82 00 18 */	bne .L_80466FF4
/* 80466FE0 00463F20  38 7F 00 20 */	addi r3, r31, 0x20
/* 80466FE4 00463F24  38 BF 00 14 */	addi r5, r31, 0x14
/* 80466FE8 00463F28  38 80 01 DC */	li r4, 0x1dc
/* 80466FEC 00463F2C  4C C6 31 82 */	crclr 6
/* 80466FF0 00463F30  4B BC 36 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80466FF4:
/* 80466FF4 00463F34  80 1C 00 04 */	lwz r0, 4(r28)
/* 80466FF8 00463F38  28 00 00 00 */	cmplwi r0, 0
/* 80466FFC 00463F3C  40 82 00 18 */	bne .L_80467014
/* 80467000 00463F40  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80467004 00463F44  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467008 00463F48  38 80 00 C7 */	li r4, 0xc7
/* 8046700C 00463F4C  4C C6 31 82 */	crclr 6
/* 80467010 00463F50  4B BC 36 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467014:
/* 80467014 00463F54  80 7C 00 04 */	lwz r3, 4(r28)
/* 80467018 00463F58  83 83 00 04 */	lwz r28, 4(r3)
/* 8046701C 00463F5C  28 1C 00 00 */	cmplwi r28, 0
/* 80467020 00463F60  40 82 00 18 */	bne .L_80467038
/* 80467024 00463F64  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467028 00463F68  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046702C 00463F6C  38 80 01 E5 */	li r4, 0x1e5
/* 80467030 00463F70  4C C6 31 82 */	crclr 6
/* 80467034 00463F74  4B BC 36 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467038:
/* 80467038 00463F78  38 7C 00 10 */	addi r3, r28, 0x10
/* 8046703C 00463F7C  38 80 00 01 */	li r4, 1
/* 80467040 00463F80  4B EC CE 5D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 80467044 00463F84  7C 7C 1B 79 */	or. r28, r3, r3
/* 80467048 00463F88  40 82 00 18 */	bne .L_80467060
/* 8046704C 00463F8C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467050 00463F90  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467054 00463F94  38 80 01 E7 */	li r4, 0x1e7
/* 80467058 00463F98  4C C6 31 82 */	crclr 6
/* 8046705C 00463F9C  4B BC 35 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467060:
/* 80467060 00463FA0  28 1C 00 00 */	cmplwi r28, 0
/* 80467064 00463FA4  40 82 00 18 */	bne .L_8046707C
/* 80467068 00463FA8  38 7F 00 00 */	addi r3, r31, 0
/* 8046706C 00463FAC  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467070 00463FB0  38 80 03 42 */	li r4, 0x342
/* 80467074 00463FB4  4C C6 31 82 */	crclr 6
/* 80467078 00463FB8  4B BC 35 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046707C:
/* 8046707C 00463FBC  7F 83 E3 78 */	mr r3, r28
/* 80467080 00463FC0  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 80467084 00463FC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80467088 00463FC8  7D 89 03 A6 */	mtctr r12
/* 8046708C 00463FCC  4E 80 04 21 */	bctrl 
/* 80467090 00463FD0  48 00 00 F4 */	b .L_80467184
.L_80467094:
/* 80467094 00463FD4  7F 83 E3 78 */	mr r3, r28
/* 80467098 00463FD8  38 9F 06 10 */	addi r4, r31, 0x610
/* 8046709C 00463FDC  4B C6 36 25 */	bl strcmp
/* 804670A0 00463FE0  2C 03 00 00 */	cmpwi r3, 0
/* 804670A4 00463FE4  40 82 00 E0 */	bne .L_80467184
/* 804670A8 00463FE8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804670AC 00463FEC  28 00 00 00 */	cmplwi r0, 0
/* 804670B0 00463FF0  40 82 00 18 */	bne .L_804670C8
/* 804670B4 00463FF4  38 7F 00 20 */	addi r3, r31, 0x20
/* 804670B8 00463FF8  38 BF 00 14 */	addi r5, r31, 0x14
/* 804670BC 00463FFC  38 80 01 D3 */	li r4, 0x1d3
/* 804670C0 00464000  4C C6 31 82 */	crclr 6
/* 804670C4 00464004  4B BC 35 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804670C8:
/* 804670C8 00464008  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 804670CC 0046400C  28 1C 00 00 */	cmplwi r28, 0
/* 804670D0 00464010  40 82 00 18 */	bne .L_804670E8
/* 804670D4 00464014  38 7F 00 20 */	addi r3, r31, 0x20
/* 804670D8 00464018  38 BF 00 14 */	addi r5, r31, 0x14
/* 804670DC 0046401C  38 80 01 DC */	li r4, 0x1dc
/* 804670E0 00464020  4C C6 31 82 */	crclr 6
/* 804670E4 00464024  4B BC 35 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804670E8:
/* 804670E8 00464028  80 1C 00 04 */	lwz r0, 4(r28)
/* 804670EC 0046402C  28 00 00 00 */	cmplwi r0, 0
/* 804670F0 00464030  40 82 00 18 */	bne .L_80467108
/* 804670F4 00464034  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804670F8 00464038  38 BF 00 14 */	addi r5, r31, 0x14
/* 804670FC 0046403C  38 80 00 C7 */	li r4, 0xc7
/* 80467100 00464040  4C C6 31 82 */	crclr 6
/* 80467104 00464044  4B BC 35 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467108:
/* 80467108 00464048  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046710C 0046404C  83 83 00 04 */	lwz r28, 4(r3)
/* 80467110 00464050  28 1C 00 00 */	cmplwi r28, 0
/* 80467114 00464054  40 82 00 18 */	bne .L_8046712C
/* 80467118 00464058  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046711C 0046405C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467120 00464060  38 80 01 E5 */	li r4, 0x1e5
/* 80467124 00464064  4C C6 31 82 */	crclr 6
/* 80467128 00464068  4B BC 35 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046712C:
/* 8046712C 0046406C  38 7C 00 10 */	addi r3, r28, 0x10
/* 80467130 00464070  38 80 00 01 */	li r4, 1
/* 80467134 00464074  4B EC CD 69 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 80467138 00464078  7C 7C 1B 79 */	or. r28, r3, r3
/* 8046713C 0046407C  40 82 00 18 */	bne .L_80467154
/* 80467140 00464080  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467144 00464084  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467148 00464088  38 80 01 E7 */	li r4, 0x1e7
/* 8046714C 0046408C  4C C6 31 82 */	crclr 6
/* 80467150 00464090  4B BC 34 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467154:
/* 80467154 00464094  28 1C 00 00 */	cmplwi r28, 0
/* 80467158 00464098  40 82 00 18 */	bne .L_80467170
/* 8046715C 0046409C  38 7F 00 00 */	addi r3, r31, 0
/* 80467160 004640A0  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467164 004640A4  38 80 03 46 */	li r4, 0x346
/* 80467168 004640A8  4C C6 31 82 */	crclr 6
/* 8046716C 004640AC  4B BC 34 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467170:
/* 80467170 004640B0  7F 83 E3 78 */	mr r3, r28
/* 80467174 004640B4  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 80467178 004640B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046717C 004640BC  7D 89 03 A6 */	mtctr r12
/* 80467180 004640C0  4E 80 04 21 */	bctrl 
.L_80467184:
/* 80467184 004640C4  38 7E 00 10 */	addi r3, r30, 0x10
/* 80467188 004640C8  4B EC C9 ED */	bl reservePauseOffAllSeq__Q28PSSystem6SeqMgrFv
/* 8046718C 004640CC  81 9D 00 24 */	lwz r12, 0x24(r29)
/* 80467190 004640D0  28 0C 00 00 */	cmplwi r12, 0
/* 80467194 004640D4  41 82 00 0C */	beq .L_804671A0
/* 80467198 004640D8  7D 89 03 A6 */	mtctr r12
/* 8046719C 004640DC  4E 80 04 21 */	bctrl 
.L_804671A0:
/* 804671A0 004640E0  80 9D 00 20 */	lwz r4, 0x20(r29)
/* 804671A4 004640E4  3C 04 00 01 */	addis r0, r4, 1
/* 804671A8 004640E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 804671AC 004640EC  41 82 00 10 */	beq .L_804671BC
/* 804671B0 004640F0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804671B4 004640F4  38 A0 00 00 */	li r5, 0
/* 804671B8 004640F8  4B ED 14 79 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_804671BC:
/* 804671BC 004640FC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 804671C0 00464100  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804671C4 00464104  7C 08 03 A6 */	mtlr r0
/* 804671C8 00464108  38 21 00 20 */	addi r1, r1, 0x20
/* 804671CC 0046410C  4E 80 00 20 */	blr 

.global onMessageEnd__Q23PSM4DemoFi
onMessageEnd__Q23PSM4DemoFi:
/* 804671D0 00464110  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804671D4 00464114  7C 08 02 A6 */	mflr r0
/* 804671D8 00464118  90 01 00 24 */	stw r0, 0x24(r1)
/* 804671DC 0046411C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804671E0 00464120  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804671E4 00464124  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804671E8 00464128  7C 9D 23 78 */	mr r29, r4
/* 804671EC 0046412C  83 C3 00 28 */	lwz r30, 0x28(r3)
/* 804671F0 00464130  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 804671F4 00464134  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 804671F8 00464138  7F C3 F3 78 */	mr r3, r30
/* 804671FC 0046413C  38 9F 05 80 */	addi r4, r31, 0x580
/* 80467200 00464140  4B C6 34 C1 */	bl strcmp
/* 80467204 00464144  2C 03 00 00 */	cmpwi r3, 0
/* 80467208 00464148  40 82 01 40 */	bne .L_80467348
/* 8046720C 0046414C  80 0D 91 C4 */	lwz r0, "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
/* 80467210 00464150  28 00 00 00 */	cmplwi r0, 0
/* 80467214 00464154  40 82 00 18 */	bne .L_8046722C
/* 80467218 00464158  38 7F 08 6C */	addi r3, r31, 0x86c
/* 8046721C 0046415C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467220 00464160  38 80 00 89 */	li r4, 0x89
/* 80467224 00464164  4C C6 31 82 */	crclr 6
/* 80467228 00464168  4B BC 34 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046722C:
/* 8046722C 0046416C  83 CD 91 C4 */	lwz r30, "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
/* 80467230 00464170  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80467234 00464174  28 00 00 00 */	cmplwi r0, 0
/* 80467238 00464178  40 82 00 18 */	bne .L_80467250
/* 8046723C 0046417C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467240 00464180  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467244 00464184  38 80 00 5D */	li r4, 0x5d
/* 80467248 00464188  4C C6 31 82 */	crclr 6
/* 8046724C 0046418C  4B BC 33 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467250:
/* 80467250 00464190  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80467254 00464194  38 00 00 00 */	li r0, 0
/* 80467258 00464198  98 03 00 15 */	stb r0, 0x15(r3)
/* 8046725C 0046419C  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80467260 004641A0  28 00 00 00 */	cmplwi r0, 0
/* 80467264 004641A4  40 82 00 18 */	bne .L_8046727C
/* 80467268 004641A8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8046726C 004641AC  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467270 004641B0  38 80 00 5D */	li r4, 0x5d
/* 80467274 004641B4  4C C6 31 82 */	crclr 6
/* 80467278 004641B8  4B BC 33 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046727C:
/* 8046727C 004641BC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80467280 004641C0  38 00 00 00 */	li r0, 0
/* 80467284 004641C4  98 03 00 15 */	stb r0, 0x15(r3)
/* 80467288 004641C8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046728C 004641CC  28 00 00 00 */	cmplwi r0, 0
/* 80467290 004641D0  40 82 00 18 */	bne .L_804672A8
/* 80467294 004641D4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467298 004641D8  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046729C 004641DC  38 80 01 D3 */	li r4, 0x1d3
/* 804672A0 004641E0  4C C6 31 82 */	crclr 6
/* 804672A4 004641E4  4B BC 33 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804672A8:
/* 804672A8 004641E8  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 804672AC 004641EC  28 1E 00 00 */	cmplwi r30, 0
/* 804672B0 004641F0  40 82 00 18 */	bne .L_804672C8
/* 804672B4 004641F4  38 7F 00 20 */	addi r3, r31, 0x20
/* 804672B8 004641F8  38 BF 00 14 */	addi r5, r31, 0x14
/* 804672BC 004641FC  38 80 01 DC */	li r4, 0x1dc
/* 804672C0 00464200  4C C6 31 82 */	crclr 6
/* 804672C4 00464204  4B BC 33 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804672C8:
/* 804672C8 00464208  80 1E 00 04 */	lwz r0, 4(r30)
/* 804672CC 0046420C  28 00 00 00 */	cmplwi r0, 0
/* 804672D0 00464210  40 82 00 18 */	bne .L_804672E8
/* 804672D4 00464214  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804672D8 00464218  38 BF 00 14 */	addi r5, r31, 0x14
/* 804672DC 0046421C  38 80 00 CF */	li r4, 0xcf
/* 804672E0 00464220  4C C6 31 82 */	crclr 6
/* 804672E4 00464224  4B BC 33 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804672E8:
/* 804672E8 00464228  80 7E 00 04 */	lwz r3, 4(r30)
/* 804672EC 0046422C  83 C3 00 04 */	lwz r30, 4(r3)
/* 804672F0 00464230  28 1E 00 00 */	cmplwi r30, 0
/* 804672F4 00464234  40 82 00 18 */	bne .L_8046730C
/* 804672F8 00464238  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804672FC 0046423C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80467300 00464240  38 80 00 D1 */	li r4, 0xd1
/* 80467304 00464244  4C C6 31 82 */	crclr 6
/* 80467308 00464248  4B BC 33 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046730C:
/* 8046730C 0046424C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80467310 00464250  28 00 00 00 */	cmplwi r0, 0
/* 80467314 00464254  40 82 00 18 */	bne .L_8046732C
/* 80467318 00464258  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8046731C 0046425C  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467320 00464260  38 80 00 5A */	li r4, 0x5a
/* 80467324 00464264  4C C6 31 82 */	crclr 6
/* 80467328 00464268  4B BC 33 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046732C:
/* 8046732C 0046426C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80467330 00464270  38 80 00 05 */	li r4, 5
/* 80467334 00464274  81 83 00 00 */	lwz r12, 0(r3)
/* 80467338 00464278  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046733C 0046427C  7D 89 03 A6 */	mtctr r12
/* 80467340 00464280  4E 80 04 21 */	bctrl 
/* 80467344 00464284  48 00 00 D8 */	b .L_8046741C
.L_80467348:
/* 80467348 00464288  7F C3 F3 78 */	mr r3, r30
/* 8046734C 0046428C  38 9F 08 10 */	addi r4, r31, 0x810
/* 80467350 00464290  4B C6 33 71 */	bl strcmp
/* 80467354 00464294  2C 03 00 00 */	cmpwi r3, 0
/* 80467358 00464298  40 82 00 C4 */	bne .L_8046741C
/* 8046735C 0046429C  2C 1D 00 00 */	cmpwi r29, 0
/* 80467360 004642A0  40 82 00 BC */	bne .L_8046741C
/* 80467364 004642A4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80467368 004642A8  28 00 00 00 */	cmplwi r0, 0
/* 8046736C 004642AC  40 82 00 18 */	bne .L_80467384
/* 80467370 004642B0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467374 004642B4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467378 004642B8  38 80 01 D3 */	li r4, 0x1d3
/* 8046737C 004642BC  4C C6 31 82 */	crclr 6
/* 80467380 004642C0  4B BC 32 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467384:
/* 80467384 004642C4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80467388 004642C8  28 1E 00 00 */	cmplwi r30, 0
/* 8046738C 004642CC  40 82 00 18 */	bne .L_804673A4
/* 80467390 004642D0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467394 004642D4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467398 004642D8  38 80 01 DC */	li r4, 0x1dc
/* 8046739C 004642DC  4C C6 31 82 */	crclr 6
/* 804673A0 004642E0  4B BC 32 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804673A4:
/* 804673A4 004642E4  80 1E 00 04 */	lwz r0, 4(r30)
/* 804673A8 004642E8  28 00 00 00 */	cmplwi r0, 0
/* 804673AC 004642EC  40 82 00 18 */	bne .L_804673C4
/* 804673B0 004642F0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804673B4 004642F4  38 BF 00 14 */	addi r5, r31, 0x14
/* 804673B8 004642F8  38 80 00 CF */	li r4, 0xcf
/* 804673BC 004642FC  4C C6 31 82 */	crclr 6
/* 804673C0 00464300  4B BC 32 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804673C4:
/* 804673C4 00464304  80 7E 00 04 */	lwz r3, 4(r30)
/* 804673C8 00464308  83 C3 00 04 */	lwz r30, 4(r3)
/* 804673CC 0046430C  28 1E 00 00 */	cmplwi r30, 0
/* 804673D0 00464310  40 82 00 18 */	bne .L_804673E8
/* 804673D4 00464314  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804673D8 00464318  38 BF 00 38 */	addi r5, r31, 0x38
/* 804673DC 0046431C  38 80 00 D1 */	li r4, 0xd1
/* 804673E0 00464320  4C C6 31 82 */	crclr 6
/* 804673E4 00464324  4B BC 32 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804673E8:
/* 804673E8 00464328  80 1E 00 04 */	lwz r0, 4(r30)
/* 804673EC 0046432C  28 00 00 00 */	cmplwi r0, 0
/* 804673F0 00464330  40 82 00 18 */	bne .L_80467408
/* 804673F4 00464334  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804673F8 00464338  38 BF 00 14 */	addi r5, r31, 0x14
/* 804673FC 0046433C  38 80 00 5A */	li r4, 0x5a
/* 80467400 00464340  4C C6 31 82 */	crclr 6
/* 80467404 00464344  4B BC 32 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467408:
/* 80467408 00464348  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046740C 0046434C  81 83 00 00 */	lwz r12, 0(r3)
/* 80467410 00464350  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80467414 00464354  7D 89 03 A6 */	mtctr r12
/* 80467418 00464358  4E 80 04 21 */	bctrl 
.L_8046741C:
/* 8046741C 0046435C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80467420 00464360  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80467424 00464364  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80467428 00464368  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046742C 0046436C  7C 08 03 A6 */	mtlr r0
/* 80467430 00464370  38 21 00 20 */	addi r1, r1, 0x20
/* 80467434 00464374  4E 80 00 20 */	blr 

.global PSMCancelToPauseOffMainBgm__Fv
PSMCancelToPauseOffMainBgm__Fv:
/* 80467438 00464378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046743C 0046437C  7C 08 02 A6 */	mflr r0
/* 80467440 00464380  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 80467444 00464384  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467448 00464388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046744C 0046438C  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 80467450 00464390  93 C1 00 08 */	stw r30, 8(r1)
/* 80467454 00464394  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80467458 00464398  28 00 00 00 */	cmplwi r0, 0
/* 8046745C 0046439C  40 82 00 18 */	bne .L_80467474
/* 80467460 004643A0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467464 004643A4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467468 004643A8  38 80 01 D3 */	li r4, 0x1d3
/* 8046746C 004643AC  4C C6 31 82 */	crclr 6
/* 80467470 004643B0  4B BC 31 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467474:
/* 80467474 004643B4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80467478 004643B8  28 1E 00 00 */	cmplwi r30, 0
/* 8046747C 004643BC  40 82 00 18 */	bne .L_80467494
/* 80467480 004643C0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467484 004643C4  38 BF 00 14 */	addi r5, r31, 0x14
/* 80467488 004643C8  38 80 01 DC */	li r4, 0x1dc
/* 8046748C 004643CC  4C C6 31 82 */	crclr 6
/* 80467490 004643D0  4B BC 31 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467494:
/* 80467494 004643D4  80 1E 00 04 */	lwz r0, 4(r30)
/* 80467498 004643D8  28 00 00 00 */	cmplwi r0, 0
/* 8046749C 004643DC  40 82 00 18 */	bne .L_804674B4
/* 804674A0 004643E0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804674A4 004643E4  38 BF 00 14 */	addi r5, r31, 0x14
/* 804674A8 004643E8  38 80 00 CF */	li r4, 0xcf
/* 804674AC 004643EC  4C C6 31 82 */	crclr 6
/* 804674B0 004643F0  4B BC 31 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804674B4:
/* 804674B4 004643F4  80 7E 00 04 */	lwz r3, 4(r30)
/* 804674B8 004643F8  83 C3 00 04 */	lwz r30, 4(r3)
/* 804674BC 004643FC  28 1E 00 00 */	cmplwi r30, 0
/* 804674C0 00464400  40 82 00 18 */	bne .L_804674D8
/* 804674C4 00464404  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804674C8 00464408  38 BF 00 38 */	addi r5, r31, 0x38
/* 804674CC 0046440C  38 80 00 D1 */	li r4, 0xd1
/* 804674D0 00464410  4C C6 31 82 */	crclr 6
/* 804674D4 00464414  4B BC 31 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804674D8:
/* 804674D8 00464418  38 7E 00 10 */	addi r3, r30, 0x10
/* 804674DC 0046441C  4B EC C6 BD */	bl cancelPauseOffAllSeq__Q28PSSystem6SeqMgrFv
/* 804674E0 00464420  7F C3 F3 78 */	mr r3, r30
/* 804674E4 00464424  81 9E 00 00 */	lwz r12, 0(r30)
/* 804674E8 00464428  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804674EC 0046442C  7D 89 03 A6 */	mtctr r12
/* 804674F0 00464430  4E 80 04 21 */	bctrl 
/* 804674F4 00464434  28 03 00 00 */	cmplwi r3, 0
/* 804674F8 00464438  41 82 00 0C */	beq .L_80467504
/* 804674FC 0046443C  38 00 00 00 */	li r0, 0
/* 80467500 00464440  B0 03 00 10 */	sth r0, 0x10(r3)
.L_80467504:
/* 80467504 00464444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467508 00464448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046750C 0046444C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467510 00464450  7C 08 03 A6 */	mtlr r0
/* 80467514 00464454  38 21 00 10 */	addi r1, r1, 0x10
/* 80467518 00464458  4E 80 00 20 */	blr 

.global PSMGetGameSceneA__Fv
PSMGetGameSceneA__Fv:
/* 8046751C 0046445C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467520 00464460  7C 08 02 A6 */	mflr r0
/* 80467524 00464464  3C 60 80 4A */	lis r3, lbl_8049D080@ha
/* 80467528 00464468  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046752C 0046446C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467530 00464470  3B E3 D0 80 */	addi r31, r3, lbl_8049D080@l
/* 80467534 00464474  93 C1 00 08 */	stw r30, 8(r1)
/* 80467538 00464478  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046753C 0046447C  28 00 00 00 */	cmplwi r0, 0
/* 80467540 00464480  40 82 00 18 */	bne .L_80467558
/* 80467544 00464484  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467548 00464488  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046754C 0046448C  38 80 01 D3 */	li r4, 0x1d3
/* 80467550 00464490  4C C6 31 82 */	crclr 6
/* 80467554 00464494  4B BC 30 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467558:
/* 80467558 00464498  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046755C 0046449C  28 1E 00 00 */	cmplwi r30, 0
/* 80467560 004644A0  40 82 00 18 */	bne .L_80467578
/* 80467564 004644A4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80467568 004644A8  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046756C 004644AC  38 80 01 DC */	li r4, 0x1dc
/* 80467570 004644B0  4C C6 31 82 */	crclr 6
/* 80467574 004644B4  4B BC 30 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467578:
/* 80467578 004644B8  80 1E 00 04 */	lwz r0, 4(r30)
/* 8046757C 004644BC  28 00 00 00 */	cmplwi r0, 0
/* 80467580 004644C0  40 82 00 18 */	bne .L_80467598
/* 80467584 004644C4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80467588 004644C8  38 BF 00 14 */	addi r5, r31, 0x14
/* 8046758C 004644CC  38 80 00 CF */	li r4, 0xcf
/* 80467590 004644D0  4C C6 31 82 */	crclr 6
/* 80467594 004644D4  4B BC 30 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467598:
/* 80467598 004644D8  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046759C 004644DC  83 C3 00 04 */	lwz r30, 4(r3)
/* 804675A0 004644E0  28 1E 00 00 */	cmplwi r30, 0
/* 804675A4 004644E4  40 82 00 18 */	bne .L_804675BC
/* 804675A8 004644E8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 804675AC 004644EC  38 BF 00 38 */	addi r5, r31, 0x38
/* 804675B0 004644F0  38 80 00 D1 */	li r4, 0xd1
/* 804675B4 004644F4  4C C6 31 82 */	crclr 6
/* 804675B8 004644F8  4B BC 30 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804675BC:
/* 804675BC 004644FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 804675C0 00464500  7F C3 F3 78 */	mr r3, r30
/* 804675C4 00464504  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 804675C8 00464508  7D 89 03 A6 */	mtctr r12
/* 804675CC 0046450C  4E 80 04 21 */	bctrl 
/* 804675D0 00464510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804675D4 00464514  40 82 00 18 */	bne .L_804675EC
/* 804675D8 00464518  38 7F 08 58 */	addi r3, r31, 0x858
/* 804675DC 0046451C  38 BF 00 14 */	addi r5, r31, 0x14
/* 804675E0 00464520  38 80 01 77 */	li r4, 0x177
/* 804675E4 00464524  4C C6 31 82 */	crclr 6
/* 804675E8 00464528  4B BC 30 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804675EC:
/* 804675EC 0046452C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804675F0 00464530  7F C3 F3 78 */	mr r3, r30
/* 804675F4 00464534  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804675F8 00464538  83 C1 00 08 */	lwz r30, 8(r1)
/* 804675FC 0046453C  7C 08 03 A6 */	mtlr r0
/* 80467600 00464540  38 21 00 10 */	addi r1, r1, 0x10
/* 80467604 00464544  4E 80 00 20 */	blr 

.global isPollutUp__Q23PSM10Scene_CaveFv
isPollutUp__Q23PSM10Scene_CaveFv:
/* 80467608 00464548  80 83 00 64 */	lwz r4, 0x64(r3)
/* 8046760C 0046454C  20 64 FF FF */	subfic r3, r4, -1
/* 80467610 00464550  38 04 00 01 */	addi r0, r4, 1
/* 80467614 00464554  7C 60 03 78 */	or r0, r3, r0
/* 80467618 00464558  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8046761C 0046455C  4E 80 00 20 */	blr 

.global getEnvSe__Q23PSM9SceneBaseFv
getEnvSe__Q23PSM9SceneBaseFv:
/* 80467620 00464560  38 60 00 00 */	li r3, 0
/* 80467624 00464564  4E 80 00 20 */	blr 

.global setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode:
/* 80467628 00464568  90 83 00 04 */	stw r4, 4(r3)
/* 8046762C 0046456C  4E 80 00 20 */	blr 
