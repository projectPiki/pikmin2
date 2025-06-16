#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

typedef void (*MTRCallbackType)(int);

static MTRCallbackType MTRCallback;
static void (*DBGCallback)(u32, OSContext*);

static u32 SendMailData;
static s32 RecvDataLeng;

static u8* pEXIInputFlag;
static u8 EXIInputFlag;

static u8 SendCount = 0x80;

#define IS_TRUE(x)         ((x) != FALSE)
#define IS_FALSE(x)        !IS_TRUE(x)
#define ROUND_UP(x, align) (((x) + (align) - 1) & (-(align)))

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void DBGEXIInit()
{
	__OSMaskInterrupts(0x18000);
	__EXIRegs[10] = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
static u32 DBGEXISelect(u32 v)
{
	u32 regs = __EXIRegs[10];
	regs &= 0x405;
	regs |= 0x80 | (v << 4);
	__EXIRegs[10] = regs;
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
BOOL DBGEXIDeselect(void)
{
	__EXIRegs[10] &= 0x405;
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
static BOOL DBGEXISync()
{
	while (__EXIRegs[13] & 1)
		;

	return TRUE;
}

/**
 * @note Address: 0x800D0550
 * @note Size: 0x298
 */
static BOOL DBGEXIImm(void* buffer, s32 bytecounter, u32 write)
{
	u8* tempPointer;
	u32 writeOutValue;
	int i;

	if (write) {
		tempPointer   = buffer;
		writeOutValue = 0;
		for (i = 0; i < bytecounter; i++) {
			u8* temp = ((u8*)buffer) + i;
			writeOutValue |= *temp << ((3 - i) << 3);
		}
		__EXIRegs[14] = writeOutValue;
	}

	__EXIRegs[13] = 1 | write << 2 | (bytecounter - 1) << 4;
	DBGEXISync();

	if (!write) {
		writeOutValue = __EXIRegs[14];
		tempPointer   = buffer;
		for (i = 0; i < bytecounter; i++) {
			*tempPointer++ = writeOutValue >> ((3 - i) << 3);
		}
	}

	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void DBGEXIClearInterrupts(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void DBGCheckID(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
static BOOL DBGWriteMailbox(u32 p1)
{
	u32 cmd = 0xc0000000;
	u32 v;
	u32 base   = p1;
	BOOL total = FALSE;

	DBGEXISelect(4);
	v = (base & 0x1fffffff) | (cmd);
	total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 1));
	total |= IS_FALSE(DBGEXISync());
	total |= IS_FALSE(DBGEXIDeselect());

	return IS_FALSE(total);
}

/**
 * @note Address: 0x800D04A4
 * @note Size: 0xAC
 */
#pragma dont_inline on
static BOOL DBGReadMailbox(u32* p1)
{
	BOOL total = FALSE;
	u32 v;

	DBGEXISelect(4);

	v = 0x60000000;
	total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIDeselect());

	return IS_FALSE(total);
}
#pragma dont_inline reset

/**
 * @note Address: 0x800D03C8
 * @note Size: 0xDC
 */
static BOOL DBGRead(u32 count, u32* buffer, s32 param3)
{
	BOOL total = FALSE;
	u32* buf_p = (u32*)buffer;
	u32 v1;
	u32 v;

	DBGEXISelect(4);

	v1 = (count & 0x1fffc) << 8 | 0x20000000;
	total |= IS_FALSE(DBGEXIImm(&v1, sizeof(v1), 1));
	total |= IS_FALSE(DBGEXISync());

	while (param3) {
		total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 0));
		total |= IS_FALSE(DBGEXISync());

		*buf_p++ = v;

		param3 -= 4;
		if (param3 < 0) {
			param3 = 0;
		}
	}

	total |= IS_FALSE(DBGEXIDeselect());
	return IS_FALSE(total);
}

/**
 * @note Address: 0x800D02EC
 * @note Size: 0xDC
 */
static BOOL DBGWrite(u32 count, void* buffer, s32 param3)
{
	BOOL total = FALSE;
	u32* buf_p = (u32*)buffer;
	u32 v1;
	u32 v;

	DBGEXISelect(4);

	v1 = (count & 0x1fffc) << 8 | 0xa0000000;
	total |= IS_FALSE(DBGEXIImm(&v1, sizeof(v1), 1));
	total |= IS_FALSE(DBGEXISync());

	while (param3 != 0) {
		v = *buf_p++;

		total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 1));
		total |= IS_FALSE(DBGEXISync());

		param3 -= 4;
		if (param3 < 0) {
			param3 = 0;
		}
	}

	total |= IS_FALSE(DBGEXIDeselect());
	return IS_FALSE(total);
}

