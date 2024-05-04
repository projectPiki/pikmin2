#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASHeap.h"

JASDSPChannel* JASDSPChannel::sDspChannels;

/**
 * @note Address: 0x800A4B48
 * @note Size: 0x2C
 */
JASDSPChannel::JASDSPChannel()
{
	_00           = 1;
	mPriority     = -1;
	mFlags        = 0;
	_0C           = 0;
	mCallback     = nullptr;
	mCallbackArgs = nullptr;
	mChannel      = nullptr;
}

/**
 * @note Address: 0x800A4B74
 * @note Size: 0x10
 */
void JASDSPChannel::free()
{
	mCallback     = nullptr;
	mCallbackArgs = nullptr;
}

/**
 * @note Address: 0x800A4B84
 * @note Size: 0x10
 */
void JASDSPChannel::start() { SET_FLAG(mFlags, 1); }

/**
 * @note Address: 0x800A4B94
 * @note Size: 0x88
 */
void JASDSPChannel::drop()
{
	if (mCallback) {
		mCallback(3, 0, mCallbackArgs);
	}
	free();
	mPriority = -1;
	RESET_FLAG(mFlags, 1);
	if (_00 == 0) {
		SET_FLAG(mFlags, 2);
		;
		_00 = 2;
	}
}

/**
 * @note Address: 0x800A4C1C
 * @note Size: 0x84
 */
void JASDSPChannel::initAll()
{
	sDspChannels = new (JASDram, 0x20) JASDSPChannel[0x40];
	for (int i = 0; i < 0x40; i++) {
		sDspChannels[i].mChannel = JASDsp::getDSPHandle(i);
	}
}

/**
 * @note Address: 0x800A4CA0
 * @note Size: 0xDC
 */
