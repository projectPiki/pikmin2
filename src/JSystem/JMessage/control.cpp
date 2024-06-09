#include "JSystem/JMessage/data.h"
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
	mBaseProcRender->mStack = mRenderStack; // here in lies bullshit, btw
	mBaseProcRender->process(mCurrentText);
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
}

} // namespace JMessage
