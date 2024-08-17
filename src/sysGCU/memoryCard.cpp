#include "MemoryCardMgr.h"
#include "System.h"
#include "types.h"

static CARDMemoryCard sCardWorkArea;

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
// void MemoryCardMgr::setTmpHeap(JKRHeap*)
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: 0x804405F0
 * @note Size: 0x7C
 */
MemoryCardMgr::MemoryCardMgr()
{
	mCurrentCommandIdx = 0;
	mIsCard            = 0;
	mHeap              = 0;
	_D0                = 0;
	mStatusFlag        = INSIDESTATUS_Unk;
	mHeap              = JKRHeap::getSystemHeap();
	resetCommandFlagQueue();
}

/**
 * @note Address: 0x80440690
 * @note Size: 0x24
 */
void MemoryCardMgr::resetCommandFlagQueue()
{
	mCommands[0].mFlag = 0;
	mCommands[1].mFlag = 0;
	mCommands[2].mFlag = 0;
	mCommands[3].mFlag = 0;
	mCommands[4].mFlag = 0;
	mCurrentCommandIdx = 0;
	mIsCard            = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
MemoryCardMgrCommand* MemoryCardMgr::getCurrentCommand()
{
	// this is placeholder for what needs to be here. assert is correct.
	// should get used in cardProc()
	bool check                = false;
	MemoryCardMgrCommand* cmd = &mCommands[mCurrentCommandIdx];
	if (cmd->mFlag || (!cmd->mFlag && (int)mIsCard == 0)) {
		check = true;
	}
	JUT_ASSERTLINE(198, check, "command queue is broken.flag:%d num:%d", cmd->mFlag, mIsCard == 0);
	return cmd;
}

/**
 * @note Address: 0x804406B4
 * @note Size: 0x40
 */
void MemoryCardMgr::setCommand(int flags)
{
	MemoryCardMgrCommand command(flags);
	setCommand(&command);
}

/**
 * @note Address: 0x804406F4
 * @note Size: 0x138
 */
bool MemoryCardMgr::setCommand(MemoryCardMgrCommandBase* command)
{
	bool check = true;
	P2ASSERTLINE(225, (command->getClassSize() <= 0x20));
	OSLockMutex(&mOsMutex);
	u32 i = 0;
	while (true) {
		if (!mCommands[i].mFlag) {
			break;
		}

		i++;

		if (i == 5) {
			check = false;
			JUT_PANICLINE(240, "command Queue is full.");
		}
	}

	if (check) {
		u32 j = mCurrentCommandIdx;
		while (true) {
			// As far as I can tell, the instructions here do the following:
			// 1. calc byte offset of start of command in an array of commands
			// 2. add that to the base address of `this`.
			// 3. get the value at that + 4, because mCommands starts at 4 and not 0.
			// As far as I can tell, it's *not* getting the value at _04 (vt) of those commands.
			// But I have no idea how to force that bizarre address manipulation. *shrug*

			// MemoryCardMgrCommandBase* cmd = (MemoryCardMgrCommandBase*)&(mCommands[j]);
			// if (!cmd->_00) {
			// 	memcpy(&cmd->_00, (void*)command, cmd->getClassSize());
			// 	mIsCard++;
			// 	P2ASSERTLINE(254, (u32)mIsCard <= 5);
			// 	break;
			// }
			// MemoryCardMgrCommand* cmd = &mCommands[j];
			// if (!cmd->mData.dataView) {
			// 	memcpy(&cmd->_00, (void*)command, sizeof(MemoryCardMgrCommand));
			// 	mIsCard++;
			// 	P2ASSERTLINE(254, (u32)mIsCard <= 5);
			// 	break;
			// }
			int* dataPtr = &(mCommands[j].mFlag);
			if (*dataPtr == 0) {
				memcpy(dataPtr, (void*)command, sizeof(MemoryCardMgrCommand));
				mIsCard++;
				P2ASSERTLINE(254, (u32)mIsCard <= 5);
				break;
			}
			// MemoryCardMgrCommandBase* ptr = (MemoryCardMgrCommandBase*)&(mCommands[j]);
			// MemoryCardMgrCommand* ptr = mCommands + j;
			// if (ptr->test()) {
			// 	memcpy((void*)&mCommands[j], (void*)command, sizeof(mCommands[j]));
			// 	mIsCard++;
			// 	P2ASSERTLINE(254, (u32)mIsCard <= 5);
			// 	break;
			// }
			// u8* ptr = (u8*)(mCommands + j);
			// if (*(int*)(ptr + sizeof(MemoryCardMgrCommandBase) - sizeof(void*)) == 0) {
			// 	memcpy(ptr, (void*)command, sizeof(mCommands[j]));
			// 	mIsCard++;
			// 	P2ASSERTLINE(254, (u32)mIsCard <= 5);
			// 	break;
			// }
			// int* dumbPtr = (int*)&((MemoryCardMgrCommand*)(mCommands))[j];
			// if (!dumbPtr[1]) {
			// 	memcpy((void*)(&dumbPtr[1]), (void*)command, 0x20);
			// 	mIsCard++;
			// 	P2ASSERTLINE(254, (u32)mIsCard <= 5);
			// 	break;
			// }
			j++;

			if (j == 5) {
				j = 0;
			}
		}
	}

	OSUnlockMutex(&mOsMutex);
	OSSignalCond(&mCond);
	return check;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r4
	lis      r4, lbl_8049AD08@ha
	mr       r26, r3
	mr       r3, r27
	li       r29, 1
	addi     r31, r4, lbl_8049AD08@l
	lwz      r12, 4(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_80440748
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80440748:
	addi     r3, r26, 0xac
	bl       OSLockMutex
	li       r28, 0
	mr       r30, r26

lbl_80440758:
	lwz      r0, 4(r30)
	cmpwi    r0, 0
	beq      lbl_80440790
	addi     r28, r28, 1
	addi     r30, r30, 0x20
	cmplwi   r28, 5
	bne      lbl_80440758
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r29, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440758

lbl_80440790:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440804
	lwz      r4, 0xa4(r26)

lbl_8044079C:
	slwi     r0, r4, 5
	add      r3, r26, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_804407F0
	mr       r4, r27
	addi     r3, r3, 4
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r26)
	addi     r0, r3, 1
	stw      r0, 0xa8(r26)
	lwz      r0, 0xa8(r26)
	cmplwi   r0, 5
	ble      lbl_80440804
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440804

lbl_804407F0:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_8044079C
	li       r4, 0
	b        lbl_8044079C

lbl_80440804:
	addi     r3, r26, 0xac
	bl       OSUnlockMutex
	addi     r3, r26, 0xc4
	bl       OSSignalCond
	mr       r3, r29
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void MemoryCardMgr::releaseCurrentCommand()
{
	P2ASSERTLINE(285, (int)mIsCard >= 0);
	if (++mCurrentCommandIdx == 5) {
		mCurrentCommandIdx = 0;
	}

	if (isErrorOccured()) {
		resetCommandFlagQueue();
	}
}

/**
 * @note Address: 0x8044082C
 * @note Size: 0x2A0
 */
bool MemoryCardMgr::cardFormat(ECardSlot slot)
{
	bool result = false;
	if (OSTryLockMutex(&mOsMutex)) {
		result = true;
		if (slot == CARDSLOT_Unk0) {
			setCommand((int)1);
		} else {
			setCommand((int)2);
		}

		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}

	return result;
}

/**
 * @note Address: 0x80440ACC
 * @note Size: 0x7C
 */
void MemoryCardMgr::init()
{
	CARDInit();
	resetCommandFlagQueue();
	setInsideStatusFlag(INSIDESTATUS_Unk);
	OSInitMutex(&mOsMutex);
	OSInitCond(&mCond);
	doInit();
}

/**
 * @note Address: 0x80440B4C
 * @note Size: 0x320
 */
void MemoryCardMgr::update()
{
	if (checkStatus() != 11 && !sys->isResetActive()) {
		if (CARDProbe(0) && checkStatus() == 0) {
			bool check = false;
			if ((int)mIsCard == 0 && checkStatus() != 11) {
				check = true;
			}
			if (check) {
				MemoryCardMgrCommand cmd(3);
				setCommand(&cmd);
			}

		} else if (!CARDProbe(0) && checkStatus()) {
			bool check = false;
			if ((int)mIsCard == 0 && checkStatus() != 11) {
				check = true;
			}
			if (check) {
				MemoryCardMgrCommand cmd(4);
				setCommand(&cmd);
			}
		}
	}
}

/**
 * @note Address: 0x80440E6C
 * @note Size: 0x150
 */
bool MemoryCardMgr::cardMount()
{
	MemoryCardMgrCommand command(3);
	return setCommand(&command);
}

/**
 * @note Address: 0x80440FBC
 * @note Size: 0x104
 */
u32 MemoryCardMgr::checkStatus()
{
	u32 result = 11;
	if (OSTryLockMutex(&mOsMutex)) {
		switch (mStatusFlag) {
		case INSIDESTATUS_Unk:
			result = 1;
			break;
		case INSIDESTATUS_Unk1:
		case INSIDESTATUS_Unk2:
			result = 2;
			break;
		case INSIDESTATUS_Unk3:
			result = 0;
			break;
		case INSIDESTATUS_Unk4:
			result = 4;
			break;
		case INSIDESTATUS_Unk5:
			result = 3;
			break;
		case INSIDESTATUS_Unk6:
			result = 8;
			break;
		case INSIDESTATUS_Unk7:
			result = 9;
			break;
		case INSIDESTATUS_Unk8:
			result = 6;
			break;
		case INSIDESTATUS_Unk9:
			result = 7;
			break;
		case INSIDESTATUS_Unk10:
			result = 5;
			break;
		case INSIDESTATUS_Unk11:
			JUT_PANICLINE(447, "impossible case\n");
			result = 11;
			break;
		default:
			P2ASSERTLINE(452, false);
		}
		OSUnlockMutex(&mOsMutex);
	}
	return result;
}

/**
 * @note Address: 0x804410C0
 * @note Size: 0x250
 */
void MemoryCardMgr::cardProc(void* data)
{
	while (true) {
		OSLockMutex(&mOsMutex);
		MemoryCardMgrCommand* currCmd = getCurrentCommand();
		while (currCmd->mFlag == 0) {
			OSWaitCond(&mCond, &mOsMutex);
			currCmd = getCurrentCommand();
		}

		switch (currCmd->mFlag) {
		case 1:
			format(CARDSLOT_Unk0);
			break;
		case 2:
			format(CARDSLOT_Unk1);
			break;
		case 3:
			attach(CARDSLOT_Unk0);
			break;
		case 4:
			detach(CARDSLOT_Unk0);
			break;
		default:
			doCardProc(data, currCmd);
		}

		memset(&mCommands[mCurrentCommandIdx], 205, sizeof(MemoryCardMgrCommand));
		mCommands[mCurrentCommandIdx].mFlag = 0;
		mIsCard--;
		releaseCurrentCommand();
		OSUnlockMutex(&mOsMutex);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8049AD08@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8049AD08@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)

lbl_804410EC:
	addi     r3, r29, 0xac
	bl       OSLockMutex
	lwz      r0, 0xa4(r29)
	li       r3, 0
	slwi     r4, r0, 5
	addi     r28, r4, 4
	add      r28, r29, r28
	lwz      r6, 0(r28)
	cmpwi    r6, 0
	bne      lbl_80441124
	bne      lbl_80441128
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bne      lbl_80441128

lbl_80441124:
	li       r3, 1

lbl_80441128:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80441150
	lwz      r0, 0xa8(r29)
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xc6
	cntlzw   r0, r0
	rlwinm   r7, r0, 0x1b, 0x18, 0x1f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80441150:
	mr       r5, r28
	b        lbl_804411C4

lbl_80441158:
	addi     r3, r29, 0xc4
	addi     r4, r29, 0xac
	bl       OSWaitCond
	lwz      r0, 0xa4(r29)
	li       r3, 0
	slwi     r4, r0, 5
	addi     r28, r4, 4
	add      r28, r29, r28
	lwz      r6, 0(r28)
	cmpwi    r6, 0
	bne      lbl_80441194
	bne      lbl_80441198
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bne      lbl_80441198

lbl_80441194:
	li       r3, 1

lbl_80441198:
	clrlwi.  r0, r3, 0x18
	bne      lbl_804411C0
	lwz      r0, 0xa8(r29)
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xc6
	cntlzw   r0, r0
	rlwinm   r7, r0, 0x1b, 0x18, 0x1f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804411C0:
	mr       r5, r28

lbl_804411C4:
	lwz      r0, 0(r5)
	cmpwi    r0, 0
	beq      lbl_80441158
	cmpwi    r0, 3
	beq      lbl_80441218
	bge      lbl_804411EC
	cmpwi    r0, 1
	beq      lbl_804411F8
	bge      lbl_80441208
	b        lbl_80441238

lbl_804411EC:
	cmpwi    r0, 5
	bge      lbl_80441238
	b        lbl_80441228

lbl_804411F8:
	mr       r3, r29
	li       r4, 0
	bl       format__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441208:
	mr       r3, r29
	li       r4, 1
	bl       format__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441218:
	mr       r3, r29
	li       r4, 0
	bl       attach__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441228:
	mr       r3, r29
	li       r4, 0
	bl       detach__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441238:
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80441250:
	lwz      r0, 0xa4(r29)
	li       r4, 0xcd
	li       r5, 0x20
	slwi     r3, r0, 5
	addi     r3, r3, 4
	add      r3, r29, r3
	bl       memset
	lwz      r0, 0xa4(r29)
	li       r4, 0
	slwi     r3, r0, 5
	addi     r0, r3, 4
	stwx     r4, r29, r0
	lwz      r3, 0xa8(r29)
	addi     r0, r3, -1
	stw      r0, 0xa8(r29)
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bge      lbl_804412AC
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x11d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804412AC:
	lwz      r3, 0xa4(r29)
	addi     r0, r3, 1
	cmplwi   r0, 5
	stw      r0, 0xa4(r29)
	bne      lbl_804412C8
	li       r0, 0
	stw      r0, 0xa4(r29)

lbl_804412C8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80441304
	li       r0, 0
	stw      r0, 4(r29)
	stw      r0, 0x24(r29)
	stw      r0, 0x44(r29)
	stw      r0, 0x64(r29)
	stw      r0, 0x84(r29)
	stw      r0, 0xa4(r29)
	stw      r0, 0xa8(r29)

lbl_80441304:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex
	b        lbl_804410EC
	*/
}

/**
 * @note Address: 0x80441318
 * @note Size: 0x110
 */
bool MemoryCardMgr::isErrorOccured() { return (checkStatus() != 2); }

inline void checkSlot(MemoryCardMgr::ECardSlot cardSlot)
{
	bool check = (cardSlot == 0 || cardSlot == 1);
	P2ASSERTLINE(536, check);
}

/**
 * @note Address: 0x80441428
 * @note Size: 0x1A0
 */
bool MemoryCardMgr::fileOpen(CARDFileInfo* fileInfo, ECardSlot cardSlot, const char* fileName)
{
	checkSlot(cardSlot);
	bool result = false;
	if (isErrorNotOccured()) {
		u32 cardRes = CARDOpen(cardSlot, (char*)fileName, fileInfo);
		switch (cardRes) {
		case 0:
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
			break;
		case -3:
			setInsideStatusFlag(INSIDESTATUS_Unk);
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_Unk3);
			break;
		}
	}
	return result;
}

/**
 * @note Address: 0x804415C8
 * @note Size: 0x278
 */
bool MemoryCardMgr::writeHeader(ECardSlot cardSlot, const char* fileName)
{
	CARDFileInfo fileInfo;
	bool result = false;
	if (fileOpen(&fileInfo, cardSlot, fileName)) {
		u8* buffer = new (mHeap, -32) u8[getHeaderSize()];
		doMakeHeader(buffer);
		DCFlushRange(buffer, getHeaderSize());
		setInsideStatusFlag(INSIDESTATUS_Unk11);
		switch (CARDWrite(&fileInfo, buffer, getHeaderSize(), 0)) {
		case 0:
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_Unk10);
			break;
		}
		delete (buffer);
	}
	CARDClose(&fileInfo);
	return result;
}