/**
 * @note Address: 0x800D0240
 * @note Size: 0xAC
 */
inline static BOOL _DBGReadStatus(u32* p1)
{
	BOOL total = FALSE;
	u32 v;

	DBGEXISelect(4);

	v = 1 << 30;
	total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIDeselect());

	return IS_FALSE(total);
}
#pragma dont_inline on
static BOOL DBGReadStatus(u32* p1)
{
	return _DBGReadStatus(p1);
}
#pragma dont_inline reset

/**
 * @note Address: 0x800D0204
 * @note Size: 0x3C
 */

static void MWCallback(u32 a, OSContext* b)
{
	EXIInputFlag = TRUE;
	if (MTRCallback) {
		MTRCallback(0);
	}
}

/**
 * @note Address: 0x800D01C4
 * @note Size: 0x40
 */
static void DBGHandler(s16 a, OSContext* b)
{
	*__PIRegs = 0x1000;
	if (DBGCallback) {
		DBGCallback(a, b);
	}
}

/**
 * @note Address: 0x800D014C
 * @note Size: 0x78
 */
void DBInitComm(u8** a, MTRCallbackType b)
{
	BOOL interrupts = OSDisableInterrupts();
	{
		pEXIInputFlag = (u8*)EXIInputFlag;
		pEXIInputFlag = &EXIInputFlag;

		*a = pEXIInputFlag;

		MTRCallback = b;

		DBGEXIInit();
	}
	OSRestoreInterrupts(interrupts);
}

/**
 * @note Address: 0x800D00F8
 * @note Size: 0x54
 */
void DBInitInterrupts(void)
{
	__OSMaskInterrupts(0x18000);
	__OSMaskInterrupts(0x40);
	DBGCallback = &MWCallback;
	__OSSetInterruptHandler(0x19, DBGHandler);
	__OSUnmaskInterrupts(0x40);
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
static void CheckMailBox(void)
{
	u32 v;
	DBGReadStatus(&v);
	if (v & 1) {
		DBGReadMailbox(&v);
		v &= 0x1fffffff;

		if ((v & 0x1f000000) == 0x1f000000) {
			SendMailData = v;
			RecvDataLeng = v & 0x7fff;
			EXIInputFlag = 1;
		}
	}
}

/**
 * @note Address: 0x800D005C
 * @note Size: 0x9C
 */
u32 DBQueryData(void)
{
	EXIInputFlag = 0;
	if (!RecvDataLeng) {
		BOOL interrupts = OSDisableInterrupts();
		CheckMailBox();
		OSRestoreInterrupts(interrupts);
	}
	return RecvDataLeng;
}

/**
 * @note Address: 0x800CFFD0
 * @note Size: 0x8C
 */
BOOL DBRead(u32* buffer, s32 count)
{
	u32 interrupts = OSDisableInterrupts();
	u32 v          = SendMailData & 0x10000 ? 0x1000 : 0;

	DBGRead(v + 0x1e000, buffer, ROUND_UP(count, 4));

	RecvDataLeng = 0;
	EXIInputFlag = 0;

	OSRestoreInterrupts(interrupts);

	return 0;
}

/**
 * @note Address: 0x800CFD70
 * @note Size: 0x260
 */
BOOL DBWrite(void* src, u32 size)
{
	u32 v;
	u32 busyFlag;
	BOOL interrupts = OSDisableInterrupts();

	do {
		_DBGReadStatus(&busyFlag);
	} while (busyFlag & 2);

	SendCount++;
	v = ((SendCount & 1) ? 0x1000 : 0);

	while (!DBGWrite(v | 0x1c000, src, ROUND_UP(size, 4)))
		;

	do {
		_DBGReadStatus(&busyFlag);
	} while (busyFlag & 2);

	v = SendCount;
	while (!DBGWriteMailbox((0x1f000000) | v << 0x10 | size))
		;

	do {
		while (!_DBGReadStatus(&busyFlag))
			;
	} while (busyFlag & 2);

	OSRestoreInterrupts(interrupts);

	return 0;
}

/**
 * @note Address: 0x800CFD6C
 * @note Size: 0x4
 */
void DBOpen(void)
{
	return;
}

/**
 * @note Address: 0x800CFD68
 * @note Size: 0x4
 */
void DBClose(void)
{
	return;
}
