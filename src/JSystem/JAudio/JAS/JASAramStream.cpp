#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASAramStream.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRAram.h"

JASTaskThread* JASAramStream::sLoadThread;
u8* JASAramStream::sReadBuffer;
u32 JASAramStream::sBlockSize;
u32 JASAramStream::sChannelMax;
bool JASAramStream::sSystemPauseFlag;
bool JASAramStream::sFatalErrorFlag;

static const s16 OSC_RELEASE_TABLE[6] = {
	0, 2, 0, 15, 0, 0,
};

static const JASOscillator::Data OSC_ENV = { 0, 1.0f, nullptr, OSC_RELEASE_TABLE, 1.0f, 0.0f };

/**
 * @note Address: 0x800A8FA4
 * @note Size: 0x90
 */
void JASAramStream::initSystem(u32 blockSize, u32 channelMax)
{
	if (JASDriver::registerSubFrameCallback(dvdErrorCheck, nullptr)) {
		if (sLoadThread == nullptr) {
			sLoadThread = JASDvd::getThreadPointer();
		}
		// TODO: replace 0x20 in [] with sizeof header object
		sReadBuffer      = new (JASDram, 0x20) u8[(blockSize + 0x20) * channelMax];
		sBlockSize       = blockSize;
		sChannelMax      = channelMax;
		sSystemPauseFlag = false;
		sFatalErrorFlag  = false;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASAramStream::setLoadThread(JASTaskThread*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A9034
 * @note Size: 0x158
 */
JASAramStream::JASAramStream()
    : mActiveChannel(nullptr)
    , _19C(0)
    , _19D(0)
    , mPauseFlags(0)
    , mCurrentReadOffset(0)
    , mNextBlockSample(0)
    , mNextReadOffset(0)
    , mMaxBlocks(0)
    , _1B0(0)
    , _1B4(0)
    , _1B8(0.0f)
    , mMaxLoadIndex(0)
    , mCurrentLoadIndex(0)
    , mCurrentBlock(0)
    , mAbortFlag(0)
    , mLoadedCount(0)
    , mControlFlags(0)
    , mDataOffset(0)
    , mDataLength(0)
    , mCallback(nullptr)
    , _244(nullptr)
    , mStreamType(0)
    , mNumBlocks(0)
    , mCurrentBlockNum(0)
    , mBlockCount(0)
    , mSampleRate(0)
    , mLoopFlag(0)
    , mAramSize(0)
    , mFileSize(0)
    , mVolume(1.0f)
    , mPitch(1.0f)
    , mUseStereo(0)
{
	for (int i = 0; i < 6; i++) {
		mChannels[i]       = nullptr;
		mSampleData[0][i]  = 0;
		mSampleData[1][i]  = 0;
		mChannelData[0][i] = 1.0f;
		mChannelData[1][i] = 0.5f;
		mChannelData[2][i] = 0.0f;
		mChannelData[3][i] = 0.0f;
	}
	for (int i = 0; i < 6; i++) {
		mMixData[i] = 0;
	}
	/*
	li       r0, 0
	lfs      f3, lbl_80516EB0@sda21(r2)
	stw      r0, 0x198(r3)
	lfs      f2, lbl_80516EB4@sda21(r2)
	stb      r0, 0x19c(r3)
	lfs      f1, lbl_80516EB8@sda21(r2)
	stb      r0, 0x19d(r3)
	lfs      f0, lbl_80516EB0@sda21(r2)
	stb      r0, 0x19e(r3)
	stw      r0, 0x1a0(r3)
	stw      r0, 0x1a4(r3)
	stw      r0, 0x1a8(r3)
	stw      r0, 0x1ac(r3)
	stb      r0, 0x1b0(r3)
	stw      r0, 0x1b4(r3)
	stfs     f3, 0x1b8(r3)
	stw      r0, 0x1f8(r3)
	stw      r0, 0x1fc(r3)
	stw      r0, 0x200(r3)
	stb      r0, 0x204(r3)
	stw      r0, 0x208(r3)
	stw      r0, 0x21c(r3)
	stw      r0, 0x238(r3)
	stw      r0, 0x23c(r3)
	stw      r0, 0x240(r3)
	stw      r0, 0x244(r3)
	sth      r0, 0x248(r3)
	sth      r0, 0x24a(r3)
	stw      r0, 0x24c(r3)
	stw      r0, 0x250(r3)
	stw      r0, 0x254(r3)
	stb      r0, 0x258(r3)
	stw      r0, 0x25c(r3)
	stw      r0, 0x260(r3)
	stfs     f2, 0x264(r3)
	stfs     f2, 0x268(r3)
	stb      r0, 0x2d8(r3)
	stw      r0, 0x180(r3)
	sth      r0, 0x220(r3)
	sth      r0, 0x22c(r3)
	stfs     f2, 0x26c(r3)
	stfs     f1, 0x284(r3)
	stfs     f0, 0x29c(r3)
	stfs     f0, 0x2b4(r3)
	stw      r0, 0x184(r3)
	sth      r0, 0x222(r3)
	sth      r0, 0x22e(r3)
	stfs     f2, 0x270(r3)
	stfs     f1, 0x288(r3)
	stfs     f0, 0x2a0(r3)
	stfs     f0, 0x2b8(r3)
	stw      r0, 0x188(r3)
	sth      r0, 0x224(r3)
	sth      r0, 0x230(r3)
	stfs     f2, 0x274(r3)
	stfs     f1, 0x28c(r3)
	stfs     f0, 0x2a4(r3)
	stfs     f0, 0x2bc(r3)
	stw      r0, 0x18c(r3)
	sth      r0, 0x226(r3)
	sth      r0, 0x232(r3)
	stfs     f2, 0x278(r3)
	stfs     f1, 0x290(r3)
	stfs     f0, 0x2a8(r3)
	stfs     f0, 0x2c0(r3)
	stw      r0, 0x190(r3)
	sth      r0, 0x228(r3)
	sth      r0, 0x234(r3)
	stfs     f2, 0x27c(r3)
	stfs     f1, 0x294(r3)
	stfs     f0, 0x2ac(r3)
	stfs     f0, 0x2c4(r3)
	stw      r0, 0x194(r3)
	sth      r0, 0x22a(r3)
	sth      r0, 0x236(r3)
	stfs     f2, 0x280(r3)
	stfs     f1, 0x298(r3)
	stfs     f0, 0x2b0(r3)
	stfs     f0, 0x2c8(r3)
	sth      r0, 0x2cc(r3)
	sth      r0, 0x2ce(r3)
	sth      r0, 0x2d0(r3)
	sth      r0, 0x2d2(r3)
	sth      r0, 0x2d4(r3)
	sth      r0, 0x2d6(r3)
	blr
	*/
}

/**
 * @note Address: 0x800A918C
 * @note Size: 0xF8
 */
void JASAramStream::init(u32 dataOffs, u32 dataLen, JASAramStreamCallback callback, void* p4)
{
	const f32 x = 0.0f;
	const f32 y = 1.0f;
	const f32 z = 0.5f;

	mDataOffset = dataOffs;
	mDataLength = dataLen;
	_1B8        = 0;
	mPauseFlags = 0;
	_19C        = 0.01;
	_19D        = 0;
	mAbortFlag  = 0;
	mNumBlocks  = 0;

	for (int i = 0; i < 6; i++) {
		mChannelData[0][i] = y;
		mChannelData[1][i] = z;
		mChannelData[2][i] = x;
		mChannelData[3][i] = x;
	}

	mVolume     = y;
	mPitch      = y;
	mUseStereo  = 0;
	mMixData[0] = -1;
	mCallback   = callback;
	_244        = p4;
	OSInitMessageQueue(&mMsgQueueA, mMsgSlotsA, ARRAY_SIZE(mMsgSlotsA));
	OSInitMessageQueue(&mMsgQueueB, mMsgSlotsB, ARRAY_SIZE(mMsgSlotsB));
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x74B0(r2)
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  lis       r8, 0x1
	  lfs       f2, -0x74AC(r2)
	  subi      r0, r8, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, -0x74A8(r2)
	  stw       r4, 0x238(r3)
	  addi      r4, r31, 0x40
	  stw       r5, 0x23C(r3)
	  li        r5, 0x10
	  stfs      f0, 0x1B8(r3)
	  lfs       f0, -0x74B0(r2)
	  stb       r9, 0x19E(r3)
	  stb       r9, 0x19C(r3)
	  stb       r9, 0x19D(r3)
	  stb       r9, 0x204(r3)
	  sth       r9, 0x24A(r3)
	  stfs      f2, 0x26C(r3)
	  stfs      f1, 0x284(r3)
	  stfs      f0, 0x29C(r3)
	  stfs      f0, 0x2B4(r3)
	  stfs      f2, 0x270(r3)
	  stfs      f1, 0x288(r3)
	  stfs      f0, 0x2A0(r3)
	  stfs      f0, 0x2B8(r3)
	  stfs      f2, 0x274(r3)
	  stfs      f1, 0x28C(r3)
	  stfs      f0, 0x2A4(r3)
	  stfs      f0, 0x2BC(r3)
	  stfs      f2, 0x278(r3)
	  stfs      f1, 0x290(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2C0(r3)
	  stfs      f2, 0x27C(r3)
	  stfs      f1, 0x294(r3)
	  stfs      f0, 0x2AC(r3)
	  stfs      f0, 0x2C4(r3)
	  stfs      f2, 0x280(r3)
	  stfs      f1, 0x298(r3)
	  stfs      f0, 0x2B0(r3)
	  stfs      f0, 0x2C8(r3)
	  stfs      f2, 0x264(r3)
	  stfs      f2, 0x268(r3)
	  stb       r9, 0x2D8(r3)
	  sth       r0, 0x2CC(r3)
	  stw       r6, 0x240(r3)
	  stw       r7, 0x244(r3)
	  bl        0x46260
	  addi      r3, r31, 0x20
	  addi      r4, r31, 0x80
	  li        r5, 0x4
	  bl        0x46250
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void JASAramStream::setBusSetting(u32, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JASAramStream::prepare(const char*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A9284
 * @note Size: 0xB8
 */
BOOL JASAramStream::prepare(s32 entryNum, int index)
{
	if (!DVDFastOpen(entryNum, &mFileInfo)) {
		return FALSE;
	}
	if (!JASDriver::registerSubFrameCallback(channelProcCallback, this)) {
		return FALSE;
	}
	if (mAbortFlag != 0) {
		return FALSE;
	}
	HeaderLoadTaskArgs args;
	args.mStream     = this;
	args.mDataLength = mDataLength;
	args.mIndex      = index;
	return sLoadThread->sendCmdMsg(headerLoadTask, &args, sizeof(args)) != FALSE;
}

/**
 * @note Address: 0x800A933C
 * @note Size: 0x34
 */
BOOL JASAramStream::start() { return OSSendMessage(&mMsgQueueA, nullptr, OS_MESSAGE_NOBLOCK) != FALSE; }

/**
 * @note Address: 0x800A9370
 * @note Size: 0x38
 */
int JASAramStream::stop(u16 p1) { return OSSendMessage(&mMsgQueueA, (void*)((u32)p1 << 0x10 | 1), OS_MESSAGE_NOBLOCK) != FALSE; }

/**
 * @note Address: 0x800A93A8
 * @note Size: 0x48
 */
bool JASAramStream::pause(bool p1)
{
	u32 msg = 3;
	if (p1) {
		msg = 2;
	}
	if (OSSendMessage(&mMsgQueueA, (void*)msg, OS_MESSAGE_NOBLOCK) == FALSE) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x800A93F0
 * @note Size: 0x44
 */
int JASAramStream::cancel()
{
	mAbortFlag = 1;
	return sLoadThread->sendCmdMsg(finishTask, this) != FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
u32 JASAramStream::getBlockSamples() const
{
	if (mStreamType == 0) {
		return (sBlockSize << 4) / 9;
	}
	return sBlockSize >> 1;
}

/**
 * @note Address: 0x800A9434
 * @note Size: 0x30
 */
void JASAramStream::headerLoadTask(void* args)
{
	HeaderLoadTaskArgs* castedArgs = static_cast<HeaderLoadTaskArgs*>(args);
	castedArgs->mStream->headerLoad(castedArgs->mDataLength, castedArgs->mIndex);
}

/**
 * @note Address: 0x800A9464
 * @note Size: 0xDC
 */
void JASAramStream::firstLoadTask(void* args)
{
	HeaderLoadTaskArgs* castedArgs = static_cast<HeaderLoadTaskArgs*>(args);
	JASAramStream* stream          = castedArgs->mStream;
	if (!stream->load()) {
		return;
	}
	if (castedArgs->mIndex > 0) {
		--castedArgs->mIndex;
		if (castedArgs->mIndex == 0) {
			if (!sLoadThread->sendCmdMsg(prepareFinishTask, stream)) {
				sFatalErrorFlag = true;
			}
		}
	}
	if (castedArgs->mDataLength == 0) {
		return;
	}
	castedArgs->mDataLength--;
	if (!sLoadThread->sendCmdMsg(firstLoadTask, castedArgs, sizeof(*castedArgs))) {
		sFatalErrorFlag = true;
	}
	JASCriticalSection criticalSection;
	stream->mLoadedCount++;
}

/**
 * @note Address: 0x800A9540
 * @note Size: 0x20
 */
void JASAramStream::loadToAramTask(void* p1) { static_cast<JASAramStream*>(p1)->load(); }

/**
 * @note Address: 0x800A9560
 * @note Size: 0x60
 */
void JASAramStream::finishTask(void* args)
{
	JASDriver::rejectCallback(channelProcCallback, args);
	JASAramStream* stream = static_cast<JASAramStream*>(args);
	if (stream->mCallback != nullptr) {
		stream->mCallback(0, stream, stream->_244);
		stream->mCallback = nullptr;
	}
}

/**
 * @note Address: 0x800A95C0
 * @note Size: 0x58
 */
void JASAramStream::prepareFinishTask(void* args)
{
	JASAramStream* stream = static_cast<JASAramStream*>(args);
	OSSendMessage(&stream->mMsgQueueB, (void*)4, OS_MESSAGE_BLOCK);
	if (stream->mCallback != nullptr) {
		stream->mCallback(1, stream, stream->_244);
	}
}

/**
 * @note Address: 0x800A9618
 * @note Size: 0x1CC
 */
bool JASAramStream::headerLoad(u32 length, int index)
{
	if (sFatalErrorFlag) {
		return false;
	}
	if (mAbortFlag != 0) {
		return false;
	}
	if (DVDReadPrio(&mFileInfo, sReadBuffer, 0x40, 0, 1) < 0) {
		sFatalErrorFlag = true;
		return false;
	}
	u8* buffer        = sReadBuffer;
	mStreamType       = buffer[9];
	mNumBlocks        = *(u16*)(buffer + 0x0C);
	mSampleRate       = *(u32*)(buffer + 0x10);
	mLoopFlag         = (*(u16*)(buffer + 0x0E) != FALSE);
	mAramSize         = *(u32*)(buffer + 0x18);
	mFileSize         = *(u32*)(buffer + 0x1C);
	mVolume           = buffer[0x28] / 127.0f;
	mLoadedCount      = 0;
	mCurrentBlock     = 0;
	mCurrentLoadIndex = 0;
	mBlockCount       = length / sBlockSize / *(u16*)(buffer + 0x0C);
	mCurrentBlockNum  = mBlockCount;
	mCurrentBlockNum--;
	mMaxLoadIndex = mCurrentBlockNum;

	// Ensure the loadIndex is valid
	if (index < 0 || index > mMaxLoadIndex) {
		index = mMaxLoadIndex;
	}

	if (mAbortFlag != 0) {
		return false;
	}

	FirstLoadTaskArgs loadArgs;
	loadArgs.mStream         = this;
	loadArgs.mTotalLoadCount = mMaxLoadIndex - 1;
	loadArgs.mIndex          = index;
	if (!sLoadThread->sendCmdMsg(firstLoadTask, &loadArgs, sizeof(loadArgs))) {
		sFatalErrorFlag = true;
		return false;
	}

	JASCriticalSection criticalSection;
	mLoadedCount++;
	return true;
}

/**
 * @note Address: 0x800A97E4
 * @note Size: 0x2B4
 */
bool JASAramStream::load()
{
	{
		JASCriticalSection cs;
		mLoadedCount--;
	}

	if (sFatalErrorFlag) {
		return false;
	}

	if (mAbortFlag) {
		return false;
	}

	u32 blockSize;
	if (mStreamType == 0) {
		blockSize = sBlockSize * 16 / 9;
	} else {
		blockSize = sBlockSize / 2;
	}

	u32 numMaxBlocks = (mFileSize - 1) / blockSize;

	u32 adjustedBlockSize;
	if (mStreamType == 0) {
		adjustedBlockSize = sBlockSize * 16 / 9;
	} else {
		adjustedBlockSize = sBlockSize / 2;
	}

	u32 adjustedBlockCount = (mAramSize) / adjustedBlockSize;

	if (mCurrentBlock > numMaxBlocks) {
		return false;
	}

	u32 length = sBlockSize * mNumBlocks + 0x20;
	u32 offset = mCurrentBlock * mNumBlocks + 0x40;

	if (mCurrentBlock == numMaxBlocks) {
		length = mFileInfo.length - offset;
	}

	if (DVDReadPrio(&mFileInfo, sReadBuffer, length, offset, 1) < 0) {
		sFatalErrorFlag = true;
		return false;
	}

	u32* preBuffer = (u32*)sReadBuffer;
	u32 size       = mDataOffset + (mCurrentLoadIndex * sBlockSize);
	for (int i = 0; i < mNumBlocks; i++) {
		if (JKRMainRamToAram((u8*)(sReadBuffer + (preBuffer[1] + 0x20)), size + (i * sBlockSize * mBlockCount), ((u32*)sReadBuffer)[1],
		                     Switch_0, 0, nullptr, -1, nullptr)
		    == 0) {
			sFatalErrorFlag = true;
			return false;
		}
	}

	mCurrentLoadIndex++;

	if (mCurrentLoadIndex >= mMaxLoadIndex) {
		int nextBlock = mCurrentBlock + (mMaxLoadIndex - 1);
		if (mLoopFlag) {
			while (nextBlock > numMaxBlocks) {
				nextBlock = (numMaxBlocks - nextBlock) + adjustedBlockCount;
			}
		}
		if (nextBlock == numMaxBlocks || nextBlock + 2 == numMaxBlocks) {
			mMaxLoadIndex = mBlockCount;
			OSSendMessage(&mMsgQueueB, (void*)5, OS_MESSAGE_BLOCK);
		} else {
			mMaxLoadIndex = mBlockCount - 1;
		}

		for (int i = 0; i < mNumBlocks; i++) {
			mSampleData[0][i] = ((s16*)preBuffer)[2 * i + 4];
			mSampleData[1][i] = ((s16*)preBuffer)[2 * i + 5];
		}
		mCurrentLoadIndex = 0;
	}

	mCurrentBlock++;
	if (mCurrentBlock > numMaxBlocks && mLoopFlag) {
		mCurrentBlock = adjustedBlockCount;
	}
	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r27, r3
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r27)
	stw      r3, 8(r1)
	addi     r0, r4, -1
	stw      r0, 0x208(r27)
	bl       OSRestoreInterrupts
	lbz      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800A9824
	li       r3, 0
	b        lbl_800A9A84

lbl_800A9824:
	lbz      r0, 0x204(r27)
	cmplwi   r0, 0
	beq      lbl_800A9838
	li       r3, 0
	b        lbl_800A9A84

lbl_800A9838:
	lhz      r4, 0x248(r27)
	cmplwi   r4, 0
	bne      lbl_800A9860
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r5, r0, 1
	b        lbl_800A9868

lbl_800A9860:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r5, r0, 1

lbl_800A9868:
	lwz      r3, 0x260(r27)
	cmplwi   r4, 0
	lwz      r4, 0x25c(r27)
	addi     r0, r3, -1
	divwu    r31, r0, r5
	bne      lbl_800A989C
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r0, r0, 1
	b        lbl_800A98A4

lbl_800A989C:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r0, r0, 1

lbl_800A98A4:
	divwu    r30, r4, r0
	lwz      r4, 0x200(r27)
	cmplw    r4, r31
	ble      lbl_800A98BC
	li       r3, 0
	b        lbl_800A9A84

lbl_800A98BC:
	lwz      r3, sBlockSize__13JASAramStream@sda21(r13)
	lhz      r0, 0x24a(r27)
	mullw    r3, r3, r0
	addi     r0, r3, 0x20
	mullw    r3, r4, r0
	mr       r5, r0
	addi     r6, r3, 0x40
	bne      lbl_800A98E4
	lwz      r0, 0x1f0(r27)
	subf     r5, r6, r0

lbl_800A98E4:
	lwz      r4, sReadBuffer__13JASAramStream@sda21(r13)
	addi     r3, r27, 0x1bc
	li       r7, 1
	bl       DVDReadPrio
	cmpwi    r3, 0
	bge      lbl_800A990C
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9A84

lbl_800A990C:
	lwz      r3, 0x1fc(r27)
	li       r28, 0
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x238(r27)
	mullw    r0, r3, r0
	lwz      r29, sReadBuffer__13JASAramStream@sda21(r13)
	add      r26, r4, r0
	b        lbl_800A9988

lbl_800A992C:
	lwz      r3, sBlockSize__13JASAramStream@sda21(r13)
	li       r6, 0
	lwz      r0, 0x250(r27)
	li       r7, 0
	lwz      r5, 4(r29)
	li       r8, 0
	mullw    r0, r3, r0
	lwz      r4, sReadBuffer__13JASAramStream@sda21(r13)
	li       r9, -1
	li       r10, 0
	mullw    r3, r5, r28
	addi     r3, r3, 0x20
	mullw    r0, r28, r0
	add      r3, r4, r3
	add      r4, r26, r0
	bl       mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl
	cmplwi   r3, 0
	bne      lbl_800A9984
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9A84

lbl_800A9984:
	addi     r28, r28, 1

lbl_800A9988:
	lhz      r0, 0x24a(r27)
	cmpw     r28, r0
	blt      lbl_800A992C
	lwz      r3, 0x1fc(r27)
	addi     r0, r3, 1
	stw      r0, 0x1fc(r27)
	lwz      r0, 0x1fc(r27)
	lwz      r3, 0x1f8(r27)
	cmplw    r0, r3
	blt      lbl_800A9A58
	lbz      r0, 0x258(r27)
	lwz      r4, 0x200(r27)
	cmplwi   r0, 0
	add      r4, r3, r4
	addi     r4, r4, -1
	beq      lbl_800A99DC
	b        lbl_800A99D4

lbl_800A99CC:
	subf     r4, r31, r4
	add      r4, r4, r30

lbl_800A99D4:
	cmplw    r4, r31
	bgt      lbl_800A99CC

lbl_800A99DC:
	cmplw    r4, r31
	beq      lbl_800A99F0
	addi     r0, r4, 2
	cmplw    r0, r31
	bne      lbl_800A9A0C

lbl_800A99F0:
	lwz      r0, 0x250(r27)
	addi     r3, r27, 0x20
	li       r4, 5
	li       r5, 1
	stw      r0, 0x1f8(r27)
	bl       OSSendMessage
	b        lbl_800A9A18

lbl_800A9A0C:
	lwz      r3, 0x250(r27)
	addi     r0, r3, -1
	stw      r0, 0x1f8(r27)

lbl_800A9A18:
	mr       r3, r29
	mr       r4, r27
	li       r5, 0
	b        lbl_800A9A44

lbl_800A9A28:
	lha      r0, 8(r3)
	addi     r5, r5, 1
	sth      r0, 0x220(r4)
	lha      r0, 0xa(r3)
	addi     r3, r3, 4
	sth      r0, 0x22c(r4)
	addi     r4, r4, 2

lbl_800A9A44:
	lhz      r0, 0x24a(r27)
	cmpw     r5, r0
	blt      lbl_800A9A28
	li       r0, 0
	stw      r0, 0x1fc(r27)

lbl_800A9A58:
	lwz      r3, 0x200(r27)
	addi     r0, r3, 1
	stw      r0, 0x200(r27)
	lwz      r0, 0x200(r27)
	cmplw    r0, r31
	ble      lbl_800A9A80
	lbz      r0, 0x258(r27)
	cmplwi   r0, 0
	beq      lbl_800A9A80
	stw      r30, 0x200(r27)

lbl_800A9A80:
	li       r3, 1

lbl_800A9A84:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800A9A98
 * @note Size: 0x20
 */
s32 JASAramStream::channelProcCallback(void* stream) { return static_cast<JASAramStream*>(stream)->channelProc(); }

/**
 * @note Address: 0x800A9AB8
 * @note Size: 0x5C
 */
s32 JASAramStream::dvdErrorCheck(void*)
{
	u32 status = DVDGetDriveStatus();

	// WHY WILL THIS NOT SPAWN A JUMP TABLE
	switch (status) {
	case DVD_STATE_END:
		sSystemPauseFlag = false;
		break;
	case DVD_STATE_WAITING:
	case DVD_STATE_COVER_CLOSED:
	case DVD_STATE_NO_DISK:
	case DVD_STATE_COVER_OPEN:
	case DVD_STATE_WRONG_DISK:
	case DVD_STATE_MOTOR_STOPPED:
	case DVD_STATE_PAUSING:
	case DVD_STATE_IGNORED:
	case DVD_STATE_CANCELED:
	case DVD_STATE_RETRY:
	case 0xFFFFFFFF:
	default:
		sSystemPauseFlag = true;
		break;
	case DVD_STATE_BUSY:
		break;
	}
	return 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       DVDGetDriveStatus
	addi     r0, r3, 1
	cmplwi   r0, 0xc
	bgt      lbl_800A9AF8
	lis      r3, lbl_804A44A0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A44A0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A9AEC

lbl_800A9AEC:
	li       r0, 0
	stb      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9B00
	.global  lbl_800A9AF8

lbl_800A9AF8:
	li       r0, 1
	stb      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	.global  lbl_800A9B00

lbl_800A9B00:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A9B14
 * @note Size: 0x3C
 */
void JASAramStream::channelCallback(u32 p1, JASChannel* chan, JASDsp::TChannel* dspChan, void* stream)
{
	static_cast<JASAramStream*>(stream)->updateChannel(p1, chan, dspChan);
}

/**
 * @note Address: 0x800A9B50
 * @note Size: 0x758
 */
void JASAramStream::updateChannel(u32 command, JASChannel* chan, JASDsp::TChannel* dspChan)
{
	u32 blockSamples = getBlockSamples();
	switch (command) {
	case 1: {
		if (!mActiveChannel) {
			mActiveChannel     = chan;
			mNextBlockSample   = blockSamples * mCurrentBlockNum;
			mNextReadOffset    = 0;
			mCurrentReadOffset = 0;
			mMaxBlocks         = (mFileSize - 1) / blockSamples;
			_1B0               = 0;
			_1B4               = 0;
			mControlFlags      = 0;
		}
	} break;
	case 0: {
		if (dspChan->mIsPlaying) {
			break;
		}
		if (chan == mActiveChannel) {
			mControlFlags            = 0;
			u32 currentSampleAddress = dspChan->mCurrentSampleOffset + dspChan->mSamplesPerBlock;
			if (currentSampleAddress <= mNextBlockSample) {
				mNextReadOffset += (mNextBlockSample - currentSampleAddress);
			} else if (!_1B0) {
				mNextReadOffset += mNextBlockSample;
				mNextReadOffset += (blockSamples * mCurrentBlockNum) - currentSampleAddress;
			} else {
				mNextReadOffset += mNextBlockSample;
				mNextReadOffset += (blockSamples * mCurrentBlockNum) - currentSampleAddress - dspChan->mLoopStartOffset;
				mNextReadOffset -= mFileSize;
				mNextReadOffset += mAramSize;
				dspChan->mLoopStartOffset = 0;
				mLoopSampleOffset         = 0;
				mControlFlags |= 2;
				if (_1B4 < -1) {
					_1B4++;
				}
				_1B0 = 0;
			}

			if (mNextReadOffset > mFileSize) {
				sFatalErrorFlag = true;
			}

			f32 adjustedReadOffset = f32(_1B4) * f32(mFileSize - mAramSize);
			if (_1B4 < -1) {
				adjustedReadOffset += f32(mNextReadOffset);
			}

			_1B8 = adjustedReadOffset / f32(mSampleRate);

			if (mNextReadOffset + 400 >= mFileSize && !_1B0) {
				if (mLoopFlag) {
					u32 val3 = mMaxBlocks + 1;
					if (val3 >= mCurrentBlockNum) {
						val3 = 0;
					}
					dspChan->mLoopStartOffset = (mAramSize % blockSamples) + (val3 * blockSamples);
					mLoopSampleOffset         = dspChan->mLoopStartOffset;
					mControlFlags |= 2;
				} else {
					dspChan->mLoopOffset = 0;
					mEndSampleOffset     = 0;
					mControlFlags |= 8;
				}

				dspChan->mCurrentSampleOffset
				    -= (blockSamples * mCurrentBlockNum) - (mFileSize % blockSamples) + (mMaxBlocks * blockSamples);
				mCurrentSampleOffset = dspChan->mCurrentSampleOffset;
				mControlFlags |= 1;
				mMaxBlocks += (mFileSize - 1) / blockSamples - (mAramSize / blockSamples) + 1;
				_1B0 = 1;
			}

			u32 sampleOffset = dspChan->mSampleOffset - (u32)chan->mWaveData;
			if (sampleOffset != 0) {
				sampleOffset--;
			}

			u32 blockIndex = sampleOffset / sBlockSize;
			if (blockIndex != mCurrentReadOffset) {
				u32 isNewBlock = bool((mCurrentReadOffset ^ blockIndex) == 0);
				while (blockIndex != mCurrentReadOffset) {
					if (sLoadThread->sendCmdMsg(&loadToAramTask, this) == 0) {
						sFatalErrorFlag = true;
						break;
					}

					{
						JASCriticalSection cs;
						mLoadedCount++;
					}
					mCurrentReadOffset++;
					if (mCurrentReadOffset >= mCurrentBlockNum) {
						mCurrentReadOffset = 0;
					}
				}

				if (isNewBlock) {
					mMaxBlocks -= mCurrentBlockNum;
					if (_19D) {
						if (!_1B0) {
							dspChan->mCurrentSampleOffset += blockSamples;
							mCurrentSampleOffset = dspChan->mCurrentSampleOffset;
							mControlFlags |= 1;
						}
						dspChan->mNextSampleOffset += blockSamples;
						mNextSampleOffset = dspChan->mNextSampleOffset;
						mControlFlags |= 4;
						mCurrentBlockNum = mBlockCount;
						_19D             = 0;

					} else if (mCurrentBlockNum != mBlockCount - 1) {
						mCurrentBlockNum = mBlockCount - 1;
						dspChan->mNextSampleOffset -= blockSamples;
						mNextSampleOffset = dspChan->mNextSampleOffset;
						mControlFlags |= 4;
						if (!_1B0) {
							dspChan->mCurrentSampleOffset -= blockSamples;
							mCurrentSampleOffset = dspChan->mCurrentSampleOffset;
							mControlFlags |= 1;
						}
					}
				}
			} else if (mLoadedCount == 0 && !sSystemPauseFlag) {
				mPauseFlags &= ~2;
				mPauseFlags &= ~4;
			}

			mNextBlockSample = dspChan->mCurrentSampleOffset + dspChan->mSamplesPerBlock;

			if (mLoadedCount >= mBlockCount - 2) {
				mPauseFlags |= 4;
			}

		} else {
			if (mControlFlags & 0x1) {
				dspChan->mCurrentSampleOffset = mCurrentSampleOffset;
			}
			if (mControlFlags & 0x2) {
				dspChan->mLoopStartOffset = mLoopSampleOffset;
			}
			if (mControlFlags & 0x4) {
				dspChan->mNextSampleOffset = mNextSampleOffset;
			}
			if (mControlFlags & 0x8) {
				dspChan->mLoopOffset = mEndSampleOffset;
			}
		}
		bool check = false;
		int count  = 0;
		for (count; count < 6; count++) {
			if (chan == mChannels[count]) {
				break;
			}
		}
		dspChan->mLast   = mSampleData[0][count];
		dspChan->mPenult = mSampleData[1][count];
	} break;
	case 2: {
		bool check = false;
		for (int i = 0; i < 6; i++) {
			if (chan == mChannels[i]) {
				mChannels[i] = nullptr;
			} else if (mChannels[i]) {
				check = true;
			}
		}
		if (!check) {
			mAbortFlag = 1;
			if (sLoadThread->sendCmdMsg(&finishTask, this) == 0) {
				sFatalErrorFlag = true;
				return;
			}
		}
	} break;
	}

	chan->setPauseFlag(mPauseFlags != 0);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r27, r3
	mr       r28, r5
	mr       r29, r6
	lhz      r0, 0x248(r3)
	cmplwi   r0, 0
	bne      lbl_800A9B94
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r31, r0, 1
	b        lbl_800A9B9C

lbl_800A9B94:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r31, r0, 1

lbl_800A9B9C:
	cmpwi    r4, 1
	beq      lbl_800A9BC0
	bge      lbl_800A9BB4
	cmpwi    r4, 0
	bge      lbl_800A9C08
	b        lbl_800AA27C

lbl_800A9BB4:
	cmpwi    r4, 3
	bge      lbl_800AA27C
	b        lbl_800AA17C

lbl_800A9BC0:
	lwz      r0, 0x198(r27)
	cmplwi   r0, 0
	bne      lbl_800AA27C
	stw      r28, 0x198(r27)
	li       r4, 0
	lwz      r0, 0x24c(r27)
	mullw    r0, r31, r0
	stw      r0, 0x1a4(r27)
	stw      r4, 0x1a8(r27)
	stw      r4, 0x1a0(r27)
	lwz      r3, 0x260(r27)
	addi     r0, r3, -1
	divwu    r0, r0, r31
	stw      r0, 0x1ac(r27)
	stb      r4, 0x1b0(r27)
	stw      r4, 0x1b4(r27)
	stw      r4, 0x21c(r27)
	b        lbl_800AA27C

lbl_800A9C08:
	lhz      r0, 8(r29)
	cmplwi   r0, 0
	bne      lbl_800AA27C
	lwz      r0, 0x198(r27)
	cmplw    r28, r0
	bne      lbl_800AA0AC
	li       r6, 0
	stw      r6, 0x21c(r27)
	lwz      r3, 0x74(r29)
	lhz      r0, 0x64(r29)
	lwz      r4, 0x1a4(r27)
	add      r7, r3, r0
	cmplw    r7, r4
	bgt      lbl_800A9C54
	lwz      r3, 0x1a8(r27)
	subf     r0, r7, r4
	add      r0, r3, r0
	stw      r0, 0x1a8(r27)
	b        lbl_800A9D08

lbl_800A9C54:
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9C88
	lwz      r0, 0x1a8(r27)
	add      r0, r0, r4
	stw      r0, 0x1a8(r27)
	lwz      r0, 0x24c(r27)
	lwz      r3, 0x1a8(r27)
	mullw    r0, r31, r0
	subf     r0, r7, r0
	add      r0, r3, r0
	stw      r0, 0x1a8(r27)
	b        lbl_800A9D08

lbl_800A9C88:
	lwz      r3, 0x1a8(r27)
	li       r0, -1
	add      r3, r3, r4
	stw      r3, 0x1a8(r27)
	lwz      r3, 0x24c(r27)
	lwz      r4, 0x110(r29)
	mullw    r3, r31, r3
	lwz      r5, 0x1a8(r27)
	subf     r3, r7, r3
	subf     r3, r4, r3
	add      r3, r5, r3
	stw      r3, 0x1a8(r27)
	lwz      r4, 0x260(r27)
	lwz      r3, 0x1a8(r27)
	subf     r3, r4, r3
	stw      r3, 0x1a8(r27)
	lwz      r4, 0x1a8(r27)
	lwz      r3, 0x25c(r27)
	add      r3, r4, r3
	stw      r3, 0x1a8(r27)
	stw      r6, 0x110(r29)
	stw      r6, 0x210(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 2
	stw      r3, 0x21c(r27)
	lwz      r3, 0x1b4(r27)
	cmplw    r3, r0
	bge      lbl_800A9D00
	addi     r0, r3, 1
	stw      r0, 0x1b4(r27)

lbl_800A9D00:
	li       r0, 0
	stb      r0, 0x1b0(r27)

lbl_800A9D08:
	lwz      r3, 0x1a8(r27)
	lwz      r0, 0x260(r27)
	cmplw    r3, r0
	ble      lbl_800A9D20
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)

lbl_800A9D20:
	lwz      r4, 0x25c(r27)
	lis      r5, 0x4330
	lwz      r3, 0x260(r27)
	li       r0, -1
	lwz      r6, 0x1b4(r27)
	subf     r3, r4, r3
	stw      r5, 0x10(r1)
	lfd      f1, lbl_80516EC0@sda21(r2)
	cmplw    r6, r0
	stw      r6, 0x14(r1)
	lfd      f0, 0x10(r1)
	stw      r3, 0x1c(r1)
	fsubs    f2, f0, f1
	stw      r5, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f2, f2, f0
	bge      lbl_800A9D80
	lwz      r0, 0x1a8(r27)
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f1
	fadds    f2, f2, f0

lbl_800A9D80:
	lwz      r3, 0x254(r27)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f1, lbl_80516EC0@sda21(r2)
	stw      r3, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f1
	fdivs    f2, f2, f0
	stfs     f2, 0x1b8(r27)
	lwz      r3, 0x1a8(r27)
	lwz      r0, 0x260(r27)
	addi     r3, r3, 0x190
	cmplw    r3, r0
	blt      lbl_800A9EAC
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9EAC
	lbz      r0, 0x258(r27)
	cmplwi   r0, 0
	beq      lbl_800A9E1C
	lwz      r3, 0x1ac(r27)
	lwz      r0, 0x24c(r27)
	addi     r3, r3, 1
	cmplw    r3, r0
	blt      lbl_800A9DE8
	li       r3, 0

lbl_800A9DE8:
	lwz      r4, 0x25c(r27)
	mullw    r0, r3, r31
	divwu    r3, r4, r31
	mullw    r3, r3, r31
	subf     r3, r3, r4
	add      r0, r3, r0
	stw      r0, 0x110(r29)
	lwz      r0, 0x110(r29)
	stw      r0, 0x210(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 2
	stw      r0, 0x21c(r27)
	b        lbl_800A9E34

lbl_800A9E1C:
	li       r0, 0
	sth      r0, 0x102(r29)
	sth      r0, 0x218(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 8
	stw      r0, 0x21c(r27)

lbl_800A9E34:
	lwz      r7, 0x260(r27)
	li       r0, 1
	lwz      r5, 0x1ac(r27)
	divwu    r6, r7, r31
	lwz      r4, 0x24c(r27)
	lwz      r3, 0x74(r29)
	mullw    r6, r6, r31
	mullw    r5, r5, r31
	subf     r6, r6, r7
	mullw    r4, r31, r4
	add      r5, r6, r5
	subf     r4, r5, r4
	subf     r3, r4, r3
	stw      r3, 0x74(r29)
	lwz      r3, 0x74(r29)
	stw      r3, 0x20c(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 1
	stw      r3, 0x21c(r27)
	lwz      r3, 0x260(r27)
	lwz      r4, 0x25c(r27)
	addi     r3, r3, -1
	lwz      r5, 0x1ac(r27)
	divwu    r4, r4, r31
	divwu    r3, r3, r31
	subf     r3, r4, r3
	add      r3, r3, r5
	addi     r3, r3, 1
	stw      r3, 0x1ac(r27)
	stb      r0, 0x1b0(r27)

lbl_800A9EAC:
	lwz      r3, 0xec(r28)
	lwz      r0, 0x70(r29)
	subf.    r3, r3, r0
	beq      lbl_800A9EC0
	addi     r3, r3, -1

lbl_800A9EC0:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x1a0(r27)
	divwu    r30, r3, r0
	cmplw    r30, r4
	beq      lbl_800AA048
	xor      r0, r4, r30
	lis      r3, loadToAramTask__13JASAramStreamFPv@ha
	cntlzw   r0, r0
	li       r26, 0
	slw      r0, r4, r0
	addi     r25, r3, loadToAramTask__13JASAramStreamFPv@l
	srwi     r24, r0, 0x1f
	b        lbl_800A9F50

lbl_800A9EF4:
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	mr       r4, r25
	mr       r5, r27
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	cmpwi    r3, 0
	bne      lbl_800A9F18
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9F5C

lbl_800A9F18:
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r27)
	stw      r3, 8(r1)
	addi     r0, r4, 1
	stw      r0, 0x208(r27)
	bl       OSRestoreInterrupts
	lwz      r3, 0x1a0(r27)
	addi     r0, r3, 1
	stw      r0, 0x1a0(r27)
	lwz      r3, 0x1a0(r27)
	lwz      r0, 0x24c(r27)
	cmplw    r3, r0
	blt      lbl_800A9F50
	stw      r26, 0x1a0(r27)

lbl_800A9F50:
	lwz      r0, 0x1a0(r27)
	cmplw    r30, r0
	bne      lbl_800A9EF4

lbl_800A9F5C:
	cmplwi   r24, 0
	beq      lbl_800AA078
	lwz      r3, 0x24c(r27)
	lwz      r0, 0x1ac(r27)
	subf     r0, r3, r0
	stw      r0, 0x1ac(r27)
	lbz      r0, 0x19d(r27)
	cmplwi   r0, 0
	beq      lbl_800A9FE0
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9FAC
	lwz      r0, 0x74(r29)
	add      r0, r0, r31
	stw      r0, 0x74(r29)
	lwz      r0, 0x74(r29)
	stw      r0, 0x20c(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 1
	stw      r0, 0x21c(r27)

lbl_800A9FAC:
	lwz      r3, 0x114(r29)
	li       r0, 0
	add      r3, r3, r31
	stw      r3, 0x114(r29)
	lwz      r3, 0x114(r29)
	stw      r3, 0x214(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 4
	stw      r3, 0x21c(r27)
	lwz      r3, 0x250(r27)
	stw      r3, 0x24c(r27)
	stb      r0, 0x19d(r27)
	b        lbl_800AA078

lbl_800A9FE0:
	lwz      r3, 0x250(r27)
	lwz      r0, 0x24c(r27)
	addi     r3, r3, -1
	cmplw    r0, r3
	beq      lbl_800AA078
	stw      r3, 0x24c(r27)
	lwz      r0, 0x114(r29)
	subf     r0, r31, r0
	stw      r0, 0x114(r29)
	lwz      r0, 0x114(r29)
	stw      r0, 0x214(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 4
	stw      r0, 0x21c(r27)
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lwz      r0, 0x74(r29)
	subf     r0, r31, r0
	stw      r0, 0x74(r29)
	lwz      r0, 0x74(r29)
	stw      r0, 0x20c(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 1
	stw      r0, 0x21c(r27)
	b        lbl_800AA078

lbl_800AA048:
	lwz      r0, 0x208(r27)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lbz      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lbz      r0, 0x19e(r27)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x19e(r27)
	lbz      r0, 0x19e(r27)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x19e(r27)

lbl_800AA078:
	lwz      r3, 0x74(r29)
	lhz      r0, 0x64(r29)
	add      r0, r3, r0
	stw      r0, 0x1a4(r27)
	lwz      r3, 0x250(r27)
	lwz      r4, 0x208(r27)
	addi     r0, r3, -2
	cmplw    r4, r0
	blt      lbl_800AA0FC
	lbz      r0, 0x19e(r27)
	ori      r0, r0, 4
	stb      r0, 0x19e(r27)
	b        lbl_800AA0FC

lbl_800AA0AC:
	lwz      r0, 0x21c(r27)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800AA0C0
	lwz      r0, 0x20c(r27)
	stw      r0, 0x74(r29)

lbl_800AA0C0:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800AA0D4
	lwz      r0, 0x210(r27)
	stw      r0, 0x110(r29)

lbl_800AA0D4:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800AA0E8
	lwz      r0, 0x214(r27)
	stw      r0, 0x114(r29)

lbl_800AA0E8:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_800AA0FC
	lhz      r0, 0x218(r27)
	sth      r0, 0x102(r29)

lbl_800AA0FC:
	lwz      r0, 0x180(r27)
	li       r3, 0
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x184(r27)
	li       r3, 1
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x188(r27)
	li       r3, 2
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x18c(r27)
	li       r3, 3
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x190(r27)
	li       r3, 4
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x194(r27)
	li       r3, 5
	cmplw    r28, r0
	beq      lbl_800AA160
	li       r3, 6

lbl_800AA160:
	slwi     r0, r3, 1
	add      r3, r27, r0
	lha      r0, 0x220(r3)
	sth      r0, 0x104(r29)
	lha      r0, 0x22c(r3)
	sth      r0, 0x106(r29)
	b        lbl_800AA27C

lbl_800AA17C:
	lwz      r3, 0x180(r27)
	li       r4, 0
	li       r0, 0
	cmplw    r28, r3
	bne      lbl_800AA198
	stw      r0, 0x180(r27)
	b        lbl_800AA1A4

lbl_800AA198:
	cmplwi   r3, 0
	beq      lbl_800AA1A4
	li       r4, 1

lbl_800AA1A4:
	lwz      r3, 0x184(r27)
	cmplw    r28, r3
	bne      lbl_800AA1B8
	stw      r0, 0x184(r27)
	b        lbl_800AA1C4

lbl_800AA1B8:
	cmplwi   r3, 0
	beq      lbl_800AA1C4
	li       r4, 1

lbl_800AA1C4:
	lwz      r3, 0x188(r27)
	cmplw    r28, r3
	bne      lbl_800AA1D8
	stw      r0, 0x188(r27)
	b        lbl_800AA1E4

lbl_800AA1D8:
	cmplwi   r3, 0
	beq      lbl_800AA1E4
	li       r4, 1

lbl_800AA1E4:
	lwz      r3, 0x18c(r27)
	cmplw    r28, r3
	bne      lbl_800AA1F8
	stw      r0, 0x18c(r27)
	b        lbl_800AA204

lbl_800AA1F8:
	cmplwi   r3, 0
	beq      lbl_800AA204
	li       r4, 1

lbl_800AA204:
	lwz      r3, 0x190(r27)
	cmplw    r28, r3
	bne      lbl_800AA218
	stw      r0, 0x190(r27)
	b        lbl_800AA224

lbl_800AA218:
	cmplwi   r3, 0
	beq      lbl_800AA224
	li       r4, 1

lbl_800AA224:
	lwz      r3, 0x194(r27)
	cmplw    r28, r3
	bne      lbl_800AA238
	stw      r0, 0x194(r27)
	b        lbl_800AA244

lbl_800AA238:
	cmplwi   r3, 0
	beq      lbl_800AA244
	li       r4, 1

lbl_800AA244:
	clrlwi.  r0, r4, 0x18
	bne      lbl_800AA27C
	li       r0, 1
	lis      r3, finishTask__13JASAramStreamFPv@ha
	stb      r0, 0x204(r27)
	addi     r4, r3, finishTask__13JASAramStreamFPv@l
	mr       r5, r27
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	cmpwi    r3, 0
	bne      lbl_800AA27C
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800AA294

lbl_800AA27C:
	lbz      r4, 0x19e(r27)
	mr       r3, r28
	neg      r0, r4
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	bl       setPauseFlag__10JASChannelFb

lbl_800AA294:
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x800AA2A8
 * @note Size: 0x1E4
 */
int JASAramStream::channelProc()
{
	OSMessage msg;
	while (OSReceiveMessage(&mMsgQueueB, &msg, OS_MESSAGE_NOBLOCK)) {
		switch ((u32)msg) {
		case 4:
			_19C = true;
			break;
		case 5:
			_19D = true;
			break;
		}
	}

	if (!_19C) {
		return 0;
	}

	while (OSReceiveMessage(&mMsgQueueA, &msg, OS_MESSAGE_NOBLOCK)) {
		switch ((u32)msg & 0xFF) {
		case 0:
			channelStart();
			break;
		case 1:
			channelStop((u32)msg >> 16);
			break;
		case 2:
			mPauseFlags |= 1;
			break;
		case 3:
			mPauseFlags &= ~1;
			break;
		}
	}

	if (!mChannels[0]) {
		return 0;
	}

	if (sFatalErrorFlag) {
		mPauseFlags |= 8;
	}
	if (sSystemPauseFlag) {
		mPauseFlags |= 2;
	}

	for (int i = 0; i < mNumBlocks; i++) {
		JASChannel* channel     = mChannels[i];
		channel->mVolumeChannel = mVolume * mChannelData[0][i];
		channel->mPitchChannel  = mPitch;
		if (mUseStereo) {
			channel->mPanChannel = mChannelData[1][i];
		}
		channel->mFxMixChannel = mChannelData[2][i];
		channel->mDolbyChannel = mChannelData[3][i];
	}

	if (!mUseStereo && mNumBlocks == 2) {
		mChannels[0]->mPanChannel = 0.0f;
		mChannels[1]->mPanChannel = 1.0f;
	}

	return 0;
}

// ??
static const int one = 1;

/**
 * @note Address: 0x800AA48C
 * @note Size: 0x240
 */
void JASAramStream::channelStart()
{
	u8 blockType;
	switch (mStreamType) {
	case 0:
		blockType = 0;
		break;
	case 1:
		blockType = 3;
		break;
	}
	for (int i = 0; i < mNumBlocks; i++) {
		JASWaveInfo* info      = &mWaveInfos[i];
		info->mFormat          = blockType;
		info->mLoopOffset      = -1;
		info->mLoopStartOffset = 0;

		u32 val = mCurrentBlockNum;
		val *= getBlockSamples();
		info->mLoopEndOffset = val;
		info->mSampleCount   = info->mLoopEndOffset;
		info->mLast          = 0;
		info->mPenult        = 0;
		info->_24            = (void*)one;

		JASChannel* chan
		    = (JASChannel*)JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded>::alloc();
		if (chan) {
			// chan = JASChannel(channelCallback, this); // ????? how???
		}

		chan->mPriority = 127;
		chan->setPanPower(0.0f, 0.0f, 1.0f);
		chan->mPanCalcType   = 1;
		chan->mFxMixCalcType = 1;
		chan->mDolbyCalcType = 1;

		for (int i = 0; i < 6; i++) {
			chan->setMixConfig(i, mMixData[i]);
		}

		chan->mActivePitch   = f32(mSampleRate) / JASDriver::getDacRate();
		chan->mModifiedPitch = chan->mActivePitch;
		chan->setOscInit(0, &OSC_ENV);
		chan->mWaveInfo   = info;
		chan->mWaveData   = (void*)(mDataOffset + (i * (sBlockSize * mBlockCount)));
		chan->mWaveFormat = 0;
		chan->playForce();
		mChannels[i] = chan;
	}
	mActiveChannel = nullptr;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stmw     r21, 0x24(r1)
	mr       r23, r3
	lhz      r0, 0x248(r3)
	cmpwi    r0, 1
	beq      lbl_800AA4CC
	bge      lbl_800AA4D0
	cmpwi    r0, 0
	bge      lbl_800AA4C4
	b        lbl_800AA4D0

lbl_800AA4C4:
	li       r26, 0
	b        lbl_800AA4D0

lbl_800AA4CC:
	li       r26, 3

lbl_800AA4D0:
	lis      r3, OSC_ENV@ha
	lfd      f31, lbl_80516EC0@sda21(r2)
	mr       r28, r23
	mr       r27, r23
	addi     r31, r3, OSC_ENV@l
	li       r25, 0
	lis      r30, 0x4330
	b        lbl_800AA69C

lbl_800AA4F0:
	addi     r24, r28, 0x90
	li       r3, -1
	stb      r26, 0x90(r28)
	li       r0, 0
	stw      r3, 0xa0(r28)
	stw      r0, 0xa4(r28)
	lhz      r0, 0x248(r23)
	lwz      r4, 0x24c(r23)
	cmplwi   r0, 0
	bne      lbl_800AA534
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r0, r0, 1
	b        lbl_800AA53C

lbl_800AA534:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r0, r0, 1

lbl_800AA53C:
	mullw    r4, r4, r0
	li       r3, 0
	addi     r0, r2, one$870@sda21
	stw      r4, 0x18(r24)
	lwz      r4, 0x18(r24)
	stw      r4, 0x1c(r24)
	sth      r3, 0x20(r24)
	sth      r3, 0x22(r24)
	stw      r0, 0x24(r24)
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AA5A8
	bl       OSDisableInterrupts
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800AA5A0
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0xc
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r29, r3, r3
	beq      lbl_800AA59C
	bl       __ct__17JASGenericMemPoolFv

lbl_800AA59C:
	stw      r29,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)

lbl_800AA5A0:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts

lbl_800AA5A8:
	lwz      r3,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	li       r4, 0x118
	bl       alloc__17JASGenericMemPoolFUl
	or.      r29, r3, r3
	beq      lbl_800AA5D0
	lis      r4,
channelCallback__13JASAramStreamFUlP10JASChannelPQ26JASDsp8TChannelPv@ha mr r5,
r23 addi     r4, r4,
channelCallback__13JASAramStreamFUlP10JASChannelPQ26JASDsp8TChannelPv@l bl
__ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv mr       r29, r3

lbl_800AA5D0:
	lfs      f1, lbl_80516EB0@sda21(r2)
	li       r0, 0x7f
	sth      r0, 0xbc(r29)
	mr       r3, r29
	fmr      f2, f1
	lfs      f3, lbl_80516EB4@sda21(r2)
	bl       setPanPower__10JASChannelFfff
	li       r0, 1
	mr       r22, r23
	stb      r0, 0x108(r29)
	li       r21, 0
	stb      r0, 0x109(r29)
	stb      r0, 0x10a(r29)

lbl_800AA604:
	lhz      r5, 0x2cc(r22)
	mr       r3, r29
	mr       r4, r21
	bl       setMixConfig__10JASChannelFiUs
	addi     r21, r21, 1
	addi     r22, r22, 2
	cmpwi    r21, 6
	blt      lbl_800AA604
	bl       getDacRate__9JASDriverFv
	lwz      r0, 0x254(r23)
	mr       r3, r29
	stw      r30, 0x10(r1)
	mr       r5, r31
	li       r4, 0
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f1
	stfs     f0, 0xf0(r29)
	lfs      f0, 0xf0(r29)
	stfs     f0, 0xf8(r29)
	bl       setOscInit__10JASChannelFiPCQ213JASOscillator4Data
	stw      r24, 0xe8(r29)
	li       r0, 0
	mr       r3, r29
	lwz      r5, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x250(r23)
	lwz      r6, 0x238(r23)
	mullw    r4, r5, r4
	mullw    r4, r25, r4
	add      r4, r6, r4
	stw      r4, 0xec(r29)
	stb      r0, 0xe4(r29)
	bl       playForce__10JASChannelFv
	stw      r29, 0x180(r27)
	addi     r28, r28, 0x28
	addi     r27, r27, 4
	addi     r25, r25, 1

lbl_800AA69C:
	lhz      r0, 0x24a(r23)
	cmpw     r25, r0
	blt      lbl_800AA4F0
	li       r0, 0
	stw      r0, 0x198(r23)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	lmw      r21, 0x24(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x800AA6CC
 * @note Size: 0x78
 */
void JASAramStream::channelStop(u16 p1)
{
	for (int i = 0; i < mNumBlocks; i++) {
		if (mChannels[i] != nullptr) {
			mChannels[i]->release(p1);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28
	b        lbl_800AA718

lbl_800AA6FC:
	lwz      r3, 0x180(r31)
	cmplwi   r3, 0
	beq      lbl_800AA710
	mr       r4, r29
	bl       release__10JASChannelFUs

lbl_800AA710:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_800AA718:
	lhz      r0, 0x24a(r28)
	cmpw     r30, r0
	blt      lbl_800AA6FC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	.4byte 0x00000000 // unknown instruction
	*/
}
