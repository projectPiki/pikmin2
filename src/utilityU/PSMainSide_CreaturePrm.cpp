#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_PSMainSide_CreaturePrm_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049E0F0
    lbl_8049E0F0:
        .asciz "Opening1"
        .skip 3
    .global lbl_8049E0FC
    lbl_8049E0FC:
        .asciz "Opening2"
        .skip 3
    .global lbl_8049E108
    lbl_8049E108:
        .asciz "Staffroll"
        .skip 2
    .global lbl_8049E114
    lbl_8049E114:
        .asciz "PSMainSide_CreaturePrm.cpp"
        .skip 1
    .global lbl_8049E130
    lbl_8049E130:
        .asciz "P2Assert"
        .skip 3
    .global cVolMaxDist_Kehai__Q23PSM11CreaturePrm
    cVolMaxDist_Kehai__Q23PSM11CreaturePrm:
        .float 150.0
        .float 100.0
        .float 500.0
        .float 500.0
        .float 600.0
        .float 800.0
        .float 300.0
    .global cVolMaxDist_Battle__Q23PSM11CreaturePrm
    cVolMaxDist_Battle__Q23PSM11CreaturePrm:
        .float 210.0
        .float 140.0
        .float 700.0
        .float 700.0
        .float 840.0
        .float 1120.0
        .float 420.0
    .global cVolZeroDist_Kehai__Q23PSM11CreaturePrm
    cVolZeroDist_Kehai__Q23PSM11CreaturePrm:
        .float 300.0
        .float 200.0
        .float 1000.0
        .float 1000.0
        .float 1200.0
        .float 1600.0
        .float 600.0
    .global cVolZeroDist_Battle__Q23PSM11CreaturePrm
    cVolZeroDist_Battle__Q23PSM11CreaturePrm:
        .float 420.0
        .float 280.0
        .float 1400.0
        .float 1400.0
        .float 1680.0
        .float 2240.0
        .float 840.0
    .global cVolZeroDist_InnerSize_Kehai__Q23PSM11CreaturePrm
    cVolZeroDist_InnerSize_Kehai__Q23PSM11CreaturePrm:
        .float 233.99998
        .float 156.0
        .float 780.0
        .float 780.0
        .float 935.99994
        .float 1248.0
        .float 467.99997

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sThpDemoDinamics__3PSM
    sThpDemoDinamics__3PSM:
        .float 0.8
        .float 0.38
        .float 0.94
        .byte 0x01
        .skip 3
        .4byte lbl_8049E0F0
        .float 0.9
        .float 0.22
        .float 0.98
        .byte 0x01
        .skip 3
        .4byte lbl_8049E0FC
        .float 0.7
        .float 0.38
        .float 0.98
        .byte 0x01
        .skip 3
        .4byte lbl_80520DB8
        .float 0.8
        .float 0.44
        .float 0.99
        .byte 0x01
        .skip 3
        .4byte lbl_80520DC0
        .float 0.57
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_8049E108
        .float 0.5
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DC8
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DD0
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DD8
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DE0
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DE8
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DF0
        .float 0.7
        .float 1.0
        .float 1.0
        .byte 0x00
        .skip 3
        .4byte lbl_80520DF8
    .global __vt__Q23PSM11CreaturePrm
    __vt__Q23PSM11CreaturePrm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM11CreaturePrmFv
    .global "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"
    "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>Fv"

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sInsReal__3PSM
    sInsReal__3PSM:
        .skip 0x1C

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sCamFov__3PSM
    sCamFov__3PSM:
        .float 0.25
    .global sBoss_ViewDist__3PSM
    sBoss_ViewDist__3PSM:
        .float 1300.0
    .global sBoss_ViewDistVol__3PSM
    sBoss_ViewDistVol__3PSM:
        .float 0.3
    .global sBoss_DistMax__3PSM
    sBoss_DistMax__3PSM:
        .float 4000.0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sTHPDinamicsProc__3PSM
    sTHPDinamicsProc__3PSM:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520DB8
    lbl_80520DB8:
        .asciz "Ending1"
    .global lbl_80520DC0
    lbl_80520DC0:
        .asciz "Ending2"
    .global lbl_80520DC8
    lbl_80520DC8:
        .asciz "Play1"
        .skip 2
    .global lbl_80520DD0
    lbl_80520DD0:
        .asciz "Play2"
        .skip 2
    .global lbl_80520DD8
    lbl_80520DD8:
        .asciz "Play3"
        .skip 2
    .global lbl_80520DE0
    lbl_80520DE0:
        .asciz "Play4"
        .skip 2
    .global lbl_80520DE8
    lbl_80520DE8:
        .asciz "Play5"
        .skip 2
    .global lbl_80520DF0
    lbl_80520DF0:
        .asciz "Play6"
        .skip 2
    .global lbl_80520DF8
    lbl_80520DF8:
        .asciz "Crime"
        .skip 2
    .global lbl_80520E00
    lbl_80520E00:
        .float 0.0
    .global lbl_80520E04
    lbl_80520E04:
        .float 1.0
    .global lbl_80520E08
    lbl_80520E08:
        .float -1.0
    .global lbl_80520E0C
    lbl_80520E0C:
        .float 400.0
    .global lbl_80520E10
    lbl_80520E10:
        .float 0.8
    .global lbl_80520E14
    lbl_80520E14:
        .float 700.0
    .global cNoukouDistance__Q23PSM11CreaturePrm
    cNoukouDistance__Q23PSM11CreaturePrm:
        .float 300.0
    .global cSeFxMix__Q23PSM11CreaturePrm
    cSeFxMix__Q23PSM11CreaturePrm:
        .float 0.07
    .global cSeFxMix_cave__Q23PSM11CreaturePrm
    cSeFxMix_cave__Q23PSM11CreaturePrm:
        .float 1.0
