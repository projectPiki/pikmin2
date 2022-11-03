.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
# NONE OF THESE STRINGS ARE NAMED. THE LABELS ARE JUST FOR READABILITY IN THE ASM.
.balign 8
lbl_8049C410:
	.asciz "pikmin2AramMgr.cpp"
.balign 4
str_resground:
	.asciz "res_ground.szs"
.balign 4
str_rescave:
	.asciz "res_cave.szs"
.balign 4
str_res_SMenuMap:
	.asciz "res_s_menu_map.szs"
.balign 4
str_res_SMenuPause:
	.asciz "res_s_menu_pause.szs"
.balign 4
str_res_SMenuItem:
	.asciz "res_s_menu_item.szs"
.balign 4
str_res_Ch1P:
	.asciz "res_challenge_1p.szs"
.balign 4
str_res_Ch2P:
	.asciz "res_challenge_2p.szs"
.balign 4
str_res_VS:
	.asciz "res_vs.szs"
.balign 4
str_res_SMenuPauseDoukutu:
	.asciz "res_s_menu_pause_doukutu.szs"
.balign 4
str_res_SMenuPauseVS:
	.asciz "res_s_menu_pause_VS.szs"
.balign 4
str_res_AnaDemo:
	.asciz "res_ana_demo.szs"
.balign 4
str_res_Contena:
	.asciz "res_contena.szs"
.balign 4
str_res_Ufo:
	.asciz "res_ufo.szs"
.balign 4
str_mIMG_tutorial:
	.asciz "/new_screen/cmn/res_map_image_tutorial.szs"
.balign 4
str_mIMG_forest:
	.asciz "/new_screen/cmn/res_map_image_forest.szs"
.balign 4
str_mIMG_yakushima:
	.asciz "/new_screen/cmn/res_map_image_yakushima.szs"
.balign 4
str_mIMG_last:
	.asciz "/new_screen/cmn/res_map_image_last.szs"
.balign 4
str_m_s00:
	.asciz "/user/Mukki/movie/s00_coursein/demo.szs"
.balign 4
str_m_s0B:
	.asciz "/user/Mukki/movie/s0B_cv_coursein/demo.szs"
.balign 4
str_m_s09:
	.asciz "/user/Mukki/movie/s09_holein/demo.szs"
.balign 4
str_m_g2F:
	.asciz "/user/Mukki/movie/g2F_appear_hole/demo.szs"
.balign 4
str_m_g30:
	.asciz "/user/Mukki/movie/g30_appear_fountain/demo.szs"
.balign 4
str_m_s10:
	.asciz "/user/Mukki/movie/s10_suck_treasure/demo.szs"
.balign 4
str_m_s17:
	.asciz "/user/Mukki/movie/s17_suck_equipment/demo.szs"
.balign 4
str_m_s22_e:
	.asciz "/user/Mukki/movie/s22_cv_suck_equipment/demo.szs"
.balign 4
str_m_s22_t:
	.asciz "/user/Mukki/movie/s22_cv_suck_treasure/demo.szs"
.balign 4
str_m_s01:
	.asciz "/user/Mukki/movie/s01_dayend/demo.szs"
.balign 4
str_m_s02:
	.asciz "/user/Mukki/movie/s02_dayend_result/demo.szs"
.balign 4
str_m_s03:
	.asciz "/user/Mukki/movie/s03_orimadown/demo.szs"
.balign 4
str_m_s04:
	.asciz "/user/Mukki/movie/s04_dayend_orimadown/demo.szs"
.balign 4
str_m_s05:
	.asciz "/user/Mukki/movie/s05_pikminzero/demo.szs"
.balign 4
str_m_s06:
	.asciz "/user/Mukki/movie/s06_dayend_pikminzero/demo.szs"
.balign 4
str_m_s0C:
	.asciz "/user/Mukki/movie/s0C_cv_escape/demo.szs"
.balign 4
str_m_s0E:
	.asciz "/user/Mukki/movie/s0E_return_cave/demo.szs"
.balign 4
str_m_s12:
	.asciz "/user/Mukki/movie/s12_cv_giveup/demo.szs"
.balign 4
str_m_s21:
	.asciz "/user/Mukki/movie/s21_dayend_takeoff/demo.szs"
.balign 4
str_k_onyon_A:
	.asciz "user/Kando/onyon/arc.szs"
.balign 4
str_k_onyon_T:
	.asciz "user/Kando/onyon/texts.szs"
.balign 4
str_k_pod_A:
	.asciz "user/Kando/pod/arc.szs"
