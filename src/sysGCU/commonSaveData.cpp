#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "Game/Data.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
#include "stream.h"
#include "PSSystem/PSSystemIF.h"

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
{
	m_flags.byteView[0] = 0;
	m_flags.byteView[1] = 0;
	setDefault();
}

/*
 * --INFO--
 * Address:	80446CAC
 * Size:	000078
 * regalloc hates me
 */
void Mgr::setDefault()
{
	m_flags.byteView[0] = 0;
	m_flags.byteView[1] = 0;
	m_cardSerialNo      = 0;
	_28                 = 0;
	m_soundMode         = 0;
	m_musicVol          = 0xFF;
	m_seVol             = -1;
	m_rumble            = true;
	m_rubyFont          = true;
	m_deflicker         = true;
	m_region            = (u8)sys->m_region;
	_18                 = 0;
	m_time              = 0;
	m_fileIndex         = -1;
	m_challengeOpen     = false;
	reset();
}

/*
 * --INFO--
 * Address:	80446D24
 * Size:	000018
 */
void CommonSaveData::Mgr::setCardSerialNo(u64 tag)
{
	m_cardSerialNo = tag;
	m_flags.shortView |= 1;
}

/*
 * --INFO--
 * Address:	80446D3C
 * Size:	000020
 */
void CommonSaveData::Mgr::resetCardSerialNo()
{
	m_cardSerialNo = 0xcdcdcdcdcdcdcdcd;
	m_flags.shortView &= ~1;
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
	output.writeByte(m_musicVol);
	output.writeByte(m_seVol);
	output.writeByte(m_rumble);
	output.writeByte(m_rubyFont);
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
	m_musicVol  = input.readByte();
	m_seVol     = input.readByte();
	m_rumble    = input.readByte();
	m_rubyFont  = input.readByte();
	m_deflicker = input.readByte();
	m_region    = input.readByte();
	PlayCommonData::read(input);
}

/*
 * --INFO--
 * Address:	80446EB4
 * Size:	000100
 */
void CommonSaveData::Mgr::setup()
{
	BOOL soundModeCheck = OSGetSoundMode();
	switch (soundModeCheck) {
	case false:
		setSoundModeMono();
		break;
	case true:
		switch (m_soundMode) {
		case SM_Mono:
		case SM_Stereo:
			setSoundModeStereo();
			break;
		case SM_SurroundSound:
			setSoundModeSurround();
			break;
		default:
			JUT_PANICLINE(268, "Unknown sound mode:%d \n", m_soundMode);
			break;
		}
		break;
	}
	setBgmVolume(m_musicVol / 255.0f);
	setSeVolume(m_seVol / 255.0f);
	setDeflicker();
}

/*
 * --INFO--
 * Address:	80446FB4
 * Size:	000014
 */
void CommonSaveData::Mgr::resetPlayer(signed char fileIndex)
{
	m_fileIndex = fileIndex;
	m_time      = 0;
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

	if ((u32)OSGetProgressiveMode() == 1) {
		obj->vfilter[0] = 0;
		obj->vfilter[1] = 0;
		obj->vfilter[2] = 21;
		obj->vfilter[3] = 22;
		obj->vfilter[4] = 21;
		obj->vfilter[5] = 0;
		obj->vfilter[6] = 0;
	} else if (deflicker) {
		obj->vfilter[0] = 7;
		obj->vfilter[1] = 7;
		obj->vfilter[2] = 12;
		obj->vfilter[3] = 12;
		obj->vfilter[4] = 12;
		obj->vfilter[5] = 7;
		obj->vfilter[6] = 7;
	} else {
		obj->vfilter[0] = 16;
		obj->vfilter[1] = 0;
		obj->vfilter[2] = 0;
		obj->vfilter[3] = 48;
		obj->vfilter[4] = 0;
		obj->vfilter[5] = 0;
		obj->vfilter[6] = 0;
	}
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
void CommonSaveData::Mgr::setBgmVolume(f32 volume)
{
	s8 temp = OSDisableInterrupts();
	OSDisableScheduler();

	P2ASSERTBOUNDSINCLUSIVELINE(389, 0.0f, volume, 1.0f);

	if (PSSystem::spSysIF) {
		f32 calc = volume * 255.0f;
		if (calc >= 0.0f) {
			calc += 0.5f;
		} else {
			calc -= 0.5f;
		}
		m_musicVol = calc;
		P2ASSERTLINE(395, PSSystem::spSysIF); // appears to be part of a SysIF inline
		PSSystem::spSysIF->setConfigVol_Bgm(volume);
	}
	OSEnableScheduler();
	OSRestoreInterrupts(temp);
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
void CommonSaveData::Mgr::setSeVolume(f32 volume)
{
	s8 temp = OSDisableInterrupts();
	OSDisableScheduler();

	P2ASSERTBOUNDSINCLUSIVELINE(407, 0.0f, volume, 1.0f);

	if (PSSystem::spSysIF) {
		f32 calc = volume * 255.0f;
		if (calc >= 0.0f) {
			calc += 0.5f;
		} else {
			calc -= 0.5f;
		}
		m_seVol = calc;
		P2ASSERTLINE(395, PSSystem::spSysIF); // appears to be part of a SysIF inline
		PSSystem::spSysIF->setConfigVol_Se(volume);
	}
	OSEnableScheduler();
	OSRestoreInterrupts(temp);
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