*/

namespace PSM {

/*
 * --INFO--
 * Address:	804724A0
 * Size:	000070
 */
void THPDinamicsProc::setSetting(PSM::THP_ID)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	cmpwi    r31, 0xc
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_804724E0
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x76
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804724E0:
	mulli    r5, r31, 0x14
	lis      r4, sThpDemoDinamics__3PSM@ha
	mr       r3, r30
	addi     r0, r4, sThpDemoDinamics__3PSM@l
	add      r4, r0, r5
	bl       setSetting__Q23PSM15THPDinamicsProcFPQ23PSM15THPDemoDinamics
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
 * Address:	80472510
 * Size:	000110
 */
void THPDinamicsProc::setSetting(PSM::THPDemoDinamics*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r31, 0(r3)
	bne      lbl_80472548
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x7d
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472548:
	lfs      f1, 4(r31)
	li       r0, 0
	lfs      f0, lbl_80520E00@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80472570
	lfs      f0, lbl_80520E04@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80472570
	li       r0, 1

lbl_80472570:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80472594
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x7e
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472594:
	lfs      f1, 8(r31)
	li       r0, 0
	lfs      f0, lbl_80520E00@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_804725BC
	lfs      f0, lbl_80520E04@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_804725BC
	li       r0, 1

lbl_804725BC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_804725E0
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x7f
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804725E0:
	lfs      f1, 0(r31)
	lfs      f0, lbl_80520E00@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8047260C
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x80
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8047260C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472620
 * Size:	000130
 */
void THPDinamicsProc::dinamics(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r0, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_80472668
	lis      r3, lbl_8049E114@ha
	lis      r5, lbl_8049E130@ha
	addi     r3, r3, lbl_8049E114@l
	li       r4, 0x89
	addi     r5, r5, lbl_8049E130@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472668:
	lwz      r3, 0(r31)
	lbz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_80472728
	lfs      f0, lbl_80520E00@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8047268C
	li       r0, 1
	b        lbl_80472690

lbl_8047268C:
	li       r0, 0

lbl_80472690:
	cmpwi    r0, 0
	beq      lbl_804726A0
	lfs      f0, lbl_80520E08@sda21(r2)
	fmuls    f31, f31, f0

lbl_804726A0:
	lfs      f0, 4(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_804726DC
	lfs      f2, 8(r3)
	fdivs    f0, f2, f0
	fmuls    f1, f31, f0
	fcmpo    cr0, f1, f2
	ble      lbl_804726C8
	fmr      f1, f2
	b        lbl_80472714

lbl_804726C8:
	lfs      f0, lbl_80520E00@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80472714
	fmr      f1, f0
	b        lbl_80472714

lbl_804726DC:
	lfs      f3, lbl_80520E04@sda21(r2)
	lfs      f4, 8(r3)
	fsubs    f0, f3, f0
	fsubs    f1, f3, f4
	fsubs    f2, f31, f3
	fdivs    f0, f1, f0
	fmadds   f1, f2, f0, f3
	fcmpo    cr0, f1, f4
	bge      lbl_80472708
	fmr      f1, f4
	b        lbl_80472714

lbl_80472708:
	fcmpo    cr0, f1, f3
	ble      lbl_80472714
	fmr      f1, f3

lbl_80472714:
	cmpwi    r0, 0
	beq      lbl_8047272C
	lfs      f0, lbl_80520E08@sda21(r2)
	fmuls    f1, f1, f0
	b        lbl_8047272C

lbl_80472728:
	fmr      f1, f31

lbl_8047272C:
	lfs      f0, 0(r3)
	fmuls    f1, f1, f0
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472750
 * Size:	000064
 */
CreaturePrm::~CreaturePrm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8047279C
	lis      r3, __vt__Q23PSM11CreaturePrm@ha
	addi     r0, r3, __vt__Q23PSM11CreaturePrm@l
	stw      r0, 0(r31)
	beq      lbl_8047278C
	lis      r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@ha
	li       r0, 0
	addi     r3, r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@l
	stw      r3, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@sda21(r13)

lbl_8047278C:
	extsh.   r0, r4
	ble      lbl_8047279C
	mr       r3, r31
	bl       __dl__FPv

lbl_8047279C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace PSSystem {

} // namespace PSSystem

/*
 * --INFO--
 * Address:	804727B4
 * Size:	000050
 */
void SingletonBase<PSM::CreaturePrm>::~SingletonBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_804727EC
	lis      r5, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@ha
	extsh.   r0, r4
	addi     r4, r5, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@l
	li       r0, 0
	stw      r4, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@sda21(r13) ble
lbl_804727EC bl       __dl__FPv

lbl_804727EC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSM

/*
 * --INFO--
 * Address:	80472804
 * Size:	0000A0
 */
void __sinit_PSMainSide_CreaturePrm_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@ha
	lis      r4, sInsReal__3PSM@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@l
	lfs      f5, lbl_80520E00@sda21(r2)
	lis      r3, __vt__Q23PSM11CreaturePrm@ha
	stw      r31, 0xc(r1)
	li       r5, 0
	lfs      f1, lbl_80520E04@sda21(r2)
	stwu     r0, sInsReal__3PSM@l(r4)
	addi     r0, r3, __vt__Q23PSM11CreaturePrm@l
	lfs      f2, lbl_80520E0C@sda21(r2)
	stw      r5, sTHPDinamicsProc__3PSM@sda21(r13)
	mr       r31, r4
	lfs      f3, lbl_80520E10@sda21(r2)
	addi     r3, r4, 4
	stw      r4,
	"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@sda21(r13) lfs
	f4, lbl_80520E14@sda21(r2) stw      r0, 0(r4) stfs     f1, 4(r4) stfs f5,
	8(r4) stfs     f5, 0xc(r4) stfs     f5, 0x10(r4) stfs     f5, 0x14(r4) stb
	r5, 0x18(r4) stb      r5, 0x19(r4) bl
	set__Q36PSGame10SoundTable11SePerspInfoFfffff lis      r3,
	__dt__Q23PSM11CreaturePrmFv@ha lis      r5, lbl_80506A80@ha addi     r4, r3,
	__dt__Q23PSM11CreaturePrmFv@l mr       r3, r31 addi     r5, r5,
	lbl_80506A80@l bl       __register_global_object lwz      r0, 0x14(r1) lwz
	r31, 0xc(r1) mtlr     r0 addi     r1, r1, 0x10 blr
	*/
}
