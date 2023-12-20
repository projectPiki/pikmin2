#include "types.h"
#include "Dolphin/PPCArch.h"

union FpscrUnion {
	f64 f;
	struct {
		u32 fpscr_pad;
		u32 fpscr;
	} u;
};

#define HID0_SPD 0x00000200 // Speculative cache access enable (0 enable)

void PPCMthid0(u32 newHID0);

/*
 * --INFO--
 * Address:	800D4558
 * Size:	000008
 */
ASM u32 PPCMfmsr(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mfmsr r3
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4560
 * Size:	000008
 */
ASM void PPCMtmsr(register u32 newMSR)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtmsr newMSR
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCOrMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCAndMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PPCAndCMsr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4568
 * Size:	000008
 */
ASM u32 PPCMfhid0(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mfspr r3, HID0
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4570
 * Size:	000008
 */
ASM void PPCMthid0(register u32 newHID0)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr HID0, newHID0
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfhid1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4578
 * Size:	000008
 */
ASM u32 PPCMfl2cr(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mfspr r3, L2CR
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4580
 * Size:	000008
 */
ASM void PPCMtl2cr(register u32 newL2cr) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr L2CR, newL2cr
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4588
 * Size:	000008
 */
WEAKFUNC ASM void PPCMtdec(register u32 newDec)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtdec newDec
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4590
 * Size:	000008
 */
ASM void PPCSync(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	sc
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void PPCEieio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4598
 * Size:	000014
 */
WEAKFUNC ASM void PPCHalt(void) // spins infinitely
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	sync

_spin:
	nop
	li r3, 0
	nop
	b _spin

	// NEVER REACHED
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfmmcr0(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45AC
 * Size:	000008
 */
ASM void PPCMtmmcr0(register u32 newMmcr0)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       MMCR0, newMmcr0
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfmmcr1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45B4
 * Size:	000008
 */
ASM void PPCMtmmcr1(register u32 newMmcr1)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       MMCR1, newMmcr1
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45BC
 * Size:	000008
 */
ASM void PPCMtpmc1(register u32 newPmc1)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       PMC1, newPmc1
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45C4
 * Size:	000008
 */
ASM void PPCMtpmc2(register u32 newPmc2)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       PMC2, newPmc2
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45CC
 * Size:	000008
 */
ASM void PPCMtpmc3(register u32 newPmc3)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       PMC3, newPmc3
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpmc4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45D4
 * Size:	000008
 */
ASM void PPCMtpmc4(register u32 newPmc4)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr       PMC4, newPmc4
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfsia(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtsia(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D45DC
 * Size:	000020
 */
u32 PPCMffpscr(void)
{
	union FpscrUnion m;

#ifdef __MWERKS__ // clang-format off
	asm {
		mffs fp31
		stfd fp31, m.f;
	}
#endif // clang-format on

	return m.u.fpscr;
}

/*
 * --INFO--
 * Address:	800D45FC
 * Size:	000028
 */
void PPCMtfpscr(register u32 newFPSCR)
{
	union FpscrUnion m;

#ifdef __MWERKS__ // clang-format off
	asm {
		li    r4, 0
		stw   r4, m.u.fpscr_pad;
		stw   newFPSCR, m.u.fpscr
		lfd   fp31, m.f
		mtfsf 0xff, fp31
	}
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4624
 * Size:	000008
 */
ASM u32 PPCMfhid2(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mfspr r3, 920
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D462C
 * Size:	000008
 */
ASM void PPCMthid2(register u32 newhid2) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr 920, newhid2
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 * UNUSED
 */
ASM u32 PPCMfwpar(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	sync
	mfspr r3, 921
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4634
 * Size:	000008
 */
ASM void PPCMtwpar(register u32 newwpar)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtspr WPAR, newwpar
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdmaU(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfdmaL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtdmaU(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMtdmaL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PPCMfpvr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void PPCEnableSpeculation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D463C
 * Size:	000028
 */
void PPCDisableSpeculation(void) { PPCMthid0(PPCMfhid0() | HID0_SPD); }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 * UNUSED
 */
ASM void PPCSetFpIEEEMode(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtfsb0      29
	blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	800D4664
 * Size:	000008
 */
ASM void PPCSetFpNonIEEEMode(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mtfsb1      29
	blr
#endif // clang-format on
}