.balign 4
str_k_pod_T:
	.asciz "user/Kando/pod/texts.szs"
.balign 4
str_k_pod_gold_A:
	.asciz "user/Kando/pod_gold/arc.szs"
.balign 4
str_k_pod_gold_T:
	.asciz "user/Kando/pod_gold/texts.szs"
.balign 4
str_k_ufo_A:
	.asciz "user/Kando/ufo/arc.szs"
.balign 4
str_k_ufo_T:
	.asciz "user/Kando/ufo/texts.szs"
.balign 4
str_k_ufo_gold_A:
	.asciz "user/Kando/ufo_gold/arc.szs"
.balign 4
str_k_ufo_gold_T:
	.asciz "user/Kando/ufo_gold/texts.szs"
.balign 4
str_k_gate_A:
	.asciz "user/Kando/objects/gates/gate-arc.szs"
.balign 4
str_k_gate_T:
	.asciz "user/Kando/objects/gates/gate-texts.szs"
.balign 4
str_k_egate_A:
	.asciz "user/Kando/objects/gates/e-gate-arc.szs"
.balign 4
str_k_egate_T:
	.asciz "user/Kando/objects/gates/e-gate-texts.szs"
.balign 4
str_k_dhole_A:
	.asciz "user/Kando/objects/dungeon_hole/arc.szs"
.balign 4
str_k_dhole_T:
	.asciz "user/Kando/objects/dungeon_hole/texts.szs"
.balign 4
str_k_pikihead_A:
	.asciz "user/Kando/objects/pikihead/arc.szs"
.balign 4
str_k_pikihead_T:
	.asciz "user/Kando/objects/pikihead/texts.szs"
.balign 4
str_k_sBridge_A:
	.asciz "user/Kando/bridge/s_bridge/arc.szs"
.balign 4
str_k_sBridge_T:
	.asciz "user/Kando/bridge/s_bridge/texts.szs"
.balign 4
str_k_slopeU_A:
	.asciz "user/Kando/bridge/slope_u/arc.szs"
.balign 4
str_k_slopeU_T:
	.asciz "user/Kando/bridge/slope_u/texts.szs"
.balign 4
str_k_lBridge_A:
	.asciz "user/Kando/bridge/l_bridge/arc.szs"
.balign 4
str_k_lBridge_T:
	.asciz "user/Kando/bridge/l_bridge/texts.szs"
.balign 4
str_queenchappy_btk:
	.asciz "/enemy/data/Queen/queenchappy_model.btk"
.balign 4
str_queen_model:
	.asciz "/enemy/data/Queen/model.szs"
.balign 4
str_queen_anim:
	.asciz "/enemy/data/Queen/anim.szs"
.balign 4
str_bigtreasure_model:
	.asciz "/enemy/data/BigTreasure/model.szs"
.balign 4
str_bigtreasure_anim:
	.asciz "/enemy/data/BigTreasure/anim.szs"
.balign 4
str_baby_model:
	.asciz "/enemy/data/Baby/model.szs"
.balign 4
str_baby_anim:
	.asciz "/enemy/data/Baby/anim.szs"
.balign 4
lbl_8049CD54:
	.asciz "P2Assert"
.balign 4
str_enemyResList:
	.asciz "/enemy/enemyResList.txt"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
"sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@":
	.4byte str_resground
	.4byte str_rescave
	.4byte str_res_SMenuMap
	.4byte str_res_SMenuPause
	.4byte str_res_SMenuItem
	.4byte str_res_Ch1P
	.4byte str_res_Ch2P
	.4byte str_res_VS
	.4byte str_res_SMenuPauseDoukutu
	.4byte str_res_SMenuPauseVS
	.4byte str_res_AnaDemo
	.4byte str_res_Contena
	.4byte str_res_Ufo
"sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@":
	.4byte str_mIMG_tutorial
	.4byte str_mIMG_forest
	.4byte str_mIMG_yakushima
	.4byte str_mIMG_last
"sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@":
	.4byte str_m_s00
	.4byte str_m_s0B
	.4byte str_m_s09
	.4byte str_m_g2F
	.4byte str_m_g30
	.4byte str_m_s10
	.4byte str_m_s17
	.4byte str_m_s22_e
	.4byte str_m_s22_t
	.4byte str_m_s01
	.4byte str_m_s02
	.4byte str_m_s03
	.4byte str_m_s04
	.4byte str_m_s05
	.4byte str_m_s06
	.4byte str_m_s0C
	.4byte str_m_s0E
	.4byte str_m_s12
	.4byte str_m_s21
"sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@":
	.4byte str_k_onyon_A
	.4byte str_k_onyon_T
	.4byte str_k_pod_A
	.4byte str_k_pod_T
	.4byte str_k_pod_gold_A
	.4byte str_k_pod_gold_T
	.4byte str_k_ufo_A
	.4byte str_k_ufo_T
	.4byte str_k_ufo_gold_A
	.4byte str_k_ufo_gold_T
	.4byte str_k_gate_A
	.4byte str_k_gate_T
	.4byte str_k_egate_A
	.4byte str_k_egate_T
	.4byte str_k_dhole_A
	.4byte str_k_dhole_T
	.4byte str_k_pikihead_A
	.4byte str_k_pikihead_T
	.4byte str_k_sBridge_A
	.4byte str_k_sBridge_T
	.4byte str_k_slopeU_A
	.4byte str_k_slopeU_T
	.4byte str_k_lBridge_A
	.4byte str_k_lBridge_T
.global __vt__Q211Pikmin2ARAM3Mgr
__vt__Q211Pikmin2ARAM3Mgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q211Pikmin2ARAM3MgrFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global gPikmin2AramMgr
gPikmin2AramMgr:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520BE0:
	.asciz "EOF"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q211Pikmin2ARAM3MgrFv
init__Q211Pikmin2ARAM3MgrFv:
/* 80455C30 00452B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455C34 00452B74  7C 08 02 A6 */	mflr r0
/* 80455C38 00452B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455C3C 00452B7C  80 0D 9C 80 */	lwz r0, gPikmin2AramMgr@sda21(r13)
/* 80455C40 00452B80  28 00 00 00 */	cmplwi r0, 0
/* 80455C44 00452B84  41 82 00 20 */	beq .L_80455C64
/* 80455C48 00452B88  3C 60 80 4A */	lis r3, lbl_8049C410@ha
/* 80455C4C 00452B8C  3C A0 80 4A */	lis r5, lbl_8049CD54@ha
/* 80455C50 00452B90  38 63 C4 10 */	addi r3, r3, lbl_8049C410@l
/* 80455C54 00452B94  38 80 00 BE */	li r4, 0xbe
/* 80455C58 00452B98  38 A5 CD 54 */	addi r5, r5, lbl_8049CD54@l
/* 80455C5C 00452B9C  4C C6 31 82 */	crclr 6
/* 80455C60 00452BA0  4B BD 49 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455C64:
/* 80455C64 00452BA4  38 60 00 08 */	li r3, 8
/* 80455C68 00452BA8  4B BC E2 3D */	bl __nw__FUl
/* 80455C6C 00452BAC  7C 60 1B 79 */	or. r0, r3, r3
/* 80455C70 00452BB0  41 82 00 0C */	beq .L_80455C7C
/* 80455C74 00452BB4  48 00 00 1D */	bl __ct__Q211Pikmin2ARAM3MgrFv
/* 80455C78 00452BB8  7C 60 1B 78 */	mr r0, r3
.L_80455C7C:
/* 80455C7C 00452BBC  90 0D 9C 80 */	stw r0, gPikmin2AramMgr@sda21(r13)
/* 80455C80 00452BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455C84 00452BC4  7C 08 03 A6 */	mtlr r0
/* 80455C88 00452BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80455C8C 00452BCC  4E 80 00 20 */	blr 

.global __ct__Q211Pikmin2ARAM3MgrFv
__ct__Q211Pikmin2ARAM3MgrFv:
/* 80455C90 00452BD0  3C 80 80 4F */	lis r4, __vt__Q211Pikmin2ARAM3Mgr@ha
/* 80455C94 00452BD4  38 00 00 00 */	li r0, 0
/* 80455C98 00452BD8  38 84 DC 50 */	addi r4, r4, __vt__Q211Pikmin2ARAM3Mgr@l
/* 80455C9C 00452BDC  90 83 00 00 */	stw r4, 0(r3)
/* 80455CA0 00452BE0  98 03 00 04 */	stb r0, 4(r3)
/* 80455CA4 00452BE4  4E 80 00 20 */	blr 

.global setLoadPermission__Q211Pikmin2ARAM3MgrFb
setLoadPermission__Q211Pikmin2ARAM3MgrFb:
/* 80455CA8 00452BE8  98 83 00 04 */	stb r4, 4(r3)
/* 80455CAC 00452BEC  4E 80 00 20 */	blr 

