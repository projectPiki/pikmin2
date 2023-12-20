#include "JSystem/JMessage/JMessage.h"
#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JMessage/TControl.h"

namespace JMessage {

/**
 * @note Address: 0x800083A4
 * @note Size: 0x44
 */
TControl::TControl()
    : mBaseProcSeq(nullptr)
    , mBaseProcRender(nullptr)
    , mMessageCode(0xFFFF)
    , mMessageIndex(0xFFFF)
    , mResourceCache(nullptr)
    , mEntry(nullptr)
    , mMessageBegin(nullptr)
    , mCurrentText(nullptr)
    , _20(nullptr)
{
}

/**
 * @note Address: 0x800083E8
 * @note Size: 0x48
 */
TControl::~TControl() { }

/**
 * @note Address: 0x80008430
 * @note Size: 0x68
 */
void TControl::reset()
{
	mEntry        = nullptr;
	mMessageBegin = nullptr;
	mCurrentText  = nullptr;
	_20           = nullptr;
	mRenderStack.clear();

	if (mBaseProcSeq) {
		mBaseProcSeq->reset_(nullptr);
	}

	if (mBaseProcRender) {
		mBaseProcRender->reset_(nullptr);
	}
}

/**
 * @note Address: 0x80008498
 * @note Size: 0x88
 */
bool TControl::update()
{
	if (!isReady_update_()) {
		return false;
	}

	mCurrentText = mBaseProcSeq->process(nullptr);

	if (!mCurrentText) {
		mMessageBegin = nullptr;
		return false;
	}
	return true;
}

/**
 * @note Address: 0x80008520
 * @note Size: 0x15C
 */
void TControl::render()
{
	if (!isReady_render_()) {
		return;
	}

	mBaseProcRender->setBegin_messageEntryText(mResourceCache, mEntry, _20);
	mBaseProcRender->mStack = mRenderStack; // this needs fixing
	mBaseProcRender->process(mCurrentText);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r28, 0x20(r31)
	cmplwi   r28, 0
	beq      lbl_80008560
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	beq      lbl_80008560
	li       r3, 1

lbl_80008560:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8000865C
	lwz      r30, 8(r31)
	mr       r4, r28
	lwz      r29, 0x14(r31)
	lwz      r0, 0x10(r31)
	mr       r3, r30
	stw      r0, 8(r30)
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r28
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r5, r31, 0x28
	lwz      r0, 0x24(r31)
	addi     r6, r3, 0x14
	stw      r0, 0x10(r3)
	lwz      r0, 0x24(r31)
	slwi     r0, r0, 2
	add      r3, r31, r0
	addi     r4, r3, 0x28
	addi     r3, r4, 3
	subf     r3, r5, r3
	cmplw    r5, r4
	srwi     r3, r3, 2
	bge      lbl_80008650
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80008638

lbl_800085E4:
	lwz      r0, 0(r5)
	stw      r0, 0(r6)
	lwz      r0, 4(r5)
	stw      r0, 4(r6)
	lwz      r0, 8(r5)
	stw      r0, 8(r6)
	lwz      r0, 0xc(r5)
	stw      r0, 0xc(r6)
	lwz      r0, 0x10(r5)
	stw      r0, 0x10(r6)
	lwz      r0, 0x14(r5)
	stw      r0, 0x14(r6)
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r6)
	lwz      r0, 0x1c(r5)
	addi     r5, r5, 0x20
	stw      r0, 0x1c(r6)
	addi     r6, r6, 0x20
	bdnz     lbl_800085E4
	andi.    r3, r3, 7
	beq      lbl_80008650

lbl_80008638:
	mtctr    r3

lbl_8000863C:
	lwz      r0, 0(r5)
	addi     r5, r5, 4
	stw      r0, 0(r6)
	addi     r6, r6, 4
	bdnz     lbl_8000863C

lbl_80008650:
	lwz      r3, 8(r31)
	lwz      r4, 0x1c(r31)
	bl       process__Q28JMessage19TRenderingProcessorFPCc

lbl_8000865C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8000867C
 * @note Size: 0xDC
 */
bool TControl::setMessageCode(u16 idx1, u16 idx2) { return setMessageCode_inReset_(getProcessor(), idx1, idx2); }

/**
 * @note Address: 0x80008758
 * @note Size: 0xFC
 * setMessageID__Q28JMessage8TControlFUlUlPb
 */
bool TControl::setMessageID(u32 p1, u32 p2, bool* p3)
{
	TProcessor* proc = getProcessor();

	u32 code = proc->toMessageCode_messageID(p1, p2, p3);
	if (code == -1) {
		return false;
	}

	return setMessageCode_inReset_(proc, code >> 16, code);
}

/**
 * @note Address: 0x80008854
 * @note Size: 0xE8
 * setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
 */
bool TControl::setMessageCode_inSequence_(TProcessor const* proc, u16 messageCode, u16 messageIndex)
{
	mEntry = proc->getMessageEntry_messageCode(messageCode, messageIndex);

	if (mEntry == nullptr) {
		return false;
	}

	mMessageCode   = messageCode;
	mMessageIndex  = messageIndex;
	mResourceCache = proc->getResourceCache();
	mMessageBegin  = mResourceCache->getMessageText_messageEntry(mEntry);
	_20            = mMessageBegin;
	mRenderStack.clear();
	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x1924
	  cmplwi    r3, 0
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x48:
	  lwz       r3, 0xC(r3)
	  rlwinm    r4,r30,0,16,31
	  lhz       r0, 0x8(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x70
	  lhz       r0, 0xA(r3)
	  mullw     r0, r4, r0
	  add       r3, r3, r0
	  addi      r3, r3, 0x10
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x8C:
	  sth       r29, 0xC(r31)
	  li        r0, 0
	  lwz       r4, 0x8(r28)
	  li        r3, 0x1
	  sth       r30, 0xE(r31)
	  stw       r4, 0x10(r31)
	  lwz       r5, 0x10(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r5, 0x10(r5)
	  lwz       r4, 0x0(r4)
	  add       r4, r5, r4
	  stw       r4, 0x18(r31)
	  lwz       r4, 0x18(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x24(r31)

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace JMessage
