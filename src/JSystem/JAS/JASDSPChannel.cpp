#include "JSystem/JAS/JASDsp.h"
#include "JSystem/JAS/JASHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDspChannels__13JASDSPChannel
    sDspChannels__13JASDSPChannel:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800A4B48
 * Size:	00002C
 */
JASDSPChannel::JASDSPChannel()
{
	_00 = 1;
	_04 = -1;
	_08 = 0;
	_0C = 0;
	_10 = nullptr;
	_14 = nullptr;
	_18 = nullptr;
}

/*
 * --INFO--
 * Address:	800A4B74
 * Size:	000010
 */
void JASDSPChannel::free()
{
	_10 = nullptr;
	_14 = nullptr;
}

/*
 * --INFO--
 * Address:	800A4B84
 * Size:	000010
 */
void JASDSPChannel::start() { _08 |= 1; }

/*
 * --INFO--
 * Address:	800A4B94
 * Size:	000088
 */
void JASDSPChannel::drop()
{
	if (_10) {
		_10(3, 0, _14);
	}
	_10 = nullptr;
	_14 = 0;
	_04 = -1;
	_08 &= ~1;
	if (_00 == 0) {
		_08 |= 2;
		_00 = 2;
	}
}

/*
 * --INFO--
 * Address:	800A4C1C
 * Size:	000084
 */
void JASDSPChannel::initAll()
{
	sDspChannels = new (JASDram, 0x20) JASDSPChannel[0x40];
	for (int i = 0; i < 0x40; i++) {
		sDspChannels[i]._18 = JASDsp::getDSPHandle(i);
	}
}

/*
 * --INFO--
 * Address:	800A4CA0
 * Size:	0000DC
 */
JASDSPChannel* JASDSPChannel::alloc(u8 index, long (*cb)(unsigned long, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	if (channel->_10) {
		channel->_10(3, 0, channel->_14);
	}
	channel->_10 = nullptr;
	channel->_14 = nullptr;
	channel->_04 = -1;
	channel->_08 &= ~1;
	if (channel->_00 == 0) {
		channel->_08 |= 2;
		channel->_00 = 2;
	}
	channel->_04 = index;
	channel->_0C = 0;
	channel->_10 = cb;
	channel->_14 = p3;
	return channel;
}

/*
 * --INFO--
 * Address:	800A4D7C
 * Size:	0000E4
 */
JASDSPChannel* JASDSPChannel::allocForce(u8 index, long (*cb)(unsigned long, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	channel->_00 = 1;
	if (channel->_10) {
		channel->_10(3, 0, channel->_14);
	}
	channel->_10 = nullptr;
	channel->_14 = nullptr;
	channel->_04 = -1;
	channel->_08 &= ~1;
	if (channel->_00 == 0) {
		channel->_08 |= 2;
		channel->_00 = 2;
	}
	channel->_04 = index;
	channel->_0C = 0;
	channel->_10 = cb;
	channel->_14 = p3;
	return channel;
}

/*
 * --INFO--
 * Address:	800A4E60
 * Size:	00000C
 */
void JASDSPChannel::setPriority(u8 priority) { _04 = priority; }

/*
 * --INFO--
 * Address:	800A4E6C
 * Size:	0000DC
 */
JASDSPChannel* JASDSPChannel::getLowestChannel(int threshold)
{
	// JASDSPChannel* channel = sDspChannels;
	short lowestPriority = 0xFF;
	int lowestIndex      = -1;
	u32 v1               = 0;
	for (int i = 0; i < 0x40; i++) {
		if (sDspChannels[i]._04 < 0) {
			return &sDspChannels[i];
		}
		if (sDspChannels[i]._04 <= threshold && sDspChannels[i]._04 <= lowestPriority
		    && (sDspChannels[i]._04 != lowestPriority || sDspChannels[i]._0C > v1)) {
			// && !(sDspChannels[i]._04 == lowestPriority && sDspChannels[i]._0C <= v1)) {
			// if (lowestPriority == sDspChannels[i]._04 && sDspChannels[i]._0C <= v1) {
			// 	continue;
			// }
			v1             = sDspChannels[i]._0C;
			lowestPriority = sDspChannels[i]._04;
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
JASDSPChannel* JASDSPChannel::getLowestActiveChannel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A4F48
 * Size:	0001E4
 */
void JASDSPChannel::updateProc()
{
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

/*
 * --INFO--
 * Address:	800A512C
 * Size:	000074
 */
void JASDSPChannel::updateAll()
{
	for (int i = 0; i < 0x40; i++) {
		if ((i & 0xF) == 0 && i != 0) {
			JASDsp::releaseHalt((i - 1) >> 4);
		}
		sDspChannels[i].updateProc();
	}
	JASDsp::releaseHalt(3);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	li       r30, 0

lbl_800A5148:
	clrlwi.  r0, r30, 0x1c
	bne      lbl_800A5164
	cmplwi   r30, 0
	beq      lbl_800A5164
	addi     r0, r30, -1
	srwi     r3, r0, 4
	bl       releaseHalt__6JASDspFUl

lbl_800A5164:
	lwz      r0, sDspChannels__13JASDSPChannel@sda21(r13)
	add      r3, r0, r31
	bl       updateProc__13JASDSPChannelFv
	addi     r30, r30, 1
	addi     r31, r31, 0x1c
	cmplwi   r30, 0x40
	blt      lbl_800A5148
	li       r3, 3
	bl       releaseHalt__6JASDspFUl
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
 * Address:	800A51A0
 * Size:	000160
 */
bool JASDSPChannel::killActiveChannel()
{
	JASDSPChannel* channel = getLowestChannel(0x7F);
	if (channel == nullptr) {
		return false;
	}
	if (channel->_10 != nullptr) {
		channel->_10(3, nullptr, channel->_14);
	}
	channel->_10 = nullptr;
	channel->_14 = nullptr;
	channel->_04 = -1;
	channel->_08 &= ~1;
	if (channel->_00 == 0) {
		channel->_08 |= 2;
		channel->_00 = 2;
	}
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

/*
 * --INFO--
 * Address:	800A5300
 * Size:	000010
 */
JASDSPChannel* JASDSPChannel::getHandle(u32 index) { return sDspChannels + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumUse()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumFree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumBreak()
{
	// UNUSED FUNCTION
}
