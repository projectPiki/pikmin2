#include "PSM/THPDinamics.h"
#include "PSM/CreaturePrm.h"

namespace PSM {

static CreaturePrm sInsReal;

// THPDinamicsProc sTHPDinamicsProc;

// clang-format off
THPDemoDinamics sTHPDemoDinamics[THP_COUNT]
    = { { 0.8f,  0.38f, 0.94f, true,   "Opening1" }, 
		{ 0.9f,  0.22f, 0.98f, true,   "Opening2" },
		{ 0.7f,  0.38f, 0.98f, true,   "Ending1" },
	    { 0.8f,  0.44f, 0.99f, true,   "Ending2" },
		{ 0.57f, 1.00f, 1.00f, false,  "Staffroll" },
		{ 0.5f,  1.00f, 1.00f, false,  "Play1" },
	    { 0.7f,  1.00f, 1.00f, false,  "Play2" },
		{ 0.7f,  1.00f, 1.00f, false,  "Play3" },
		{ 0.7f,  1.00f, 1.00f, false,  "Play4" },
		{ 0.7f,  1.00f, 1.00f, false,  "Play5" },
		{ 0.7f,  1.00f, 1.00f, false,  "Play6" }, 
		{ 0.7f,  1.00f, 1.00f, false,  "Crime" }, };
// clang-format on

/*
 * --INFO--
 * Address:	804724A0
 * Size:	000070
 */
void THPDinamicsProc::setSetting(THP_ID id)
{
	P2ASSERTLINE(118, id < THP_COUNT);
	setSetting(&sTHPDemoDinamics[id]);
}

const f32 cVolMaxDist_Kehai[7]            = { 150.0f, 100.0f, 500.0f, 500.0f, 600.0f, 800.0f, 300.0f };
const f32 cVolMaxDist_Battle[7]           = { 210.0f, 140.0f, 700.0f, 700.0f, 840.0f, 1120.0f, 420.0f };
const f32 cVolZeroDist_Kehai[7]           = { 300.0f, 200.0f, 1000.0f, 1000.0f, 1200.0f, 1600.0f, 600.0f };
const f32 cVolZeroDist_Battle[7]          = { 420.0f, 280.0f, 1400.0f, 1400.0f, 1680.0f, 2240.0f, 840.0f };
const f32 cVolZeroDist_InnerSize_Kehai[7] = { 233.99998f, 156.0f, 780.0f, 780.0f, 935.99996f, 1248.0f, 467.99998f };

/*
 * --INFO--
 * Address:	80472510
 * Size:	000110
 */
void THPDinamicsProc::setSetting(THPDemoDinamics* dyn)
{
	mDemoInfo = dyn;
	P2ASSERTLINE(125, dyn);
	P2ASSERTBOUNDSLINE2(126, 0.0f, dyn->_04, 1.0f);
	P2ASSERTBOUNDSLINE2(127, 0.0f, dyn->_08, 1.0f);
	P2ASSERTLINE(128, dyn->_00 > 0.0f);
}

/*
 * --INFO--
 * Address:	80472620
 * Size:	000130
 */
f32 THPDinamicsProc::dinamics(f32 input)
{
	P2ASSERTLINE(137, mDemoInfo);
	THPDemoDinamics* info = mDemoInfo;
	if (info->mEnableDyn) {
		// nasty
	}
	return input * info->_00;
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

} // namespace PSM
