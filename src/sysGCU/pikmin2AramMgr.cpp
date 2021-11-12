#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049C410
    lbl_8049C410:
        .asciz "pikmin2AramMgr.cpp"
        .skip 0x1
    str_resground:
        .asciz "res_ground.szs"
        .skip 0x1
    str_rescave:
        .asciz "res_cave.szs"
        .skip 0x3
    str_res_SMenuMap:
        .asciz "res_s_menu_map.szs"
        .skip 0x1
    str_res_SMenuPause:
        .asciz "res_s_menu_pause.szs"
        .skip 0x3
    str_res_SMenuItem:
        .asciz "res_s_menu_item.szs"
    str_res_Ch1P:
        .asciz "res_challenge_1p.szs"
        .skip 0x3
    str_res_Ch2P:
        .asciz "res_challenge_2p.szs"
        .skip 0x3
    str_res_VS:
        .asciz "res_vs.szs"
        .skip 0x1
    str_res_SMenuPauseDoukutu:
        .asciz "res_s_menu_pause_doukutu.szs"
        .skip 0x3
    str_res_SMenuPauseVS:
        .asciz "res_s_menu_pause_VS.szs"
    str_res_AnaDemo:
        .asciz "res_ana_demo.szs"
        .skip 0x3
    str_res_Contena:
        .asciz "res_contena.szs"
    str_res_Ufo:
        .asciz "res_ufo.szs"
    str_mIMG_tutorial:
        .asciz "/new_screen/cmn/res_map_image_tutorial.szs"
        .skip 0x1
    str_mIMG_forest:
        .asciz "/new_screen/cmn/res_map_image_forest.szs"
        .skip 0x3
    str_mIMG_yakushima:
        .asciz "/new_screen/cmn/res_map_image_yakushima.szs"
    str_mIMG_last:
        .asciz "/new_screen/cmn/res_map_image_last.szs"
        .skip 0x1
    str_m_s00:
        .asciz "/user/Mukki/movie/s00_coursein/demo.szs"
    str_m_s0B:
        .asciz "/user/Mukki/movie/s0B_cv_coursein/demo.szs"
        .skip 0x1
    str_m_s09:
        .asciz "/user/Mukki/movie/s09_holein/demo.szs"
        .skip 0x2
    str_m_g2F:
        .asciz "/user/Mukki/movie/g2F_appear_hole/demo.szs"
        .skip 0x1
    str_m_g30:
        .asciz "/user/Mukki/movie/g30_appear_fountain/demo.szs"
        .skip 0x1
    str_m_s10:
        .asciz "/user/Mukki/movie/s10_suck_treasure/demo.szs"
        .skip 0x3
    str_m_s17:
        .asciz "/user/Mukki/movie/s17_suck_equipment/demo.szs"
        .skip 0x2
    str_m_s22_e:
        .asciz "/user/Mukki/movie/s22_cv_suck_equipment/demo.szs"
        .skip 0x3
    str_m_s22_t:
        .asciz "/user/Mukki/movie/s22_cv_suck_treasure/demo.szs"
    str_m_s01:
        .asciz "/user/Mukki/movie/s01_dayend/demo.szs"
        .skip 0x2
    str_m_s02:
        .asciz "/user/Mukki/movie/s02_dayend_result/demo.szs"
        .skip 0x3
    str_m_s03:
        .asciz "/user/Mukki/movie/s03_orimadown/demo.szs"
        .skip 0x3
    str_m_s04:
        .asciz "/user/Mukki/movie/s04_dayend_orimadown/demo.szs"
    str_m_s05:
        .asciz "/user/Mukki/movie/s05_pikminzero/demo.szs"
        .skip 0x2
    str_m_s06:
        .asciz "/user/Mukki/movie/s06_dayend_pikminzero/demo.szs"
        .skip 0x3
    str_m_s0C:
        .asciz "/user/Mukki/movie/s0C_cv_escape/demo.szs"
        .skip 0x3
    str_m_s0E:
        .asciz "/user/Mukki/movie/s0E_return_cave/demo.szs"
        .skip 0x1
    str_m_s12:
        .asciz "/user/Mukki/movie/s12_cv_giveup/demo.szs"
        .skip 0x3
    str_m_s21:
        .asciz "/user/Mukki/movie/s21_dayend_takeoff/demo.szs"
        .skip 0x2
    str_k_onyon_A:
        .asciz "user/Kando/onyon/arc.szs"
        .skip 0x3
    str_k_onyon_T:
        .asciz "user/Kando/onyon/texts.szs"
        .skip 0x1
    str_k_pod_A:
        .asciz "user/Kando/pod/arc.szs"
        .skip 0x1
    str_k_pod_T:
        .asciz "user/Kando/pod/texts.szs"
        .skip 0x3
    str_k_pod_gold_A:
        .asciz "user/Kando/pod_gold/arc.szs"
    str_k_pod_gold_T:
        .asciz "user/Kando/pod_gold/texts.szs"
        .skip 0x2
    str_k_ufo_A:
        .asciz "user/Kando/ufo/arc.szs"
        .skip 0x1
    str_k_ufo_T:
        .asciz "user/Kando/ufo/texts.szs"
        .skip 0x3
    str_k_ufo_gold_A:
        .asciz "user/Kando/ufo_gold/arc.szs"
    str_k_ufo_gold_T:
        .asciz "user/Kando/ufo_gold/texts.szs"
        .skip 0x2
    str_k_gate_A:
        .asciz "user/Kando/objects/gates/gate-arc.szs"
        .skip 0x2
    str_k_gate_T:
        .asciz "user/Kando/objects/gates/gate-texts.szs"
    str_k_egate_A:
        .asciz "user/Kando/objects/gates/e-gate-arc.szs"
    str_k_egate_T:
        .asciz "user/Kando/objects/gates/e-gate-texts.szs"
        .skip 0x2
    str_k_dhole_A:
        .asciz "user/Kando/objects/dungeon_hole/arc.szs"
    str_k_dhole_T:
        .asciz "user/Kando/objects/dungeon_hole/texts.szs"
        .skip 0x2
    str_k_pikihead_A:
        .asciz "user/Kando/objects/pikihead/arc.szs"
    str_k_pikihead_T:
        .asciz "user/Kando/objects/pikihead/texts.szs"
        .skip 0x2
    str_k_sBridge_A:
        .asciz "user/Kando/bridge/s_bridge/arc.szs"
        .skip 0x1
    str_k_sBridge_T:
        .asciz "user/Kando/bridge/s_bridge/texts.szs"
        .skip 0x3
    str_k_slopeU_A:
        .asciz "user/Kando/bridge/slope_u/arc.szs"
        .skip 0x2
    str_k_slopeU_T:
        .asciz "user/Kando/bridge/slope_u/texts.szs"
    str_k_lBridge_A:
        .asciz "user/Kando/bridge/l_bridge/arc.szs"
        .skip 0x1
    str_k_lBridge_T:
        .asciz "user/Kando/bridge/l_bridge/texts.szs"
        .skip 0x3
    str_queenchappy_btk:
        .asciz "/enemy/data/Queen/queenchappy_model.btk"
    str_queen_model:
        .asciz "/enemy/data/Queen/model.szs"
    str_queen_anim:
        .asciz "/enemy/data/Queen/anim.szs"
        .skip 0x1
    str_bigtreasure_model:
        .asciz "/enemy/data/BigTreasure/model.szs"
        .skip 0x2
    str_bigtreasure_anim:
        .asciz "/enemy/data/BigTreasure/anim.szs"
        .skip 0x3
    str_baby_model:
        .asciz "/enemy/data/Baby/model.szs"
        .skip 0x1
    str_baby_anim:
        .asciz "/enemy/data/Baby/anim.szs"
        .skip 0x2
    .global lbl_8049CD54
    lbl_8049CD54:
        .asciz "P2Assert"
        .skip 0x3
    str_enemyResList:
        .asciz "/enemy/enemyResList.txt"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"
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
    .global "sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"
    "sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@":
        .4byte str_mIMG_tutorial
        .4byte str_mIMG_forest
        .4byte str_mIMG_yakushima
        .4byte str_mIMG_last
    .global "sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"
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
    .global "sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"
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
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global gPikmin2AramMgr
    gPikmin2AramMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520BE0
    lbl_80520BE0:
        .asciz "EOF"
