#include "Dolphin/ar.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

JSUList<JKRAMCommand> JKRAramPiece::sAramPieceCommandList;
OSMutex JKRAramPiece::mMutex;

/*
 * --INFO--
 * Address:	80019AD8
 * Size:	000020
 */
void JKRAramPiece::sendCommand(JKRAMCommand* command) { startDMA(command); }

struct OrderSyncMsg {
	int _00;
	JKRAMCommand* _04;
};

/*
 * --INFO--
 * Address:	80019AF8
 * Size:	0001AC
 */
bool JKRAramPiece::orderSync(int direction, u32 source, u32 destination, u32 length, JKRAramBlock* block)
{
	OSLockMutex(&mMutex);
	OSLockMutex(&mMutex);

	if (!IS_ALIGNED(source, 32) || !IS_ALIGNED(destination, 32)) {
		OSReport("direction = %x\n", direction);
		OSReport("source = %x\n", source);
		OSReport("destination = %x\n", destination);
		OSReport("length = %x\n", length);
		OSErrorLine(107, "Abort.");
	}
	OrderSyncMsg* msg = new (JKRHeap::getSystemHeap(), -4) OrderSyncMsg();
	JKRAMCommand* cmd = new (JKRHeap::getSystemHeap(), -4) JKRAMCommand();
	cmd->mDirection   = direction;
	cmd->mSource      = source;
	cmd->mDestination = destination;
	cmd->mAramBlock   = block;
	cmd->mLength      = length;
	cmd->mCallback    = nullptr;
	msg->_00          = 1;
	msg->_04          = cmd;

	OSSendMessage((OSMessageQueue*)&JKRAram::sMessageQueue, msg, OS_MESSAGE_BLOCK);
	if (cmd->mCallback) {
		sAramPieceCommandList.append(&cmd->_20);
	}

	OSUnlockMutex(&mMutex);
	OSLockMutex(&mMutex);

	OSMessage recvMsg[2];
	OSReceiveMessage(&cmd->mMessageQueue, recvMsg, OS_MESSAGE_BLOCK);
	sAramPieceCommandList.remove(&cmd->_20);

	OSUnlockMutex(&mMutex);
	delete cmd;
	OSUnlockMutex(&mMutex);
	return true;
}

/*
 * --INFO--
 * Address:	80019CA4
 * Size:	000078
 */
void JKRAramPiece::startDMA(JKRAMCommand* cmd)
{
	if (cmd->mDirection == ARAM_DIR_ARAM_TO_MRAM) {
		DCInvalidateRange((u8*)cmd->mDestination, cmd->mLength);
	} else {
		DCStoreRange((u8*)cmd->mSource, cmd->mLength);
	}
	ARQPostRequest(cmd, 0, cmd->mDirection, 0, cmd->mSource, cmd->mDestination, cmd->mLength, doneDMA);
}

/*
 * --INFO--
 * Address:	80019D1C
 * Size:	0000A8
 */
void JKRAramPiece::doneDMA(u32 cmdAddr)
{
	JKRAMCommand* cmd = (JKRAMCommand*)cmdAddr;
	if (cmd->mDirection == 1) {
		DCInvalidateRange((u8*)cmd->mDestination, cmd->mLength);
	}
	if (cmd->_60) {
		if (cmd->_60 == 2) {
			JKRDecomp::sendCommand(cmd->mDecompCommand);
		}
		return;
	}
	if (cmd->mCallback) {
		cmd->mCallback(cmd);
	} else {
		if (cmd->_5C) {
			OSSendMessage(cmd->_5C, cmd, OS_MESSAGE_NOBLOCK);
		} else {
			OSSendMessage(&cmd->mMessageQueue, cmd, OS_MESSAGE_NOBLOCK);
		}
	}
}

/*
 * --INFO--
 * Address:	80019DC4
 * Size:	000070
 * __ct__12JKRAMCommandFv
 */
JKRAMCommand::JKRAMCommand()
    : _20(this)
    , _30(this)
{
	OSInitMessageQueue(&mMessageQueue, &mMessage, OS_MESSAGE_BLOCK);
	mCallback = nullptr;
	_5C       = nullptr;
	_60       = 0;
	_8C       = nullptr;
	_90       = nullptr;
	_94       = nullptr;
}

/*
 * --INFO--
 * Address:	80019E34
 * Size:	0000A8
 * __dt__12JKRAMCommandFv
 */
JKRAMCommand::~JKRAMCommand()
{
	if (_8C) {
		delete _8C;
	}
	if (_90) {
		delete _90;
	}
	if (_94) {
		JKRHeap::free(_94, nullptr);
	}
}
