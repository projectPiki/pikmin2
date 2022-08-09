#include "JSystem/JUT/JUTException.h"
#include "PSSystem/SeqTrack.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	803422A8
 * Size:	00002C
 */
void BeatMgr::proc() {
    if (_00 & 0x40) {
        _00 = _00 & 1;
    } else if (_00 & 0x80) {
        _00 = _00 | 0x40;
    }
}

/*
 * --INFO--
 * Address:	803422D4
 * Size:	000028
 */
void SeqTrackBase::update() { m_taskEntryMgr.update(); }

/*
 * --INFO--
 * Address:	803422FC
 * Size:	000008
 */
void SeqTrackBase::init(JASTrack* track) { m_taskEntryMgr._24 = track; }

/*
 * --INFO--
 * Address:	80342304
 * Size:	000008
 */
TaskEntryMgr SeqTrackBase::getTaskEntryList() { return m_taskEntryMgr; }

/*
 * --INFO--
 * Address:	8034230C
 * Size:	0003A4
 */
SeqTrackRoot::SeqTrackRoot()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q28PSSystem12SeqTrackBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q28PSSystem12SeqTrackBase@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r31, 4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	stw      r0, 0(r3)
	mr       r3, r30
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r4, 0
	lis      r3, __vt__Q28PSSystem12SeqTrackRoot@ha
	stw      r4, 0x24(r30)
	addi     r0, r3, __vt__Q28PSSystem12SeqTrackRoot@l
	addi     r29, r31, 0x40
	lfs      f0, lbl_8051E1D8@sda21(r2)
	stw      r0, 0(r31)
	li       r0, 0x3c
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x34(r31)
	stw      r4, 0x38(r31)
	stb      r4, 0x3c(r31)
	sth      r0, 0x3e(r31)
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x24(r29)
	addi     r3, r29, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r30, r29, 0x38
	mr       r3, r30
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r28, r29, 0x6c
	stw      r0, 0(r30)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r30)
	li       r0, 0x40
	mr       r3, r28
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stw      r5, 0x28(r30)
	stfs     f0, 0x2c(r30)
	stw      r4, 0(r30)
	stw      r0, 0x30(r30)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	addi     r29, r29, 0x8c
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	li       r0, -16
	stw      r3, 0(r28)
	mr       r3, r29
	stw      r0, 0x1c(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r28, r31, 0x100
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r29)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r29)
	li       r0, 0x40
	mr       r30, r28
	mr       r3, r28
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r5, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r4, 0(r29)
	stw      r0, 0x30(r29)
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r28, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r29, r31, 0x16c
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r28)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r28)
	li       r0, 2
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem21ModParamWithTableTask@ha
	lis      r4, __vt__Q28PSSystem20TriangleTableModTask@ha
	addi     r0, r3, __vt__Q28PSSystem21ModParamWithTableTask@l
	lis      r3, __vt__Q28PSSystem12PitchModTask@ha
	stw      r0, 0(r28)
	addi     r30, r29, 0x60
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r4, __vt__Q28PSSystem20TriangleTableModTask@l
	addi     r0, r3, __vt__Q28PSSystem12PitchModTask@l
	mr       r3, r30
	stfs     f0, 0x1c(r28)
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r4, 0(r28)
	stw      r0, 0(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem14SimpleWaitTask@ha
	addi     r28, r29, 0x84
	addi     r3, r3, __vt__Q28PSSystem14SimpleWaitTask@l
	li       r0, 0
	stw      r3, 0(r30)
	mr       r3, r28
	stw      r0, 0x1c(r30)
	stw      r0, 0x20(r30)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem14PitchResetTask@ha
	addi     r29, r31, 0x20c
	addi     r0, r3, __vt__Q28PSSystem14PitchResetTask@l
	stw      r0, 0(r28)
	mr       r28, r29
	mr       r3, r29
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x24(r29)
	addi     r3, r29, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem12BankRandTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	li       r4, 0
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q28PSSystem12BankRandTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r4, 0x1c(r28)
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r4, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r0, 0(r28)
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342604
	lis      r3, lbl_80490158@ha
	lis      r5, lbl_80490164@ha
	addi     r3, r3, lbl_80490158@l
	li       r4, 0x15f
	addi     r5, r5, lbl_80490164@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342604:
	addi     r28, r29, 0x68
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	li       r0, -16
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	addi     r29, r29, 0x88
	stw      r3, 0(r28)
	mr       r3, r29
	stw      r0, 0x1c(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem12BankRandTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	li       r4, 0
	stw      r0, 0(r29)
	addi     r0, r3, __vt__Q28PSSystem12BankRandTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r4, 0x1c(r29)
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r4, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r0, 0(r29)
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8034268C
	lis      r3, lbl_80490158@ha
	lis      r5, lbl_80490164@ha
	addi     r3, r3, lbl_80490158@l
	li       r4, 0x15f
	addi     r5, r5, lbl_80490164@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034268C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803426B0
 * Size:	000078
 */
void SeqTrackRoot::init(JASTrack* track) {
    P2ASSERTLINE(229, track != nullptr);
    m_taskEntryMgr._24 = track;
    _2C = track->_352;
    _2E = _2C;
    m_beatMgr._00 = 0;
    initSwingRatio();
    
}

/*
 * --INFO--
 * Address:	80342728
 * Size:	00007C
 */
void SeqTrackRoot::initSwingRatio() {
    _32 = _2C * (_34 + 1.0f) / 2;
    _30 = _32 / _34;
}

/*
 * --INFO--
 * Address:	803427A4
 * Size:	000088
 */
void SeqTrackRoot::pitchModulation(float f1, float f2, u32 arg, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_16C);
    _16C.makeEntry(f1, f2, arg);
    m_taskEntryMgr.appendEntry(&_16C, base);
}

/*
 * --INFO--
 * Address:	8034282C
 * Size:	000078
 */
void SeqTrackRoot::tempoChange(float tempo, u32 arg, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_40);
    _40.makeEntry(tempo, arg);
    m_taskEntryMgr.appendEntry(&_40, base);
}

