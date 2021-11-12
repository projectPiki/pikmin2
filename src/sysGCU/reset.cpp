#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499D20
    lbl_80499D20:
        .4byte 0x09838183
        .4byte 0x82838A81
        .4byte 0x5B834A81
        .4byte 0x5B83688F
        .4byte 0x9182AB8D
        .4byte 0x9E82DD8F
        .4byte 0x4997B991
        .4byte 0xD282BF0A
        .4byte 0x00000000
        .4byte 0x09834981
        .4byte 0x5B836683
        .4byte 0x4283498F
        .4byte 0x4997B991
        .4byte 0xD282BF0A
        .4byte 0x00000000
        .4byte 0x0947508F
        .4byte 0x88979D8F
        .4byte 0x4997B991
        .4byte 0xD282BF0A
        .4byte 0x00000000
        .4byte 0x09838A83
        .4byte 0x5A836283
        .4byte 0x67837B83
        .4byte 0x5E839382
        .4byte 0xAA899F82
        .4byte 0xB382EA82
        .4byte 0xC482A282
        .4byte 0xE90A0000
        .4byte 0x8B9689C2
        .4byte 0x82AA8F6F
        .4byte 0x82C482A2
        .4byte 0x82C882A2
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12ResetManager
    __vt__12ResetManager:
        .4byte 0
        .4byte 0
        .4byte draw__12ResetManagerFv
        .4byte updateStatusEffects__12ResetManagerFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520548
    lbl_80520548:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80520550
    lbl_80520550:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520558
    lbl_80520558:
        .float 0.25
    .global lbl_8052055C
    lbl_8052055C:
        .4byte 0xBF800000
    .global lbl_80520560
    lbl_80520560:
        .float 1.0
    .global lbl_80520564
    lbl_80520564:
        .4byte 0x437F0000
    .global lbl_80520568
    lbl_80520568:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80429DB0
 * Size:	0000C8
 */
