#include "Dolphin/ar.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRAramPiece_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473540
    lbl_80473540:
        .4byte 0x64697265
        .4byte 0x6374696F
        .4byte 0x6E203D20
        .4byte 0x25780A00
        .4byte 0x736F7572
        .4byte 0x6365203D
        .4byte 0x2025780A
        .4byte 0x00000000
        .4byte 0x64657374
        .4byte 0x696E6174
        .4byte 0x696F6E20
        .4byte 0x3D202578
        .4byte 0x0A000000
        .4byte 0x6C656E67
        .4byte 0x7468203D
        .4byte 0x2025780A
        .4byte 0x00000000
        .4byte 0x4A4B5241
        .4byte 0x72616D50
        .4byte 0x69656365
        .4byte 0x2E637070
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sAramPieceCommandList__12JKRAramPiece
    sAramPieceCommandList__12JKRAramPiece:
        .skip 0x24
    .global mMutex__12JKRAramPiece
    mMutex__12JKRAramPiece:
        .skip 0x18

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164D8
    lbl_805164D8:
        .4byte 0x41626F72
        .4byte 0x742E0000
*/

/**
 * TODO: This needs proper sinit
 */
JSUList<JKRAMCommand> JKRAramPiece::sAramPieceCommandList;

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
bool JKRAramPiece::orderSync(int direction, unsigned long source, unsigned long destination, unsigned long length, JKRAramBlock* block)
{
	OSLockMutex(&mMutex);
	OSLockMutex(&mMutex);
	if ((source & 0x1F) != 0 || (destination & 0x1F) != 0) {
		OSReport("direction = %x\n", direction);
		OSReport("source = %x\n", source);
		OSReport("destination = %x\n", destination);
		OSReport("length = %x\n", length);
		OSErrorLine(107, "Abort.");
	}
	OrderSyncMsg* msg = new (JKRHeap::sSystemHeap, -4) OrderSyncMsg();
	// void** msg         = new (JKRHeap::sSystemHeap, -4) void*[2];
	JKRAMCommand* cmd  = new (JKRHeap::sSystemHeap, -4) JKRAMCommand();
	cmd->m_direction   = direction;
	cmd->m_source      = source;
	cmd->m_destination = destination;
	cmd->_50           = block;
	cmd->m_length      = length;
	cmd->_58           = nullptr;
	msg->_00           = 1;
	msg->_04           = cmd;
	// msg[0] = (void*)1;
	// msg[1] = cmd;
	OSSendMessage((OSMessageQueue*)&JKRAram::sMessageQueue, msg, OS_MESSAGE_BLOCKING);
	if (cmd->_58 != nullptr) {
		sAramPieceCommandList.append(&cmd->_20);
	}
	OSUnlockMutex(&mMutex);
	OSLockMutex(&mMutex);
	void* recvMsg[2];
	OSReceiveMessage(&cmd->_68, recvMsg, OS_MESSAGE_BLOCKING);
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
	if (cmd->m_direction == 1) {
		DCInvalidateRange((u8*)cmd->m_destination, cmd->m_length);
	} else {
		DCStoreRange((u8*)cmd->m_source, cmd->m_length);
	}
	ARQPostRequest(cmd, 0, cmd->m_direction, 0, cmd->m_source, cmd->m_destination, cmd->m_length, doneDMA);
}

/*
 * --INFO--
 * Address:	80019D1C
 * Size:	0000A8
 */
void JKRAramPiece::doneDMA(unsigned long p1)
{
	JKRAMCommand* cmd = (JKRAMCommand*)p1;
	if (cmd->m_direction == 1) {
		DCInvalidateRange((u8*)cmd->m_destination, cmd->m_length);
	}
	if (cmd->_60 != 0) {
		if (cmd->_60 == 2) {
			JKRDecomp::sendCommand(cmd->_64);
		}
		return;
	}
	if (cmd->_58 != nullptr) {
		cmd->_58(cmd);
	} else {
		if (cmd->_5C != nullptr) {
			OSSendMessage(cmd->_5C, cmd, OS_MESSAGE_NON_BLOCKING);
		} else {
			OSSendMessage(&cmd->_68, cmd, OS_MESSAGE_NON_BLOCKING);
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
	OSInitMessageQueue(&_68, &_88, OS_MESSAGE_BLOCKING);
	_58 = nullptr;
	_5C = nullptr;
	_60 = 0;
	_8C = nullptr;
	_90 = nullptr;
	_94 = nullptr;
}

/*
 * --INFO--
 * Address:	80019E34
 * Size:	0000A8
 * __dt__12JKRAMCommandFv
 */
JKRAMCommand::~JKRAMCommand()
{
	if (_8C != nullptr) {
		delete _8C;
	}
	if (_90 != nullptr) {
		delete _90;
	}
	if (_94 != nullptr) {
		JKRHeap::free(_94, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80019EDC
 * Size:	000044
 */
// void __sinit_JKRAramPiece_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, sAramPieceCommandList__12JKRAramPiece@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, sAramPieceCommandList__12JKRAramPiece@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sAramPieceCommandList__12JKRAramPiece@ha
// 	lis      r4, "__dt__23JSUList<12JKRAMCommand>Fv"@ha
// 	lis      r5, lbl_804EFF30@ha
// 	addi     r3, r3, sAramPieceCommandList__12JKRAramPiece@l
// 	addi     r4, r4, "__dt__23JSUList<12JKRAMCommand>Fv"@l
// 	addi     r5, r5, lbl_804EFF30@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