.global load__Q211Pikmin2ARAM3MgrFv
load__Q211Pikmin2ARAM3MgrFv:
/* 80455CB0 00452BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455CB4 00452BF4  7C 08 02 A6 */	mflr r0
/* 80455CB8 00452BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455CBC 00452BFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455CC0 00452C00  93 C1 00 08 */	stw r30, 8(r1)
/* 80455CC4 00452C04  7C 7E 1B 78 */	mr r30, r3
/* 80455CC8 00452C08  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80455CCC 00452C0C  48 00 00 69 */	bl loadEnemy__Q211Pikmin2ARAM3MgrFv
/* 80455CD0 00452C10  7F C3 F3 78 */	mr r3, r30
/* 80455CD4 00452C14  48 00 02 05 */	bl load2D__Q211Pikmin2ARAM3MgrFv
/* 80455CD8 00452C18  7F C3 F3 78 */	mr r3, r30
/* 80455CDC 00452C1C  48 00 02 B5 */	bl loadDemo__Q211Pikmin2ARAM3MgrFv
/* 80455CE0 00452C20  7F C3 F3 78 */	mr r3, r30
/* 80455CE4 00452C24  48 00 03 25 */	bl loadItem__Q211Pikmin2ARAM3MgrFv
/* 80455CE8 00452C28  7F C3 F3 78 */	mr r3, r30
/* 80455CEC 00452C2C  48 00 00 25 */	bl dump__Q211Pikmin2ARAM3MgrFv
/* 80455CF0 00452C30  7F E3 FB 78 */	mr r3, r31
/* 80455CF4 00452C34  4B BC D8 B1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80455CF8 00452C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455CFC 00452C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455D00 00452C40  83 C1 00 08 */	lwz r30, 8(r1)
/* 80455D04 00452C44  7C 08 03 A6 */	mtlr r0
/* 80455D08 00452C48  38 21 00 10 */	addi r1, r1, 0x10
/* 80455D0C 00452C4C  4E 80 00 20 */	blr 

.global dump__Q211Pikmin2ARAM3MgrFv
dump__Q211Pikmin2ARAM3MgrFv:
/* 80455D10 00452C50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455D14 00452C54  7C 08 02 A6 */	mflr r0
/* 80455D18 00452C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455D1C 00452C5C  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80455D20 00452C60  4B FD D2 A9 */	bl dump__Q24ARAM3MgrFv
/* 80455D24 00452C64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455D28 00452C68  7C 08 03 A6 */	mtlr r0
/* 80455D2C 00452C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80455D30 00452C70  4E 80 00 20 */	blr 

