#include "types.h"
#include "P2JME/TSequenceProcessor.h"
#include "P2JME/P2JME.h"
#include "System.h"
#include "JSystem/JUT/JUTException.h"
#include "PSSystem/SysIF.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A8B0
    lbl_8049A8B0:
        .4byte 0x6D657373
        .4byte 0x61676553
        .4byte 0x65717565
        .4byte 0x6E63652E
        .4byte 0x63707000
    .global lbl_8049A8C4
    lbl_8049A8C4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME18TSequenceProcessor
    __vt__Q25P2JME18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME18TSequenceProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME18TSequenceProcessorFi
        .4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
        .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end___Q28JMessage18TSequenceProcessorFv
        .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_end__Q25P2JME18TSequenceProcessorFv
        .4byte do_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
        .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSEStart__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSE__Q25P2JME18TSequenceProcessorFi
        .4byte doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv
        .4byte doFastForwardSE__Q25P2JME18TSequenceProcessorFv
        .4byte reset__Q25P2JME18TSequenceProcessorFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520868
    lbl_80520868:
        .4byte 0x00000000
    .global lbl_8052086C
    lbl_8052086C:
        .4byte 0x3DE147AE
    .global lbl_80520870
    lbl_80520870:
        .float 1.0
    .global lbl_80520874
    lbl_80520874:
        .4byte 0x41200000
    .global lbl_80520878
    lbl_80520878:
        .4byte 0x40200000
    .global lbl_8052087C
    lbl_8052087C:
        .4byte 0x42C80000
    .global lbl_80520880
    lbl_80520880:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520888
    lbl_80520888:
        .float 0.5
        .4byte 0x00000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	80437844
 * Size:	000084
 */
TSequenceProcessor::TSequenceProcessor(const JMessage::TReference* ref, JMessage::TControl* control)
    : JMessage::TSequenceProcessor(ref, control)
    , _50(0.0f)
    , _54(0)
    , _58(0)
    , _5C(0)
    , _60(0)
    , _64(0)
{
	for (int i = 0; i < 4; i++) {
		_68.byteView[i] = 0;
	}

	_4C = 0.11f;
}

/*
 * --INFO--
 * Address:	804378C8
 * Size:	000034
 */
void TSequenceProcessor::do_begin(const void* arg0, const char* arg1)
{
	_68.typeView &= 0xFFFFFFF7;
	_4C = 0.11f;
	_50 = _4C;
	_5C = 0;
	_60 = 0;
	_64 = 0;
	_6C = false;
}

/*
 * --INFO--
 * Address:	804378FC
 * Size:	000004
 */
void TSequenceProcessor::do_end() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagColor(void const*, unsigned long)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagSize(void const*, unsigned long)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagRuby(void const*, unsigned long)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagFont(void const*, unsigned long)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80437900
 * Size:	0000A4
 */
