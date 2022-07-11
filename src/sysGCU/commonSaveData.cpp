#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "Game/Data.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
#include "stream.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AEC0
    lbl_8049AEC0:
        .asciz "commonSaveData.cpp"
        .skip 1
    .global lbl_8049AED4
    lbl_8049AED4:
        .asciz "Unknown sound mode:%d \n"
        .asciz "P2Assert"
        .skip 3
        .asciz "PSSystemIF.h"
        .skip 3

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520980
    lbl_80520980:
        .float 255.0
        .skip 4
    .global lbl_80520988
    lbl_80520988:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520990
    lbl_80520990:
        .float 0.0
    .global lbl_80520994
    lbl_80520994:
        .float 1.0
    .global lbl_80520998
    lbl_80520998:
        .float 0.5
*/

namespace Game {
namespace CommonSaveData {
/*
 * --INFO--
 * Address:	80446C68
 * Size:	000044
 * Matches
 */
Mgr::Mgr()
    : PlayCommonData()
{
	_40 = 0;
	_41 = 0;
	setDefault();
}

/*
 * --INFO--
 * Address:	80446CAC
 * Size:	000078
 * regalloc hates me
 */
void Mgr::setDefault(void)
{
	_40            = 0;
	_41            = 0;
	_34            = 0;
	m_cardSerialNo = 0;
	_28            = 0;
	m_soundMode    = 0xFF;
	_39            = 0xFF;
	_3A            = -1;
	_3B            = 1;
	_3C            = 1;
	m_deflicker    = true;
	m_region       = sys->m_region;
	_18            = 0;
	_1C            = 0;
	m_fileIndex    = -1;
	_42            = false;
	reset();
}

/*
 * --INFO--
 * Address:	80446D24
 * Size:	000018
 */
void CommonSaveData::Mgr::setCardSerialNo(unsigned long long)
{
	/*
	stw      r6, 0x34(r3)
	stw      r5, 0x30(r3)
	lhz      r0, 0x40(r3)
	ori      r0, r0, 1
	sth      r0, 0x40(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80446D3C
 * Size:	000020
 */
void CommonSaveData::Mgr::resetCardSerialNo(void)
{
	/*
	lis      r4, 0xCDCDCDCD@ha
	addi     r0, r4, 0xCDCDCDCD@l
	stw      r0, 0x34(r3)
	stw      r0, 0x30(r3)
	lhz      r0, 0x40(r3)
	rlwinm   r0, r0, 0, 0x10, 0x1e
	sth      r0, 0x40(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80446D5C
 * Size:	0000AC
 */
void CommonSaveData::Mgr::write(Stream& output)
{
	output.m_mode = STREAM_MODE_BINARY;
	if (output.m_mode == STREAM_MODE_TEXT) {
		output.m_tabCount = 0;
	}
	output.writeByte(m_soundMode);
	output.writeByte(_39);
	output.writeByte(_3A);
	output.writeByte(_3B);
	output.writeByte(_3C);
	output.writeByte(m_deflicker);
	output.writeByte(m_region);
	PlayCommonData::write(output);
}

/*
 * --INFO--
 * Address:	80446E08
 * Size:	0000AC
 */
void CommonSaveData::Mgr::read(Stream& input)
{
	input.m_mode = STREAM_MODE_BINARY;
	if (input.m_mode == STREAM_MODE_TEXT) {
		input.m_tabCount = 0;
	}
	m_soundMode = input.readByte();
	_39         = input.readByte();
	_3A         = input.readByte();
	_3B         = input.readByte();
	_3C         = input.readByte();
	m_deflicker = input.readByte();
	m_region    = input.readByte();
	PlayCommonData::read(input);
}

/*
 * --INFO--
 * Address:	80446EB4
 * Size:	000100
 */
void CommonSaveData::Mgr::setup(void)
{
	BOOL soundModeCheck = OSGetSoundMode();
	switch (soundModeCheck) {
	case false:
		setSoundModeMono();
		break;
	case true:
		switch (m_soundMode) {
		case SM_SurroundSound:
			setSoundModeSurround();
			break;
		case SM_Mono:
			break;
		case SM_Stereo:
			setSoundModeStereo();
			break;
		default:
			JUT_PANICLINE(268, "Unknown sound mode:%d \n", m_soundMode);
			break;
		}
		break;
	}
	setBgmVolume(_39 / 255.0f);
	setSeVolume((u8)_3A / 255.0f);
	setDeflicker();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       OSGetSoundMode
	cmpwi    r3, 1
	beq      lbl_80446EF0
	bge      lbl_80446F40
	cmpwi    r3, 0
	bge      lbl_80446EE4
	b        lbl_80446F40

lbl_80446EE4:
	mr       r3, r31
	bl       setSoundModeMono__Q34Game14CommonSaveData3MgrFv
	b        lbl_80446F40

lbl_80446EF0:
	lbz      r6, 0x38(r31)
	cmpwi    r6, 2
	beq      lbl_80446F18
	bge      lbl_80446F24
	cmpwi    r6, 0
	bge      lbl_80446F0C
	b        lbl_80446F24

lbl_80446F0C:
	mr       r3, r31
	bl       setSoundModeStereo__Q34Game14CommonSaveData3MgrFv
	b        lbl_80446F40

lbl_80446F18:
	mr       r3, r31
	bl       setSoundModeSurround__Q34Game14CommonSaveData3MgrFv
	b        lbl_80446F40

lbl_80446F24:
	lis      r3, lbl_8049AEC0@ha
	lis      r4, lbl_8049AED4@ha
	addi     r5, r4, lbl_8049AED4@l
	addi     r3, r3, lbl_8049AEC0@l
	li       r4, 0x10c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80446F40:
	lbz      r4, 0x39(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	mr       r3, r31
	lfd      f2, lbl_80520988@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80520980@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bl       setBgmVolume__Q34Game14CommonSaveData3MgrFf
	lbz      r4, 0x3a(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	mr       r3, r31
	lfd      f2, lbl_80520988@sda21(r2)
	stw      r4, 0x14(r1)
	lfs      f0, lbl_80520980@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bl       setSeVolume__Q34Game14CommonSaveData3MgrFf
	mr       r3, r31
	bl       setDeflicker__Q34Game14CommonSaveData3MgrFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80446FB4
 * Size:	000014
 */
void CommonSaveData::Mgr::resetPlayer(signed char fileIndex)
{
	m_fileIndex = fileIndex;
	_1C         = 0;
	_18         = 0;
}

/*
 * --INFO--
 * Address:	80446FC8
 * Size:	000030
 */
void CommonSaveData::Mgr::setDeflicker() { setDeflicker(m_deflicker); }

/*
 * --INFO--
 * Address:	80446FF8
 * Size:	0000D0
 */
void CommonSaveData::Mgr::setDeflicker(bool deflicker)
{
	_GXRenderModeObj* obj = System::getRenderModeObj();
	m_deflicker           = deflicker;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	bl       getRenderModeObj__6SystemFv
	stb      r30, 0x3d(r31)
	mr       r31, r3
	bl       OSGetProgressiveMode
	cmplwi   r3, 1
	bne      lbl_80447058
	li       r4, 0
	li       r3, 0x15
	stb      r4, 0x32(r31)
	li       r0, 0x16
	stb      r4, 0x33(r31)
	stb      r3, 0x34(r31)
	stb      r0, 0x35(r31)
	stb      r3, 0x36(r31)
	stb      r4, 0x37(r31)
	stb      r4, 0x38(r31)
	b        lbl_804470B0

lbl_80447058:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80447088
	li       r3, 7
	li       r0, 0xc
	stb      r3, 0x32(r31)
	stb      r3, 0x33(r31)
	stb      r0, 0x34(r31)
	stb      r0, 0x35(r31)
	stb      r0, 0x36(r31)
	stb      r3, 0x37(r31)
	stb      r3, 0x38(r31)
	b        lbl_804470B0

lbl_80447088:
	li       r0, 0x10
	li       r3, 0
	stb      r0, 0x32(r31)
	li       r0, 0x30
	stb      r3, 0x33(r31)
	stb      r3, 0x34(r31)
	stb      r0, 0x35(r31)
	stb      r3, 0x36(r31)
	stb      r3, 0x37(r31)
	stb      r3, 0x38(r31)

lbl_804470B0:
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
 * Address:	804470C8
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeMono()
{
	m_soundMode = SM_Mono;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Mono);
	OSSetSoundMode(false);
}

/*
 * --INFO--
 * Address:	804470FC
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeStereo(void)
{
	m_soundMode = SM_Stereo;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Stereo);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447130
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeSurround(void)
{
	m_soundMode = SM_SurroundSound;
	JAIGlobalParameter::setParamSoundOutputMode(SM_SurroundSound);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447164
 * Size:	00012C
 */
void CommonSaveData::Mgr::setBgmVolume(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f31, f1
	lis      r4, lbl_8049AEC0@ha
	mr       r29, r3
	addi     r30, r4, lbl_8049AEC0@l
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r31, r0, 0x1f
	bl       OSDisableScheduler
	lfs      f0, lbl_80520990@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_804471D0
	lfs      f0, lbl_80520994@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_804471D0
	li       r0, 1

lbl_804471D0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_804471EC
	addi     r3, r30, 0
	addi     r5, r30, 0x2c
	li       r4, 0x185
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804471EC:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80447260
	lfs      f1, lbl_80520980@sda21(r2)
	lfs      f0, lbl_80520990@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8044721C
	lfs      f0, lbl_80520998@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80447224

lbl_8044721C:
	lfs      f0, lbl_80520998@sda21(r2)
	fsubs    f0, f1, f0

lbl_80447224:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stb      r0, 0x39(r29)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80447254
	addi     r3, r30, 0x38
	addi     r5, r30, 0x2c
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80447254:
	fmr      f1, f31
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       setConfigVol_Bgm__Q28PSSystem5SysIFFf

lbl_80447260:
	bl       OSEnableScheduler
	mr       r3, r31
	bl       OSRestoreInterrupts
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80447290
 * Size:	00012C
 */
void CommonSaveData::Mgr::setSeVolume(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f31, f1
	lis      r4, lbl_8049AEC0@ha
	mr       r29, r3
	addi     r30, r4, lbl_8049AEC0@l
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r31, r0, 0x1f
	bl       OSDisableScheduler
	lfs      f0, lbl_80520990@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_804472FC
	lfs      f0, lbl_80520994@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_804472FC
	li       r0, 1

lbl_804472FC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80447318
	addi     r3, r30, 0
	addi     r5, r30, 0x2c
	li       r4, 0x197
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80447318:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8044738C
	lfs      f1, lbl_80520980@sda21(r2)
	lfs      f0, lbl_80520990@sda21(r2)
	fmuls    f1, f1, f31
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80447348
	lfs      f0, lbl_80520998@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80447350

lbl_80447348:
	lfs      f0, lbl_80520998@sda21(r2)
	fsubs    f0, f1, f0

lbl_80447350:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stb      r0, 0x3a(r29)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80447380
	addi     r3, r30, 0x38
	addi     r5, r30, 0x2c
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80447380:
	fmr      f1, f31
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       setConfigVol_Se__Q28PSSystem5SysIFFf

lbl_8044738C:
	bl       OSEnableScheduler
	mr       r3, r31
	bl       OSRestoreInterrupts
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
/*void CommonSaveData::Mgr::setLanguage(void)
{
    // UNUSED FUNCTION
}*/

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
/*void CommonSaveData::Mgr::setLanguage(ELanguage)
{
    // UNUSED FUNCTION
}*/
} // namespace CommonSaveData
} // namespace Game
