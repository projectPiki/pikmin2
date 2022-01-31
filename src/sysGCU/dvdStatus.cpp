#include "Dolphin/dvd.h"
#include "Dolphin/pad.h"
#include "DvdStatus.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "System.h"
#include "types.h"

extern "C" {
void onDvdErrorOccured__Q33ebi4Save4TMgrFv();
void onDvdErrorRecovered__Q33ebi4Save4TMgrFv();
void onDvdErrorOccured__Q33ebi10FileSelect4TMgrFv();
void onDvdErrorRecovered__Q33ebi10FileSelect4TMgrFv();
}

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .balign 8
    lbl_80499DA8:
        .asciz "dvdStatus"
    .balign 4
    lbl_80499DB4:
        .asciz "dvdStatus.cpp"
    .balign 4
    lbl_80499DC4:
        .asciz "no display.\n"
    .balign 4
    lbl_80499DD4:
        .asciz "display changed !\n"
    .balign 4
    lbl_80499DE8:
        .asciz "no ROM font\n"
    .balign 4
    lbl_80499DF8:
        .asciz "unknown language. %d"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    lbl_804EBE20:
        .4byte lbl_8042A6C4
        .4byte lbl_8042A6D4
        .4byte lbl_8042A6E4
        .4byte lbl_8042A724
        .4byte lbl_8042A6F4
        .4byte lbl_8042A704
        .4byte lbl_8042A714

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_80520570:
        .float 0.0
    lbl_80520574:
        .float 40.0
    lbl_80520578:
        .float 200.0
    .balign 8
    lbl_80520580:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8042A314
 * Size:	000014
 */
DvdStatus::DvdStatus()
{
	m_fader = nullptr;
	_00     = -1;
}

/*
 * --INFO--
 * Address:	8042A328
 * Size:	00002C
 */
bool DvdStatus::isErrorOccured()
{
	bool retval = false;
	if (!((m_fader == nullptr) || (sys->m_cardMgr->_E4 & 1))) {
		retval = true;
	}
	return retval;
}

/*
 * --INFO--
 * Address:	8042A354
 * Size:	0001F0
 */