.global loadEnemy__Q211Pikmin2ARAM3MgrFv
loadEnemy__Q211Pikmin2ARAM3MgrFv:
/* 80455D34 00452C74  94 21 FB B0 */	stwu r1, -0x450(r1)
/* 80455D38 00452C78  7C 08 02 A6 */	mflr r0
/* 80455D3C 00452C7C  3C 80 80 4A */	lis r4, lbl_8049C410@ha
/* 80455D40 00452C80  90 01 04 54 */	stw r0, 0x454(r1)
/* 80455D44 00452C84  BF 61 04 3C */	stmw r27, 0x43c(r1)
/* 80455D48 00452C88  7C 7E 1B 78 */	mr r30, r3
/* 80455D4C 00452C8C  3B 84 C4 10 */	addi r28, r4, lbl_8049C410@l
/* 80455D50 00452C90  4B C9 8E E9 */	bl OSDisableInterrupts
/* 80455D54 00452C94  7C 03 00 D0 */	neg r0, r3
/* 80455D58 00452C98  7C 00 1B 78 */	or r0, r0, r3
/* 80455D5C 00452C9C  54 1D 0F FE */	srwi r29, r0, 0x1f
/* 80455D60 00452CA0  4B C9 BC A5 */	bl OSDisableScheduler
/* 80455D64 00452CA4  80 6D 88 28 */	lwz r3, sSystemHeap__7JKRHeap@sda21(r13)
/* 80455D68 00452CA8  4B BC DA 4D */	bl getFreeSize__7JKRHeapFv
/* 80455D6C 00452CAC  37 63 86 C0 */	addic. r27, r3, -31040
/* 80455D70 00452CB0  40 82 00 18 */	bne .L_80455D88
/* 80455D74 00452CB4  38 7C 00 00 */	addi r3, r28, 0
/* 80455D78 00452CB8  38 BC 09 44 */	addi r5, r28, 0x944
/* 80455D7C 00452CBC  38 80 01 22 */	li r4, 0x122
/* 80455D80 00452CC0  4C C6 31 82 */	crclr 6
/* 80455D84 00452CC4  4B BD 48 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455D88:
/* 80455D88 00452CC8  80 8D 88 28 */	lwz r4, sSystemHeap__7JKRHeap@sda21(r13)
/* 80455D8C 00452CCC  7F 63 DB 78 */	mr r3, r27
/* 80455D90 00452CD0  38 A0 00 01 */	li r5, 1
/* 80455D94 00452CD4  4B BC A1 35 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80455D98 00452CD8  7C 7B 1B 79 */	or. r27, r3, r3
/* 80455D9C 00452CDC  40 82 00 18 */	bne .L_80455DB4
/* 80455DA0 00452CE0  38 7C 00 00 */	addi r3, r28, 0
/* 80455DA4 00452CE4  38 BC 09 44 */	addi r5, r28, 0x944
/* 80455DA8 00452CE8  38 80 01 25 */	li r4, 0x125
/* 80455DAC 00452CEC  4C C6 31 82 */	crclr 6
/* 80455DB0 00452CF0  4B BD 48 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455DB4:
/* 80455DB4 00452CF4  80 8D 88 28 */	lwz r4, sSystemHeap__7JKRHeap@sda21(r13)
/* 80455DB8 00452CF8  38 60 78 A0 */	li r3, 0x78a0
/* 80455DBC 00452CFC  38 A0 00 01 */	li r5, 1
/* 80455DC0 00452D00  4B BC A1 09 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80455DC4 00452D04  7C 7F 1B 79 */	or. r31, r3, r3
/* 80455DC8 00452D08  40 82 00 18 */	bne .L_80455DE0
/* 80455DCC 00452D0C  38 7C 00 00 */	addi r3, r28, 0
/* 80455DD0 00452D10  38 BC 09 44 */	addi r5, r28, 0x944
/* 80455DD4 00452D14  38 80 01 27 */	li r4, 0x127
/* 80455DD8 00452D18  4C C6 31 82 */	crclr 6
/* 80455DDC 00452D1C  4B BD 48 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455DE0:
/* 80455DE0 00452D20  7F 63 DB 78 */	mr r3, r27
/* 80455DE4 00452D24  4B BC D7 D1 */	bl destroy__7JKRHeapFv
/* 80455DE8 00452D28  4B C9 BC 5D */	bl OSEnableScheduler
/* 80455DEC 00452D2C  7F A3 EB 78 */	mr r3, r29
/* 80455DF0 00452D30  4B C9 8E 71 */	bl OSRestoreInterrupts
/* 80455DF4 00452D34  7F E3 FB 78 */	mr r3, r31
/* 80455DF8 00452D38  4B BC D7 AD */	bl becomeCurrentHeap__7JKRHeapFv
/* 80455DFC 00452D3C  38 00 00 00 */	li r0, 0
/* 80455E00 00452D40  38 7C 09 50 */	addi r3, r28, 0x950
/* 80455E04 00452D44  90 01 00 08 */	stw r0, 8(r1)
/* 80455E08 00452D48  38 80 00 00 */	li r4, 0
/* 80455E0C 00452D4C  38 A0 00 01 */	li r5, 1
/* 80455E10 00452D50  38 C0 00 00 */	li r6, 0
/* 80455E14 00452D54  80 ED 88 2C */	lwz r7, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80455E18 00452D58  39 00 00 02 */	li r8, 2
/* 80455E1C 00452D5C  39 20 00 00 */	li r9, 0
/* 80455E20 00452D60  39 40 00 00 */	li r10, 0
/* 80455E24 00452D64  4B BC 93 65 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 80455E28 00452D68  7C 64 1B 78 */	mr r4, r3
/* 80455E2C 00452D6C  38 61 00 10 */	addi r3, r1, 0x10
/* 80455E30 00452D70  38 A0 FF FF */	li r5, -1
/* 80455E34 00452D74  4B FB FA C5 */	bl __ct__9RamStreamFPvi
/* 80455E38 00452D78  38 00 00 01 */	li r0, 1
/* 80455E3C 00452D7C  2C 00 00 01 */	cmpwi r0, 1
/* 80455E40 00452D80  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80455E44 00452D84  40 82 00 0C */	bne .L_80455E50
/* 80455E48 00452D88  38 00 00 00 */	li r0, 0
/* 80455E4C 00452D8C  90 01 04 24 */	stw r0, 0x424(r1)
.L_80455E50:
/* 80455E50 00452D90  80 6D 87 20 */	lwz r3, sAramObject__7JKRAram@sda21(r13)
/* 80455E54 00452D94  80 63 00 94 */	lwz r3, 0x94(r3)
/* 80455E58 00452D98  4B BC 3B 71 */	bl getFreeSize__11JKRAramHeapFv
.L_80455E5C:
/* 80455E5C 00452D9C  38 61 00 10 */	addi r3, r1, 0x10
/* 80455E60 00452DA0  38 80 00 00 */	li r4, 0
/* 80455E64 00452DA4  38 A0 00 00 */	li r5, 0
/* 80455E68 00452DA8  4B FB F2 6D */	bl readString__6StreamFPci
/* 80455E6C 00452DAC  38 82 28 80 */	addi r4, r2, lbl_80520BE0@sda21
/* 80455E70 00452DB0  7C 7B 1B 78 */	mr r27, r3
/* 80455E74 00452DB4  4B C7 48 4D */	bl strcmp
/* 80455E78 00452DB8  2C 03 00 00 */	cmpwi r3, 0
/* 80455E7C 00452DBC  41 82 00 20 */	beq .L_80455E9C
/* 80455E80 00452DC0  88 1E 00 04 */	lbz r0, 4(r30)
/* 80455E84 00452DC4  7F 64 DB 78 */	mr r4, r27
/* 80455E88 00452DC8  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80455E8C 00452DCC  7C 00 00 34 */	cntlzw r0, r0
/* 80455E90 00452DD0  54 05 D9 7E */	srwi r5, r0, 5
/* 80455E94 00452DD4  4B FD CD 35 */	bl dvdToAram__Q24ARAM3MgrFPCcb
/* 80455E98 00452DD8  4B FF FF C4 */	b .L_80455E5C
.L_80455E9C:
/* 80455E9C 00452DDC  4B C9 8D 9D */	bl OSDisableInterrupts
/* 80455EA0 00452DE0  7C 03 00 D0 */	neg r0, r3
/* 80455EA4 00452DE4  7C 00 1B 78 */	or r0, r0, r3
/* 80455EA8 00452DE8  54 1E 0F FE */	srwi r30, r0, 0x1f
/* 80455EAC 00452DEC  4B C9 BB 59 */	bl OSDisableScheduler
/* 80455EB0 00452DF0  7F E3 FB 78 */	mr r3, r31
/* 80455EB4 00452DF4  4B BC D7 01 */	bl destroy__7JKRHeapFv
/* 80455EB8 00452DF8  4B C9 BB 8D */	bl OSEnableScheduler
/* 80455EBC 00452DFC  7F C3 F3 78 */	mr r3, r30
/* 80455EC0 00452E00  4B C9 8D A1 */	bl OSRestoreInterrupts
/* 80455EC4 00452E04  BB 61 04 3C */	lmw r27, 0x43c(r1)
/* 80455EC8 00452E08  80 01 04 54 */	lwz r0, 0x454(r1)
/* 80455ECC 00452E0C  7C 08 03 A6 */	mtlr r0
/* 80455ED0 00452E10  38 21 04 50 */	addi r1, r1, 0x450
/* 80455ED4 00452E14  4E 80 00 20 */	blr 