ResetManager::ResetManager(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__12ResetManager@ha
	li       r4, 0
	stw      r0, 0x24(r1)
	lis      r0, 0x4330
	addi     r5, r5, __vt__12ResetManager@l
	lfd      f2, lbl_80520550@sda21(r2)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, 0x800000F8@ha
	stw      r5, 0(r31)
	stb      r4, 0xc(r31)
	stb      r4, 0xd(r31)
	stb      r4, 0xe(r31)
	stb      r4, 0xf(r31)
	lwz      r3, 0x800000F8@l(r3)
	stw      r0, 8(r1)
	srwi     r0, r3, 2
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fmuls    f1, f0, f1
	bl       __cvt_dbl_usll
	stw      r3, sThreshold__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	li       r5, 0
	lfs      f0, lbl_80520548@sda21(r2)
	mr       r3, r31
	stw      r4, lbl_80514F5C@sda21(r13)
	stb      r5, 0xc(r31)
	stb      r5, 0xd(r31)
	stb      r5, 0xe(r31)
	stb      r5, 0xf(r31)
	lwz      r0, 0xc(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0xc(r31)
	lwz      r0, 0xc(r31)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0xc(r31)
	lwz      r0, 0xc(r31)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0xc(r31)
	stw      r5, 4(r31)
	stfs     f0, 8(r31)
	stw      r5, 0x10(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429E78
 * Size:	0002B4
 */
void ResetManager::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80499D20@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80499D20@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       DVDGetDriveStatus
	cmpwi    r3, -1
	beq      lbl_8042A110
	lwz      r0, 0xc(r29)
	li       r30, 1
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_80429ECC
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80429ECC
	li       r30, 0

lbl_80429ECC:
	lwz      r0, 4(r29)
	cmpwi    r0, 0
	beq      lbl_8042A050
	mr       r3, r29
	bl       isWritingMemoryCard__12ResetManagerFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80429FB8
	mr       r3, r29
	bl       isSoundSystemStopped__12ResetManagerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80429FB8
	lwz      r0, 0xc(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80429FB8
	clrlwi.  r0, r30, 0x18
	beq      lbl_80429FB8
	lwz      r0, 4(r29)
	cmpwi    r0, 2
	beq      lbl_80429F50
	bge      lbl_8042A110
	cmpwi    r0, 1
	bge      lbl_80429F28
	b        lbl_8042A110

lbl_80429F28:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042A110
	li       r0, 2
	stw      r0, 4(r29)
	b        lbl_8042A110

lbl_80429F50:
	bl       clearForReset__10JUTGamePadFv
	lwz      r3, sys@sda21(r13)
	bl       deleteThreads__6SystemFv
	bl       setForOSResetSystem__10JFWDisplayFv
	lwz      r0, 0xc(r29)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80429F80
	li       r3, 1
	li       r4, 0
	li       r5, 1
	bl       OSResetSystem
	b        lbl_8042A110

lbl_80429F80:
	lis      r3, 0x76616C64@ha
	lis      r5, 0x80700000@ha
	addi     r0, r3, 0x76616C64@l
	stw      r0, 0x80700000@l(r5)
	lis      r3, 0x8070
	addi     r4, r5, 8
	lwz      r0, mRenderMode__6System@sda21(r13)
	stb      r0, 4(r5)
	bl       OSSetSaveRegion
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       OSResetSystem
	b        lbl_8042A110

lbl_80429FB8:
	mr       r3, r29
	bl       isWritingMemoryCard__12ResetManagerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80429FD4
	addi     r3, r31, 0
	crclr    6
	bl       OSReport

lbl_80429FD4:
	mr       r3, r29
	bl       isSoundSystemStopped__12ResetManagerFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042A008
	lwz      r3, 0x10(r29)
	addi     r0, r3, 1
	cmpwi    r0, 3
	stw      r0, 0x10(r29)
	bne      lbl_80429FFC
	bl       THPPlayerStop

lbl_80429FFC:
	addi     r3, r31, 0x24
	crclr    6
	bl       OSReport

lbl_8042A008:
	lwz      r0, 0xc(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8042A020
	addi     r3, r31, 0x3c
	crclr    6
	bl       OSReport

lbl_8042A020:
	bl       OSGetResetSwitchState
	cmpwi    r3, 0
	beq      lbl_8042A038
	addi     r3, r31, 0x50
	crclr    6
	bl       OSReport

lbl_8042A038:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8042A110
	addi     r3, r31, 0x70
	crclr    6
	bl       OSReport
	b        lbl_8042A110

lbl_8042A050:
	addic.   r0, r1, 8
	beq      lbl_8042A060
	lwz      r0, sResetOccurredPort__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	stw      r0, 8(r1)

lbl_8042A060:
	lbz      r0, sResetOccurred__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8042A078
	lwz      r0, 0xc(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042A110

lbl_8042A078:
	bl       OSGetResetSwitchState
	cmpwi    r3, 0
	bne      lbl_8042A110
	lwz      r0, 0xc(r29)
	li       r3, 1
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8042A0AC
	lwz      r0, 8(r1)
	cmpwi    r0, -1
	beq      lbl_8042A0AC
	cmplwi   r0, 1
	ble      lbl_8042A0AC
	li       r3, 0

lbl_8042A0AC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042A0F0
	clrlwi.  r0, r30, 0x18
	beq      lbl_8042A0F0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042A0CC
	bl       stopSoundSystem__Q28PSSystem5SysIFFv

lbl_8042A0CC:
	li       r3, 0
	li       r4, 0x78
	bl       THPPlayerSetVolume
	lwz      r3, 0xc(r29)
	li       r0, 1
	ori      r3, r3, 1
	stw      r3, 0xc(r29)
	stw      r0, 4(r29)
	b        lbl_8042A110

lbl_8042A0F0:
	lwz      r3, 0xc(r29)
	li       r0, 0
	rlwinm   r3, r3, 0, 0, 0x1e
	stw      r3, 0xc(r29)
	lwz      r3, 0xc(r29)
	rlwinm   r3, r3, 0, 0x1d, 0x1b
	stw      r3, 0xc(r29)
	stb      r0, sResetOccurred__Q210JUTGamePad13C3ButtonReset@sda21(r13)

lbl_8042A110:
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
 * Address:	8042A12C
 * Size:	000038
 */
void ResetManager::updateStatusEffects()
{
	/*
	lwz      r4, sys@sda21(r13)
	li       r0, 0
	lfs      f2, 8(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_80520558@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r3)
	lfs      f1, 8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8042A15C
	stfs     f0, 8(r3)
	li       r0, 1

lbl_8042A15C:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A164
 * Size:	000158
 */
void ResetManager::draw()
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	mr       r31, r3
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	beq      lbl_8042A2A8
	bl       DVDGetDriveStatus
	cmpwi    r3, -1
	beq      lbl_8042A2A8
	lwz      r5, sManager__8JUTVideo@sda21(r13)
	lis      r4, 0x4330
	lfs      f1, lbl_80520548@sda21(r2)
	addi     r3, r1, 0x10
	lwz      r6, 4(r5)
	stw      r4, 0xe8(r1)
	fmr      f2, f1
	lhz      r5, 4(r6)
	lhz      r0, 6(r6)
	stw      r5, 0xec(r1)
	lfd      f4, lbl_80520550@sda21(r2)
	lfd      f0, 0xe8(r1)
	stw      r0, 0xf4(r1)
	fsubs    f3, f0, f4
	lfs      f5, lbl_8052055C@sda21(r2)
	stw      r4, 0xf0(r1)
	lfs      f6, lbl_80520560@sda21(r2)
	lfd      f0, 0xf0(r1)
	fsubs    f4, f0, f4
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0x10
	bl       setPort__13J2DOrthoGraphFv
	lfs      f2, lbl_80520564@sda21(r2)
	lfs      f0, 8(r31)
	lfs      f1, lbl_80520558@sda21(r2)
	fmuls    f2, f2, f0
	lfs      f0, lbl_80520548@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8042A218
	lfs      f0, lbl_80520568@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8042A220

lbl_8042A218:
	lfs      f0, lbl_80520568@sda21(r2)
	fsubs    f0, f1, f0

lbl_8042A220:
	fctiwz   f0, f0
	li       r6, 0
	lis      r0, 0x4330
	lfs      f1, lbl_80520548@sda21(r2)
	stb      r6, 8(r1)
	addi     r3, r1, 0xc
	stfd     f0, 0xf8(r1)
	fmr      f2, f1
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	lwz      r5, 0xfc(r1)
	stb      r6, 9(r1)
	lfd      f4, lbl_80520550@sda21(r2)
	stb      r6, 0xa(r1)
	stb      r5, 0xb(r1)
	lwz      r5, 8(r1)
	stw      r0, 0x100(r1)
	stw      r5, 0xc(r1)
	lwz      r5, 4(r4)
	stw      r0, 0x108(r1)
	lhz      r4, 4(r5)
	lhz      r0, 6(r5)
	stw      r4, 0x104(r1)
	stw      r0, 0x10c(r1)
	lfd      f3, 0x100(r1)
	lfd      f0, 0x108(r1)
	fsubs    f3, f3, f4
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0x10(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x10(r1)

lbl_8042A2A8:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A2BC
 * Size:	000014
 */
void ResetManager::isWritingMemoryCard()
{
	/*
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xe4(r3)
	clrlwi   r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A2D0
 * Size:	000044
 */
void ResetManager::isSoundSystemStopped()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8042A300
	bl       checkAudioStopStatus__8JAIBasicFv
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_8042A304

lbl_8042A300:
	li       r3, 1

lbl_8042A304:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
