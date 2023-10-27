#include "MemoryCardMgr.h"
#include "System.h"
#include "types.h"

static CARDMemoryCard sCardWorkArea;

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
// void MemoryCardMgr::setTmpHeap(JKRHeap*)
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	804405F0
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80440690
 * Size:	000024
 */
void MemoryCardMgr::resetCommandFlagQueue()
{
	mCommands[0]._00   = 0;
	mCommands[1]._00   = 0;
	mCommands[2]._00   = 0;
	mCommands[3]._00   = 0;
	mCommands[4]._00   = 0;
	mCurrentCommandIdx = 0;
	mIsCard            = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
MemoryCardMgrCommand* MemoryCardMgr::getCurrentCommand()
{
	// this is placeholder for what needs to be here. assert is correct.
	// should get used in cardProc()
	bool check                = false;
	MemoryCardMgrCommand* cmd = &mCommands[mCurrentCommandIdx];
	if (cmd->_00 || (!cmd->_00 && (int)mIsCard == 0)) {
		check = true;
	}
	JUT_ASSERTLINE(198, check, "command queue is broken.flag:%d num:%d", cmd->_00, mIsCard == 0);
	return cmd;
}

/*
 * --INFO--
 * Address:	804406B4
 * Size:	000040
 */
void MemoryCardMgr::setCommand(int param_1)
{
	MemoryCardMgrCommand command(param_1);
	setCommand(&command);
}

/*
 * --INFO--
 * Address:	804406F4
 * Size:	000138
 */
bool MemoryCardMgr::setCommand(MemoryCardMgrCommandBase* command)
{
	bool check = true;
	P2ASSERTLINE(225, (command->getClassSize() <= 0x20));
	OSLockMutex(&mOsMutex);
	u32 i = 0;
	while (true) {
		if (!mCommands[i]._00) {
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
			int* dumbPtr = (int*)&((MemoryCardMgrCommand*)(this))[j];
			if (!dumbPtr[1]) {
				memcpy((void*)(&dumbPtr[1]), (void*)command, 0x20);
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void MemoryCardMgr::releaseCurrentCommand()
{
	P2ASSERTLINE(285, (int)mIsCard >= 0);
	if (++mCurrentCommandIdx == 5) {
		mCurrentCommandIdx = 0;
	}

	if (isErrorOccured()) {
		mCommands[0]._00   = 0;
		mCommands[1]._00   = 0;
		mCommands[2]._00   = 0;
		mCommands[3]._00   = 0;
		mCommands[4]._00   = 0;
		mCurrentCommandIdx = 0;
		mIsCard            = 0;
	}
}

/*
 * --INFO--
 * Address:	8044082C
 * Size:	0002A0
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

/*
 * --INFO--
 * Address:	80440ACC
 * Size:	00007C
 */
void MemoryCardMgr::init()
{
	CARDInit();
	mCommands[0]._00   = 0;
	mCommands[1]._00   = 0;
	mCommands[2]._00   = 0;
	mCommands[3]._00   = 0;
	mCommands[4]._00   = 0;
	mCurrentCommandIdx = 0;
	mIsCard            = 0;
	setInsideStatusFlag(INSIDESTATUS_Unk);
	OSInitMutex(&mOsMutex);
	OSInitCond(&mCond);
	doInit();
}

/*
 * --INFO--
 * Address:	80440B4C
 * Size:	000320
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

/*
 * --INFO--
 * Address:	80440E6C
 * Size:	000150
 */
bool MemoryCardMgr::cardMount()
{
	MemoryCardMgrCommand command(3);
	return setCommand(&command);
}

/*
 * --INFO--
 * Address:	80440FBC
 * Size:	000104
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

/*
 * --INFO--
 * Address:	804410C0
 * Size:	000250
 */
void MemoryCardMgr::cardProc(void* data)
{
	while (true) {
		OSLockMutex(&mOsMutex);
		MemoryCardMgrCommand* currCmd = getCurrentCommand();
		while (currCmd->_00 == 0) {
			OSWaitCond(&mCond, &mOsMutex);
			currCmd = getCurrentCommand();
		}

		switch (currCmd->_00) {
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
		mCommands[mCurrentCommandIdx]._00 = 0;
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

/*
 * --INFO--
 * Address:	80441318
 * Size:	000110
 */
bool MemoryCardMgr::isErrorOccured() { return (checkStatus() != 2); }

/*
 * --INFO--
 * Address:	80441428
 * Size:	0001A0
 */
bool MemoryCardMgr::fileOpen(CARDFileInfo* fileInfo, ECardSlot cardSlot, const char* fileName)
{
	bool result = false;
	u32 cardRes = 11;
	if ((int)((~cardSlot | 1) - (1 - cardSlot >> 1)) < 0) {
		P2ASSERTLINE(536, false);
	} else {
		cardRes = checkStatus();
		if (cardRes == 2) {
			switch (CARDOpen(cardSlot, (char*)fileName, fileInfo)) {
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
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r8, 0x1
	  lis       r7, 0x804A
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r5
	  subfic    r0, r31, 0x1
	  mr        r29, r3
	  orc       r5, r8, r31
	  mr        r30, r4
	  rlwinm    r0,r0,31,1,31
	  mr        r25, r6
	  sub       r0, r5, r0
	  subi      r28, r7, 0x52F8
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0x48
	  li        r8, 0

	.loc_0x48:
	  rlwinm.   r0,r8,0,24,31
	  bne-      .loc_0x64
	  addi      r3, r28, 0
	  addi      r5, r28, 0x38
	  li        r4, 0x218
	  crclr     6, 0x6
	  bl        -0x416E48

	.loc_0x64:
	  addi      r3, r29, 0xAC
	  li        r26, 0
	  li        r27, 0xB
	  bl        -0x35171C
	  cmpwi     r3, 0
	  beq-      .loc_0x128
	  lwz       r0, 0xD4(r29)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x10C
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x31E0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r27, 0x1
	  b         .loc_0x120
	  li        r27, 0x2
	  b         .loc_0x120
	  li        r27, 0
	  b         .loc_0x120
	  li        r27, 0x4
	  b         .loc_0x120
	  li        r27, 0x3
	  b         .loc_0x120
	  li        r27, 0x8
	  b         .loc_0x120
	  li        r27, 0x9
	  b         .loc_0x120
	  li        r27, 0x6
	  b         .loc_0x120
	  li        r27, 0x7
	  b         .loc_0x120
	  li        r27, 0x5
	  b         .loc_0x120
	  addi      r3, r28, 0
	  addi      r5, r28, 0x5C
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x416EE8
	  li        r27, 0xB
	  b         .loc_0x120

	.loc_0x10C:
	  addi      r3, r28, 0
	  addi      r5, r28, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x416F04

	.loc_0x120:
	  addi      r3, r29, 0xAC
	  bl        -0x351908

	.loc_0x128:
	  cmplwi    r27, 0x2
	  bne-      .loc_0x188
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  bl        -0x367C24
	  cmpwi     r3, 0
	  beq-      .loc_0x158
	  bge-      .loc_0x17C
	  cmpwi     r3, -0x3
	  beq-      .loc_0x16C
	  b         .loc_0x17C

	.loc_0x158:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x12B8
	  li        r26, 0x1
	  b         .loc_0x188

	.loc_0x16C:
	  mr        r3, r29
	  li        r4, 0
	  bl        0x12A4
	  b         .loc_0x188

	.loc_0x17C:
	  mr        r3, r29
	  li        r4, 0x3
	  bl        0x1294

	.loc_0x188:
	  mr        r3, r26
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804415C8
 * Size:	000278
 */
bool MemoryCardMgr::writeHeader(ECardSlot cardSlot, const char* fileName)
{
	CARDFileInfo fileInfo;
	bool result = false;
	bool result2;
	if (cardSlot < 0) {
		P2ASSERTLINE(536, false);
	} else {
		if (checkStatus() == 2) {
			u32 cardRes = CARDOpen(cardSlot, (char*)fileName, &fileInfo);
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
		if (result) {
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r7, 1
	lis      r6, lbl_8049AD08@ha
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	subfic   r0, r29, 1
	mr       r28, r3
	orc      r4, r7, r29
	mr       r30, r5
	srwi     r0, r0, 1
	addi     r27, r6, lbl_8049AD08@l
	subf     r0, r0, r4
	li       r31, 0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80441610
	li       r7, 0

lbl_80441610:
	clrlwi.  r0, r7, 0x18
	bne      lbl_8044162C
	addi     r3, r27, 0
	addi     r5, r27, 0x38
	li       r4, 0x218
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044162C:
	addi     r3, r28, 0xac
	li       r26, 0
	li       r25, 0xb
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_804416F0
	lwz      r0, 0xd4(r28)
	cmplwi   r0, 0xb
	bgt      lbl_804416D4
	lis      r3, lbl_804ECE50@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECE50@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80441668:
	li       r25, 1
	b        lbl_804416E8

lbl_80441670:

lbl_80441670:
	li       r25, 2
	b        lbl_804416E8

lbl_80441678:
	li       r25, 0
	b        lbl_804416E8

lbl_80441680:
	li       r25, 4
	b        lbl_804416E8

lbl_80441688:
	li       r25, 3
	b        lbl_804416E8

lbl_80441690:
	li       r25, 8
	b        lbl_804416E8

lbl_80441698:
	li       r25, 9
	b        lbl_804416E8

lbl_804416A0:
	li       r25, 6
	b        lbl_804416E8

lbl_804416A8:
	li       r25, 7
	b        lbl_804416E8

lbl_804416B0:
	li       r25, 5
	b        lbl_804416E8

lbl_804416B8:
	addi     r3, r27, 0
	addi     r5, r27, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r25, 0xb
	b        lbl_804416E8

lbl_804416D4:
	addi     r3, r27, 0
	addi     r5, r27, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804416E8:
	addi     r3, r28, 0xac
	bl       OSUnlockMutex

lbl_804416F0:
	cmplwi   r25, 2
	bne      lbl_80441750
	mr       r3, r29
	mr       r4, r30
	addi     r5, r1, 8
	bl       CARDOpen
	cmpwi    r3, 0
	beq      lbl_80441720
	bge      lbl_80441744
	cmpwi    r3, -3
	beq      lbl_80441734
	b        lbl_80441744

lbl_80441720:
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r26, 1
	b        lbl_80441750

lbl_80441734:
	mr       r3, r28
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441750

lbl_80441744:
	mr       r3, r28
	li       r4, 3
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441750:
	clrlwi.  r0, r26, 0x18
	beq      lbl_80441820
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xcc(r28)
	li       r5, -32
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	mr       r25, r0
	mr       r4, r25
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r25
	bl       DCFlushRange
	mr       r3, r28
	li       r4, 0xb
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r25
	addi     r3, r1, 8
	li       r6, 0
	bl       CARDWrite
	cmpwi    r3, 0
	beq      lbl_804417F8
	b        lbl_8044180C

lbl_804417F8:
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r31, 1
	b        lbl_80441818

lbl_8044180C:
	mr       r3, r28
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441818:
	mr       r3, r25
	bl       __dl__FPv

lbl_80441820:
	addi     r3, r1, 8
	bl       CARDClose
	mr       r3, r31
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

inline void checkSlot(MemoryCardMgr::ECardSlot cardSlot)
{
	bool check = (cardSlot == 0 || cardSlot == 1);
	P2ASSERTLINE(536, check);
}

/*
 * --INFO--
 * Address:	80441848
 * Size:	000254
 */
bool MemoryCardMgr::writeCardStatus(ECardSlot cardSlot, const char* fileName)
{
	CARDFileInfo fileInfo;
	CARDStat cardStat;
	bool result = 0;
	bool result2;
	checkSlot(cardSlot);
	result2 = false;
	if (checkStatus() == 2) {
		u32 cardRes = CARDOpen(cardSlot, (char*)fileName, &fileInfo);
		switch (cardRes) {
		case CARD_RESULT_READY:
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
			break;
		case CARD_RESULT_NOCARD:
			setInsideStatusFlag(INSIDESTATUS_Unk);
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_Unk3);
			break;
		}
		if (result) {
			if (!CARDGetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
				if (!doCheckCardStat(&cardStat)) {
					doSetCardStat(&cardStat);
					setInsideStatusFlag(INSIDESTATUS_Unk11);
					if (CARDSetStatus(cardSlot, fileInfo.fileNo, &cardStat)) {
						setInsideStatusFlag(INSIDESTATUS_Unk10);
					} else {
						setInsideStatusFlag(INSIDESTATUS_Unk1);
						result2 = true;
					}
				}
			} else {
				setInsideStatusFlag(INSIDESTATUS_Unk10);
			}
		}
		CARDClose(&fileInfo);
		return result2;
	}
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	li       r7, 1
	lis      r6, lbl_8049AD08@ha
	stw      r0, 0xb4(r1)
	stmw     r25, 0x94(r1)
	mr       r30, r4
	subfic   r0, r30, 1
	mr       r29, r3
	orc      r4, r7, r30
	mr       r31, r5
	srwi     r0, r0, 1
	addi     r28, r6, lbl_8049AD08@l
	subf     r0, r0, r4
	li       r25, 0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80441890
	li       r7, 0

lbl_80441890:
	clrlwi.  r0, r7, 0x18
	bne      lbl_804418AC
	addi     r3, r28, 0
	addi     r5, r28, 0x38
	li       r4, 0x218
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804418AC:
	addi     r3, r29, 0xac
	li       r27, 0
	li       r26, 0xb
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_80441970
	lwz      r0, 0xd4(r29)
	cmplwi   r0, 0xb
	bgt      lbl_80441954
	lis      r3, lbl_804ECE80@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECE80@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_804418E8:
	li       r26, 1
	b        lbl_80441968

lbl_804418F0:

lbl_804418F0:
	li       r26, 2
	b        lbl_80441968

lbl_804418F8:
	li       r26, 0
	b        lbl_80441968

lbl_80441900:
	li       r26, 4
	b        lbl_80441968

lbl_80441908:
	li       r26, 3
	b        lbl_80441968

lbl_80441910:
	li       r26, 8
	b        lbl_80441968

lbl_80441918:
	li       r26, 9
	b        lbl_80441968

lbl_80441920:
	li       r26, 6
	b        lbl_80441968

lbl_80441928:
	li       r26, 7
	b        lbl_80441968

lbl_80441930:
	li       r26, 5
	b        lbl_80441968

lbl_80441938:
	addi     r3, r28, 0
	addi     r5, r28, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r26, 0xb
	b        lbl_80441968

lbl_80441954:
	addi     r3, r28, 0
	addi     r5, r28, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80441968:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex

lbl_80441970:
	cmplwi   r26, 2
	bne      lbl_804419D0
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 8
	bl       CARDOpen
	cmpwi    r3, 0
	beq      lbl_804419A0
	bge      lbl_804419C4
	cmpwi    r3, -3
	beq      lbl_804419B4
	b        lbl_804419C4

lbl_804419A0:
	mr       r3, r29
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r27, 1
	b        lbl_804419D0

lbl_804419B4:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_804419D0

lbl_804419C4:
	mr       r3, r29
	li       r4, 3
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_804419D0:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80441A7C
	lwz      r4, 0xc(r1)
	mr       r3, r30
	addi     r5, r1, 0x1c
	bl       CARDGetStatus
	cmpwi    r3, 0
	bne      lbl_80441A70
	mr       r3, r29
	addi     r4, r1, 0x1c
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80441A7C
	mr       r3, r29
	addi     r4, r1, 0x1c
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 0xb
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	lwz      r4, 0xc(r1)
	mr       r3, r30
	addi     r5, r1, 0x1c
	bl       CARDSetStatus
	cmpwi    r3, 0
	beq      lbl_80441A5C
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441A7C

lbl_80441A5C:
	mr       r3, r29
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r25, 1
	b        lbl_80441A7C

lbl_80441A70:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441A7C:
	addi     r3, r1, 8
	bl       CARDClose
	mr       r3, r25
	lmw      r25, 0x94(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80441A9C
 * Size:	000204
 */
bool MemoryCardMgr::write(ECardSlot cardSlot, const char* fileName, u8* buffer, s32 length, s32 offset)
{
	CARDFileInfo fileInfo;
	checkSlot(cardSlot);
	bool result = false;
	if (checkStatus() == 2) {
		u32 cardRes = CARDOpen(cardSlot, (char*)fileName, &fileInfo);
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
	if (result) {
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
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r10, 0x1
	  lis       r9, 0x804A
	  stw       r0, 0x54(r1)
	  stmw      r22, 0x28(r1)
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
	  bl        -0x4174C8

	.loc_0x70:
	  addi      r3, r25, 0xAC
	  li        r23, 0
	  li        r22, 0xB
	  bl        -0x351D9C
	  cmpwi     r3, 0
	  beq-      .loc_0x134
	  lwz       r0, 0xD4(r25)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x118
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3150
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
	  bl        -0x417568
	  li        r22, 0xB
	  b         .loc_0x12C

	.loc_0x118:
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x417584

	.loc_0x12C:
	  addi      r3, r25, 0xAC
	  bl        -0x351F88

	.loc_0x134:
	  cmplwi    r22, 0x2
	  bne-      .loc_0x194
	  mr        r3, r26
	  mr        r4, r27
	  addi      r5, r1, 0x8
	  bl        -0x3682A4
	  cmpwi     r3, 0
	  beq-      .loc_0x164
	  bge-      .loc_0x188
	  cmpwi     r3, -0x3
	  beq-      .loc_0x178
	  b         .loc_0x188

	.loc_0x164:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0xC38
	  li        r23, 0x1
	  b         .loc_0x194

	.loc_0x178:
	  mr        r3, r25
	  li        r4, 0
	  bl        0xC24
	  b         .loc_0x194

	.loc_0x188:
	  mr        r3, r25
	  li        r4, 0x3
	  bl        0xC14

	.loc_0x194:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x1EC
	  mr        r3, r25
	  li        r4, 0xB
	  bl        0xC00
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  bl        -0x367664
	  cmpwi     r3, 0
	  beq-      .loc_0x1D4
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0xBD8
	  b         .loc_0x1E4

	.loc_0x1D4:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0xBC8
	  li        r31, 0x1

	.loc_0x1E4:
	  addi      r3, r1, 0x8
	  bl        -0x368228

	.loc_0x1EC:
	  mr        r3, r31
	  lmw       r22, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80441CA0
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	80441D64
 * Size:	000280
 */
bool MemoryCardMgr::read(ECardSlot cardSlot, const char* fileName, u8* buffer, s32 length, s32 offset)
{
	CARDFileInfo fileInfo;
	CARDStat cardStat;
	bool result   = false;
	char someChar = '\0';
	checkSlot(cardSlot);
	if (checkStatus() == 2) {
		switch (CARDOpen(cardSlot, (char*)fileName, &fileInfo)) {
		case CARD_RESULT_READY:
			setInsideStatusFlag(INSIDESTATUS_Unk1);
			result = true;
			break;
		case CARD_RESULT_NOCARD:
			setInsideStatusFlag(INSIDESTATUS_Unk);
			break;
		default:
			setInsideStatusFlag(INSIDESTATUS_Unk3);
			break;
		}
		if (result) {
			result = false;
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
	}
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

/*
 * --INFO--
 * Address:	80441FE4
 * Size:	000088
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

/*
 * --INFO--
 * Address:	8044206C
 * Size:	000098
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

/*
 * --INFO--
 * Address:	80442104
 * Size:	00003C
 */
void MemoryCardMgr::detach(ECardSlot cardSlot)
{
	CARDUnmount(cardSlot);
	resetInsideStatusFlag(INSIDESTATUS_Unk);
}

/*
 * --INFO--
 * Address:	80442140
 * Size:	000168
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

/*
 * --INFO--
 * Address:	804422A8
 * Size:	0000FC
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
		return true;
	}

	// wrong comparison/maybe wrong return type?
	return -(freeFiles > 1) & freeBytes;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	mr       r0, r4
	addi     r4, r1, 0xc
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	addi     r5, r1, 8
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r0
	bl       CARDFreeBlocks
	mr       r31, r3
	cmpwi    r31, -1
	bne      lbl_80442304
	lis      r3, lbl_8049AD08@ha
	lis      r5, lbl_8049AD40@ha
	addi     r3, r3, lbl_8049AD08@l
	li       r4, 0x3f3
	addi     r5, r5, lbl_8049AD40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442304:
	cmpwi    r31, -6
	beq      lbl_80442348
	bge      lbl_8044231C
	cmpwi    r31, -128
	beq      lbl_80442328
	b        lbl_80442354

lbl_8044231C:
	cmpwi    r31, -3
	beq      lbl_80442338
	b        lbl_80442354

lbl_80442328:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80442354

lbl_80442338:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80442354

lbl_80442348:
	mr       r3, r29
	li       r4, 5
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80442354:
	lwz      r0, 0xc(r1)
	cmpw     r0, r30
	bge      lbl_80442368
	li       r3, 1
	b        lbl_80442388

lbl_80442368:
	lwz      r5, 8(r1)
	li       r3, 1
	srwi     r4, r3, 0x1f
	li       r0, 2
	subfc    r3, r3, r5
	srwi     r3, r5, 0x1f
	subfe    r3, r3, r4
	and      r3, r0, r3

lbl_80442388:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804423A4
 * Size:	000104
 */
void MemoryCardMgr::doMakeHeader(u8* param_1)
{
	OSCalendarTime calendar;
	snprintf((char*)param_1 + 0x1c00, 0x20, "ピクミン２　セーブデータ");
	OSTime osTime = OSGetTime();
	OSTicksToCalendarTime(osTime, &calendar);
	snprintf((char*)param_1 + 0x1c20, 0x20, "%04d/%02d/%02d %02d:%02d:%02d", calendar.year, calendar.mon + 1, calendar.mday, calendar.hour,
	         calendar.min, calendar.sec);
	memset(param_1, 0, 0xe00);
	param_1[0xc00] = -0x10;
	param_1[0xc01] = -1;
	for (int i = 0; i < 3; i++) {
		memset(param_1 + (0xe00 + (0x400 * i)), i, 0x400);
	}
	param_1[0x1a00] = -1;
	param_1[0x1a01] = '\x0f';
	param_1[0x1a02] = -1;
	param_1[0x1a03] = '\0';
	param_1[0x1a04] = -1;
	param_1[0x1a05] = -0x10;
	return;
}

/*
 * --INFO--
 * Address:	804424A8
 * Size:	0000E0
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

/*
 * --INFO--
 * Address:	80442588
 * Size:	000108
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

/*
 * --INFO--
 * Address:	80442690
 * Size:	0000F8
 */
u32 MemoryCardMgr::calcCheckSum(void* dataptr, u32 key)
{

	/*
	srwi     r5, r5, 1
	li       r3, 0
	cmplwi   r5, 0
	li       r7, 0
	ble      lbl_80442780
	rlwinm.  r0, r5, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80442760

lbl_804426B0:
	lhz      r6, 0(r4)
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 2(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 4(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 6(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 8(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xa(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xc(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xe(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	addi     r4, r4, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	bdnz     lbl_804426B0
	andi.    r5, r5, 7
	beq      lbl_80442780

lbl_80442760:
	mtctr    r5

lbl_80442764:
	lhz      r6, 0(r4)
	addi     r4, r4, 2
	nor      r0, r6, r6
	add      r7, r7, r6
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	bdnz     lbl_80442764

lbl_80442780:
	rlwimi   r3, r7, 0x10, 0, 0xf
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442788
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	80442840
 * Size:	000014
 */
void MemoryCardMgr::setInsideStatusFlag(EInsideStatusFlag status)
{
	if (mStatusFlag == 10) {
		return;
	}
	mStatusFlag = status;
}

/*
 * --INFO--
 * Address:	80442854
 * Size:	000008
 */
void MemoryCardMgr::resetInsideStatusFlag(EInsideStatusFlag flag) { mStatusFlag = flag; }