*/

/*
 * --INFO--
 * Address:	80455C30
 * Size:	000060
 */
void Pikmin2ARAM::Mgr::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, gPikmin2AramMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80455C64
	lis      r3, lbl_8049C410@ha
	lis      r5, lbl_8049CD54@ha
	addi     r3, r3, lbl_8049C410@l
	li       r4, 0xbe
	addi     r5, r5, lbl_8049CD54@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455C64:
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80455C7C
	bl       __ct__Q211Pikmin2ARAM3MgrFv
	mr       r0, r3

lbl_80455C7C:
	stw      r0, gPikmin2AramMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455C90
 * Size:	000018
 */
Pikmin2ARAM::Mgr::Mgr(void)
{
	/*
	lis      r4, __vt__Q211Pikmin2ARAM3Mgr@ha
	li       r0, 0
	addi     r4, r4, __vt__Q211Pikmin2ARAM3Mgr@l
	stw      r4, 0(r3)
	stb      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455CA8
 * Size:	000008
 */
void Pikmin2ARAM::Mgr::setLoadPermission(bool a1)
{
	// Generated from stb r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Pikmin2ARAM::Mgr::isEntryOnly(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80455CB0
 * Size:	000060
 */
void Pikmin2ARAM::Mgr::load(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       loadEnemy__Q211Pikmin2ARAM3MgrFv
	mr       r3, r30
	bl       load2D__Q211Pikmin2ARAM3MgrFv
	mr       r3, r30
	bl       loadDemo__Q211Pikmin2ARAM3MgrFv
	mr       r3, r30
	bl       loadItem__Q211Pikmin2ARAM3MgrFv
	mr       r3, r30
	bl       dump__Q211Pikmin2ARAM3MgrFv
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455D10
 * Size:	000024
 */
void Pikmin2ARAM::Mgr::dump(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, gAramMgr@sda21(r13)
	bl       dump__Q24ARAM3MgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455D34
 * Size:	0001A4
 */
void Pikmin2ARAM::Mgr::loadEnemy(void)
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	lis      r4, lbl_8049C410@ha
	stw      r0, 0x454(r1)
	stmw     r27, 0x43c(r1)
	mr       r30, r3
	addi     r28, r4, lbl_8049C410@l
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r29, r0, 0x1f
	bl       OSDisableScheduler
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	addic.   r27, r3, -31040
	bne      lbl_80455D88
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455D88:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r3, r27
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	or.      r27, r3, r3
	bne      lbl_80455DB4
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x125
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455DB4:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x78a0
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	or.      r31, r3, r3
	bne      lbl_80455DE0
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x127
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455DE0:
	mr       r3, r27
	bl       destroy__7JKRHeapFv
	bl       OSEnableScheduler
	mr       r3, r29
	bl       OSRestoreInterrupts
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 0
	addi     r3, r28, 0x950
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 1
	li       r6, 0
	lwz      r7, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r4, r3
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80455E50
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80455E50:
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r3)
	bl       getFreeSize__11JKRAramHeapFv

lbl_80455E5C:
	addi     r3, r1, 0x10
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	addi     r4, r2, lbl_80520BE0@sda21
	mr       r27, r3
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80455E9C
	lbz      r0, 4(r30)
	mr       r4, r27
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	b        lbl_80455E5C

lbl_80455E9C:
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r30, r0, 0x1f
	bl       OSDisableScheduler
	mr       r3, r31
	bl       destroy__7JKRHeapFv
	bl       OSEnableScheduler
	mr       r3, r30
	bl       OSRestoreInterrupts
	lmw      r27, 0x43c(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455ED8
 * Size:	0000B8
 */
void Pikmin2ARAM::Mgr::load2D(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	mr       r29, r3
	lwz      r4, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r4)
	bl       getFreeSize__11JKRAramHeapFv
	lis      r3,
"sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha li       r30,
0 addi     r31, r3,
"sAramResName2D__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l

lbl_80455F0C:
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	lbz      r0, 4(r29)
	addi     r4, r1, 8
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 0xd
	blt      lbl_80455F0C
	lis      r3,
"sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha li r30, 0
	addi     r31, r3,
"sAramResName2DCmn__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l

lbl_80455F4C:
	lbz      r0, 4(r29)
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	lwz      r4, 0(r31)
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_80455F4C
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455F90
 * Size:	000078
 */
void Pikmin2ARAM::Mgr::loadDemo(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r4)
	bl       getFreeSize__11JKRAramHeapFv
	lis      r3,
"sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha li       r30, 0
	addi     r31, r3,
"sAramResDemo__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l

lbl_80455FC4:
	lbz      r0, 4(r29)
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	lwz      r4, 0(r31)
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 0x13
	blt      lbl_80455FC4
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80456008
 * Size:	000078
 */
void Pikmin2ARAM::Mgr::loadItem(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r4)
	bl       getFreeSize__11JKRAramHeapFv
	lis      r3,
"sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@ha li       r30, 0
	addi     r31, r3,
"sAramResItem__Q211Pikmin2ARAM28@unnamed@pikmin2AramMgr_cpp@"@l

lbl_8045603C:
	lbz      r0, 4(r29)
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	lwz      r4, 0(r31)
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 0x18
	blt      lbl_8045603C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80456080
 * Size:	000048
 */
Pikmin2ARAM::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_804560B0
	lis      r5, __vt__Q211Pikmin2ARAM3Mgr@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__Q211Pikmin2ARAM3Mgr@l
	stw      r0, 0(r31)
	ble      lbl_804560B0
	bl       __dl__FPv

lbl_804560B0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