/*
 * --INFO--
 * Address:	803428A4
 * Size:	000024
 */
void SeqTrackRoot::onStopSeq() { m_taskEntryMgr.removeAllEntry(); }

/*
 * --INFO--
 * Address:	803428C8
 * Size:	00009C
 */
u16 SeqTrackRoot::beatUpdate() {
    m_beatMgr._00 = (m_beatMgr._00 & 1 ^ 1) & 0x00FF | 0x80;
    if (_38 == 1) {
        if (m_beatMgr._00 & 1) {
            _2E = _30;
        } else {
            _2E = _32;
        }
    } else {
        _2E = _2C;
    }
    m_taskEntryMgr._24->setTempo(_2E);
    onBeatTop();
    return _3E;
}

/*
 * --INFO--
 * Address:	80342964
 * Size:	0002EC
 */
SeqTrackChild::SeqTrackChild(const PSSystem::SeqTrackRoot&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q28PSSystem12SeqTrackBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q28PSSystem12SeqTrackBase@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	addi     r29, r31, 4
	mr       r30, r29
	stw      r28, 0x10(r1)
	stw      r0, 0(r3)
	mr       r3, r29
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r0, 0
	lis      r3, __vt__Q28PSSystem13SeqTrackChild@ha
	stw      r0, 0x24(r29)
	addi     r0, r3, __vt__Q28PSSystem13SeqTrackChild@l
	addi     r30, r31, 0x2c
	stw      r0, 0(r31)
	mr       r29, r30
	mr       r3, r30
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r29, r30, 0x38
	mr       r3, r29
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r28, r30, 0x58
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r29)
	mr       r3, r28
	stb      r0, 0x1c(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r29, r30, 0x8c
	stw      r0, 0(r28)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	addi     r28, r30, 0xac
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	li       r0, -16
	stw      r3, 0(r29)
	mr       r3, r28
	stw      r0, 0x1c(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r29, r30, 0xe0
	stw      r0, 0(r28)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r28, r31, 0x12c
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r29)
	mr       r30, r28
	mr       r3, r28
	stb      r0, 0x1c(r29)
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r29, r28, 0x38
	mr       r3, r29
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r28, r28, 0x6c
	stw      r0, 0(r29)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r29)
	li       r0, 1
	mr       r3, r28
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r5, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r4, 0(r29)
	stw      r0, 0x30(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r29, r31, 0x1b8
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r28)
	mr       r30, r29
	mr       r3, r29
	stb      r0, 0x1c(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r29, r31, 0x224
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r28)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem10IdMaskTask@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28PSSystem10IdMaskTask@l
	mr       r3, r31
	stw      r4, 0(r28)
	stb      r0, 0x1c(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342C50
 * Size:	000084
 */
void SeqTrackChild::muteOffAndFadeIn(float arg1, u32 arg2, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_2C);
    m_taskEntryMgr.removeEntry(&_12C);
    _2C.makeEntry(arg1, arg2);
    m_taskEntryMgr.appendEntry(&_2C, base);
}

/*
 * --INFO--
 * Address:	80342CD4
 * Size:	000074
 */
void SeqTrackChild::fadeoutAndMute(u32 arg, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_2C);
    m_taskEntryMgr.removeEntry(&_12C);
    _12C.makeEntry(arg);
    m_taskEntryMgr.appendEntry(&_12C, base);
}

/*
 * --INFO--
 * Address:	80342D48
 * Size:	000078
 */
void SeqTrackChild::fade(float arg1, u32 arg2, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_1B8);
    _1B8.makeEntry(arg1, arg2);
    m_taskEntryMgr.appendEntry(&_1B8, base);
}

/*
 * --INFO--
 * Address:	80342DC0
 * Size:	000068
 */
void SeqTrackChild::setIdMask(u8 mask, PSSystem::DirectorBase* base) {
    m_taskEntryMgr.removeEntry(&_224);
    _224.makeEntry(mask);
    m_taskEntryMgr.appendEntry(&_224, base);
}

/*
 * --INFO--
 * Address:	80342E28
 * Size:	000024
 */
void SeqTrackChild::onStopSeq() { m_taskEntryMgr.removeAllEntry(); }
} // namespace PSSystem
