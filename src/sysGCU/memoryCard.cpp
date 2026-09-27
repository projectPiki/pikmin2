#include "MemoryCardMgr.h"
#include "System.h"
#include "types.h"

static CARDMemoryCard ATTRIBUTE_ALIGN(32) sCardWorkArea;

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
	mStatusFlag        = INSIDESTATUS_NoCard;
	mHeap              = JKRHeap::getSystemHeap();
	resetCommandFlagQueue();
}

/**
 * @note Address: 0x80440690
 * @note Size: 0x24
 */
void MemoryCardMgr::resetCommandFlagQueue()
{
	mCommands[0].mFlag = COMMAND_Default;
	mCommands[1].mFlag = COMMAND_Default;
	mCommands[2].mFlag = COMMAND_Default;
	mCommands[3].mFlag = COMMAND_Default;
	mCommands[4].mFlag = COMMAND_Default;
	mCurrentCommandIdx = 0;
	mIsCard            = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
MemoryCardMgrCommand* MemoryCardMgr::getCurrentCommand()
{
	MemoryCardMgrCommand* cmd = &mCommands[mCurrentCommandIdx];
	bool check                = cmd->mFlag || (!cmd->mFlag && (int)mIsCard == 0);
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
			MemoryCardMgrCommand* cmd = getCommandQueue();
			if (cmd[j].mFlag == COMMAND_Default) {
				memcpy(&getCommandQueue()[j], (void*)command, sizeof(MemoryCardMgrCommand));
				mIsCard++;
				P2ASSERTLINE(254, (u32)mIsCard <= 5);
				break;
			}
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
		if (slot == CARDSLOT_SlotA) {
			setCommand(COMMAND_FormatSlotA);
		} else {
			setCommand(COMMAND_FormatSlotB);
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
	setInsideStatusFlag(INSIDESTATUS_NoCard);
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
	if (checkStatus() != MCS_Invalid && !sys->isResetActive()) {
		if (CARDProbe(0) && checkStatus() == MCS_NoCard) {

			if (isSaveInvalid()) {
				MemoryCardMgrCommand cmd(COMMAND_MountSlotA);
				setCommand(&cmd);
			}

		} else if (!CARDProbe(0) && checkStatus()) {
			if (isSaveInvalid()) {
				MemoryCardMgrCommand cmd(COMMAND_UnmountSlotA);
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
	MemoryCardMgrCommand command(COMMAND_MountSlotA);
	return setCommand(&command);
}

/**
 * @note Address: 0x80440FBC
 * @note Size: 0x104
 */
u32 MemoryCardMgr::checkStatus()
{
	u32 result = MCS_Invalid;
	if (OSTryLockMutex(&mOsMutex)) {
		switch (mStatusFlag) {
		case INSIDESTATUS_FileOpenError:
			result = MCS_FileOpenError;
			break;
		case INSIDESTATUS_Ready:
		case INSIDESTATUS_Mounted:
			result = MCS_Ready;
			break;
		case INSIDESTATUS_NoCard:
			result = MCS_NoCard;
			break;
		case INSIDESTATUS_Encoding:
			result = MCS_Encoding;
			break;
		case INSIDESTATUS_Broken:
			result = MCS_Broken;
			break;
		case INSIDESTATUS_NoFileSpace:
			result = MCS_NoFileSpace;
			break;
		case INSIDESTATUS_NoFileEntry:
			result = MCS_NoFileEntry;
			break;
		case INSIDESTATUS_WrongDevice:
			result = MCS_WrongDevice;
			break;
		case INSIDESTATUS_WrongSector:
			result = MCS_WrongSector;
			break;
		case INSIDESTATUS_ErrorOccurred:
			result = MCS_IOError;
			break;
		case INSIDESTATUS_Default:
			JUT_PANICLINE(447, "impossible case\n");
			result = MCS_Invalid;
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
		while (currCmd->mFlag == COMMAND_Default) {
			OSWaitCond(&mCond, &mOsMutex);
			currCmd = getCurrentCommand();
		}

		switch (currCmd->mFlag) {
		case COMMAND_FormatSlotA:
			format(CARDSLOT_SlotA);
			break;
		case COMMAND_FormatSlotB:
			format(CARDSLOT_SlotB);
			break;
		case COMMAND_MountSlotA:
			attach(CARDSLOT_SlotA);
			break;
		case COMMAND_UnmountSlotA:
			detach(CARDSLOT_SlotA);
			break;
		default:
			doCardProc(data, currCmd);
		}

		memset(&mCommands[mCurrentCommandIdx], 205, sizeof(MemoryCardMgrCommand));
		mCommands[mCurrentCommandIdx].mFlag = COMMAND_Default;
		mIsCard--;
		releaseCurrentCommand();
		OSUnlockMutex(&mOsMutex);
	}
}

/**
 * @note Address: 0x80441318
 * @note Size: 0x110
 */
bool MemoryCardMgr::isErrorOccured()
{
	return (checkStatus() != MCS_Ready);
}

/**
 * @note Address: 0x80441428
 * @note Size: 0x1A0
 */
bool MemoryCardMgr::fileOpen(CARDFileInfo* fileInfo, ECardSlot cardSlot, const char* fileName)
{
	bool check = (cardSlot == 0 || cardSlot == 1);
	P2ASSERTLINE(536, check);
	bool result = false;
	if (checkStatus() == MCS_Ready) {
		// int cardRes = CARDOpen(cardSlot, (char*)fileName, fileInfo);
		switch (CARDOpen(cardSlot, (char*)fileName, fileInfo)) {
		case CARD_RESULT_READY:
			setInsideStatusFlag(INSIDESTATUS_Ready);
			result = true;
			break;
		case CARD_RESULT_NOCARD:
			setInsideStatusFlag(INSIDESTATUS_NoCard);
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_FileOpenError);
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
		setInsideStatusFlag(INSIDESTATUS_Default);
		switch (CARDWrite(&fileInfo, buffer, getHeaderSize(), 0)) {
		case CARD_RESULT_READY:
			setInsideStatusFlag(INSIDESTATUS_Ready);
			result = true;
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
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
				setInsideStatusFlag(INSIDESTATUS_Default);
				if (CARDSetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
					setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
				} else {
					setInsideStatusFlag(INSIDESTATUS_Ready);
					result = true;
				}
			}
		} else {
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
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
		setInsideStatusFlag(INSIDESTATUS_Default);
		if (CARDWrite(&fileInfo, buffer, length, offset)) {
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Ready);
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
	setInsideStatusFlag(INSIDESTATUS_Default);
	if (!CARDGetStatus(cardSlot, fileInfo->fileNo, &stat)) {
		bool checkCard = doCheckCardStat(&stat);
		result         = checkCard;
		if (checkCard) {
			setInsideStatusFlag(INSIDESTATUS_Ready);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Ready);
		}

	} else {
		setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
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
	bool result = false;
	if (fileOpen(&fileInfo, cardSlot, fileName)) {
		checkCardStat(cardSlot, &fileInfo);
		setInsideStatusFlag(INSIDESTATUS_Default);
		if (!CARDRead(&fileInfo, buffer, length, offset) == 0) {
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
		} else {
			setInsideStatusFlag(INSIDESTATUS_Ready);
			result = true;
		}
		CARDClose(&fileInfo);
	}
	return result;
}

/**
 * @note Address: 0x80441FE4
 * @note Size: 0x88
 */
void MemoryCardMgr::format(ECardSlot cardSlot)
{
	CARDMount(cardSlot, &sCardWorkArea, nullptr);
	setInsideStatusFlag(INSIDESTATUS_Default);
	switch (CARDFormat(cardSlot)) {
	case CARD_RESULT_READY:
		setInsideStatusFlag(INSIDESTATUS_Mounted);
		break;
	default:
		setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
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
	if (CARDProbeEx(cardSlot, &memSize, &sectorSize) == CARD_RESULT_WRONGDEVICE) {
		setInsideStatusFlag(INSIDESTATUS_WrongDevice);
	} else if (sectorSize != 0x2000) {
		setInsideStatusFlag(INSIDESTATUS_WrongSector);
	} else {
		if (mount(cardSlot)) {
			setInsideStatusFlag(INSIDESTATUS_Mounted);
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
	resetInsideStatusFlag(INSIDESTATUS_NoCard);
}

/**
 * @note Address: 0x80442140
 * @note Size: 0x168
 */
bool MemoryCardMgr::mount(ECardSlot cardSlot)
{
	bool result = false;
	switch (CARDMount(cardSlot, &sCardWorkArea, nullptr)) {
	case CARD_RESULT_FATAL_ERROR:
	case CARD_RESULT_IOERROR:
		setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
		result = false;
		break;
	case CARD_RESULT_NOCARD:
		setInsideStatusFlag(INSIDESTATUS_NoCard);
		result = false;
		break;
	case CARD_RESULT_BROKEN:
	case CARD_RESULT_READY:
		switch (CARDCheck(cardSlot)) {
		case CARD_RESULT_READY:
			result = true;
			break;
		case CARD_RESULT_IOERROR:
		case CARD_RESULT_FATAL_ERROR:
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
			result = false;
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_Broken);
			result = false;
			break;
		}
		if (result == false) {
			CARDUnmount(cardSlot);
		}
		break;
	case CARD_RESULT_ENCODING:
		setInsideStatusFlag(INSIDESTATUS_Encoding);
		result = false;
		break;
	default:
		P2ASSERTLINE(989, false);
	}
	return result;
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
		setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
		break;
	case CARD_RESULT_NOCARD:
		setInsideStatusFlag(INSIDESTATUS_NoCard);
		break;
	case CARD_RESULT_BROKEN:
		setInsideStatusFlag(INSIDESTATUS_Broken);
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
	case CARD_RESULT_WRONGDEVICE:
		break;
	case CARD_RESULT_READY:
		result = true;
		break;
	case CARD_RESULT_FATAL_ERROR:
		setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
		break;
	case CARD_RESULT_NOCARD:
		setInsideStatusFlag(INSIDESTATUS_NoCard);
		break;
	case CARD_RESULT_BUSY:
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
	if (mStatusFlag == INSIDESTATUS_ErrorOccurred) {
		return;
	}
	mStatusFlag = status;
}

/**
 * @note Address: 0x80442854
 * @note Size: 0x8
 */
void MemoryCardMgr::resetInsideStatusFlag(EInsideStatusFlag flag)
{
	mStatusFlag = flag;
}
