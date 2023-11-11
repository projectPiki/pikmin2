#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "types.h"
#include "JSystem/JAudio/JAS/JASAramStream.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRAram.h"

JASTaskThread* JASAramStream::sLoadThread;
u8* JASAramStream::sReadBuffer;
u32 JASAramStream::sBlockSize;
u32 JASAramStream::sChannelMax;
bool JASAramStream::sSystemPauseFlag;
bool JASAramStream::sFatalErrorFlag;

/*
 * --INFO--
 * Address:	800A8FA4
 * Size:	000090
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

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASAramStream::setLoadThread(JASTaskThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9034
 * Size:	000158
 */
JASAramStream::JASAramStream()
    : _198(nullptr)
    , _19C(0)
    , _19D(0)
    , _19E(0)
    , _1A0(0)
    , _1A4(0)
    , _1A8(0)
    , _1AC(0)
    , _1B0(0)
    , _1B4(0)
    , _1B8(0.0f)
    , _1F8(0)
    , _1FC(0)
    , _200(0)
    , _204(0)
    , _208(0)
    , _21C(0)
    , _238(0)
    , _23C(0)
    , mCallback(nullptr)
    , _244(nullptr)
    , _248(0)
    , _24A(0)
    , _24C(0)
    , _250(0)
    , _254(0)
    , _258(0)
    , _25C(0)
    , _260(0)
    , _264(1.0f)
    , _268(1.0f)
    , _2D8(0)
{
	for (int i = 0; i < 6; i++) {
		_180[i]    = nullptr;
		_220[0][i] = 0;
		_220[1][i] = 0;
		_26C[0][i] = 1.0f;
		_26C[1][i] = 0.5f;
		_26C[2][i] = 0.0f;
		_26C[3][i] = 0.0f;
	}
	for (int i = 0; i < 6; i++) {
		_2CC[i] = 0;
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

/*
 * --INFO--
 * Address:	800A918C
 * Size:	0000F8
 */
void JASAramStream::init(u32 p1, u32 p2, JASAramStreamCallback callback, void* p4)
{
	_238 = p1;
	_23C = p2;
	_1B8 = 0.0f;
	_19E = 0;
	_19C = 0;
	_19D = 0;
	_204 = 0;
	_24A = 0;
	for (int i = 0; i < 6; i++) {
		_26C[0][i] = 1.0f;
		_26C[1][i] = 0.5f;
		_26C[2][i] = 0.0f;
		_26C[3][i] = 0.0f;
	}
	_264      = 1.0f;
	_268      = 1.0f;
	_2D8      = 0;
	_2CC[0]   = -1;
	mCallback = callback;
	_244      = p4;
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

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASAramStream::setBusSetting(u32, u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASAramStream::prepare(const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9284
 * Size:	0000B8
 */
BOOL JASAramStream::prepare(s32 entryNum, int p2)
{
	if (!DVDFastOpen(entryNum, &mFileInfo)) {
		return FALSE;
	}
	if (!JASDriver::registerSubFrameCallback(channelProcCallback, this)) {
		return FALSE;
	}
	if (_204 != 0) {
		return FALSE;
	}
	HeaderLoadTaskArgs args;
	args.mStream = this;
	args._04     = _23C;
	args._08     = p2;
	return sLoadThread->sendCmdMsg(headerLoadTask, &args, sizeof(args)) != FALSE;
}

/*
 * --INFO--
 * Address:	800A933C
 * Size:	000034
 */
BOOL JASAramStream::start() { return OSSendMessage(&mMsgQueueA, nullptr, OS_MESSAGE_NOBLOCK) != FALSE; }

/*
 * --INFO--
 * Address:	800A9370
 * Size:	000038
 */
int JASAramStream::stop(u16 p1) { return OSSendMessage(&mMsgQueueA, (void*)((u32)p1 << 0x10 | 1), OS_MESSAGE_NOBLOCK) != FALSE; }

/*
 * --INFO--
 * Address:	800A93A8
 * Size:	000048
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

/*
 * --INFO--
 * Address:	800A93F0
 * Size:	000044
 */
int JASAramStream::cancel()
{
	_204 = 1;
	return sLoadThread->sendCmdMsg(finishTask, this) != FALSE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASAramStream::getBlockSamples() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9434
 * Size:	000030
 */
void JASAramStream::headerLoadTask(void* args)
{
	HeaderLoadTaskArgs* castedArgs = static_cast<HeaderLoadTaskArgs*>(args);
	castedArgs->mStream->headerLoad(castedArgs->_04, castedArgs->_08);
}

/*
 * --INFO--
 * Address:	800A9464
 * Size:	0000DC
 */
void JASAramStream::firstLoadTask(void* args)
{
	HeaderLoadTaskArgs* castedArgs = static_cast<HeaderLoadTaskArgs*>(args);
	JASAramStream* stream          = castedArgs->mStream;
	if (!stream->load()) {
		return;
	}
	if (castedArgs->_08 > 0) {
		--castedArgs->_08;
		if (castedArgs->_08 == 0) {
			if (!sLoadThread->sendCmdMsg(prepareFinishTask, stream)) {
				sFatalErrorFlag = true;
			}
		}
	}
	if (castedArgs->_04 == 0) {
		return;
	}
	castedArgs->_04--;
	if (!sLoadThread->sendCmdMsg(firstLoadTask, castedArgs, sizeof(*castedArgs))) {
		sFatalErrorFlag = true;
	}
	JASCriticalSection criticalSection;
	stream->_208++;
}

/*
 * --INFO--
 * Address:	800A9540
 * Size:	000020
 */
bool JASAramStream::loadToAramTask(void* p1) { return static_cast<JASAramStream*>(p1)->load(); }

/*
 * --INFO--
 * Address:	800A9560
 * Size:	000060
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

/*
 * --INFO--
 * Address:	800A95C0
 * Size:	000058
 */
void JASAramStream::prepareFinishTask(void* args)
{
	JASAramStream* stream = static_cast<JASAramStream*>(args);
	OSSendMessage(&stream->mMsgQueueB, (void*)4, OS_MESSAGE_BLOCK);
	if (stream->mCallback != nullptr) {
		stream->mCallback(1, stream, stream->_244);
	}
}

/*
 * --INFO--
 * Address:	800A9618
 * Size:	0001CC
 */
bool JASAramStream::headerLoad(u32 p1, int p2)
{
	if (sFatalErrorFlag) {
		return false;
	}
	if (_204 != 0) {
		return false;
	}
	if (DVDReadPrio(&mFileInfo, sReadBuffer, 0x40, 0, 1) < 0) {
		sFatalErrorFlag = true;
		return false;
	}
	u8* buffer = sReadBuffer;
	_248       = buffer[9];
	_24A       = *(u16*)(buffer + 0x0C);
	_254       = *(u32*)(buffer + 0x10);
	_258       = (*(u16*)(buffer + 0x0E) != FALSE);
	_25C       = *(u32*)(buffer + 0x18);
	_260       = *(u32*)(buffer + 0x1C);
	_264       = buffer[0x28] / 127.0f;
	_208       = 0;
	_200       = 0;
	_1FC       = 0;
	_250       = p1 / sBlockSize / *(u16*)(buffer + 0x0C);
	_24C       = _250;
	_24C--;
	_1F8 = _24C;
	if (p2 < 0 || p2 > _1F8) {
		p2 = _1F8;
	}
	if (_204 != 0) {
		return false;
	}
	FirstLoadTaskArgs loadArgs;
	loadArgs.mStream = this;
	loadArgs._04     = _1F8 - 1;
	loadArgs._08     = p2;
	if (!sLoadThread->sendCmdMsg(firstLoadTask, &loadArgs, sizeof(loadArgs))) {
		sFatalErrorFlag = true;
		return false;
	}
	JASCriticalSection criticalSection;
	_208++;
	return true;
}

/*
 * --INFO--
 * Address:	800A97E4
 * Size:	0002B4
 */
bool JASAramStream::load()
{
	{
		JASCriticalSection cs;
		_208--;
	}

	if (sFatalErrorFlag) {
		return false;
	}

	if (_204) {
		return false;
	}

	u32 val;
	if (_248 == 0) {
		val = sBlockSize * 16 / 9;
	} else {
		val = sBlockSize / 2;
	}

	u32 val2 = (_260 - 1) / val;

	u32 val3;
	if (_248 == 0) {
		val3 = sBlockSize * 16 / 9;
	} else {
		val3 = sBlockSize / 2;
	}

	u32 val4 = (_25C) / val3;

	if (_200 > val2) {
		return false;
	}

	u32 length = sBlockSize * _24A + 0x20;
	u32 offset = _200 * _24A + 0x40;

	if (_200 == val2) {
		length = mFileInfo.length - offset;
	}

	if (DVDReadPrio(&mFileInfo, sReadBuffer, length, offset, 1) < 0) {
		sFatalErrorFlag = true;
		return false;
	}

	// u32
	// for (int i = 0; i < _24A; i++) {
	// 	if (JKRAram::mainRamToAram(sReadBuffer, ))
	// }
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

/*
 * --INFO--
 * Address:	800A9A98
 * Size:	000020
 */
s32 JASAramStream::channelProcCallback(void* stream) { return static_cast<JASAramStream*>(stream)->channelProc(); }

/*
 * --INFO--
 * Address:	800A9AB8
 * Size:	00005C
 */
s32 JASAramStream::dvdErrorCheck(void*)
{
	u32 status = DVDGetDriveStatus();
	switch (status) {
	case 0:
		sSystemPauseFlag = false;
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case -1:
		// default:
		sSystemPauseFlag = true;
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

/*
 * --INFO--
 * Address:	800A9B14
 * Size:	00003C
 */
void JASAramStream::channelCallback(u32 p1, JASChannel* chan, JASDsp::TChannel* dspChan, void* stream)
{
	static_cast<JASAramStream*>(stream)->updateChannel(p1, chan, dspChan);
}

/*
 * --INFO--
 * Address:	800A9B50
 * Size:	000758
 */
void JASAramStream::updateChannel(u32 p1, JASChannel* chan, JASDsp::TChannel* dspChan)
{
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

/*
 * --INFO--
 * Address:	800AA2A8
 * Size:	0001E4
 */
int JASAramStream::channelProc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 1
	b        lbl_800AA2F0

lbl_800AA2C8:
	lwz      r0, 8(r1)
	cmpwi    r0, 5
	beq      lbl_800AA2EC
	bge      lbl_800AA2F0
	cmpwi    r0, 4
	bge      lbl_800AA2E4
	b        lbl_800AA2F0

lbl_800AA2E4:
	stb      r30, 0x19c(r31)
	b        lbl_800AA2F0

lbl_800AA2EC:
	stb      r30, 0x19d(r31)

lbl_800AA2F0:
	addi     r3, r31, 0x20
	addi     r4, r1, 8
	li       r5, 0
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_800AA2C8
	lbz      r0, 0x19c(r31)
	cmplwi   r0, 0
	bne      lbl_800AA388
	li       r3, 0
	b        lbl_800AA474
	b        lbl_800AA388

lbl_800AA320:
	lwz      r3, 8(r1)
	clrlwi   r0, r3, 0x18
	cmpwi    r0, 2
	beq      lbl_800AA36C
	bge      lbl_800AA344
	cmpwi    r0, 0
	beq      lbl_800AA350
	bge      lbl_800AA35C
	b        lbl_800AA388

lbl_800AA344:
	cmpwi    r0, 4
	bge      lbl_800AA388
	b        lbl_800AA37C

lbl_800AA350:
	mr       r3, r31
	bl       channelStart__13JASAramStreamFv
	b        lbl_800AA388

lbl_800AA35C:
	srwi     r4, r3, 0x10
	mr       r3, r31
	bl       channelStop__13JASAramStreamFUs
	b        lbl_800AA388

lbl_800AA36C:
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 1
	stb      r0, 0x19e(r31)
	b        lbl_800AA388

lbl_800AA37C:
	lbz      r0, 0x19e(r31)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x19e(r31)

lbl_800AA388:
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_800AA320
	lwz      r0, 0x180(r31)
	cmplwi   r0, 0
	bne      lbl_800AA3B4
	li       r3, 0
	b        lbl_800AA474

lbl_800AA3B4:
	lbz      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AA3CC
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 8
	stb      r0, 0x19e(r31)

lbl_800AA3CC:
	lbz      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AA3E4
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 2
	stb      r0, 0x19e(r31)

lbl_800AA3E4:
	mr       r3, r31
	li       r5, 0
	b        lbl_800AA438

lbl_800AA3F0:
	lfs      f1, 0x264(r31)
	lfs      f0, 0x26c(r3)
	lwz      r4, 0x180(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x100(r4)
	lfs      f0, 0x268(r31)
	stfs     f0, 0x104(r4)
	lbz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	beq      lbl_800AA420
	lfs      f0, 0x284(r3)
	stfs     f0, 0xd0(r4)

lbl_800AA420:
	lfs      f0, 0x29c(r3)
	addi     r5, r5, 1
	stfs     f0, 0xd8(r4)
	lfs      f0, 0x2b4(r3)
	addi     r3, r3, 4
	stfs     f0, 0xe0(r4)

lbl_800AA438:
	lhz      r4, 0x24a(r31)
	cmpw     r5, r4
	blt      lbl_800AA3F0
	lbz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	bne      lbl_800AA470
	cmplwi   r4, 2
	bne      lbl_800AA470
	lfs      f1, lbl_80516EB0@sda21(r2)
	lwz      r3, 0x180(r31)
	lfs      f0, lbl_80516EB4@sda21(r2)
	stfs     f1, 0xd0(r3)
	lwz      r3, 0x184(r31)
	stfs     f0, 0xd0(r3)

lbl_800AA470:
	li       r3, 0

lbl_800AA474:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AA48C
 * Size:	000240
 */
char* JASAramStream::channelStart()
{
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

/*
 * --INFO--
 * Address:	800AA6CC
 * Size:	000078
 */
void JASAramStream::channelStop(u16 p1)
{
	for (int i = 0; i < _24A; i++) {
		if (_180[i] != nullptr) {
			_180[i]->release(p1);
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