.global load2D__Q211Pikmin2ARAM3MgrFv
load2D__Q211Pikmin2ARAM3MgrFv:
/* 80455ED8 00452E18  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80455EDC 00452E1C  7C 08 02 A6 */	mflr r0
/* 80455EE0 00452E20  90 01 01 24 */	stw r0, 0x124(r1)
/* 80455EE4 00452E24  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 80455EE8 00452E28  93 C1 01 18 */	stw r30, 0x118(r1)
/* 80455EEC 00452E2C  93 A1 01 14 */	stw r29, 0x114(r1)
/* 80455EF0 00452E30  7C 7D 1B 78 */	mr r29, r3
/* 80455EF4 00452E34  80 8D 87 20 */	lwz r4, sAramObject__7JKRAram@sda21(r13)
/* 80455EF8 00452E38  80 64 00 94 */	lwz r3, 0x94(r4)
/* 80455EFC 00452E3C  4B BC 3A CD */	bl getFreeSize__11JKRAramHeapFv
/* 80455F00 00452E40  3C 60 80 4F */	lis r3, "sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha
/* 80455F04 00452E44  3B C0 00 00 */	li r30, 0
/* 80455F08 00452E48  3B E3 DB 60 */	addi r31, r3, "sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l
.L_80455F0C:
/* 80455F0C 00452E4C  80 9F 00 00 */	lwz r4, 0(r31)
/* 80455F10 00452E50  38 61 00 08 */	addi r3, r1, 8
/* 80455F14 00452E54  4B EC 20 39 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 80455F18 00452E58  88 1D 00 04 */	lbz r0, 4(r29)
/* 80455F1C 00452E5C  38 81 00 08 */	addi r4, r1, 8
/* 80455F20 00452E60  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80455F24 00452E64  7C 00 00 34 */	cntlzw r0, r0
/* 80455F28 00452E68  54 05 D9 7E */	srwi r5, r0, 5
/* 80455F2C 00452E6C  4B FD CC 9D */	bl dvdToAram__Q24ARAM3MgrFPCcb
/* 80455F30 00452E70  3B DE 00 01 */	addi r30, r30, 1
/* 80455F34 00452E74  3B FF 00 04 */	addi r31, r31, 4
/* 80455F38 00452E78  28 1E 00 0D */	cmplwi r30, 0xd
/* 80455F3C 00452E7C  41 80 FF D0 */	blt .L_80455F0C
/* 80455F40 00452E80  3C 60 80 4F */	lis r3, "sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha
/* 80455F44 00452E84  3B C0 00 00 */	li r30, 0
/* 80455F48 00452E88  3B E3 DB 94 */	addi r31, r3, "sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l
.L_80455F4C:
/* 80455F4C 00452E8C  88 1D 00 04 */	lbz r0, 4(r29)
/* 80455F50 00452E90  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80455F54 00452E94  7C 00 00 34 */	cntlzw r0, r0
/* 80455F58 00452E98  80 9F 00 00 */	lwz r4, 0(r31)
/* 80455F5C 00452E9C  54 05 D9 7E */	srwi r5, r0, 5
/* 80455F60 00452EA0  4B FD CC 69 */	bl dvdToAram__Q24ARAM3MgrFPCcb
/* 80455F64 00452EA4  3B DE 00 01 */	addi r30, r30, 1
/* 80455F68 00452EA8  3B FF 00 04 */	addi r31, r31, 4
/* 80455F6C 00452EAC  28 1E 00 04 */	cmplwi r30, 4
/* 80455F70 00452EB0  41 80 FF DC */	blt .L_80455F4C
/* 80455F74 00452EB4  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80455F78 00452EB8  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 80455F7C 00452EBC  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 80455F80 00452EC0  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 80455F84 00452EC4  7C 08 03 A6 */	mtlr r0
/* 80455F88 00452EC8  38 21 01 20 */	addi r1, r1, 0x120
/* 80455F8C 00452ECC  4E 80 00 20 */	blr 

