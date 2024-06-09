#include "JSystem/JMessage/data.h"
#include "JSystem/JMessage/TControl.h"
#include "JSystem/JMessage/TReference.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JGadget/enumerator.h"
#include "types.h"

namespace JMessage {

/**
 * @note Address: 0x80006D0C
 * @note Size: 0x48
 */
TReference::~TReference() { }

/**
 * @note Address: 0x80006D54
 * @note Size: 0x8
 */
char* TReference::do_word(u32) const { return nullptr; }

/**
 * @note Address: 0x80006D5C
 * @note Size: 0x48
 */
TProcessor::~TProcessor() { }

/**
 * @note Address: 0x80006DA4
 * @note Size: 0xBC
 * setBegin_messageCode__Q28JMessage10TProcessorFUsUs
 */
void TProcessor::setBegin_messageCode(u16 groupID, u16 messageIndex)
{
	const TResource* resource = getResource_groupID(groupID);
	void* entry               = (resource == nullptr) ? nullptr : resource->getMessageEntry_messageIndex(messageIndex);

	if (entry) {
		const char* text = mResourceCache->getMessageText_messageEntry(entry);
		reset_(text);
		do_begin_((const void*)entry, text);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getResource_groupID__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	bne      lbl_80006DD8
	li       r31, 0
	b        lbl_80006E04

lbl_80006DD8:
	lwz      r3, 0xc(r3)
	clrlwi   r4, r30, 0x10
	lhz      r0, 8(r3)
	cmplw    r4, r0
	bge      lbl_80006E00
	lhz      r0, 0xa(r3)
	mullw    r0, r4, r0
	add      r31, r3, r0
	addi     r31, r31, 0x10
	b        lbl_80006E04

lbl_80006E00:
	li       r31, 0

lbl_80006E04:
	cmplwi   r31, 0
	beq      lbl_80006E44
	lwz      r5, 8(r29)
	mr       r3, r29
	lwz      r0, 0(r31)
	lwz      r4, 0x10(r5)
	add      r30, r4, r0
	mr       r4, r30
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	mr       r5, r30
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80006E44:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80006E60
 * @note Size: 0x44
 */
void TProcessor::setBegin_messageID(u32 lowerHalfMsg, u32 upperHalfMsg, bool* isMsgValid)
{
	u32 code = toMessageCode_messageID(lowerHalfMsg, upperHalfMsg, isMsgValid);
	if (code != 0xFFFFFFFF) {
		setBegin_messageCode(code);
	}
}

/**
 * @note Address: 0x80006EA4
 * @note Size: 0xC0
 * setBegin_messageCode__Q28JMessage10TProcessorFUl
 */
void TProcessor::setBegin_messageCode(u32 code)
{
	setBegin_messageCode(code >> 0x10, code & 0xFFFF);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	srwi     r4, r4, 0x10
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getResource_groupID__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	bne      lbl_80006EDC
	li       r30, 0
	b        lbl_80006F08

lbl_80006EDC:
	lwz      r4, 0xc(r3)
	clrlwi   r3, r30, 0x10
	lhz      r0, 8(r4)
	cmplw    r3, r0
	bge      lbl_80006F04
	lhz      r0, 0xa(r4)
	mullw    r0, r3, r0
	add      r30, r4, r0
	addi     r30, r30, 0x10
	b        lbl_80006F08

lbl_80006F04:
	li       r30, 0

lbl_80006F08:
	cmplwi   r30, 0
	beq      lbl_80006F48
	lwz      r5, 8(r29)
	mr       r3, r29
	lwz      r0, 0(r30)
	lwz      r4, 0x10(r5)
	add      r31, r4, r0
	mr       r4, r31
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	mr       r5, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80006F48:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 * pushCurrent__Q28JMessage10TProcessorFPCc
 */
void TProcessor::pushCurrent(const char* newCurrent)
{
	if (newCurrent && mStack.mSize < 4) {
		mStack.mStack[mStack.mSize] = mCurrent;
		mStack.mSize++;
		mCurrent = newCurrent;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 * popCurrent__Q28JMessage10TProcessorFv
 */
const char* TProcessor::popCurrent()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80006F64
 * @note Size: 0x80
 */
const TResource* TProcessor::getResource_groupID(u16 groupID) const
{
	if (isResourceCache_groupID(groupID)) {
		return mResourceCache;
	}

	// Is there another way to do this?
	((TProcessor*)this)->mResourceCache = getResource_groupID_uncached(groupID);
	return mResourceCache;
}

/**
 * @note Address: 0x80006FE4
 * @note Size: 0x150
 */
u32 TProcessor::toMessageCode_messageID(u32 lowerHalfMsg, u32 upperHalfMsg, bool* isMsgValid) const
{
	const TResource* resource = mResourceCache;
	u16 index;
	if (resource) {
		index = resource->toMessageIndex_messageID(lowerHalfMsg, upperHalfMsg, isMsgValid);
		if (index != 0xFFFF) {
			return index | (resource->getGroupID() << 16);
		}
	}
	TResourceContainer* container = getResourceContainer();
	if (container == nullptr) {
		return -1;
	}

	JGadget::TContainerEnumerator_const<TResource, 0> enumerator(container->getResourceContainer());
	const TResource* newRes;
	while (enumerator) {
		newRes = (const TResource*)&(*enumerator);
		if (newRes != resource) {
			index = newRes->toMessageIndex_messageID(lowerHalfMsg, upperHalfMsg, isMsgValid);
			if (index != 0xFFFF) {
				((TProcessor*)this)->mResourceCache = newRes;
				return index | (newRes->getGroupID() << 0x10);
			}
		}
	}
	return -1;
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 * on_select_begin__Q28JMessage10TProcessorFPFPQ28JMessage10TProcessor_PCcPCvPCcUl
 */
unknown TProcessor::on_select_begin(ProcessOnSelectCallBack selectCallback, const char* offset, const void* base, const char* p4, u32 code)
{
	if (mStack.mSize < 4) {
		mProcess.reset_select();
		mProcess.mData.mSelectCallback = selectCallback;
		mProcess.mData.mBase           = (char*)base;
		mProcess.mData.mOffset         = offset;
		mProcess.mData.mRest           = code;
		pushCurrent(process_onSelect_(this));
		do_select_begin(code);
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 * on_select_end__Q28JMessage10TProcessorFv
 */
unknown TProcessor::on_select_end()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 * on_select_separate__Q28JMessage10TProcessorFv
 */
unknown TProcessor::on_select_separate()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80007134
 * @note Size: 0x4
 */
void TProcessor::do_reset() { }

/**
 * @note Address: 0x80007138
 * @note Size: 0x4
 */
void TProcessor::do_character(int) { }

/**
 * @note Address: 0x8000713C
 * @note Size: 0x8
 */
bool TProcessor::do_tag(u32, const void*, u32) { return false; }

/**
 * @note Address: 0x80007144
 * @note Size: 0x8
 */
bool TProcessor::do_systemTagCode(u16, const void*, u32) { return false; }

/**
 * @note Address: 0x8000714C
 * @note Size: 0x4
 */
void TProcessor::do_select_begin(u32) { }

/**
 * @note Address: 0x80007150
 * @note Size: 0x4
 */
void TProcessor::do_select_end() { }

/**
 * @note Address: 0x80007154
 * @note Size: 0x4
 */
void TProcessor::do_select_separate() { }

/**
 * @note Address: 0x80007158
 * @note Size: 0x64
 * reset___Q28JMessage10TProcessorFPCc
 */
void TProcessor::reset_(const char* p1)
{
	mCurrent              = p1;
	mStack.mSize          = 0;
	mProcess.mEndCallback = process_onCharacterEnd_normal_;
	do_reset_(p1);
	do_reset();
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 * on_tag___Q28JMessage10TProcessorFv
 */
void TProcessor::on_tag_()
{
	// this is very funky and wrong
	u8* psz = (u8*)getCurrent();
	u8 size = mCurrent[0];

	mCurrent = size + (char*)psz + -1;

	u32 tag = (psz[1] << 0x8) | psz[2];
	tag <<= 8;
	tag |= psz[3];

	on_tag(tag, &psz[4], size - 5);
}

/**
 * @note Address: 0x800071BC
 * @note Size: 0x8
 */
bool TProcessor::do_setBegin_isReady_() const { return true; }

/**
 * @note Address: 0x800071C4
 * @note Size: 0x260
 * do_tag___Q28JMessage10TProcessorFUlPCvUl
 */
bool TProcessor::do_tag_(u32 tag, const void* data, u32 size)
{
	u32 group = data::getTagGroup(tag);
	u16 code  = data::getTagCode(tag);
	switch (group) {
	case 0xFF:
		if (do_systemTagCode(code, data, size) == false) {
			do_systemTagCode_(code, data, size);
		}
		break;
	case 0xFE:
		pushCurrent(mReference->do_word(code));
		break;
	case 0xFD:
		pushCurrent(on_message_limited(code));
		break;
	case 0xF6:
		on_select_begin(&process_onSelect_limited_, (char*)data, (char*)data + size, nullptr, code);
		break;
	case 0xF5:
		on_select_begin(&process_onSelect_, (char*)data, (char*)data + size, nullptr, code);
		break;
	default:
		break;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmpwi    r0, 0xfd
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	clrlwi   r29, r4, 0x10
	stw      r28, 0x10(r1)
	mr       r28, r6
	beq      lbl_800072B8
	bge      lbl_80007218
	cmpwi    r0, 0xf6
	beq      lbl_800072F8
	bge      lbl_80007404
	cmpwi    r0, 0xf5
	bge      lbl_80007380
	b        lbl_80007404

lbl_80007218:
	cmpwi    r0, 0xff
	beq      lbl_80007228
	bge      lbl_80007404
	b        lbl_80007268

lbl_80007228:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007404
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r31
	mr       r6, r28
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	b        lbl_80007404

lbl_80007268:
	lwz      r3, 4(r30)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80007404
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)
	b        lbl_80007404

lbl_800072B8:
	mr       r4, r29
	bl       on_message_limited__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	beq      lbl_80007404
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)
	b        lbl_80007404

lbl_800072F8:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	lis      r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	lis      r4,
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	addi     r5, r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	add      r0, r31, r28
	stw      r5, 0x24(r30)
	addi     r4, r4,
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	stw      r4, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r31, 0x30(r30)
	stw      r29, 0x34(r30)
	bl
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
	cmplwi   r3, 0
	beq      lbl_80007364
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007364
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)

lbl_80007364:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80007404

lbl_80007380:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	lis      r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	lis      r4,
process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha addi r5,
r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	add      r0, r31, r28
	stw      r5, 0x24(r30)
	addi     r4, r4,
process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l stw r4,
0x28(r30) stw      r0, 0x2c(r30) stw      r31, 0x30(r30) stw      r29, 0x34(r30)
	bl       process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
	cmplwi   r3, 0
	beq      lbl_800073EC
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_800073EC
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)

lbl_800073EC:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80007404:
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
 * @note Address: 0x80007424
 * @note Size: 0x50
 */
const char* TProcessor::on_message_limited(u16 messageIndex) const { return mResourceCache->getMessageText_messageIndex(messageIndex); }

/**
 * @note Address: 0x80007474
 * @note Size: 0xD0
 * do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl
 */
void TProcessor::do_systemTagCode_(u16 p1, const void* p2, u32 p3)
{
	switch (p1) {
	case 4:
		pushCurrent(mReference->do_word(*(u32*)p2));
		break;
	case 5:
		pushCurrent(on_message(*(u32*)p2));
		break;
	}
}

/**
 * @note Address: 0x80007544
 * @note Size: 0x20
 * on_message__Q28JMessage10TProcessorCFUl
 */
const char* TProcessor::on_message(u32 code) const { return getMessageText_messageCode(code); }

/**
 * @note Address: 0x80007564
 * @note Size: 0xEC
 */
const char* TProcessor::getMessageText_messageCode(u32 tag) const
{
	const TResource* resource = getResource_groupID(tag >> 16);
	void* entry               = (resource == nullptr) ? nullptr : resource->getMessageEntry_messageIndex(data::getTagCode(tag));

	if (!entry) {
		return nullptr;
	}

	return mResourceCache->getMessageText_messageEntry(entry);
}

/**
 * @note Address: N/A
 * @note Size: 0x154
 * process_character___Q28JMessage10TProcessorFv
 */
bool TProcessor::process_character_()
{
	u32 character = mCurrent[0];

	switch (character) {
	case 0:
		if (!mProcess.mEndCallback(this)) {
			return false;
		}
		break;
	case 26:
		on_tag_(); // this is wrong
		break;
	default:
		if (mReference->mResource->isLeadByte(character)) {
			mCurrent++;
			character <<= 8;
			character |= ((u8*)mCurrent)[0];
		}
		mCurrent++;
		on_character(character);
	}

	return true;
}

/**
 * @note Address: 0x80007650
 * @note Size: 0x60
 */
bool TProcessor::process_onCharacterEnd_normal_(TProcessor* processor)
{
	u32 offset = processor->mStack.mSize;
	if (offset != 0) {
		processor->mCurrent = processor->mStack.getTop();
		processor->mStack.mSize--;
		return true;
	} else {
		processor->do_end_();
		return false;
	}
}

/**
 * @note Address: 0x800076B0
 * @note Size: 0xFC
 */
bool TProcessor::process_onCharacterEnd_select_(TProcessor* processor)
{
	processor->mProcess.mData.mRest--;
	if (processor->mProcess.mData.mRest != 0) {
		processor->mCurrent = processor->mStack.getTop();
		processor->mStack.mSize--;
		const char* processedResult = processor->mProcess.mData.mSelectCallback(processor);
		if (processedResult != nullptr && processor->mStack.mSize < 4) {
			processor->mStack.mStack[processor->mStack.mSize] = processor->mCurrent;
			processor->mStack.mSize++;
			processor->mCurrent = processedResult;
		}
		processor->do_select_separate();
		return true;
	} else {
		processor->mProcess.mEndCallback = &process_onCharacterEnd_normal_;
		processor->mCurrent              = processor->mStack.getTop();
		processor->mStack.mSize--;
		processor->do_select_end();
		return true;
	}
}

/**
 * @note Address: 0x800077AC
 * @note Size: 0x1C
 */
const char* TProcessor::process_onSelect_limited_(TProcessor* processor)
{

	u32 next                          = *(u16*)processor->mProcess.mData.mOffset;
	processor->mProcess.mData.mOffset = (void*)((u8*)processor->mProcess.mData.mOffset + 2);
	return processor->mProcess.mData.mBase + next;
	/*
	lwz      r5, 0x30(r3)
	lhz      r4, 0(r5)
	addi     r0, r5, 2
	stw      r0, 0x30(r3)
	lwz      r0, 0x2c(r3)
	add      r3, r0, r4
	blr
	*/
}

/**
 * @note Address: 0x800077C8
 * @note Size: 0x1C
 * process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
 */
const char* TProcessor::process_onSelect_(TProcessor* processor)
{
	u32 next                          = *(u32*)processor->mProcess.mData.mOffset;
	processor->mProcess.mData.mOffset = (void*)((u8*)processor->mProcess.mData.mOffset + 4);
	return processor->mProcess.mData.mBase + next;
	/*
	lwz      r5, 0x30(r3)
	lwz      r4, 0(r5)
	addi     r0, r5, 4
	stw      r0, 0x30(r3)
	lwz      r0, 0x2c(r3)
	add      r3, r0, r4
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 * toString_status__Q28JMessage18TSequenceProcessorFi
 */
const char* TSequenceProcessor::toString_status(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 * toValue_status__Q28JMessage18TSequenceProcessorFPCc
 */
int TSequenceProcessor::toValue_status(const char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800077E4
 * @note Size: 0x44
 */
TSequenceProcessor::TSequenceProcessor(const TReference* ref, TControl* control)
    : TProcessor(ref)
    , mControl(control)
    , mStatus(STATUS_Ready)
{
}

/**
 * @note Address: 0x80007828
 * @note Size: 0x5C
 */
TSequenceProcessor::~TSequenceProcessor() { }

/**
 * @note Address: 0x80007884
 * @note Size: 0x278
 */
const char* TSequenceProcessor::process(const char* p1)
{
	do {
		switch (mStatus) {
		case STATUS_Normal:
			break;
		case STATUS_Jump:
			if (!on_jump_isReady()) {
				return mCurrent;
			}

			mStatus          = STATUS_Normal;
			const void* data = mProc.mJumpProc.mJumpFunc(this);
			if (data != nullptr) {
				on_jump(data, mControl->getMessageText_begin());
			}
			break;
		case STATUS_Branch:
			u32 tmp = on_branch_queryResult();
			if (tmp > 0xFFFF) {
				switch (tmp) {
				case -1:
					return mCurrent;
				case -2:
					mStatus = STATUS_Normal;
					break;
				}
			} else {
				mStatus = STATUS_Normal;

				if (tmp < mProc.mBranchProc.mTarget) {
					const void* data = mProc.mBranchProc.mBranchFunc(this, tmp);
					if (data != nullptr) {
						on_branch(data, mControl->getMessageText_begin());
					}
				}
			}
			break;
		}

		if (mCurrent == p1) {
			on_end();
			return nullptr;
		}

		if (!on_isReady()) {
			return mCurrent;
		}
	} while (process_character_()); // inlines here need fixing

	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4

lbl_8000789C:
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 3
	beq      lbl_800078BC
	bge      lbl_800078B0
	b        lbl_80007984

lbl_800078B0:
	cmpwi    r0, 5
	bge      lbl_80007984
	b        lbl_80007908

lbl_800078BC:
	mr       r3, r30
	bl       on_jump_isReady__Q28JMessage18TSequenceProcessorFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_800078D4
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_800078D4:
	li       r0, 2
	mr       r3, r30
	stw      r0, 0x3c(r30)
	lwz      r12, 0x40(r30)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80007984
	lwz      r5, 0x38(r30)
	mr       r3, r30
	lwz      r5, 0x18(r5)
	bl       on_jump__Q28JMessage18TSequenceProcessorFPCvPCc
	b        lbl_80007984

lbl_80007908:
	mr       r3, r30
	bl       on_branch_queryResult__Q28JMessage18TSequenceProcessorFv
	mr       r4, r3
	cmplwi   r4, 0xffff
	ble      lbl_80007948
	cmpwi    r4, -1
	beq      lbl_80007934
	bge      lbl_80007984
	cmpwi    r4, -2
	bge      lbl_8000793C
	b        lbl_80007984

lbl_80007934:
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_8000793C:
	li       r0, 2
	stw      r0, 0x3c(r30)
	b        lbl_80007984

lbl_80007948:
	li       r0, 2
	stw      r0, 0x3c(r30)
	lwz      r0, 0x48(r30)
	cmplw    r4, r0
	bge      lbl_80007984
	lwz      r12, 0x40(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80007984
	lwz      r5, 0x38(r30)
	mr       r3, r30
	lwz      r5, 0x18(r5)
	bl       on_branch__Q28JMessage18TSequenceProcessorFPCvPCc

lbl_80007984:
	lwz      r0, 0xc(r30)
	cmplw    r0, r31
	bne      lbl_800079AC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_80007AE8

lbl_800079AC:
	mr       r3, r30
	bl       on_isReady__Q28JMessage18TSequenceProcessorFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_800079C4
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_800079C4:
	lwz      r7, 0xc(r30)
	lbz      r29, 0(r7)
	cmpwi    r29, 0x1a
	beq      lbl_80007A04
	bge      lbl_80007A78
	cmpwi    r29, 0
	beq      lbl_800079E4
	b        lbl_80007A78

lbl_800079E4:
	lwz      r12, 0x24(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007AD8
	li       r0, 0
	b        lbl_80007ADC

lbl_80007A04:
	lbz      r29, 1(r7)
	addi     r27, r7, 5
	mr       r3, r30
	add      r0, r7, r29
	mr       r5, r27
	stw      r0, 0xc(r30)
	addi     r6, r29, -5
	lbz      r0, 3(r7)
	lwz      r12, 0(r30)
	rlwinm   r28, r0, 8, 0x10, 0x17
	lbz      r4, 2(r7)
	lbz      r0, 4(r7)
	rlwimi   r28, r4, 0x10, 8, 0xf
	lwz      r12, 0x14(r12)
	or       r28, r28, r0
	mr       r4, r28
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007AD8
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	mr       r5, r27
	addi     r6, r29, -5
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	b        lbl_80007AD8

lbl_80007A78:
	lwz      r4, 4(r30)
	mr       r3, r29
	lwz      r4, 4(r4)
	lwz      r12, 4(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80007AB4
	lwz      r3, 0xc(r30)
	slwi     r29, r29, 8
	addi     r0, r3, 1
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	lbz      r0, 0(r3)
	or       r29, r29, r0

lbl_80007AB4:
	lwz      r5, 0xc(r30)
	mr       r3, r30
	mr       r4, r29
	addi     r0, r5, 1
	stw      r0, 0xc(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80007AD8:
	li       r0, 1

lbl_80007ADC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8000789C
	li       r3, 0

lbl_80007AE8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80007AFC
 * @note Size: 0x2C
 */
bool TSequenceProcessor::on_isReady() { return do_isReady(); }

/**
 * @note Address: N/A
 * @note Size: 0x14
 * on_jump_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessor_PCvUl
 */
unknown TSequenceProcessor::on_jump_register(OnJumpRegisterCallBack*, const void*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80007B28
 * @note Size: 0x2C
 */
bool TSequenceProcessor::on_jump_isReady() { return do_jump_isReady(); }

/**
 * @note Address: 0x80007B54
 * @note Size: 0x9C
 * on_jump__Q28JMessage18TSequenceProcessorFPCvPCc
 */
void TSequenceProcessor::on_jump(const void* p1, const char* p2)
{
	mCurrent              = p2;
	mStack.mSize          = 0;
	mProcess.mEndCallback = &process_onCharacterEnd_normal_;
	do_reset_(p2);
	do_reset();
	do_jump(p1, p2);
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 * on_branch_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessorUl_PCvPCvUl
 */
unknown TSequenceProcessor::on_branch_register(OnBranchRegisterCallBack*, const void*, const void*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 * on_branch_query__Q28JMessage18TSequenceProcessorFUs
 */
unknown TSequenceProcessor::on_branch_query(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80007BF0
 * @note Size: 0x2C
 */
int TSequenceProcessor::on_branch_queryResult() { return do_branch_queryResult(); }

/**
 * @note Address: 0x80007C1C
 * @note Size: 0x9C
 * on_branch__Q28JMessage18TSequenceProcessorFPCvPCc
 */
void TSequenceProcessor::on_branch(const void* p1, const char* p2)
{
	mCurrent              = p2;
	mStack.mSize          = 0;
	mProcess.mEndCallback = &process_onCharacterEnd_normal_;
	do_reset_(p2);
	do_reset();
	do_branch(p1, p2);
}

/**
 * @note Address: 0x80007CB8
 * @note Size: 0x4
 */
void TSequenceProcessor::do_begin(const void*, const char*) { }

/**
 * @note Address: 0x80007CBC
 * @note Size: 0x4
 */
void TSequenceProcessor::do_end() { }

/**
 * @note Address: 0x80007CC0
 * @note Size: 0x8
 */
bool TSequenceProcessor::do_isReady() { return true; }

/**
 * @note Address: 0x80007CC8
 * @note Size: 0x8
 */
bool TSequenceProcessor::do_jump_isReady() { return true; }

/**
 * @note Address: 0x80007CD0
 * @note Size: 0x4
 */
void TSequenceProcessor::do_jump(const void*, const char*) { }

/**
 * @note Address: 0x80007CD4
 * @note Size: 0x4
 */
void TSequenceProcessor::do_branch_query(u16) { }

/**
 * @note Address: 0x80007CD8
 * @note Size: 0x8
 */
int TSequenceProcessor::do_branch_queryResult() { return -0x2; }

/**
 * @note Address: 0x80007CE0
 * @note Size: 0x4
 */
void TSequenceProcessor::do_branch(const void*, const char*) { }

/**
 * @note Address: 0x80007CE4
 * @note Size: 0x1C
 */
void TSequenceProcessor::do_reset_(const char* p1)
{
	mStatus = STATUS_Ready;
	if (p1) {
		mStatus = STATUS_Normal;
	}
}

/**
 * @note Address: 0x80007D00
 * @note Size: 0x10
 * do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
 */
bool TSequenceProcessor::do_setBegin_isReady_() const { return mStatus == STATUS_Ready; }

/**
 * @note Address: 0x80007D10
 * @note Size: 0x2C
 * do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
 */
void TSequenceProcessor::do_begin_(const void* p1, const char* p2) { do_begin(p1, p2); }

/**
 * @note Address: 0x80007D3C
 * @note Size: 0x34
 * do_end___Q28JMessage18TSequenceProcessorFv
 */
void TSequenceProcessor::do_end_()
{
	mStatus = STATUS_End;
	do_end();
}

/**
 * @note Address: 0x80007D70
 * @note Size: 0x140
 */
bool TSequenceProcessor::do_tag_(u32 tag, const void* data, u32 size)
{
	u32 group = data::getTagGroup(tag);
	u16 code  = data::getTagCode(tag);
	switch (group) {
	case 0xFC:
		mStatus                   = STATUS_Jump;
		mProc.mJumpProc.mJumpFunc = &process_onJump_limited_;
		mProc.mJumpProc.mTarget   = code;
		break;
	case 0xFB:
		mProc.mBranchProc.mBranchFunc = &process_onBranch_limited_;
		mProc.mBranchProc.mTargetAddr = data;
		mProc.mBranchProc.mTarget     = code;
		break;
	case 0xFA:
		mProc.mBranchProc.mBranchFunc = &process_onBranch_;
		mProc.mBranchProc.mTargetAddr = data;
		mProc.mBranchProc.mTarget     = code;
		break;
	case 0xF9:
		mStatus = STATUS_Branch;
		do_branch_query(code);
		break;
	case 0xF8:
		mProc.mBranchProc.mBranchFunc = &process_onBranch_limited_;
		mProc.mBranchProc.mTargetAddr = (const void*)((u32)data + 2);
		mProc.mBranchProc.mTarget     = *(u16*)(data);
		mStatus                       = STATUS_Branch;
		do_branch_query(code);
		break;
	case 0xF7:
		mProc.mBranchProc.mBranchFunc = &process_onBranch_;
		mProc.mBranchProc.mTargetAddr = (const void*)((u32)data + 2);
		mProc.mBranchProc.mTarget     = *(u16*)(data);
		mStatus                       = STATUS_Branch;
		do_branch_query(code);
		break;
	default:
		TProcessor::do_tag_(tag, data, size);
		break;
	}
}

/**
 * @note Address: 0x80007EB0
 * @note Size: 0x64
 * do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
 */
void TSequenceProcessor::do_systemTagCode_(u16 p1, const void* p2, u32 p3)
{
	switch (p1) {
	case 6:
		mStatus                   = STATUS_Jump;
		mProc.mJumpProc.mJumpFunc = &process_onJump_;
		mProc.mJumpProc.mTarget   = *(u32*)p2;
		break;
	case 0:
	case 1:
	case 2:
	case 3:
		break;
	case 4:
	case 5:
	default:
		TProcessor::do_systemTagCode_(p1, p2, p3);
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  cmpwi     r0, 0x6
	  beq-      .loc_0x30
	  bge-      .loc_0x50
	  cmpwi     r0, 0x4
	  bge-      .loc_0x50
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x50

	.loc_0x30:
	  li        r0, 0x3
	  lis       r4, 0x8000
	  stw       r0, 0x3C(r3)
	  addi      r0, r4, 0x7F80
	  lwz       r4, 0x0(r5)
	  stw       r0, 0x40(r3)
	  stw       r4, 0x44(r3)
	  b         .loc_0x54

	.loc_0x50:
	  bl        -0xA8C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 * process_setMessageIndex_reserved___Q28JMessage18TSequenceProcessorFUs
 */
unknown TSequenceProcessor::process_setMessageIndex_reserved_(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 * process_setMessageCode___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUsUs
 */
unknown TSequenceProcessor::process_setMessageCode_(const TSequenceProcessor*, u16, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80007F14
 * @note Size: 0x6C
 */
void* TSequenceProcessor::process_onJump_limited_(const TSequenceProcessor* processor)
{
	u16 groupID = processor->mResourceCache->getGroupID();

	u16 v1 = processor->mProc.mJumpProc.mTarget & 0xFFFF;
	if (v1 >= 0xFF00) {
		return nullptr;
	}

	TControl* control = processor->mControl;
	return (!control->setMessageCode_inSequence_(processor, groupID, v1)) ? nullptr : control->mEntry;
}

/**
 * @note Address: 0x80007F80
 * @note Size: 0x64
 * process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor
 */
void* TSequenceProcessor::process_onJump_(const TSequenceProcessor* processor)
{
	u16 v1 = processor->mProc.mJumpProc.mTarget & 0xFFFF;
	if (v1 >= 0xFF00) {
		return nullptr;
	}

	TControl* control = processor->mControl;
	return (!control->setMessageCode_inSequence_(processor, processor->mProc.mJumpProc.mTarget >> 0x10, v1)) ? nullptr : control->mEntry;
}

/**
 * @note Address: 0x80007FE4
 * @note Size: 0x70
 */
void* TSequenceProcessor::process_onBranch_limited_(const TSequenceProcessor* processor, u32 p2)
{
	u16 v1      = ((u16*)processor->mProc.mBranchProc.mTargetAddr)[p2];
	u16 groupID = processor->mResourceCache->getGroupID();

	if (v1 >= 0xFF00) {
		return nullptr;
	}

	TControl* control = processor->mControl;
	return (!control->setMessageCode_inSequence_(processor, groupID, v1)) ? nullptr : control->mEntry;
}

/**
 * @note Address: 0x80008054
 * @note Size: 0x6C
 */
void* TSequenceProcessor::process_onBranch_(const TSequenceProcessor* processor, u32 p2)
{
	u16 v1 = ((u32*)processor->mProc.mJumpProc.mTarget)[p2];

	if (v1 >= 0xFF00) {
		return nullptr;
	}

	TControl* control = processor->mControl;
	return (!control->setMessageCode_inSequence_(processor, ((u32*)processor->mProc.mJumpProc.mTarget)[p2] >> 0x10, v1)) ? nullptr
	                                                                                                                     : control->mEntry;
}

/**
 * @note Address: 0x800080C0
 * @note Size: 0x3C
 */
TRenderingProcessor::TRenderingProcessor(const TReference* ref)
    : TProcessor(ref)
{
}

/**
 * @note Address: 0x800080FC
 * @note Size: 0x5C
 */
TRenderingProcessor::~TRenderingProcessor() { }

/**
 * @note Address: 0x80008158
 * @note Size: 0x174
 */
int TRenderingProcessor::process(const char* p1)
{
	do {
		if (mCurrent == p1) {
			on_end();
			return 0;
		}
	} while (process_character_()); // this needs fixing

	return 0;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4

lbl_80008170:
	lwz      r7, 0xc(r30)
	cmplw    r7, r31
	bne      lbl_80008198
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_800082B8

lbl_80008198:
	lbz      r29, 0(r7)
	cmpwi    r29, 0x1a
	beq      lbl_800081D4
	bge      lbl_80008248
	cmpwi    r29, 0
	beq      lbl_800081B4
	b        lbl_80008248

lbl_800081B4:
	lwz      r12, 0x24(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800082A8
	li       r0, 0
	b        lbl_800082AC

lbl_800081D4:
	lbz      r29, 1(r7)
	addi     r27, r7, 5
	mr       r3, r30
	add      r0, r7, r29
	mr       r5, r27
	stw      r0, 0xc(r30)
	addi     r6, r29, -5
	lbz      r0, 3(r7)
	lwz      r12, 0(r30)
	rlwinm   r28, r0, 8, 0x10, 0x17
	lbz      r4, 2(r7)
	lbz      r0, 4(r7)
	rlwimi   r28, r4, 0x10, 8, 0xf
	lwz      r12, 0x14(r12)
	or       r28, r28, r0
	mr       r4, r28
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800082A8
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	mr       r5, r27
	addi     r6, r29, -5
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	b        lbl_800082A8

lbl_80008248:
	lwz      r4, 4(r30)
	mr       r3, r29
	lwz      r4, 4(r4)
	lwz      r12, 4(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80008284
	lwz      r3, 0xc(r30)
	slwi     r29, r29, 8
	addi     r0, r3, 1
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	lbz      r0, 0(r3)
	or       r29, r29, r0

lbl_80008284:
	lwz      r5, 0xc(r30)
	mr       r3, r30
	mr       r4, r29
	addi     r0, r5, 1
	stw      r0, 0xc(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800082A8:
	li       r0, 1

lbl_800082AC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80008170
	li       r3, 0

lbl_800082B8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800082CC
 * @note Size: 0x4
 */
void TRenderingProcessor::do_begin(const void*, const char*) { }

/**
 * @note Address: 0x800082D0
 * @note Size: 0x4
 */
void TRenderingProcessor::do_end() { }

/**
 * @note Address: 0x800082D4
 * @note Size: 0x4
 */
void TRenderingProcessor::do_reset_(const char*) { }

/**
 * @note Address: 0x800082D8
 * @note Size: 0x2C
 * do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
 */
void TRenderingProcessor::do_begin_(const void* p1, const char* p2) { do_begin(p1, p2); }

/**
 * @note Address: 0x80008304
 * @note Size: 0x2C
 * do_end___Q28JMessage19TRenderingProcessorFv
 */
void TRenderingProcessor::do_end_() { do_end(); }

/**
 * @note Address: 0x80008330
 * @note Size: 0x34
 * do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
 */
bool TRenderingProcessor::do_tag_(u32 p1, const void* p2, u32 p3)
{
	int v1 = p1 >> 0x10 & 0xFF;
	if ((v1 >= 0xFD) || (v1 < 0xF7)) {
		TProcessor::do_tag_(p1, p2, p3);
	}
}

/**
 * @note Address: 0x80008364
 * @note Size: 0x40
 */
void TRenderingProcessor::do_systemTagCode_(u16 p1, const void* p2, u32 p3)
{
	switch (p1) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 6:
		break;
	case 4:
	case 5:
	default:
		TProcessor::do_systemTagCode_(p1, p2, p3);
		break;
	}
}

} // namespace JMessage
