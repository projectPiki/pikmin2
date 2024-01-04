#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/print.h"
static BOOL IsTRKConnected;
static u32 g_CurrentSequence;

/**
 * @note Address: 0x800BD54C
 * @note Size: 0xA8
 */
void OutputData(void* data, int length)
{
	// u8 byte;
	int i;
	u8* datapointer = data;

	for (i = 0; i < length; i++) {
		MWTRACE(8, "%02x ", datapointer[i]);
		if (i % 16 == 15) {
			MWTRACE(8, "\n");
		}
	}

	MWTRACE(8, "\n");
}

/**
 * @note Address: 0x800BD53C
 * @note Size: 0x10
 */
int GetTRKConnected(void) { return IsTRKConnected; }

/**
 * @note Address: 0x800BD530
 * @note Size: 0xC
 */
void SetTRKConnected(int isConnected) { IsTRKConnected = isConnected; }

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void TRKMessageIntoReply(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
DSError TRKSendACK(MessageBuffer* buffer)
{
	DSError err;
	MWTRACE(1, "SendACK : Calling MessageSend\n");
	err = TRKMessageSend(buffer);
	MWTRACE(1, "MessageSend err : %ld\n", err);
	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
DSError TRKStandardACK(MessageBuffer* buffer, MessageCommandID commandID, DSReplyError replyError)
{
	CommandReply reply;

	memset((void*)&reply, 0, sizeof(CommandReply));
	reply.commandID.b  = commandID;
	reply._00          = 0x40;
	reply.replyError.b = replyError;
	TRKWriteUARTN((void*)&reply, sizeof(CommandReply));
	return DS_NoError;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void TRKDoError(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void TRKDoUnsupported(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BD4CC
 * @note Size: 0x64
 */
DSError TRKDoConnect(MessageBuffer* buffer)
{
	IsTRKConnected = TRUE;
	return TRKStandardACK(buffer, 0x80, DSREPLY_NoError);
}

/**
 * @note Address: 0x800BD454
 * @note Size: 0x78
 */
DSError TRKDoDisconnect(MessageBuffer* buffer)
{
	TRKEvent event;

	IsTRKConnected = FALSE;
	TRKStandardACK(buffer, 0x80, DSREPLY_NoError);
	TRKConstructEvent(&event, 1);
	TRKPostEvent(&event);
	return DS_NoError;
}

/**
 * @note Address: 0x800BD3FC
 * @note Size: 0x58
 */
DSError TRKDoReset(MessageBuffer* buffer)
{
	TRKStandardACK(buffer, 0x80, DSREPLY_NoError);
	__TRK_reset();
	return DS_NoError;
}

/**
 * @note Address: 0x800BD3A4
 * @note Size: 0x58
 */
DSError TRKDoOverride(MessageBuffer* buffer)
{
	TRKStandardACK(buffer, 0x80, DSREPLY_NoError);
	__TRK_copy_vectors();
	return DS_NoError;
}

/**
 * @note Address: 0x800BD39C
 * @note Size: 0x8
 */
DSError TRKDoVersions(MessageBuffer*) { return DS_NoError; }

/**
 * @note Address: 0x800BD394
 * @note Size: 0x8
 */
DSError TRKDoSupportMask(MessageBuffer*) { return DS_NoError; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void TRKDoCPUType(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BD150
 * @note Size: 0x244
 */
inline DSReplyError TranslateDSErrorToReplyError(DSError result)
{
	switch (result) {
	case DS_CWDSException:
		return DSREPLY_CWDSException;
		break;
	case DS_InvalidMemory:
		return DSREPLY_InvalidMemoryRange;
		break;
	case DS_InvalidProcessID:
		return DSREPLY_InvalidProcessID;
		break;
	case DS_InvalidThreadID:
		return DSREPLY_InvalidThreadID;
		break;
	case DS_OSError:
		return DSREPLY_OSError;
		break;
	default:
		return DSREPLY_CWDSError;
		break;
	}
}

DSError TRKDoReadMemory(MessageBuffer* buffer)
{
	u8 buf[0x820] __attribute__((aligned(32)));
	size_t tempLength;
	DSError result;
	int options;
	size_t length;
	u32 start;

	start   = *(u32*)(buffer->data + 16);
	length  = *(u16*)(buffer->data + 12);
	options = buffer->data[8];

	MWTRACE(1, "ReadMemory (0x%02x) : 0x%08x 0x%08x 0x%08x\n", buffer->data[4], start, length, options);

	if (options & DSMSGMEMORY_Extended) {
		return TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_UnsupportedOptionError);
	}

	tempLength = length;
	
	if (options & DSMSGMEMORY_Space_data) {
		result = TRKTargetAccessARAM(buf, start, &tempLength, TRUE);
	} else {
		result = TRKTargetAccessMemory(buf, start, &tempLength, options & DSMSGMEMORY_Userview ? 0 : 1, TRUE);
	}

	TRKResetBuffer(buffer, 0);

	if (result == DS_NoError) {
		CommandReply reply;
		memset(&reply, 0, sizeof(CommandReply));
		reply.replyError.b = result;
		reply._00          = tempLength + 0x40;
		reply.commandID.b  = DSMSG_ReplyACK;
		TRKAppendBuffer(buffer, &reply, sizeof(CommandReply));

		if (options & 0x40) {
			result = TRKAppendBuffer(buffer, buf + (start & 0x1F), tempLength);
		} else {
			result = TRKAppendBuffer(buffer, buf, tempLength);
		}
	}

	if (result) {
		return TRKStandardACK(buffer, DSMSG_ReplyACK, TranslateDSErrorToReplyError(result));
	}

	return TRKSendACK(buffer);
	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x940
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r26, -0x18(r12)
	  mr        r31, r3
	  lis       r3, 0x8048
	  subi      r29, r3, 0x66F0
	  addi      r4, r29, 0x1B0
	  li        r3, 0x1
	  lwz       r26, 0x20(r31)
	  lhz       r27, 0x1C(r31)
	  lbz       r30, 0x18(r31)
	  mr        r6, r26
	  lbz       r5, 0x14(r31)
	  mr        r7, r27
	  mr        r8, r30
	  crclr     6, 0x6
	  bl        0x43A8
	  rlwinm.   r0,r30,0,30,30
	  beq-      .loc_0x98
	  addi      r3, r1, 0x64
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8104
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x12
	  stb       r3, 0x68(r1)
	  addi      r3, r1, 0x64
	  li        r4, 0x40
	  stw       r5, 0x64(r1)
	  stb       r0, 0x6C(r1)
	  bl        0x33FC
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x98:
	  rlwinm.   r28,r30,0,25,25
	  stw       r27, 0x20(r1)
	  beq-      .loc_0xC0
	  mr        r4, r26
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  li        r6, 0x1
	  bl        0x1080
	  mr        r30, r3
	  b         .loc_0xE0

	.loc_0xC0:
	  rlwinm    r0,r30,29,31,31
	  mr        r4, r26
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  xori      r6, r0, 0x1
	  li        r7, 0x1
	  bl        0x241C
	  mr        r30, r3

	.loc_0xE0:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x137C
	  cmpwi     r30, 0
	  bne-      .loc_0x168
	  addi      r3, r1, 0xA4
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB819C
	  lwz       r4, 0x20(r1)
	  li        r0, 0x80
	  stb       r30, 0xAC(r1)
	  mr        r3, r31
	  addi      r4, r4, 0x40
	  li        r5, 0x40
	  stw       r4, 0xA4(r1)
	  addi      r4, r1, 0xA4
	  stb       r0, 0xA8(r1)
	  bl        -0x1490
	  cmpwi     r28, 0
	  beq-      .loc_0x154
	  rlwinm    r0,r26,0,27,31
	  addi      r4, r1, 0x100
	  lwz       r5, 0x20(r1)
	  mr        r3, r31
	  add       r4, r4, r0
	  bl        -0x14B0
	  mr        r30, r3
	  b         .loc_0x168

	.loc_0x154:
	  lwz       r5, 0x20(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x100
	  bl        -0x14C8
	  mr        r30, r3

	.loc_0x168:
	  cmpwi     r30, 0
	  beq-      .loc_0x1F8
	  subi      r0, r30, 0x700
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x1BC
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6894
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r28, 0x15
	  b         .loc_0x1C0
	  li        r28, 0x13
	  b         .loc_0x1C0
	  li        r28, 0x21
	  b         .loc_0x1C0
	  li        r28, 0x22
	  b         .loc_0x1C0
	  li        r28, 0x20
	  b         .loc_0x1C0

	.loc_0x1BC:
	  li        r28, 0x3

	.loc_0x1C0:
	  addi      r3, r1, 0x24
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8268
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x28(r1)
	  addi      r3, r1, 0x24
	  li        r4, 0x40
	  stw       r0, 0x24(r1)
	  stb       r28, 0x2C(r1)
	  bl        0x329C
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x1F8:
	  addi      r4, r29, 0x60
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x41F4
	  mr        r3, r31
	  bl        -0x1B14
	  addi      r4, r29, 0x80
	  mr        r29, r3
	  li        r3, 0x1
	  mr        r5, r29
	  crclr     6, 0x6
	  bl        0x41D4
	  mr        r3, r29

	.loc_0x22C:
	  lwz       r10, 0x0(r1)
	  lmw       r26, -0x18(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/**
 * @note Address: 0x800BCF14
 * @note Size: 0x23C
 */
DSError TRKDoWriteMemory(MessageBuffer* b)
{
	size_t tempLength;
	int options;
	DSError result;
	size_t length;
	u8 buf[0x820] __attribute__((aligned(32)));
	u32 start;

	start   = *(u32*)(&b->data[16]);
	length  = *(u16*)(&b->data[12]);
	options = b->data[8];

	MWTRACE(1, "WriteMemory (0x%02x) : 0x%08x 0x%08x 0x%08x\n", (uint)b->data[0x4], start, length, options);

	if (options & DSMSGMEMORY_Extended) {
		return TRKStandardACK(b, DSMSG_ReplyACK, DSMSG_ReadRegisters);
	}

	tempLength = length;

	TRKSetBufferPosition(b, DSMSGMEMORY_Space_data);
	if (options & DSMSGMEMORY_Space_data) {
		TRKReadBuffer(b, buf + (start & 0x1f), tempLength);
		result = TRKTargetAccessARAM(buf, start, &tempLength, FALSE);
	} else {
		TRKReadBuffer(b, buf, tempLength);
		result = TRKTargetAccessMemory(buf, start, &tempLength, options & DSMSGMEMORY_Userview ? 0 : 1, FALSE);
	}

	TRKResetBuffer(b, 0);

	if (result == DS_NoError) {
		CommandReply reply;
		memset(&reply, 0, sizeof(CommandReply));
		reply._00          = 0x40;
		reply.commandID.b  = DSMSG_ReplyACK;
		reply.replyError.b = result;
		result             = TRKAppendBuffer(b, &reply, sizeof(CommandReply));
	}

	if (result != DS_NoError) {
		return TRKStandardACK(b, DSMSG_ReplyACK, TranslateDSErrorToReplyError(result));
	}

	return TRKSendACK(b);
	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x940
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r27, -0x14(r12)
	  mr        r27, r3
	  lis       r3, 0x8048
	  subi      r31, r3, 0x66F0
	  addi      r4, r31, 0x180
	  li        r3, 0x1
	  lwz       r28, 0x20(r27)
	  lhz       r29, 0x1C(r27)
	  lbz       r30, 0x18(r27)
	  mr        r6, r28
	  lbz       r5, 0x14(r27)
	  mr        r7, r29
	  mr        r8, r30
	  crclr     6, 0x6
	  bl        0x45E4
	  rlwinm.   r0,r30,0,30,30
	  beq-      .loc_0x98
	  addi      r3, r1, 0x64
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7EC8
	  li        r3, 0x80
	  li        r5, 0x40
	  li        r0, 0x12
	  stb       r3, 0x68(r1)
	  addi      r3, r1, 0x64
	  li        r4, 0x40
	  stw       r5, 0x64(r1)
	  stb       r0, 0x6C(r1)
	  bl        0x3638
	  li        r3, 0
	  b         .loc_0x224

	.loc_0x98:
	  stw       r29, 0x20(r1)
	  mr        r3, r27
	  li        r4, 0x40
	  bl        -0x112C
	  rlwinm.   r0,r30,0,25,25
	  beq-      .loc_0xE4
	  rlwinm    r0,r28,0,27,31
	  addi      r4, r1, 0x100
	  lwz       r5, 0x20(r1)
	  mr        r3, r27
	  add       r4, r4, r0
	  bl        -0x127C
	  mr        r4, r28
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  li        r6, 0
	  bl        0x1298
	  mr        r30, r3
	  b         .loc_0x114

	.loc_0xE4:
	  lwz       r5, 0x20(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x100
	  bl        -0x12A8
	  rlwinm    r0,r30,29,31,31
	  mr        r4, r28
	  addi      r3, r1, 0x100
	  addi      r5, r1, 0x20
	  xori      r6, r0, 0x1
	  li        r7, 0
	  bl        0x2624
	  mr        r30, r3

	.loc_0x114:
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x1174
	  cmpwi     r30, 0
	  bne-      .loc_0x160
	  addi      r3, r1, 0xA4
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB7F94
	  li        r3, 0x40
	  li        r0, 0x80
	  stw       r3, 0xA4(r1)
	  mr        r3, r27
	  addi      r4, r1, 0xA4
	  li        r5, 0x40
	  stb       r0, 0xA8(r1)
	  stb       r30, 0xAC(r1)
	  bl        -0x1284
	  mr        r30, r3

	.loc_0x160:
	  cmpwi     r30, 0
	  beq-      .loc_0x1F0
	  subi      r0, r30, 0x700
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x1B4
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6878
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r30, 0x15
	  b         .loc_0x1B8
	  li        r30, 0x13
	  b         .loc_0x1B8
	  li        r30, 0x21
	  b         .loc_0x1B8
	  li        r30, 0x22
	  b         .loc_0x1B8
	  li        r30, 0x20
	  b         .loc_0x1B8

	.loc_0x1B4:
	  li        r30, 0x3

	.loc_0x1B8:
	  addi      r3, r1, 0x24
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8024
	  li        r3, 0x80
	  li        r0, 0x40
	  stb       r3, 0x28(r1)
	  addi      r3, r1, 0x24
	  li        r4, 0x40
	  stw       r0, 0x24(r1)
	  stb       r30, 0x2C(r1)
	  bl        0x34E0
	  li        r3, 0
	  b         .loc_0x224

	.loc_0x1F0:
	  addi      r4, r31, 0x60
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x4438
	  mr        r3, r27
	  bl        -0x18D0
	  addi      r4, r31, 0x80
	  mr        r31, r3
	  li        r3, 0x1
	  mr        r5, r31
	  crclr     6, 0x6
	  bl        0x4418
	  mr        r3, r31

	.loc_0x224:
	  lwz       r10, 0x0(r1)
	  lmw       r27, -0x14(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/**
 * @note Address: 0x800BCC34
 * @note Size: 0x2E0
 */
DSError TRKDoReadRegisters(MessageBuffer* b)
{
	DSError error;
	DSReplyError replyError;
	u8 options;
	u16 firstRegister;
	u16 lastRegister;
	size_t registersLength;
	CommandReply local_50;

	options       = b->data[8];
	firstRegister = *(u16*)(b->data + 12);
	lastRegister  = *(u16*)(b->data + 16);

	if (firstRegister > lastRegister) {
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_InvalidRegisterRange);
	}

	local_50.commandID.b = DSMSG_ReplyACK;
	local_50._00         = 0x468;

	TRKResetBuffer(b, 0);
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);

	TRKAppendBuffer_ui8(b, (u8*)&local_50, sizeof(CommandReply));
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);

	error = TRKTargetAccessDefault(0, 36, b, &registersLength, TRUE);
	MWTRACE(4, "DoReadRegisters : Error reading  default regs 0x%08x\n", error);
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);

	if (error == DS_NoError) {
		error = TRKTargetAccessFP(0, 33, b, &registersLength, TRUE);
	}
	MWTRACE(4, "DoReadRegisters : Error FP regs 0x%08x\n", error);
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);
	if (error == DS_NoError) {
		error = TRKTargetAccessExtended1(0, 0x60, b, &registersLength, TRUE);
	}
	MWTRACE(4, "DoReadRegisters : Error extended1 regs 0x%08x\n", error);
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);
	if (error == DS_NoError) {
		error = TRKTargetAccessExtended2(0, 31, b, &registersLength, TRUE);
	}
	MWTRACE(4, "DoReadRegisters : Error extended2 regs 0x%08x\n", error);
	MWTRACE(4, "DoReadRegisters : Buffer length 0x%08x\n", b->length);

	// Check if there was an error, and respond accordingly
	if (error != DS_NoError) {
		switch (error) {
		case DS_UnsupportedError:
			replyError = DSREPLY_UnsupportedOptionError;
			break;
		case DS_InvalidRegister:
			replyError = DSREPLY_InvalidRegisterRange;
			break;
		case DS_CWDSException:
			replyError = DSREPLY_CWDSException;
			break;
		case DS_InvalidProcessID:
			replyError = DSREPLY_InvalidProcessID;
			break;
		case DS_InvalidThreadID:
			replyError = DSREPLY_InvalidThreadID;
			break;
		case DS_OSError:
			replyError = DSREPLY_OSError;
			break;
		default:
			replyError = DSREPLY_CWDSError;
		}

		return TRKStandardACK(b, DSMSG_ReplyACK, replyError);
	} else {
		// No error, send ack
		return TRKSendACK(b);
	}
}

/**
 * @note Address: 0x800BC9A4
 * @note Size: 0x290
 */
DSError TRKDoWriteRegisters(MessageBuffer* b)
{
	DSError error;
	DSReplyError replyError;
	u8 options;
	u16 firstRegister;
	u16 lastRegister;
	size_t registersLength;
	CommandReply local_50;

	options       = b->data[8];
	firstRegister = *(u16*)(b->data + 12);
	lastRegister  = *(u16*)(b->data + 16);

	TRKSetBufferPosition(b, 0);

	if (firstRegister > lastRegister) {
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_InvalidRegisterRange);
	}

	TRKSetBufferPosition(b, 0x40);

	switch (options) {
	case DSREG_Default:
		error = TRKTargetAccessDefault(firstRegister, lastRegister, b, &registersLength, FALSE);
		break;
	case DSREG_FP:
		error = TRKTargetAccessFP(firstRegister, lastRegister, b, &registersLength, FALSE);
		break;
	case DSREG_Extended1:
		error = TRKTargetAccessExtended1(firstRegister, lastRegister, b, &registersLength, FALSE);
		break;
	case DSREG_Extended2:
		error = TRKTargetAccessExtended2(firstRegister, lastRegister, b, &registersLength, FALSE);
		break;
	default:
		// invalid option
		error = DS_UnsupportedError;
		break;
	}

	TRKResetBuffer(b, 0);

	if (error == DS_NoError) {
		memset(&local_50, 0, sizeof(CommandReply));
		local_50._00          = 0x40;
		local_50.commandID.b  = DSMSG_ReplyACK;
		local_50.replyError.b = error;
		error                 = TRKAppendBuffer(b, (u8*)&local_50, sizeof(CommandReply));
	}

	// Check if there was an error, and respond accordingly
	if (error != DS_NoError) {
		switch (error) {
		case DS_UnsupportedError:
			replyError = DSREPLY_UnsupportedOptionError;
			break;
		case DS_InvalidRegister:
			replyError = DSREPLY_InvalidRegisterRange;
			break;
		case DS_MessageBufferReadError:
			replyError = DSREPLY_PacketSizeError;
			break;
		case DS_CWDSException:
			replyError = DSREPLY_CWDSException;
			break;
		case DS_InvalidProcessID:
			replyError = DSREPLY_InvalidProcessID;
			break;
		case DS_InvalidThreadID:
			replyError = DSREPLY_InvalidThreadID;
			break;
		case DS_OSError:
			replyError = DSREPLY_OSError;
			break;
		default:
			replyError = DSREPLY_CWDSError;
		}

		return TRKStandardACK(b, DSMSG_ReplyACK, replyError);
	} else {
		// No error, send ack
		return TRKSendACK(b);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x250
 */
void TRKDoFlushCache(void)
{
	MWTRACE(1, "DoFlushCache unimplemented!!!\n");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BC8F4
 * @note Size: 0xB0
 */
DSError TRKDoContinue(MessageBuffer*)
{
	MWTRACE(1, "DoContinue\n");
	if (!TRKTargetStopped()) {
		u8 arr[0x40];
		memset(arr, 0, 0x40);

		arr[4]     = 0x80;
		*(u32*)arr = 0x40;
		arr[8]     = 0x16;

		TRKWriteUARTN(arr, 0x40);
		return DS_NoError;
	} else {
		u8 arr[0x40];
		memset(arr, 0, 0x40);

		arr[4]     = 0x80;
		*(u32*)arr = 0x40;
		arr[8]     = 0x00;

		TRKWriteUARTN(arr, 0x40);
		return TRKTargetContinue();
	}
}

/**
 * @note Address: 0x800BC6D4
 * @note Size: 0x220
 */

DSError TRKDoStep(MessageBuffer* b)
{
	DSError result;
	u8 options;
	u8 count;
	u32 rangeStart;
	u32 rangeEnd;
	u32 pc;
	TRKSetBufferPosition(b, 0);

	options    = *(u8*)&b->data[8];
	rangeStart = *(u32*)&b->data[16];
	rangeEnd   = *(u32*)&b->data[20];

	switch (options) {
	case DSSTEP_IntoCount:
	case DSSTEP_OverCount:
		count = b->data[12];
		if (count >= 1) {
			break;
		}
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_ParameterError);
	case DSSTEP_IntoRange:
	case DSSTEP_OverRange:
		pc = TRKTargetGetPC();
		if (pc >= rangeStart && pc <= rangeEnd) {
			break;
		}
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_ParameterError);
	default:
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_UnsupportedOptionError);
	}

	if (!TRKTargetStopped()) {
		return TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_NotStopped);
	} else {
		result = TRKStandardACK(b, DSMSG_ReplyACK, DSREPLY_NoError);
		switch (options) {
		case DSSTEP_IntoCount:
		case DSSTEP_OverCount:
			result = TRKTargetSingleStep(count, (options == DSSTEP_OverCount));
			break;
		case DSSTEP_IntoRange:
		case DSSTEP_OverRange:
			result = TRKTargetStepOutOfRange(rangeStart, rangeEnd, (options == DSSTEP_OverRange));
			break;
		}

		return result;
	}
}

/**
 * @note Address: 0x800BC62C
 * @note Size: 0xA8
 */
DSError TRKDoStop(MessageBuffer* b)
{
	MessageCommandID c;

	switch (TRKTargetStop()) {
	case DS_NoError:
		c = DSMSG_Ping;
		break;
	case DS_InvalidProcessID:
		c = '!';
		break;
	case DS_InvalidThreadID:
		c = '\"';
		break;
	case DS_OSError:
		c = ' ';
		break;
	default:
		c = DSMSG_Connect;
		break;
	}

	TRKStandardACK(b, DSMSG_ReplyACK, c);

	return DS_NoError;
}

/**
 * @note Address: 0x800BC584
 * @note Size: 0xA8
 */
DSError TRKDoSetOption(MessageBuffer* message)
{
	u8 enable = message->data[0xc];

	if (message->data[0x8] == '\1') {
		usr_puts_serial("\nMetroTRK Option : SerialIO - ");
		if (enable) {
			usr_puts_serial("Enable\n");
		} else {
			usr_puts_serial("Disable\n");
		}
		SetUseSerialIO(enable);
	}

	TRKStandardACK(message, DSMSG_ReplyACK, DS_NoError);

	return 0;
}