void DvdStatus::update()
{
	int status = DVDGetDriveStatus();
	switch (status) {
	case -1:
		_00 = 1;
		break;
	case 11:
		_00 = 2;
		break;
	case 4:
		_00 = 3;
		break;
	case 5:
		_00 = 4;
		break;
	case 6:
		_00 = 5;
		break;
	default:
		if (_00 == -1 || status != 1) {
			_00 = -1;
		}
		break;
	}
	if (m_fader == nullptr) {
		if (0 < _00) {
			JFWDisplay* display = sys->m_display;
			// This is line 170? Really???
			JUT_ASSERTLINE(170, display != nullptr, "no display.\n");
			m_fader          = display->m_fader;
			display->m_fader = nullptr;
			PADControlMotor(0, 2);
			PADControlMotor(1, 2);
			PADControlMotor(2, 2);
			PADControlMotor(3, 2);
			sys->disableCPULockDetector();
			_08 = status;
			// ebi::FileSelect::TMgr::onDvdErrorOccured();
			onDvdErrorOccured__Q33ebi10FileSelect4TMgrFv();
			// ebi::Save::TMgr::onDvdErrorOccured();
			onDvdErrorOccured__Q33ebi4Save4TMgrFv();
		}
	} else {
		if (_00 == -1) {
			JFWDisplay* display = sys->m_display;
			// This is line 204? Really???
			JUT_ASSERTLINE(204, display != nullptr, "no display.\n");
			// Line 197 now???
			JUT_ASSERTLINE(197, display->m_fader != nullptr, "display changed !\n");
			display->m_fader = m_fader;
			m_fader          = nullptr;
			sys->enableCPULockDetector(_08);
			// ebi::FileSelect::TMgr::onDvdErrorRecovered();
			onDvdErrorRecovered__Q33ebi10FileSelect4TMgrFv();
			// ebi::Save::TMgr::onDvdErrorRecovered();
			onDvdErrorRecovered__Q33ebi4Save4TMgrFv();
		}
	}
	// return m_fader != nullptr???
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80499DA8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r4, lbl_80499DA8@l
	stw      r29, 0x14(r1)
	bl       DVDGetDriveStatus
	cmpwi    r3, -1
	bne      lbl_8042A390
	li       r0, 1
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A390:
	cmpwi    r3, 0xb
	bne      lbl_8042A3A4
	li       r0, 2
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A3A4:
	cmpwi    r3, 4
	bne      lbl_8042A3B8
	li       r0, 3
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A3B8:
	cmpwi    r3, 5
	bne      lbl_8042A3CC
	li       r0, 4
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A3CC:
	cmpwi    r3, 6
	bne      lbl_8042A3E0
	li       r0, 5
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A3E0:
	lwz      r0, 0(r31)
	cmpwi    r0, -1
	beq      lbl_8042A400
	cmpwi    r3, 1
	bne      lbl_8042A400
	li       r0, 0
	stw      r0, 0(r31)
	b        lbl_8042A408

lbl_8042A400:
	li       r0, -1
	stw      r0, 0(r31)

lbl_8042A408:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_8042A4A0
	lwz      r0, 0(r31)
	cmpwi    r0, 0
	ble      lbl_8042A518
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x4c(r3)
	cmplwi   r4, 0
	beq      lbl_8042A444
	lwz      r3, 4(r4)
	li       r0, 0
	stw      r3, 4(r31)
	stw      r0, 4(r4)
	b        lbl_8042A458

lbl_8042A444:
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0xaa
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042A458:
	li       r3, 0
	li       r4, 2
	bl       PADControlMotor
	li       r3, 1
	li       r4, 2
	bl       PADControlMotor
	li       r3, 2
	li       r4, 2
	bl       PADControlMotor
	li       r3, 3
	li       r4, 2
	bl       PADControlMotor
	lwz      r3, sys@sda21(r13)
	bl       disableCPULockDetector__6SystemFv
	stw      r3, 8(r31)
	bl       onDvdErrorOccured__Q33ebi10FileSelect4TMgrFv
	bl       onDvdErrorOccured__Q33ebi4Save4TMgrFv
	b        lbl_8042A518

lbl_8042A4A0:
	lwz      r0, 0(r31)
	cmpwi    r0, -1
	bne      lbl_8042A518
	lwz      r3, sys@sda21(r13)
	lwz      r29, 0x4c(r3)
	cmplwi   r29, 0
	beq      lbl_8042A4F0
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	beq      lbl_8042A4DC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x2c
	li       r4, 0xc5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042A4DC:
	lwz      r3, 4(r31)
	li       r0, 0
	stw      r3, 4(r29)
	stw      r0, 4(r31)
	b        lbl_8042A504

lbl_8042A4F0:
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0xcc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042A504:
	lwz      r3, sys@sda21(r13)
	lwz      r4, 8(r31)
	bl       enableCPULockDetector__6SystemFi
	bl       onDvdErrorRecovered__Q33ebi10FileSelect4TMgrFv
	bl       onDvdErrorRecovered__Q33ebi4Save4TMgrFv

lbl_8042A518:
	lwz      r3, 4(r31)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A544
 * Size:	0002B8
 */
void DvdStatus::draw()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r29, r3
	lis      r3, lbl_80499DA8@ha
	lwz      r0, 4(r29)
	addi     r31, r3, lbl_80499DA8@l
	cmplwi   r0, 0
	beq      lbl_8042A590
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xe4(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8042A590
	li       r4, 1

lbl_8042A590:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8042A7E0
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	bl       setupJ2DOrthoGraphDefault__8GraphicsFv
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwzu     r12, 0xbc(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r6, 0x80
	li       r5, 0xff
	stb      r3, 0x18(r1)
	lis      r0, 0x4330
	lfs      f1, lbl_80520570@sda21(r2)
	stb      r3, 0x19(r1)
	addi     r3, r1, 0x1c
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	fmr      f2, f1
	stb      r6, 0x1a(r1)
	lfd      f4, lbl_80520580@sda21(r2)
	stb      r5, 0x1b(r1)
	lwz      r5, 0x18(r1)
	stw      r0, 0x80(r1)
	stw      r5, 0x1c(r1)
	lwz      r5, 4(r4)
	stw      r0, 0x88(r1)
	lhz      r4, 4(r5)
	lhz      r0, 6(r5)
	stw      r4, 0x84(r1)
	stw      r0, 0x8c(r1)
	lfd      f3, 0x80(r1)
	lfd      f0, 0x88(r1)
	fsubs    f3, f3, f4
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lfs      f1, lbl_80520570@sda21(r2)
	addi     r3, r1, 0x20
	li       r4, 0
	bl       __ct__8J2DPrintFP7JUTFontf
	lwz      r3, gP2JMEMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042A660
	lbz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_8042A660
	lwz      r4, 0x18(r3)
	addi     r3, r1, 0x20
	bl       setFont__8J2DPrintFP7JUTFont
	b        lbl_8042A690

lbl_8042A660:
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0xdc(r3)
	cmplwi   r4, 0
	beq      lbl_8042A67C
	addi     r3, r1, 0x20
	bl       setFont__8J2DPrintFP7JUTFont
	b        lbl_8042A690

lbl_8042A67C:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x40
	li       r4, 0x117
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042A690:
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	beq      lbl_8042A7D4
	lwz      r3, sys@sda21(r13)
	lwz      r6, 0xd4(r3)
	cmplwi   r6, 6
	bgt      lbl_8042A724
	lis      r3, lbl_804EBE20@ha
	slwi     r0, r6, 2
	addi     r3, r3, lbl_804EBE20@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8042A6C4:
	lis      r3, gMessage_eng__8DvdError@ha
	addi     r0, r3, gMessage_eng__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A6D4:
	lis      r3, gMessage_fra__8DvdError@ha
	addi     r0, r3, gMessage_fra__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A6E4:
	lis      r3, gMessage_ger__8DvdError@ha
	addi     r0, r3, gMessage_ger__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A6F4:
	lis      r3, gMessage_ita__8DvdError@ha
	addi     r0, r3, gMessage_ita__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A704:
	lis      r3, gMessage_jpn__8DvdError@ha
	addi     r0, r3, gMessage_jpn__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A714:
	lis      r3, gMessage_spa__8DvdError@ha
	addi     r0, r3, gMessage_spa__8DvdError@l
	mr       r30, r0
	b        lbl_8042A738

lbl_8042A724:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x50
	li       r4, 0x126
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042A738:
	addi     r3, r1, 0x20
	bl       initiate__8J2DPrintFv
	li       r5, 0xff
	lfs      f1, lbl_80520574@sda21(r2)
	stb      r5, 0x10(r1)
	addi     r3, r1, 0x20
	lfs      f2, lbl_80520578@sda21(r2)
	stb      r5, 0x11(r1)
	stb      r5, 0x12(r1)
	stb      r5, 0x13(r1)
	lwz      r0, 0x10(r1)
	stb      r5, 8(r1)
	stw      r0, 0x14(r1)
	lbz      r4, 0x14(r1)
	lbz      r9, 0x15(r1)
	lbz      r8, 0x16(r1)
	lbz      r7, 0x17(r1)
	stb      r5, 9(r1)
	stb      r5, 0xa(r1)
	stb      r5, 0xb(r1)
	lwz      r0, 8(r1)
	stb      r4, 0x60(r1)
	stw      r0, 0xc(r1)
	lbz      r6, 0xc(r1)
	lbz      r5, 0xd(r1)
	lbz      r4, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r9, 0x61(r1)
	stb      r8, 0x62(r1)
	stb      r7, 0x63(r1)
	stb      r6, 0x64(r1)
	stb      r5, 0x65(r1)
	stb      r4, 0x66(r1)
	stb      r0, 0x67(r1)
	lwz      r0, 0(r29)
	slwi     r0, r0, 2
	lwzx     r4, r30, r0
	crset    6
	bl       print__8J2DPrintFffPCce

lbl_8042A7D4:
	addi     r3, r1, 0x20
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_8042A7E0:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}
