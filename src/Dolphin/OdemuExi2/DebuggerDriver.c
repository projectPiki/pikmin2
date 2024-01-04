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
#define ROUND_UP(x, align) (((x) + (align)-1) & (-(align)))

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
inline void DBGEXIInit()
{
	__OSMaskInterrupts(0x18000);
	__EXIRegs[10] = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
static inline u32 DBGEXISelect(u32 v)
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
inline BOOL DBGEXIDeselect(void)
{
	__EXIRegs[10] &= 0x405;
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
static inline BOOL DBGEXISync()
{
	u32 signal;
	do {
		signal = __EXIRegs[13];
	} while (signal & 1);

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
inline void DBGEXIClearInterrupts(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
inline void DBGCheckID(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
static inline BOOL DBGWriteMailbox(u32 p1)
{
	u32 v;
	BOOL total = FALSE;
	DBGEXISelect(4);
	v = (p1 & 0x1fffffff) | (0xc0000000);
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

	while (param3) {
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

	v = 0x40000000;
	total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
	total |= IS_FALSE(DBGEXISync());

	total |= IS_FALSE(DBGEXIDeselect());

	return IS_FALSE(total);
}
#pragma dont_inline on
static BOOL DBGReadStatus(u32* p1) { return _DBGReadStatus(p1); }
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
static inline void CheckMailBox(void)
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
	/*
	.loc_0x0:
	 mflr      r0
	 li        r3, 0
	 stw       r0, 0x4(r1)
	 stwu      r1, -0x18(r1)
	 stw       r31, 0x14(r1)
	 lwz       r0, -0x7314(r13)
	 stb       r3, -0x730C(r13)
	 cmpwi     r0, 0
	 bne-      .loc_0x84
	 bl        0x1EBB8
	 addi      r31, r3, 0
	 addi      r3, r1, 0x8
	 bl        0x1B4
	 lwz       r0, 0x8(r1)
	 rlwinm.   r0,r0,0,31,31
	 beq-      .loc_0x7C
	 addi      r3, r1, 0x8
	 bl        0x404
	 lwz       r0, 0x8(r1)
	 rlwinm    r0,r0,0,3,31
	 stw       r0, 0x8(r1)
	 lwz       r4, 0x8(r1)
	 rlwinm    r3,r4,0,3,7
	 subis     r0, r3, 0x1F00
	 cmplwi    r0, 0
	 bne-      .loc_0x7C
	 rlwinm    r3,r4,0,17,31
	 stw       r4, -0x7318(r13)
	 li        r0, 0x1
	 stw       r3, -0x7314(r13)
	 stb       r0, -0x730C(r13)

	.loc_0x7C:
	 mr        r3, r31
	 bl        0x1EB84

	.loc_0x84:
	 lwz       r3, -0x7314(r13)
	 lwz       r0, 0x1C(r1)
	 lwz       r31, 0x14(r1)
	 addi      r1, r1, 0x18
	 mtlr      r0
	 blr
	*/
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
	/*
	.loc_0x0:
	 mflr      r0
	 stw       r0, 0x4(r1)
	 stwu      r1, -0x20(r1)
	 stw       r31, 0x1C(r1)
	 stw       r30, 0x18(r1)
	 addi      r30, r4, 0
	 stw       r29, 0x14(r1)
	 addi      r29, r3, 0
	 bl        0x1EC48
	 lwz       r0, -0x7318(r13)
	 addi      r31, r3, 0
	 rlwinm.   r0,r0,0,15,15
	 beq-      .loc_0x3C
	 li        r3, 0x1000
	 b         .loc_0x40

	.loc_0x3C:
	 li        r3, 0

	.loc_0x40:
	 addis     r3, r3, 0x2
	 addi      r0, r30, 0x3
	 addi      r4, r29, 0
	 rlwinm    r5,r0,0,0,29
	 subi      r3, r3, 0x2000
	 bl        0x3A4
	 li        r0, 0
	 stw       r0, -0x7314(r13)
	 mr        r3, r31
	 stb       r0, -0x730C(r13)
	 bl        0x1EC28
	 lwz       r0, 0x24(r1)
	 li        r3, 0
	 lwz       r31, 0x1C(r1)
	 lwz       r30, 0x18(r1)
	 lwz       r29, 0x14(r1)
	 addi      r1, r1, 0x20
	 mtlr      r0
	 blr
	*/
}

/**
 * @note Address: 0x800CFD70
 * @note Size: 0x260
 */
BOOL DBWrite(const void* src, u32 size)
{
	u32 v2;
	u32 busyFlag;
	u32 newSize;
	u32 interrupts;
	interrupts = OSDisableInterrupts();

	do {
		_DBGReadStatus(&busyFlag);
	} while (busyFlag & 2);

	SendCount++;
	v2 = ((SendCount & 1) ? 0x1000 : 0);

	while (!DBGWrite(v2 | 0x1c000, src, ROUND_UP(size, 4)))
		;

	do {
		_DBGReadStatus(&busyFlag);
	} while (busyFlag & 2);

	v2 = SendCount;
	while (!DBGWriteMailbox((0x1f000000) | v2 << 0x10 | size))
		;

	do {
		while (!_DBGReadStatus(&busyFlag))
			;
	} while (busyFlag & 2);

	OSRestoreInterrupts(interrupts);

	return 0;
	/*
	.loc_0x0:
	 mflr      r0
	 stw       r0, 0x4(r1)
	 stwu      r1, -0x78(r1)
	 stmw      r24, 0x58(r1)
	 addi      r26, r3, 0
	 addi      r27, r4, 0
	 bl        0x1EEB0
	 addi      r28, r3, 0
	 lis       r25, 0xCC00
	 lis       r31, 0x4000

	.loc_0x28:
	 lwz       r0, 0x6828(r25)
	 addi      r30, r25, 0x6800
	 addi      r3, r1, 0x50
	 andi.     r0, r0, 0x405
	 li        r4, 0x2
	 li        r5, 0x1
	 ori       r0, r0, 0xC0
	 stwu      r0, 0x28(r30)
	 stw       r31, 0x50(r1)
	 bl        0x794
	 cntlzw    r0, r3
	 rlwinm    r24,r0,27,5,31

	.loc_0x58:
	 addi      r29, r25, 0x6800
	 lwzu      r0, 0x34(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x58
	 addi      r3, r1, 0x54
	 li        r4, 0x4
	 li        r5, 0
	 bl        0x76C

	.loc_0x78:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x78
	 lwz       r0, 0x0(r30)
	 andi.     r0, r0, 0x405
	 stw       r0, 0x0(r30)
	 lwz       r0, 0x54(r1)
	 rlwinm.   r0,r0,0,30,30
	 bne+      .loc_0x28
	 lbz       r3, -0x7DA0(r13)
	 addi      r0, r3, 0x1
	 stb       r0, -0x7DA0(r13)
	 lbz       r0, -0x7DA0(r13)
	 rlwinm.   r0,r0,0,31,31
	 beq-      .loc_0xBC
	 li        r3, 0x1000
	 b         .loc_0xC0

	.loc_0xBC:
	 li        r3, 0

	.loc_0xC0:
	 addi      r0, r27, 0x3
	 oris      r25, r3, 0x1
	 rlwinm    r24,r0,0,0,29
	 ori       r25, r25, 0xC000

	.loc_0xD0:
	 addi      r3, r25, 0
	 addi      r4, r26, 0
	 addi      r5, r24, 0
	 bl        0x4A0
	 cmpwi     r3, 0
	 beq+      .loc_0xD0
	 lis       r31, 0x4000

	.loc_0xEC:
	 lwz       r0, 0x0(r30)
	 addi      r3, r1, 0x4C
	 li        r4, 0x2
	 andi.     r0, r0, 0x405
	 li        r5, 0x1
	 ori       r0, r0, 0xC0
	 stw       r0, 0x0(r30)
	 stw       r31, 0x4C(r1)
	 bl        0x6D4
	 cntlzw    r0, r3
	 rlwinm    r26,r0,27,5,31

	.loc_0x118:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x118
	 addi      r3, r1, 0x54
	 li        r4, 0x4
	 li        r5, 0
	 bl        0x6B0

	.loc_0x134:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x134
	 lwz       r0, 0x0(r30)
	 andi.     r0, r0, 0x405
	 stw       r0, 0x0(r30)
	 lwz       r0, 0x54(r1)
	 rlwinm.   r0,r0,0,30,30
	 bne+      .loc_0xEC
	 lbz       r0, -0x7DA0(r13)
	 rlwinm    r0,r0,16,0,15
	 oris      r0, r0, 0x1F00
	 or        r0, r0, r27
	 rlwinm    r0,r0,0,3,31
	 oris      r24, r0, 0xC000

	.loc_0x170:
	 lwz       r0, 0x0(r30)
	 addi      r3, r1, 0x44
	 li        r4, 0x4
	 andi.     r0, r0, 0x405
	 li        r5, 0x1
	 ori       r0, r0, 0xC0
	 stw       r0, 0x0(r30)
	 stw       r24, 0x44(r1)
	 bl        0x650
	 cntlzw    r0, r3
	 rlwinm    r3,r0,27,5,31

	.loc_0x19C:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x19C
	 lwz       r0, 0x0(r30)
	 andi.     r0, r0, 0x405
	 cmpwi     r3, 0
	 stw       r0, 0x0(r30)
	 bne+      .loc_0x170
	 lis       r27, 0x4000

	.loc_0x1C0:
	 lwz       r0, 0x0(r30)
	 addi      r3, r1, 0x3C
	 li        r4, 0x2
	 andi.     r0, r0, 0x405
	 li        r5, 0x1
	 ori       r0, r0, 0xC0
	 stw       r0, 0x0(r30)
	 stw       r27, 0x3C(r1)
	 bl        0x600
	 cntlzw    r0, r3
	 rlwinm    r26,r0,27,5,31

	.loc_0x1EC:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x1EC
	 addi      r3, r1, 0x54
	 li        r4, 0x4
	 li        r5, 0
	 bl        0x5DC
	 cntlzw    r0, r3
	 rlwinm    r0,r0,27,5,31
	 or        r3, r26, r0

	.loc_0x214:
	 lwz       r0, 0x0(r29)
	 rlwinm.   r0,r0,0,31,31
	 bne+      .loc_0x214
	 lwz       r0, 0x0(r30)
	 andi.     r0, r0, 0x405
	 cmpwi     r3, 0
	 stw       r0, 0x0(r30)
	 bne+      .loc_0x1C0
	 lwz       r0, 0x54(r1)
	 rlwinm.   r0,r0,0,30,30
	 bne+      .loc_0x1C0
	 mr        r3, r28
	 bl        0x1ECAC
	 lmw       r24, 0x58(r1)
	 li        r3, 0
	 lwz       r0, 0x7C(r1)
	 addi      r1, r1, 0x78
	 mtlr      r0
	 blr
	*/
}

/**
 * @note Address: 0x800CFD6C
 * @note Size: 0x4
 */
void DBOpen(void) { return; }

/**
 * @note Address: 0x800CFD68
 * @note Size: 0x4
 */
void DBClose(void) { return; }