.global loadDemo__Q211Pikmin2ARAM3MgrFv
loadDemo__Q211Pikmin2ARAM3MgrFv:
/* 80455F90 00452ED0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80455F94 00452ED4  7C 08 02 A6 */	mflr r0
/* 80455F98 00452ED8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80455F9C 00452EDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80455FA0 00452EE0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80455FA4 00452EE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80455FA8 00452EE8  7C 7D 1B 78 */	mr r29, r3
/* 80455FAC 00452EEC  80 8D 87 20 */	lwz r4, sAramObject__7JKRAram@sda21(r13)
/* 80455FB0 00452EF0  80 64 00 94 */	lwz r3, 0x94(r4)
/* 80455FB4 00452EF4  4B BC 3A 15 */	bl getFreeSize__11JKRAramHeapFv
/* 80455FB8 00452EF8  3C 60 80 4F */	lis r3, "sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha
/* 80455FBC 00452EFC  3B C0 00 00 */	li r30, 0
/* 80455FC0 00452F00  3B E3 DB A4 */	addi r31, r3, "sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l
.L_80455FC4:
/* 80455FC4 00452F04  88 1D 00 04 */	lbz r0, 4(r29)
/* 80455FC8 00452F08  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80455FCC 00452F0C  7C 00 00 34 */	cntlzw r0, r0
/* 80455FD0 00452F10  80 9F 00 00 */	lwz r4, 0(r31)
/* 80455FD4 00452F14  54 05 D9 7E */	srwi r5, r0, 5
/* 80455FD8 00452F18  4B FD CB F1 */	bl dvdToAram__Q24ARAM3MgrFPCcb
/* 80455FDC 00452F1C  3B DE 00 01 */	addi r30, r30, 1
/* 80455FE0 00452F20  3B FF 00 04 */	addi r31, r31, 4
/* 80455FE4 00452F24  28 1E 00 13 */	cmplwi r30, 0x13
/* 80455FE8 00452F28  41 80 FF DC */	blt .L_80455FC4
/* 80455FEC 00452F2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80455FF0 00452F30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80455FF4 00452F34  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80455FF8 00452F38  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80455FFC 00452F3C  7C 08 03 A6 */	mtlr r0
/* 80456000 00452F40  38 21 00 20 */	addi r1, r1, 0x20
/* 80456004 00452F44  4E 80 00 20 */	blr 