void TSequenceProcessor::do_tag(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmplwi   r0, 0xc0
	bge      lbl_80437940
	cmpwi    r0, 2
	clrlwi   r4, r4, 0x10
	beq      lbl_8043792C
	b        lbl_80437938

lbl_8043792C:
	bl       tagControl__Q25P2JME18TSequenceProcessorFUsPCvUl
	mr       r7, r3
	b        lbl_80437990

lbl_80437938:
	li       r7, 1
	b        lbl_80437990

lbl_80437940:
	cmplwi   r0, 0xff
	bne      lbl_80437990
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 2
	beq      lbl_80437984
	bge      lbl_80437968
	cmpwi    r0, 0
	beq      lbl_80437974
	bge      lbl_8043797C
	b        lbl_80437990

lbl_80437968:
	cmpwi    r0, 4
	bge      lbl_80437990
	b        lbl_8043798C

lbl_80437974:
	li       r7, 1
	b        lbl_80437990

lbl_8043797C:
	li       r7, 1
	b        lbl_80437990

lbl_80437984:
	li       r7, 1
	b        lbl_80437990

lbl_8043798C:
	li       r7, 1

lbl_80437990:
	lwz      r0, 0x14(r1)
	mr       r3, r7
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804379A4
 * Size:	000008
 */
bool TSequenceProcessor::do_systemTagCode(u16, const void*, u32) { return false; }

/*
 * --INFO--
 * Address:	804379AC
 * Size:	0001D8
 */
void TSequenceProcessor::do_isReady(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x68(r3)
	li       r31, 0
	clrlwi.  r0, r3, 0x1f
	beq      lbl_804379E4
	li       r3, 0
	b        lbl_80437B64

lbl_804379E4:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80437AA0
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x50(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80520868@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x50(r30)
	lfs      f1, 0x50(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80437B60
	lwz      r0, 0x54(r30)
	li       r3, 0
	cmplwi   r0, 0
	bne      lbl_80437A30
	lwz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_80437A34

lbl_80437A30:
	li       r3, 1

lbl_80437A34:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437A58
	lis      r3, lbl_8049A8B0@ha
	lis      r5, lbl_8049A8C4@ha
	addi     r3, r3, lbl_8049A8B0@l
	li       r4, 0x17d
	addi     r5, r5, lbl_8049A8C4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437A58:
	lwz      r3, 0x54(r30)
	cmplwi   r3, 0
	beq      lbl_80437A70
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80437A88

lbl_80437A70:
	lwz      r3, 0x58(r30)
	cmplwi   r3, 0
	beq      lbl_80437B60
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80437B60

lbl_80437A88:
	mr       r3, r30
	bl       resetAbtnWait__Q25P2JME18TSequenceProcessorFv
	lwz      r0, 0x68(r30)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x68(r30)
	b        lbl_80437B60

lbl_80437AA0:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	lfs      f31, lbl_80520870@sda21(r2)
	beq      lbl_80437AB4
	lfs      f31, lbl_80520874@sda21(r2)
	b        lbl_80437B34

lbl_80437AB4:
	lwz      r3, 0x54(r30)
	cmplwi   r3, 0
	beq      lbl_80437ACC
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80437AE4

lbl_80437ACC:
	lwz      r4, 0x58(r30)
	cmplwi   r4, 0
	beq      lbl_80437B08
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80437B08

lbl_80437AE4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x68(r30)
	ori      r0, r0, 8
	stw      r0, 0x68(r30)
	b        lbl_80437B34

lbl_80437B08:
	cmplwi   r3, 0
	beq      lbl_80437B1C
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80437B30

lbl_80437B1C:
	cmplwi   r4, 0
	beq      lbl_80437B34
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80437B34

lbl_80437B30:
	lfs      f31, lbl_80520878@sda21(r2)

lbl_80437B34:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r30)
	lfs      f2, 0x54(r3)
	lfs      f0, lbl_80520868@sda21(r2)
	fnmsubs  f1, f31, f2, f1
	stfs     f1, 0x50(r30)
	lfs      f1, 0x50(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80437B60
	li       r31, 1

lbl_80437B60:
	mr       r3, r31

lbl_80437B64:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437B84
 * Size:	000004
 */
// WEAK - in header.
// void TSequenceProcessor::doFastForwardSE() { }

/*
 * --INFO--
 * Address:	80437B88
 * Size:	000008
 */
bool TSequenceProcessor::do_jump_isReady() { return false; }

/*
 * --INFO--
 * Address:	80437B90
 * Size:	00000C
 */
void TSequenceProcessor::do_jump(const void* arg0, const char* arg1) { _50 = _4C; }

/*
 * --INFO--
 * Address:	80437B9C
 * Size:	000004
 */
void TSequenceProcessor::do_branch_query(u16) { }

/*
 * --INFO--
 * Address:	80437BA0
 * Size:	000008
 */
int TSequenceProcessor::do_branch_queryResult() { return -1; }

/*
 * --INFO--
 * Address:	80437BA8
 * Size:	00000C
 */
void TSequenceProcessor::do_branch(const void* arg0, const char* arg1) { _4C = _50; }

/*
 * --INFO--
 * Address:	80437BB4
 * Size:	0000A8
 */
void TSequenceProcessor::do_character(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0, 0, 0xf
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 1
	bne      lbl_80437BEC
	rlwinm.  r0, r4, 0, 0x10, 0x17
	bne      lbl_80437BEC
	cmpwi    r4, 0xa
	beq      lbl_80437BE8
	b        lbl_80437BEC

lbl_80437BE8:
	li       r3, 0

lbl_80437BEC:
	lfs      f1, 0x50(r31)
	clrlwi.  r0, r3, 0x18
	lfs      f0, 0x4c(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	beq      lbl_80437C48
	lwz      r0, 0x5c(r31)
	cmpwi    r0, 0
	bne      lbl_80437C28
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	b        lbl_80437C3C

lbl_80437C28:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80437C3C:
	lwz      r3, 0x5c(r31)
	addi     r0, r3, 1
	stw      r0, 0x5c(r31)

lbl_80437C48:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437C5C
 * Size:	000004
 */
// WEAK - in header.
// void TSequenceProcessor::doCharacterSE(int) { }

/*
 * --INFO--
 * Address:	80437C60
 * Size:	000004
 */
// WEAK - in header.
// void TSequenceProcessor::doCharacterSEStart() { }

/*
 * --INFO--
 * Address:	80437C64
 * Size:	0000F4
 */
bool TSequenceProcessor::tagControl(u16 arg0, const void* arg1, u32 arg2)
{
	switch (arg0) {
	case 0:
		P2ASSERTLINE(608, !arg2);
		setAbtnWait();
		break;
	case 1:
		u8 byte = (s8) * ((s8*)arg1);
		if (byte == 0xFF) {
			_4C = 0.11f;
		} else {
			_4C = (f32)byte / 100.0f;
		}
		_50 = _4C;
		break;
	case 2:
		_6C = *(s8*)arg1;
		break;
	default:
		P2ASSERTLINE(633, 0);
		break;
	}

	return true;
}

/*
 * --INFO--
 * Address:	80437D58
 * Size:	00004C
 */
void TSequenceProcessor::setAbtnWait()
{
	_68.typeView |= 2;
	_50 = 0.5f;
	_68.typeView &= 0xFFFFFFFB;
	doCharacterSEEnd();
}

/*
 * --INFO--
 * Address:	80437DA4
 * Size:	000004
 */
// WEAK - in header.
// void TSequenceProcessor::doCharacterSEEnd(void) { }

/*
 * --INFO--
 * Address:	80437DA8
 * Size:	000060
 */
void TSequenceProcessor::resetAbtnWait()
{
	doResetAbtnWaitSE();
	_68.typeView &= 0xFFFFFFFD;
	_50 = _4C;
	_68.typeView |= 4;
	_5C = 0;
}

/*
 * --INFO--
 * Address:	80437E08
 * Size:	00002C
 */
void TSequenceProcessor::doResetAbtnWaitSE() { PSSystem::spSysIF->playSystemSe(0x1800, 0); }

/*
 * --INFO--
 * Address:	80437E34
 * Size:	000018
 */
void TSequenceProcessor::reset()
{
	for (int i = 0; i < 4; i++) {
		_68.byteView[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	80437E4C
 * Size:	000060
 */
// WEAK - in header.
// TSequenceProcessor::~TSequenceProcessor() { }
} // namespace P2JME