/**
 * @note Address: 0x80441848
 * @note Size: 0x254
 */
bool MemoryCardMgr::writeCardStatus(ECardSlot cardSlot, const char* fileName)
{
	CARDFileInfo fileInfo;
	CARDStat cardStat;
	bool result = false;
	if (fileOpen(&fileInfo, cardSlot, fileName)) {
		if (!CARDGetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
			if (!doCheckCardStat(&cardStat)) {
				doSetCardStat(&cardStat);
				setInsideStatusFlag(INSIDESTATUS_Unk11);
				if (CARDSetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
					setInsideStatusFlag(INSIDESTATUS_Unk10);
				} else {
					setInsideStatusFlag(INSIDESTATUS_Unk1);
					result = true;
				}
			}
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk10);
		}
	}
	CARDClose(&fileInfo);
	return result;
}

/**
 * @note Address: 0x80441A9C
 * @note Size: 0x204
 */
bool MemoryCardMgr::write(ECardSlot cardSlot, const char* fileName, u8* buffer, s32 length, s32 offset)
{
	CARDFileInfo fileInfo;
	bool result = false;
	if (fileOpen(&fileInfo, cardSlot, fileName)) {
		setInsideStatusFlag(INSIDESTATUS_Unk11);
		if (CARDWrite(&fileInfo, buffer, length, offset)) {
			setInsideStatusFlag(INSIDESTATUS_Unk10);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
		}
		CARDClose(&fileInfo);
	}
	return result;
}