.global loadItem__Q211Pikmin2ARAM3MgrFv
loadItem__Q211Pikmin2ARAM3MgrFv:
/* 80456008 00452F48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045600C 00452F4C  7C 08 02 A6 */	mflr r0
/* 80456010 00452F50  90 01 00 24 */	stw r0, 0x24(r1)
/* 80456014 00452F54  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80456018 00452F58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8045601C 00452F5C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80456020 00452F60  7C 7D 1B 78 */	mr r29, r3
/* 80456024 00452F64  80 8D 87 20 */	lwz r4, sAramObject__7JKRAram@sda21(r13)
/* 80456028 00452F68  80 64 00 94 */	lwz r3, 0x94(r4)
/* 8045602C 00452F6C  4B BC 39 9D */	bl getFreeSize__11JKRAramHeapFv
/* 80456030 00452F70  3C 60 80 4F */	lis r3, "sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha
/* 80456034 00452F74  3B C0 00 00 */	li r30, 0
/* 80456038 00452F78  3B E3 DB F0 */	addi r31, r3, "sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l
.L_8045603C:
/* 8045603C 00452F7C  88 1D 00 04 */	lbz r0, 4(r29)
/* 80456040 00452F80  80 6D 9B A8 */	lwz r3, gAramMgr@sda21(r13)
/* 80456044 00452F84  7C 00 00 34 */	cntlzw r0, r0
/* 80456048 00452F88  80 9F 00 00 */	lwz r4, 0(r31)
/* 8045604C 00452F8C  54 05 D9 7E */	srwi r5, r0, 5
/* 80456050 00452F90  4B FD CB 79 */	bl dvdToAram__Q24ARAM3MgrFPCcb
/* 80456054 00452F94  3B DE 00 01 */	addi r30, r30, 1
/* 80456058 00452F98  3B FF 00 04 */	addi r31, r31, 4
/* 8045605C 00452F9C  28 1E 00 18 */	cmplwi r30, 0x18
/* 80456060 00452FA0  41 80 FF DC */	blt .L_8045603C
/* 80456064 00452FA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80456068 00452FA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8045606C 00452FAC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80456070 00452FB0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80456074 00452FB4  7C 08 03 A6 */	mtlr r0
/* 80456078 00452FB8  38 21 00 20 */	addi r1, r1, 0x20
/* 8045607C 00452FBC  4E 80 00 20 */	blr 

.global __dt__Q211Pikmin2ARAM3MgrFv
__dt__Q211Pikmin2ARAM3MgrFv: # weak function
/* 80456080 00452FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456084 00452FC4  7C 08 02 A6 */	mflr r0
/* 80456088 00452FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045608C 00452FCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456090 00452FD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80456094 00452FD4  41 82 00 1C */	beq .L_804560B0
/* 80456098 00452FD8  3C A0 80 4F */	lis r5, __vt__Q211Pikmin2ARAM3Mgr@ha
/* 8045609C 00452FDC  7C 80 07 35 */	extsh. r0, r4
/* 804560A0 00452FE0  38 05 DC 50 */	addi r0, r5, __vt__Q211Pikmin2ARAM3Mgr@l
/* 804560A4 00452FE4  90 1F 00 00 */	stw r0, 0(r31)
/* 804560A8 00452FE8  40 81 00 08 */	ble .L_804560B0
/* 804560AC 00452FEC  4B BC E0 09 */	bl __dl__FPv
.L_804560B0:
/* 804560B0 00452FF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804560B4 00452FF4  7F E3 FB 78 */	mr r3, r31
/* 804560B8 00452FF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804560BC 00452FFC  7C 08 03 A6 */	mtlr r0
/* 804560C0 00453000  38 21 00 10 */	addi r1, r1, 0x10
/* 804560C4 00453004  4E 80 00 20 */	blr 