JASDSPChannel* JASDSPChannel::alloc(u8 index, s32 (*cb)(u32, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	channel->drop();
	channel->mPriority     = index;
	channel->_0C           = 0;
	channel->mCallback     = cb;
	channel->mCallbackArgs = p3;
	return channel;
}

/**
 * @note Address: 0x800A4D7C
 * @note Size: 0xE4
 */
JASDSPChannel* JASDSPChannel::allocForce(u8 index, s32 (*cb)(u32, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	channel->_00 = 1;
	channel->drop();
	channel->mPriority     = index;
	channel->_0C           = 0;
	channel->mCallback     = cb;
	channel->mCallbackArgs = p3;
	return channel;
}

/**
 * @note Address: 0x800A4E60
 * @note Size: 0xC
 */
void JASDSPChannel::setPriority(u8 priority) { mPriority = priority; }

/**
 * @note Address: 0x800A4E6C
 * @note Size: 0xDC
 */
JASDSPChannel* JASDSPChannel::getLowestChannel(int threshold)
{
	// JASDSPChannel* channel = sDspChannels;
	s16 lowestPriority = 0xFF;
	int lowestIndex    = -1;
	u32 v1             = 0;
	for (int i = 0; i < 0x40; i++) {
		if (sDspChannels[i].mPriority < 0) {
			return &sDspChannels[i];
		}
		if (sDspChannels[i].mPriority <= threshold && sDspChannels[i].mPriority <= lowestPriority
		    && (sDspChannels[i].mPriority != lowestPriority || sDspChannels[i]._0C > v1)) {
			// && !(sDspChannels[i]._04 == lowestPriority && sDspChannels[i]._0C <= v1)) {
			// if (lowestPriority == sDspChannels[i]._04 && sDspChannels[i]._0C <= v1) {
			// 	continue;
			// }
			v1             = sDspChannels[i]._0C;
			lowestPriority = sDspChannels[i].mPriority;
			lowestIndex    = i;
		}
	}
	return (lowestIndex < 0) ? nullptr : &sDspChannels[lowestIndex];
	/*
	lwz      r5, sDspChannels__13JASDSPChannel@sda21(r13)
	li       r0, 0x20
	li       r6, 0xff
	li       r7, -1
	mr       r4, r5
	li       r8, 0
	li       r9, 0
	mtctr    r0

lbl_800A4E8C:
	lha      r10, 4(r4)
	extsh.   r0, r10
	bge      lbl_800A4EA4
	mulli    r0, r9, 0x1c
	add      r3, r5, r0
	blr

lbl_800A4EA4:
	cmpw     r10, r3
	bgt      lbl_800A4ED4
	extsh    r0, r6
	cmpw     r10, r0
	bgt      lbl_800A4ED4
	bne      lbl_800A4EC8
	lwz      r0, 0xc(r4)
	cmplw    r0, r8
	ble      lbl_800A4ED4

lbl_800A4EC8:
	lwz      r8, 0xc(r4)
	mr       r7, r9
	mr       r6, r10

lbl_800A4ED4:
	lha      r10, 0x20(r4)
	addi     r9, r9, 1
	extsh.   r0, r10
	bge      lbl_800A4EF0
	mulli    r0, r9, 0x1c
	add      r3, r5, r0
	blr

lbl_800A4EF0:
	cmpw     r10, r3
	bgt      lbl_800A4F20
	extsh    r0, r6
	cmpw     r10, r0
	bgt      lbl_800A4F20
	bne      lbl_800A4F14
	lwz      r0, 0x28(r4)
	cmplw    r0, r8
	ble      lbl_800A4F20

lbl_800A4F14:
	lwz      r8, 0x28(r4)
	mr       r7, r9
	mr       r6, r10

lbl_800A4F20:
	addi     r4, r4, 0x38
	addi     r9, r9, 1
	bdnz     lbl_800A4E8C
	cmpwi    r7, 0
	bge      lbl_800A4F3C
	li       r3, 0
	blr

lbl_800A4F3C:
	mulli    r0, r7, 0x1c
	add      r3, r5, r0
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
JASDSPChannel* JASDSPChannel::getLowestActiveChannel()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A4F48
 * @note Size: 0x1E4
 */
void JASDSPChannel::updateProc()
{
	if (mChannel->isFinish()) {
		RESET_FLAG(mFlags, 3);
		if (_00 == 0) {
			int v1;
			if (mCallback != nullptr) {
				v1 = mCallback(2, nullptr, mCallbackArgs);
			} else {
				v1 = -1;
			}
			if (v1 < 0) {
				mPriority = -1;
			}
		}
		_00 = 1;
		mChannel->replyFinishRequest();
		mChannel->flush();
		return;
	}
	if (IS_FLAG(mFlags, 2)) {
		RESET_FLAG(mFlags, 3);
		mChannel->forceStop();
		mChannel->flush();
		return;
	}
	if (_00 == 2) {
		return;
	}
	if (IS_FLAG(mFlags, 1) != 0 && (_00 == 1)) {
		RESET_FLAG(mFlags, 2);
		_00 = 0;
		mChannel->init();
		if (mCallback != nullptr) {
			mCallback(1, mChannel, mCallbackArgs);
		}
		mChannel->playStart();
		mChannel->flush();
	}
	if (_00 == 1) {
		return;
	}
	int v1;
	if (mCallback != nullptr) {
		v1 = mCallback(0, mChannel, mCallbackArgs);
	} else {
		v1 = 0;
	}
	if (v1 < 0) {
		_00 = 1;
		if ((mCallback != nullptr ? mCallback(2, nullptr, mCallbackArgs) : -1) < 0) {
			mPriority = -1;
		}
		mChannel->playStop();
		mChannel->flush();
		return;
	}
	_0C++;
	if (mCallback != nullptr) {
		mChannel->flush();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       isFinish__Q26JASDsp8TChannelCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A4FD8
	lwz      r0, 8(r31)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 8(r31)
	lwz      r0, 0(r31)
	cmpwi    r0, 0
	bne      lbl_800A4FBC
	lwz      r12, 0x10(r31)
	cmplwi   r12, 0
	beq      lbl_800A4FA8
	lwz      r5, 0x14(r31)
	li       r3, 2
	li       r4, 0
	mtctr    r12
	bctrl
	b        lbl_800A4FAC

lbl_800A4FA8:
	li       r3, -1

lbl_800A4FAC:
	cmpwi    r3, 0
	bge      lbl_800A4FBC
	li       r0, -1
	sth      r0, 4(r31)

lbl_800A4FBC:
	li       r0, 1
	stw      r0, 0(r31)
	lwz      r3, 0x18(r31)
	bl       replyFinishRequest__Q26JASDsp8TChannelFv
	lwz      r3, 0x18(r31)
	bl       flush__Q26JASDsp8TChannelFv
	b        lbl_800A5118

lbl_800A4FD8:
	lwz      r3, 8(r31)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_800A5000
	rlwinm   r0, r3, 0, 0x1f, 0x1d
	stw      r0, 8(r31)
	lwz      r3, 0x18(r31)
	bl       forceStop__Q26JASDsp8TChannelFv
	lwz      r3, 0x18(r31)
	bl       flush__Q26JASDsp8TChannelFv
	b        lbl_800A5118

lbl_800A5000:
	lwz      r4, 0(r31)
	cmpwi    r4, 2
	beq      lbl_800A5118
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800A5068
	cmpwi    r4, 1
	bne      lbl_800A5068
	rlwinm   r3, r3, 0, 0, 0x1e
	li       r0, 0
	stw      r3, 8(r31)
	stw      r0, 0(r31)
	lwz      r3, 0x18(r31)
	bl       init__Q26JASDsp8TChannelFv
	lwz      r12, 0x10(r31)
	cmplwi   r12, 0
	beq      lbl_800A5054
	lwz      r4, 0x18(r31)
	li       r3, 1
	lwz      r5, 0x14(r31)
	mtctr    r12
	bctrl

lbl_800A5054:
	lwz      r3, 0x18(r31)
	bl       playStart__Q26JASDsp8TChannelFv
	lwz      r3, 0x18(r31)
	bl       flush__Q26JASDsp8TChannelFv
	b        lbl_800A5118

lbl_800A5068:
	cmpwi    r4, 1
	beq      lbl_800A5118
	lwz      r12, 0x10(r31)
	li       r0, 0
	cmplwi   r12, 0
	beq      lbl_800A509C
	lwz      r4, 0x18(r31)
	li       r3, 0
	lwz      r5, 0x14(r31)
	mtctr    r12
	bctrl
	li       r0, 1
	b        lbl_800A50A0

lbl_800A509C:
	li       r3, 0

lbl_800A50A0:
	cmpwi    r3, 0
	bge      lbl_800A50FC
	li       r0, 1
	stw      r0, 0(r31)
	lwz      r12, 0x10(r31)
	cmplwi   r12, 0
	beq      lbl_800A50D4
	lwz      r5, 0x14(r31)
	li       r3, 2
	li       r4, 0
	mtctr    r12
	bctrl
	b        lbl_800A50D8

lbl_800A50D4:
	li       r3, -1

lbl_800A50D8:
	cmpwi    r3, 0
	bge      lbl_800A50E8
	li       r0, -1
	sth      r0, 4(r31)

lbl_800A50E8:
	lwz      r3, 0x18(r31)
	bl       playStop__Q26JASDsp8TChannelFv
	lwz      r3, 0x18(r31)
	bl       flush__Q26JASDsp8TChannelFv
	b        lbl_800A5118

lbl_800A50FC:
	lwz      r3, 0xc(r31)
	clrlwi.  r0, r0, 0x18
	addi     r0, r3, 1
	stw      r0, 0xc(r31)
	beq      lbl_800A5118
	lwz      r3, 0x18(r31)
	bl       flush__Q26JASDsp8TChannelFv

lbl_800A5118:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A512C
 * @note Size: 0x74
 */
void JASDSPChannel::updateAll()
{
	for (u32 i = 0; i < 0x40; i++) {
		if ((i & 0xF) == 0 && i != 0) {
			JASDsp::releaseHalt((i - 1) >> 4);
		}
		sDspChannels[i].updateProc();
	}
	JASDsp::releaseHalt(3);
}

/**
 * @note Address: 0x800A51A0
 * @note Size: 0x160
 */
bool JASDSPChannel::killActiveChannel()
{
	JASDSPChannel* channel = getLowestChannel(0x7F);
	if (channel == nullptr) {
		return false;
	}
	channel->drop();
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r7, 0xff
	stw      r0, 0x14(r1)
	li       r0, 0x20
	mr       r4, r5
	li       r6, -1
	stw      r31, 0xc(r1)
	lwz      r9, sDspChannels__13JASDSPChannel@sda21(r13)
	mr       r8, r9
	mtctr    r0

lbl_800A51D0:
	lwz      r0, 0(r8)
	cmpwi    r0, 0
	bne      lbl_800A5210
	lha      r3, 4(r8)
	cmpwi    r3, 0x7f
	bge      lbl_800A5210
	extsh    r0, r7
	cmpw     r3, r0
	bgt      lbl_800A5210
	bne      lbl_800A5204
	lwz      r0, 0xc(r8)
	cmplw    r0, r5
	ble      lbl_800A5210

lbl_800A5204:
	lwz      r5, 0xc(r8)
	mr       r6, r4
	mr       r7, r3

lbl_800A5210:
	lwz      r0, 0x1c(r8)
	addi     r4, r4, 1
	cmpwi    r0, 0
	bne      lbl_800A5254
	lha      r3, 0x20(r8)
	cmpwi    r3, 0x7f
	bge      lbl_800A5254
	extsh    r0, r7
	cmpw     r3, r0
	bgt      lbl_800A5254
	bne      lbl_800A5248
	lwz      r0, 0x28(r8)
	cmplw    r0, r5
	ble      lbl_800A5254

lbl_800A5248:
	lwz      r5, 0x28(r8)
	mr       r6, r4
	mr       r7, r3

lbl_800A5254:
	addi     r8, r8, 0x38
	addi     r4, r4, 1
	bdnz     lbl_800A51D0
	cmpwi    r6, 0
	bge      lbl_800A5270
	li       r31, 0
	b        lbl_800A5278

lbl_800A5270:
	mulli    r0, r6, 0x1c
	add      r31, r9, r0

lbl_800A5278:
	cmplwi   r31, 0
	bne      lbl_800A5288
	li       r3, 0
	b        lbl_800A52EC

lbl_800A5288:
	lwz      r12, 0x10(r31)
	cmplwi   r12, 0
	beq      lbl_800A52A8
	lwz      r5, 0x14(r31)
	li       r3, 3
	li       r4, 0
	mtctr    r12
	bctrl

lbl_800A52A8:
	li       r3, 0
	li       r0, -1
	stw      r3, 0x10(r31)
	stw      r3, 0x14(r31)
	sth      r0, 4(r31)
	lwz      r0, 8(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 8(r31)
	lwz      r0, 0(r31)
	cmpwi    r0, 0
	bne      lbl_800A52E8
	lwz      r3, 8(r31)
	li       r0, 2
	ori      r3, r3, 2
	stw      r3, 8(r31)
	stw      r0, 0(r31)

lbl_800A52E8:
	li       r3, 1

lbl_800A52EC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A5300
 * @note Size: 0x10
 */
JASDSPChannel* JASDSPChannel::getHandle(u32 index) { return sDspChannels + index; }

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumUse()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumFree()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumBreak()
{
	// UNUSED FUNCTION
}