/**
 * @note Address: 0x80441CA0
 * @note Size: 0xC4
 */
bool MemoryCardMgr::checkCardStat(ECardSlot cardSlot, CARDFileInfo* fileInfo)
{
	CARDStat stat;
	bool result = false;
	setInsideStatusFlag(INSIDESTATUS_Unk11);
	if (!CARDGetStatus(cardSlot, fileInfo->fileNo, &stat)) {
		bool checkCard = doCheckCardStat(&stat);
		result         = checkCard;
		if (checkCard) {
			setInsideStatusFlag(INSIDESTATUS_Unk1);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk1);
		}

	} else {
		setInsideStatusFlag(INSIDESTATUS_Unk10);
	}
	_D0 = result;

	return result;
}

/**
 * @note Address: 0x80441D64
 * @note Size: 0x280
 */
bool MemoryCardMgr::read(ECardSlot cardSlot, const char* fileName, u8* buffer, s32 length, s32 offset)
{
	CARDFileInfo fileInfo;
	CARDStat cardStat;
	bool result   = false;
	char someChar = '\0';
	if (fileOpen(&fileInfo, cardSlot, fileName)) {
		setInsideStatusFlag(INSIDESTATUS_Unk11);
		if (!CARDGetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
			if (doCheckCardStat(&cardStat)) {
				setInsideStatusFlag(INSIDESTATUS_Unk1);
			} else {
				setInsideStatusFlag(INSIDESTATUS_Unk1);
			}
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk10);
		}
		_D0 = someChar;
		setInsideStatusFlag(INSIDESTATUS_Unk11);
		if (!CARDRead(&fileInfo, buffer, length, offset) == 0) {
			setInsideStatusFlag(INSIDESTATUS_Unk10);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
		}
		CARDClose(&fileInfo);
	}
	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  li        r10, 0x1
	  lis       r9, 0x804A
	  stw       r0, 0xB4(r1)
	  stmw      r22, 0x88(r1)
	  mr        r26, r4
	  subfic    r0, r26, 0x1
	  mr        r25, r3
	  orc       r4, r10, r26
	  mr        r27, r5
	  rlwinm    r0,r0,31,1,31
	  mr        r28, r6
	  sub       r0, r4, r0
	  mr        r29, r7
	  rlwinm.   r0,r0,1,31,31
	  mr        r30, r8
	  subi      r24, r9, 0x52F8
	  li        r31, 0
	  bne-      .loc_0x54
	  li        r10, 0

	.loc_0x54:
	  rlwinm.   r0,r10,0,24,31
	  bne-      .loc_0x70
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x218
	  crclr     6, 0x6
	  bl        -0x417790

	.loc_0x70:
	  addi      r3, r25, 0xAC
	  li        r23, 0
	  li        r22, 0xB
	  bl        -0x352064
	  cmpwi     r3, 0
	  beq-      .loc_0x134
	  lwz       r0, 0xD4(r25)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x118
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3120
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r22, 0x1
	  b         .loc_0x12C
	  li        r22, 0x2
	  b         .loc_0x12C
	  li        r22, 0
	  b         .loc_0x12C
	  li        r22, 0x4
	  b         .loc_0x12C
	  li        r22, 0x3
	  b         .loc_0x12C
	  li        r22, 0x8
	  b         .loc_0x12C
	  li        r22, 0x9
	  b         .loc_0x12C
	  li        r22, 0x6
	  b         .loc_0x12C
	  li        r22, 0x7
	  b         .loc_0x12C
	  li        r22, 0x5
	  b         .loc_0x12C
	  addi      r3, r24, 0
	  addi      r5, r24, 0x5C
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x417830
	  li        r22, 0xB
	  b         .loc_0x12C

	.loc_0x118:
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x41784C

	.loc_0x12C:
	  addi      r3, r25, 0xAC
	  bl        -0x352250

	.loc_0x134:
	  cmplwi    r22, 0x2
	  bne-      .loc_0x194
	  mr        r3, r26
	  mr        r4, r27
	  addi      r5, r1, 0x8
	  bl        -0x36856C
	  cmpwi     r3, 0
	  beq-      .loc_0x164
	  bge-      .loc_0x188
	  cmpwi     r3, -0x3
	  beq-      .loc_0x178
	  b         .loc_0x188

	.loc_0x164:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x970
	  li        r23, 0x1
	  b         .loc_0x194

	.loc_0x178:
	  mr        r3, r25
	  li        r4, 0
	  bl        0x95C
	  b         .loc_0x194

	.loc_0x188:
	  mr        r3, r25
	  li        r4, 0x3
	  bl        0x94C

	.loc_0x194:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x268
	  mr        r3, r25
	  li        r23, 0
	  li        r4, 0xB
	  bl        0x934
	  lwz       r4, 0xC(r1)
	  mr        r3, r26
	  addi      r5, r1, 0x1C
	  bl        -0x3676EC
	  cmpwi     r3, 0
	  bne-      .loc_0x208
	  mr        r3, r25
	  addi      r4, r1, 0x1C
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r23, r3
	  beq-      .loc_0x1F8
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x8EC
	  b         .loc_0x214

	.loc_0x1F8:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x8DC
	  b         .loc_0x214

	.loc_0x208:
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0x8CC

	.loc_0x214:
	  stb       r23, 0xD0(r25)
	  mr        r3, r25
	  li        r4, 0xB
	  bl        0x8BC
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  bl        -0x367D24
	  cmpwi     r3, 0
	  beq-      .loc_0x250
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0x894
	  b         .loc_0x260

	.loc_0x250:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x884
	  li        r31, 0x1

	.loc_0x260:
	  addi      r3, r1, 0x8
	  bl        -0x36856C

	.loc_0x268:
	  mr        r3, r31
	  lmw       r22, 0x88(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/**
 * @note Address: 0x80441FE4
 * @note Size: 0x88
 */
void MemoryCardMgr::format(ECardSlot cardSlot)
{
	CARDMount(cardSlot, &sCardWorkArea, nullptr);
	setInsideStatusFlag(INSIDESTATUS_Unk11);
	switch (CARDFormat(cardSlot)) {
	case 0:
		setInsideStatusFlag(INSIDESTATUS_Unk2);
		break;
	default:
		setInsideStatusFlag(INSIDESTATUS_Unk10);
	}
	return;
}

/**
 * @note Address: 0x8044206C
 * @note Size: 0x98
 */
void MemoryCardMgr::attach(ECardSlot cardSlot)
{
	s32 memSize;
	s32 sectorSize;
	if (CARDProbeEx(cardSlot, &memSize, &sectorSize) == -2) {
		setInsideStatusFlag(INSIDESTATUS_Unk8);
	} else if (sectorSize != 0x2000) {
		setInsideStatusFlag(INSIDESTATUS_Unk9);
	} else {
		if (mount(cardSlot)) {
			setInsideStatusFlag(INSIDESTATUS_Unk2);
		}
	}
}

/**
 * @note Address: 0x80442104
 * @note Size: 0x3C
 */
void MemoryCardMgr::detach(ECardSlot cardSlot)
{
	CARDUnmount(cardSlot);
	resetInsideStatusFlag(INSIDESTATUS_Unk);
}

/**
 * @note Address: 0x80442140
 * @note Size: 0x168
 */
bool MemoryCardMgr::mount(ECardSlot cardSlot)
{
	bool result;
	CARDMount(cardSlot, &sCardWorkArea, nullptr);
	switch (cardSlot) {
	case CARD_RESULT_FATAL_ERROR:
	case CARD_RESULT_IOERROR:
		setInsideStatusFlag(INSIDESTATUS_Unk10);
		result = false;
		break;
	case CARD_RESULT_NOCARD:
		setInsideStatusFlag(INSIDESTATUS_Unk);
		result = false;
		break;
	case CARD_RESULT_BROKEN:
	case CARD_RESULT_READY:
		switch (CARDCheck(cardSlot)) {
		case CARD_RESULT_READY:
			result = true;
			break;
		case CARD_RESULT_IOERROR:
			setInsideStatusFlag(INSIDESTATUS_Unk10);
			result = false;
			break;
		case CARD_RESULT_FATAL_ERROR:
			setInsideStatusFlag(INSIDESTATUS_Unk5);
			if (result == false) {
				CARDUnmount(cardSlot);
			}
			break;
		}
		break;
	case CARD_RESULT_ENCODING:
		setInsideStatusFlag(INSIDESTATUS_Unk4);
		result = false;
		break;
	default:
		P2ASSERTLINE(989, false);
	}
	return result;
	/*switch (cardSlot) {
	case CARD_RESULT_IOERROR:
	    setInsideStatusFlag(INSIDESTATUS_Unk10);
	    return false;
	case CARD_RESULT_FATAL_ERROR:
	    setInsideStatusFlag(INSIDESTATUS_Unk4);
	    return false;
	case CARD_RESULT_READY:
	    switch (CARDCheck(cardSlot)) {
	        case CARD_RESULT_IOERROR:
	        case CARD_RESULT_FATAL_ERROR:
	            setInsideStatusFlag(INSIDESTATUS_Unk10);
	            return false;
	        case CARD_RESULT_READY:
	            setInsideStatusFlag(INSIDESTATUS_Unk5);
	        default:
	            P2ASSERTLINE(989, false);
	    }
	case CARD_RESULT_ENCODING:
	    setInsideStatusFlag(INSIDESTATUS_Unk4);
	    return false;
	case CARD_RESULT_BROKEN:
	    P2ASSERTLINE(989, false);
	    break;
	}
	CARDUnmount(cardSlot);
	*/
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, sCardWorkArea@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, sCardWorkArea@l
	li       r5, 0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       CARDMount
	cmpwi    r3, -5
	beq      lbl_804421C4
	bge      lbl_804421AC
	cmpwi    r3, -13
	beq      lbl_80442258
	bge      lbl_804421A0
	cmpwi    r3, -128
	beq      lbl_804421C4
	b        lbl_8044226C

lbl_804421A0:
	cmpwi    r3, -6
	bge      lbl_804421EC
	b        lbl_8044226C

lbl_804421AC:
	cmpwi    r3, 0
	beq      lbl_804421EC
	bge      lbl_8044226C
	cmpwi    r3, -3
	beq      lbl_804421D8
	b        lbl_8044226C

lbl_804421C4:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_804421D8:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_804421EC:
	mr       r3, r31
	bl       CARDCheck
	cmpwi    r3, -5
	beq      lbl_80442220
	bge      lbl_8044220C
	cmpwi    r3, -128
	beq      lbl_80442220
	b        lbl_80442234

lbl_8044220C:
	cmpwi    r3, 0
	beq      lbl_80442218
	b        lbl_80442234

lbl_80442218:
	li       r30, 1
	b        lbl_80442244

lbl_80442220:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442244

lbl_80442234:
	mr       r3, r29
	li       r4, 5
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0

lbl_80442244:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80442288
	mr       r3, r31
	bl       CARDUnmount
	b        lbl_80442288

lbl_80442258:
	mr       r3, r29
	li       r4, 4
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_8044226C:
	lis      r3, lbl_8049AD08@ha
	lis      r5, lbl_8049AD40@ha
	addi     r3, r3, lbl_8049AD08@l
	li       r4, 0x3dd
	addi     r5, r5, lbl_8049AD40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442288:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x804422A8
 * @note Size: 0xFC
 */
s32 MemoryCardMgr::checkSpace(ECardSlot cardSlot, int requiredSpace)
{
	s32 cardRes;
	s32 freeBytes;
	s32 freeFiles;
	cardRes = CARDFreeBlocks(cardSlot, &freeBytes, &freeFiles);
	P2ASSERTLINE(1011, cardRes != -1);
	switch (cardRes) {
	case CARD_RESULT_FATAL_ERROR:
		setInsideStatusFlag(INSIDESTATUS_Unk10);
		break;
	case CARD_RESULT_NOCARD:
		setInsideStatusFlag(INSIDESTATUS_Unk);
		break;
	case CARD_RESULT_BROKEN:
		setInsideStatusFlag(INSIDESTATUS_Unk5);
		break;
	}
	if (freeBytes < requiredSpace) {
		return 1;
	}
	if (freeFiles < 1) {
		return 2;
	}
	return 0;
}

/**
 * @note Address: 0x804423A4
 * @note Size: 0x104
 */
void MemoryCardMgr::doMakeHeader(u8* header)
{
	OSCalendarTime calendar;
	snprintf((char*)header + 0x1c00, 0x20, "ピクミン２　セーブデータ ");
	OSTime osTime = OSGetTime();
	OSTicksToCalendarTime(osTime, &calendar);
	snprintf((char*)header + 0x1c20, 0x20, "%04d/%02d/%02d %02d:%02d:%02d", calendar.year, calendar.mon + 1, calendar.mday, calendar.hour,
	         calendar.min, calendar.sec);
	memset(header, 0, 0xe00);
	header[0xc00] = -0x10;
	header[0xc01] = -1;
	for (int i = 0; i < 3; i++) {
		memset(header + (0xe00 + (0x400 * i)), i, 0x400);
	}
	header[0x1a00] = -1;
	header[0x1a01] = '\x0f';
	header[0x1a02] = -1;
	header[0x1a03] = 0;
	header[0x1a04] = -1;
	header[0x1a05] = -0x10;
	return;
}

/**
 * @note Address: 0x804424A8
 * @note Size: 0xE0
 */
bool MemoryCardMgr::doCheckCardStat(CARDStat* cardStat)
{
	if (cardStat->iconAddr != 0 || cardStat->commentAddr != 0x1c00 || CARDGetBannerFormat(cardStat) != BannerColorCI8
	    || CARDGetIconAnim(cardStat) != 0 || CARDGetIconFormat(cardStat, 0) != 1 || CARDGetIconFormat(cardStat, 1) != 1
	    || CARDGetIconFormat(cardStat, 2) != 1 || CARDGetIconFormat(cardStat, 3) != 0 || CARDGetIconFormat(cardStat, 4) != 0
	    || CARDGetIconFormat(cardStat, 5) != 0 || CARDGetIconFormat(cardStat, 6) != 0 || CARDGetIconFormat(cardStat, 7) != 0
	    || CARDGetIconSpeed(cardStat, 0) != 3 || CARDGetIconSpeed(cardStat, 1) != 3 || CARDGetIconSpeed(cardStat, 2) != 3
	    || CARDGetIconSpeed(cardStat, 3) != 0 || CARDGetIconSpeed(cardStat, 4) != 0 || CARDGetIconSpeed(cardStat, 5) != 0
	    || CARDGetIconSpeed(cardStat, 6) != 0 || CARDGetIconSpeed(cardStat, 7) != 0) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x80442588
 * @note Size: 0x108
 */
void MemoryCardMgr::doSetCardStat(CARDStat* cardStat)
{
	CARDSetIconAddress(cardStat, 0);
	CARDSetCommentAddress(cardStat, 0x1c00);
	CARDSetBannerFormat(cardStat, BannerColorCI8);
	CARDSetIconAnim(cardStat, 0);

	CARDSetIconFormat(cardStat, 0, 1);
	CARDSetIconFormat(cardStat, 1, 1);
	CARDSetIconFormat(cardStat, 2, 1);
	CARDSetIconFormat(cardStat, 3, 0);
	CARDSetIconFormat(cardStat, 4, 0);
	CARDSetIconFormat(cardStat, 5, 0);
	CARDSetIconFormat(cardStat, 6, 0);
	CARDSetIconFormat(cardStat, 7, 0);

	CARDSetIconSpeed(cardStat, 0, 3);
	CARDSetIconSpeed(cardStat, 1, 3);
	CARDSetIconSpeed(cardStat, 2, 3);
	CARDSetIconSpeed(cardStat, 3, 0);
	CARDSetIconSpeed(cardStat, 4, 0);
	CARDSetIconSpeed(cardStat, 5, 0);
	CARDSetIconSpeed(cardStat, 6, 0);
	CARDSetIconSpeed(cardStat, 7, 0);
}

/**
 * @note Address: 0x80442690
 * @note Size: 0xF8
 */
u32 MemoryCardMgr::calcCheckSum(void* dataptr, u32 length)
{
	u16* p;
	int i;

	length /= sizeof(u16);
	u16 checksumInv = 0;
	u16 checksum    = 0;

	for (i = 0, p = (u16*)dataptr; i < length; i++, p++) {
		checksum += *p;
		checksumInv += ~*p;
	}
	return checksum << 0x10 | checksumInv;
}

/**
 * @note Address: 0x80442788
 * @note Size: 0xB8
 */
bool MemoryCardMgr::readCardSerialNo(u64* serial, ECardSlot cardSlot)
{
	bool result = false;
	s32 cardRes = CARDGetSerialNo(cardSlot, serial);
	switch (cardRes) {
	case -2:
		break;
	case 0:
		result = true;
		break;
	case -0x80:
		setInsideStatusFlag(INSIDESTATUS_Unk10);
		break;
	case -3:
		setInsideStatusFlag(INSIDESTATUS_Unk);
		break;
	case -1:
		P2ASSERTLINE(1234, false);
		break;
	}
	return result;
}

/**
 * @note Address: 0x80442840
 * @note Size: 0x14
 */
void MemoryCardMgr::setInsideStatusFlag(EInsideStatusFlag status)
{
	if (mStatusFlag == 10) {
		return;
	}
	mStatusFlag = status;
}

/**
 * @note Address: 0x80442854
 * @note Size: 0x8
 */
void MemoryCardMgr::resetInsideStatusFlag(EInsideStatusFlag flag) { mStatusFlag = flag; }
