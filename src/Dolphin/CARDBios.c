#include "Dolphin/card.h"
#include "Dolphin/exi.h"
#include "types.h"

CARDBlock __CARDBlock[2];
u8 __CARDDiskNone[0x20]; // unknown struct

BOOL OnReset(unknown p1);
int Retry(int slotIndex);
void TimeoutHandler(OSAlarm* alarm);

/*
 * --INFO--
 * Address:	800D466C
 * Size:	000004
 */
void __CARDDefaultApiCallback(void) { }

/*
 * --INFO--
 * Address:	800D4670
 * Size:	000034
 */
void __CARDSyncCallback(int slotIndex, int p2)
{
	OSWakeupThread(&__CARDBlock[slotIndex]._08C);
	/*
	.loc_0x0:
	  mflr      r0
	  mulli     r4, r3, 0x110
	  stw       r0, 0x4(r1)
	  lis       r3, 0x804F
	  stwu      r1, -0x8(r1)
	  addi      r0, r3, 0x5AF0
	  add       r3, r0, r4
	  addi      r3, r3, 0x8C
	  bl        0x1E348
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D46A4
 * Size:	0000D8
 */
void __CARDExtHandler(int slotIndex)
{
	CARDBlockDoneWriteCallback* doneWriteCallback;
	CARDBlockC4Callback* c4Callback;
	CARDBlock* block = &__CARDBlock[slotIndex];
	if (block->_000 != 0) {
		block->_000 = 0;
		EXISetExiCallback(slotIndex, nullptr);
		OSCancelAlarm(&block->_0E0);
		doneWriteCallback = block->doneWriteCallback;
		if (doneWriteCallback) {
			block->doneWriteCallback = nullptr;
			doneWriteCallback(slotIndex, -3);
		}
		if (block->_004 != -1) {
			block->_004 = -3;
		}
		c4Callback = block->_0C4;
		if (c4Callback != nullptr && 6 < block->_024) {
			block->_0C4 = nullptr;
			c4Callback(slotIndex, -3);
		}
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  mulli     r4, r29, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r4
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0xBC
	  li        r31, 0
	  stw       r31, 0x0(r30)
	  addi      r3, r29, 0
	  li        r4, 0
	  bl        0xBBD8
	  addi      r3, r30, 0xE0
	  bl        0x176E0
	  lwz       r0, 0xCC(r30)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0x78
	  stw       r31, 0xCC(r30)
	  mtlr      r12
	  addi      r3, r29, 0
	  li        r4, -0x3
	  blrl

	.loc_0x78:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x8C
	  li        r0, -0x3
	  stw       r0, 0x4(r30)

	.loc_0x8C:
	  lwz       r12, 0xC4(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xBC
	  lwz       r0, 0x24(r30)
	  cmpwi     r0, 0x7
	  blt-      .loc_0xBC
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xC4(r30)
	  addi      r3, r29, 0
	  li        r4, -0x3
	  blrl

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

inline int __CARDUnknownInline(int slotIndex)
{
	u8 status[0xC];
	int v1;
}

/*
 * --INFO--
 * Address:	800D477C
 * Size:	000118
 */
void __CARDExiHandler(int slotIndex)
{
	int v1;
	u8 status[0xC];
	CARDBlockDoneWriteCallback* cb;
	CARDBlock* block = &__CARDBlock[slotIndex];
	OSCancelAlarm(&block->_0E0);
	if (block->_000 == 0) {
		return;
	}
	if (EXILock(slotIndex, 0, 0) == EXIResultZero) {
		v1 = -0x80;
	} else {
		v1 = __CARDReadStatus(slotIndex, status);
		if (0 > v1) {
			goto unlock;
		}
		v1 = __CARDClearStatus(slotIndex);
		if (0 > v1) {
			goto unlock;
		}
		if ((status[0] & 0x18) == 0) {
			v1 = 0;
		} else {
			v1 = -5;
		}
		if (v1 == -5 && 0 < --block->_0A8) {
			v1 = Retry(slotIndex);
			if (0 > v1) {
				goto doCallback;
			}
			return;
		}
	unlock:
		EXIUnlock(slotIndex);
	}
doCallback:
	cb = block->doneWriteCallback;
	if (cb) {
		block->doneWriteCallback = nullptr;
		cb(slotIndex, v1);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r3, 0
	  mulli     r4, r31, 0x110
	  stw       r30, 0x20(r1)
	  lis       r3, 0x804F
	  stw       r29, 0x1C(r1)
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r4
	  addi      r3, r30, 0xE0
	  bl        0x17628
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0xFC
	  addi      r3, r31, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0xC7A8
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  li        r29, -0x80
	  b         .loc_0xD4

	.loc_0x60:
	  addi      r3, r31, 0
	  addi      r4, r1, 0x10
	  bl        0x29C
	  mr.       r29, r3
	  blt-      .loc_0xCC
	  mr        r3, r31
	  bl        0x37C
	  mr.       r29, r3
	  blt-      .loc_0xCC
	  lbz       r0, 0x10(r1)
	  rlwinm.   r0,r0,0,27,28
	  beq-      .loc_0x98
	  li        r0, -0x5
	  b         .loc_0x9C

	.loc_0x98:
	  li        r0, 0

	.loc_0x9C:
	  mr        r29, r0
	  cmpwi     r29, -0x5
	  bne-      .loc_0xCC
	  lwz       r3, 0xA8(r30)
	  subic.    r0, r3, 0x1
	  stw       r0, 0xA8(r30)
	  ble-      .loc_0xCC
	  mr        r3, r31
	  bl        0x488
	  mr.       r29, r3
	  blt-      .loc_0xD4
	  b         .loc_0xFC

	.loc_0xCC:
	  mr        r3, r31
	  bl        0xC818

	.loc_0xD4:
	  lwz       r0, 0xCC(r30)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0xFC
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xCC(r30)
	  addi      r3, r31, 0
	  addi      r4, r29, 0
	  blrl

	.loc_0xFC:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D4894
 * Size:	0000A8
 */
void __CARDTxHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  addi      r27, r3, 0
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  mulli     r4, r27, 0x110
	  addi      r3, r27, 0
	  add       r29, r0, r4
	  bl        0xC020
	  cntlzw    r0, r3
	  addi      r3, r27, 0
	  rlwinm    r31,r0,27,5,31
	  bl        0xC798
	  lwz       r0, 0xC8(r29)
	  cmplwi    r0, 0
	  mr        r28, r0
	  beq-      .loc_0x94
	  li        r30, 0
	  cmpwi     r31, 0
	  stw       r30, 0xC8(r29)
	  bne-      .loc_0x70
	  mr        r3, r27
	  bl        0xBBC0
	  cmpwi     r3, 0
	  beq-      .loc_0x70
	  li        r30, 0x1

	.loc_0x70:
	  cmpwi     r30, 0
	  beq-      .loc_0x80
	  li        r4, 0
	  b         .loc_0x84

	.loc_0x80:
	  li        r4, -0x3

	.loc_0x84:
	  addi      r12, r28, 0
	  mtlr      r12
	  addi      r3, r27, 0
	  blrl

	.loc_0x94:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D493C
 * Size:	000084
 */
void __CARDUnlockedHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  mulli     r4, r30, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r3, r0, r4
	  lwz       r0, 0xDC(r3)
	  cmplwi    r0, 0
	  mr        r31, r0
	  beq-      .loc_0x6C
	  li        r0, 0
	  stw       r0, 0xDC(r3)
	  mr        r3, r30
	  bl        0xBB34
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  li        r4, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r4, -0x3

	.loc_0x5C:
	  addi      r12, r31, 0
	  mtlr      r12
	  addi      r3, r30, 0
	  blrl

	.loc_0x6C:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D49C0
 * Size:	0000C0
 */
void __CARDEnableInterrupt(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  li        r4, 0
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  bl        0xBDCC
	  cmpwi     r3, 0
	  bne-      .loc_0x38
	  li        r3, -0x3
	  b         .loc_0xA8

	.loc_0x38:
	  cmpwi     r31, 0
	  beq-      .loc_0x48
	  lis       r0, 0x8101
	  b         .loc_0x4C

	.loc_0x48:
	  lis       r0, 0x8100

	.loc_0x4C:
	  stw       r0, 0x10(r1)
	  addi      r3, r30, 0
	  addi      r4, r1, 0x10
	  li        r5, 0x2
	  li        r6, 0x1
	  li        r7, 0
	  bl        0xB224
	  cntlzw    r0, r3
	  addi      r3, r30, 0
	  rlwinm    r31,r0,27,5,31
	  bl        0xB5FC
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r30, 0
	  or        r31, r31, r0
	  bl        0xBE94
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or.       r31, r31, r0
	  beq-      .loc_0xA4
	  li        r3, -0x3
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r3, 0

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D4A80
 * Size:	0000F0
 */
int __CARDReadStatus(int slotIndex, u8* buffer)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  li        r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        0xBD08
	  cmpwi     r3, 0
	  bne-      .loc_0x3C
	  li        r3, -0x3
	  b         .loc_0xD4

	.loc_0x3C:
	  lis       r0, 0x8300
	  stw       r0, 0x10(r1)
	  addi      r3, r29, 0
	  addi      r4, r1, 0x10
	  li        r5, 0x2
	  li        r6, 0x1
	  li        r7, 0
	  bl        0xB170
	  cntlzw    r0, r3
	  addi      r3, r29, 0
	  rlwinm    r31,r0,27,5,31
	  bl        0xB548
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  or        r31, r31, r0
	  li        r5, 0x1
	  li        r6, 0
	  li        r7, 0
	  bl        0xB13C
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  or        r31, r31, r0
	  bl        0xB510
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  or        r31, r31, r0
	  bl        0xBDA8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or.       r31, r31, r0
	  beq-      .loc_0xD0
	  li        r3, -0x3
	  b         .loc_0xD4

	.loc_0xD0:
	  li        r3, 0

	.loc_0xD4:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D4B70
 * Size:	0000AC
 */
int __CARDClearStatus(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x4(r1)
	  li        r5, 0x4
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        0xBC20
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  li        r3, -0x3
	  b         .loc_0x94

	.loc_0x34:
	  lis       r0, 0x8900
	  stw       r0, 0xC(r1)
	  addi      r3, r30, 0
	  addi      r4, r1, 0xC
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0
	  bl        0xB088
	  cntlzw    r0, r3
	  addi      r3, r30, 0
	  rlwinm    r31,r0,27,5,31
	  bl        0xB460
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r30, 0
	  or        r31, r31, r0
	  bl        0xBCF8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or.       r31, r31, r0
	  beq-      .loc_0x90
	  li        r3, -0x3
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void __CARDSleep(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void __CARDWakeup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4C1C
 * Size:	0000A4
 */
void TimeoutHandler(OSAlarm* alarm)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r4, r4, 0x5AF0
	  addi      r0, r4, 0xE0
	  stwu      r1, -0x18(r1)
	  cmplw     r3, r0
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r4, 0
	  beq-      .loc_0x4C
	  addi      r0, r4, 0x1F0
	  cmplw     r3, r0
	  addi      r4, r4, 0x110
	  addi      r30, r4, 0
	  li        r31, 0x1
	  beq-      .loc_0x4C
	  li        r31, 0x2

	.loc_0x4C:
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x8C
	  addi      r3, r31, 0
	  li        r4, 0
	  bl        0xB648
	  lwz       r0, 0xCC(r30)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0x8C
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xCC(r30)
	  addi      r3, r31, 0
	  li        r4, -0x5
	  blrl

	.loc_0x8C:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void SetupTimeoutAlarm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D4CC0
 * Size:	00022C
 */
int Retry(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  mulli     r4, r30, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r4
	  addi      r3, r30, 0
	  li        r4, 0
	  bl        0xBABC
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  mr        r3, r30
	  bl        0xC360
	  li        r3, -0x3
	  b         .loc_0x214

	.loc_0x50:
	  addi      r3, r31, 0xE0
	  bl        0x170C0
	  lbz       r0, 0x94(r31)
	  cmpwi     r0, 0xF3
	  beq-      .loc_0x120
	  bge-      .loc_0x78
	  cmpwi     r0, 0xF1
	  beq-      .loc_0xBC
	  bge-      .loc_0x84
	  b         .loc_0x120

	.loc_0x78:
	  cmpwi     r0, 0xF5
	  bge-      .loc_0x120
	  b         .loc_0xBC

	.loc_0x84:
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800D
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x64
	  addi      r7, r3, 0x4C1C
	  addi      r3, r31, 0xE0
	  li        r5, 0
	  bl        0x16FF8
	  b         .loc_0x120

	.loc_0xBC:
	  lis       r3, 0x8000
	  lwz       r4, 0xC(r31)
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x800D
	  srawi     r9, r4, 0xD
	  rlwinm    r7,r0,30,2,31
	  li        r0, 0x2
	  li        r4, 0
	  mullw     r8, r4, r0
	  mulhwu    r6, r7, r0
	  add       r8, r8, r6
	  mullw     r5, r7, r0
	  addze     r9, r9
	  mullw     r6, r7, r4
	  srawi     r0, r9, 0x1F
	  mullw     r4, r0, r5
	  mulhwu    r0, r9, r5
	  addi      r7, r3, 0x4C1C
	  add       r3, r8, r6
	  add       r4, r4, r0
	  mullw     r0, r9, r3
	  mullw     r6, r9, r5
	  addi      r3, r31, 0xE0
	  add       r5, r4, r0
	  bl        0x16F90

	.loc_0x120:
	  lwz       r5, 0xA0(r31)
	  addi      r3, r30, 0
	  addi      r4, r31, 0x94
	  li        r6, 0x1
	  bl        0xB0B4
	  cmpwi     r3, 0
	  bne-      .loc_0x154
	  mr        r3, r30
	  bl        0xBADC
	  mr        r3, r30
	  bl        0xC25C
	  li        r3, -0x3
	  b         .loc_0x214

	.loc_0x154:
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x52
	  bne-      .loc_0x198
	  lwz       r4, 0x80(r31)
	  mr        r3, r30
	  lwz       r5, 0x14(r31)
	  li        r6, 0x1
	  addi      r4, r4, 0x200
	  bl        0xB070
	  cmpwi     r3, 0
	  bne-      .loc_0x198
	  mr        r3, r30
	  bl        0xBA98
	  mr        r3, r30
	  bl        0xC218
	  li        r3, -0x3
	  b         .loc_0x214

	.loc_0x198:
	  lwz       r3, 0xA4(r31)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x1C0
	  mr        r3, r30
	  bl        0xBA70
	  mr        r3, r30
	  bl        0xC1F0
	  li        r3, 0
	  b         .loc_0x214

	.loc_0x1C0:
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x52
	  bne-      .loc_0x1D4
	  li        r5, 0x200
	  b         .loc_0x1D8

	.loc_0x1D4:
	  li        r5, 0x80

	.loc_0x1D8:
	  lis       r3, 0x800D
	  lwz       r4, 0xB4(r31)
	  addi      r7, r3, 0x4894
	  lwz       r6, 0xA4(r31)
	  mr        r3, r30
	  bl        0xB098
	  cmpwi     r3, 0
	  bne-      .loc_0x210
	  mr        r3, r30
	  bl        0xBA20
	  mr        r3, r30
	  bl        0xC1A0
	  li        r3, -0x3
	  b         .loc_0x214

	.loc_0x210:
	  li        r3, 0

	.loc_0x214:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D4EEC
 * Size:	000110
 */
void UnlockedCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r3, 0
	  mulli     r5, r31, 0x110
	  stw       r30, 0x10(r1)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r5
	  blt-      .loc_0x74
	  lis       r3, 0x800D
	  addi      r0, r3, 0x4EEC
	  lis       r3, 0x800D
	  stw       r0, 0xDC(r30)
	  addi      r5, r3, 0x493C
	  addi      r3, r31, 0
	  li        r4, 0
	  bl        0xC038
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  li        r4, 0
	  b         .loc_0x74

	.loc_0x60:
	  li        r0, 0
	  stw       r0, 0xDC(r30)
	  mr        r3, r31
	  bl        -0x298
	  mr        r4, r3

	.loc_0x74:
	  cmpwi     r4, 0
	  bge-      .loc_0xF8
	  lbz       r0, 0x94(r30)
	  cmpwi     r0, 0xF3
	  beq-      .loc_0xF8
	  bge-      .loc_0xA4
	  cmpwi     r0, 0x52
	  beq-      .loc_0xB0
	  blt-      .loc_0xF8
	  cmpwi     r0, 0xF1
	  bge-      .loc_0xD8
	  b         .loc_0xF8

	.loc_0xA4:
	  cmpwi     r0, 0xF5
	  bge-      .loc_0xF8
	  b         .loc_0xD8

	.loc_0xB0:
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0xF8
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xC8(r30)
	  mr        r3, r31
	  blrl
	  b         .loc_0xF8

	.loc_0xD8:
	  lwz       r12, 0xCC(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xF8
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xCC(r30)
	  mr        r3, r31
	  blrl

	.loc_0xF8:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D4FFC
 * Size:	0001B4
 */
int __CARDStart(int slotIndex, CARDBlockC8Callback* c8Callback, CARDBlockDoneWriteCallback* doneWriteCallback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  bl        0x19C20
	  mulli     r5, r27, 0x110
	  lis       r4, 0x804F
	  addi      r0, r4, 0x5AF0
	  add       r31, r0, r5
	  lwz       r0, 0x0(r31)
	  addi      r30, r3, 0
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  li        r31, -0x3
	  b         .loc_0x194

	.loc_0x48:
	  cmplwi    r28, 0
	  beq-      .loc_0x54
	  stw       r28, 0xC8(r31)

	.loc_0x54:
	  cmplwi    r29, 0
	  beq-      .loc_0x60
	  stw       r29, 0xCC(r31)

	.loc_0x60:
	  lis       r3, 0x800D
	  addi      r0, r3, 0x4EEC
	  lis       r3, 0x800D
	  stw       r0, 0xDC(r31)
	  addi      r5, r3, 0x493C
	  addi      r3, r27, 0
	  li        r4, 0
	  bl        0xBEF8
	  cmpwi     r3, 0
	  bne-      .loc_0x90
	  li        r31, -0x1
	  b         .loc_0x194

	.loc_0x90:
	  li        r0, 0
	  stw       r0, 0xDC(r31)
	  addi      r3, r27, 0
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xB710
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  mr        r3, r27
	  bl        0xBFB4
	  li        r31, -0x3
	  b         .loc_0x194

	.loc_0xC0:
	  addi      r3, r31, 0xE0
	  bl        0x16D14
	  lbz       r0, 0x94(r31)
	  cmpwi     r0, 0xF3
	  beq-      .loc_0x190
	  bge-      .loc_0xE8
	  cmpwi     r0, 0xF1
	  beq-      .loc_0x12C
	  bge-      .loc_0xF4
	  b         .loc_0x190

	.loc_0xE8:
	  cmpwi     r0, 0xF5
	  bge-      .loc_0x190
	  b         .loc_0x12C

	.loc_0xF4:
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r4, 0x1062
	  lis       r3, 0x800D
	  rlwinm    r0,r0,30,2,31
	  addi      r4, r4, 0x4DD3
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r6, r0, 0x64
	  addi      r7, r3, 0x4C1C
	  addi      r3, r31, 0xE0
	  li        r5, 0
	  bl        0x16C4C
	  b         .loc_0x190

	.loc_0x12C:
	  lis       r3, 0x8000
	  lwz       r4, 0xC(r31)
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x800D
	  srawi     r9, r4, 0xD
	  rlwinm    r7,r0,30,2,31
	  li        r0, 0x2
	  li        r4, 0
	  mullw     r8, r4, r0
	  mulhwu    r6, r7, r0
	  add       r8, r8, r6
	  mullw     r5, r7, r0
	  addze     r9, r9
	  mullw     r6, r7, r4
	  srawi     r0, r9, 0x1F
	  mullw     r4, r0, r5
	  mulhwu    r0, r9, r5
	  addi      r7, r3, 0x4C1C
	  add       r3, r8, r6
	  add       r4, r4, r0
	  mullw     r0, r9, r3
	  mullw     r6, r9, r5
	  addi      r3, r31, 0xE0
	  add       r5, r4, r0
	  bl        0x16BE4

	.loc_0x190:
	  li        r31, 0

	.loc_0x194:
	  mr        r3, r30
	  bl        0x19ACC
	  mr        r3, r31
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D51B0
 * Size:	000134
 */
int __CARDReadSegment(int slotIndex, CARDBlockC8Callback* c8Callback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r6, 0x5
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  mulli     r5, r30, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  li        r0, 0x52
	  stb       r0, 0x94(r31)
	  li        r0, 0
	  addi      r3, r30, 0
	  lwz       r5, 0xB0(r31)
	  rlwinm    r5,r5,15,25,31
	  stb       r5, 0x95(r31)
	  li        r5, 0
	  lwz       r7, 0xB0(r31)
	  rlwinm    r7,r7,23,24,31
	  stb       r7, 0x96(r31)
	  lwz       r7, 0xB0(r31)
	  rlwinm    r7,r7,25,30,31
	  stb       r7, 0x97(r31)
	  lwz       r7, 0xB0(r31)
	  rlwinm    r7,r7,0,25,31
	  stb       r7, 0x98(r31)
	  stw       r6, 0xA0(r31)
	  stw       r0, 0xA4(r31)
	  stw       r0, 0xA8(r31)
	  bl        -0x230
	  cmpwi     r3, -0x1
	  bne-      .loc_0x90
	  li        r3, 0
	  b         .loc_0x11C

	.loc_0x90:
	  cmpwi     r3, 0
	  blt-      .loc_0x11C
	  lwz       r5, 0xA0(r31)
	  addi      r3, r30, 0
	  addi      r4, r31, 0x94
	  li        r6, 0x1
	  bl        0xAC4C
	  cmpwi     r3, 0
	  beq-      .loc_0xF8
	  lwz       r4, 0x80(r31)
	  mr        r3, r30
	  lwz       r5, 0x14(r31)
	  li        r6, 0x1
	  addi      r4, r4, 0x200
	  bl        0xAC2C
	  cmpwi     r3, 0
	  beq-      .loc_0xF8
	  lis       r3, 0x800D
	  lwz       r4, 0xB4(r31)
	  addi      r7, r3, 0x4894
	  lwz       r6, 0xA4(r31)
	  addi      r3, r30, 0
	  li        r5, 0x200
	  bl        0xACA8
	  cmpwi     r3, 0
	  bne-      .loc_0x118

	.loc_0xF8:
	  li        r0, 0
	  stw       r0, 0xC8(r31)
	  mr        r3, r30
	  bl        0xB628
	  mr        r3, r30
	  bl        0xBDA8
	  li        r3, -0x3
	  b         .loc_0x11C

	.loc_0x118:
	  li        r3, 0

	.loc_0x11C:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D52E4
 * Size:	00011C
 */
int __CARDWritePage(int slotIndex, CARDBlockDoneWriteCallback* doneWriteCallback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r7, 0x5
	  stw       r0, 0x4(r1)
	  li        r6, 0x1
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  mulli     r5, r30, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  li        r0, 0xF2
	  stb       r0, 0x94(r31)
	  addi      r5, r4, 0
	  li        r0, 0x3
	  lwz       r3, 0xB0(r31)
	  li        r4, 0
	  rlwinm    r3,r3,15,25,31
	  stb       r3, 0x95(r31)
	  addi      r3, r30, 0
	  lwz       r8, 0xB0(r31)
	  rlwinm    r8,r8,23,24,31
	  stb       r8, 0x96(r31)
	  lwz       r8, 0xB0(r31)
	  rlwinm    r8,r8,25,30,31
	  stb       r8, 0x97(r31)
	  lwz       r8, 0xB0(r31)
	  rlwinm    r8,r8,0,25,31
	  stb       r8, 0x98(r31)
	  stw       r7, 0xA0(r31)
	  stw       r6, 0xA4(r31)
	  stw       r0, 0xA8(r31)
	  bl        -0x36C
	  cmpwi     r3, -0x1
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x104

	.loc_0x98:
	  cmpwi     r3, 0
	  blt-      .loc_0x104
	  lwz       r5, 0xA0(r31)
	  addi      r3, r30, 0
	  addi      r4, r31, 0x94
	  li        r6, 0x1
	  bl        0xAB10
	  cmpwi     r3, 0
	  beq-      .loc_0xE0
	  lis       r3, 0x800D
	  lwz       r4, 0xB4(r31)
	  addi      r7, r3, 0x4894
	  lwz       r6, 0xA4(r31)
	  addi      r3, r30, 0
	  li        r5, 0x80
	  bl        0xAB8C
	  cmpwi     r3, 0
	  bne-      .loc_0x100

	.loc_0xE0:
	  li        r0, 0
	  stw       r0, 0xCC(r31)
	  mr        r3, r30
	  bl        0xB50C
	  mr        r3, r30
	  bl        0xBC8C
	  li        r3, -0x3
	  b         .loc_0x104

	.loc_0x100:
	  li        r3, 0

	.loc_0x104:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void __CARDErase(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D5400
 * Size:	0000E0
 */
int __CARDEraseSector(int slotIndex, unknown p2, CARDBlockDoneWriteCallback* doneWriteCallback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  mulli     r6, r29, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r6
	  li        r0, 0xF1
	  stb       r0, 0x94(r31)
	  rlwinm    r3,r4,15,25,31
	  rlwinm    r0,r4,23,24,31
	  stb       r3, 0x95(r31)
	  li        r6, 0x3
	  addi      r3, r29, 0
	  stb       r0, 0x96(r31)
	  li        r0, -0x1
	  li        r4, 0
	  stw       r6, 0xA0(r31)
	  stw       r0, 0xA4(r31)
	  stw       r6, 0xA8(r31)
	  bl        -0x464
	  addi      r30, r3, 0
	  cmpwi     r30, -0x1
	  bne-      .loc_0x78
	  li        r30, 0
	  b         .loc_0xC0

	.loc_0x78:
	  cmpwi     r30, 0
	  blt-      .loc_0xC0
	  lwz       r5, 0xA0(r31)
	  addi      r3, r29, 0
	  addi      r4, r31, 0x94
	  li        r6, 0x1
	  bl        0xAA14
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  li        r0, 0
	  stw       r0, 0xCC(r31)
	  li        r30, -0x3
	  b         .loc_0xB0

	.loc_0xAC:
	  li        r30, 0

	.loc_0xB0:
	  mr        r3, r29
	  bl        0xB428
	  mr        r3, r29
	  bl        0xBBA8

	.loc_0xC0:
	  mr        r3, r30
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D54E0
 * Size:	0000AC
 */
void CARDInit()
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0x5AF0
	  stw       r29, 0xC(r1)
	  lwz       r0, 0x10C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x21C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x90

	.loc_0x38:
	  bl        0x18B90
	  sth       r3, -0x7260(r13)
	  lwz       r3, -0x7D78(r13)
	  bl        0x16564
	  bl        0x5814
	  bl        0x16588
	  li        r29, 0
	  li        r31, -0x3

	.loc_0x58:
	  stw       r31, 0x4(r30)
	  addi      r3, r30, 0x8C
	  bl        0x1C474
	  addi      r3, r30, 0xE0
	  bl        0x165C4
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x2
	  addi      r30, r30, 0x110
	  blt+      .loc_0x58
	  lis       r3, 0x8000
	  bl        0x34
	  lis       r3, 0x804A
	  addi      r3, r3, 0x7758
	  bl        0x1AD38

	.loc_0x90:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D558C
 * Size:	000008
 */
u16 __CARDGetFontEncode()
{
	/*
	.loc_0x0:
	  lhz       r3, -0x7260(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void __CARDSetFontEncode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D5594
 * Size:	000038
 */
void __CARDSetDiskID(u8* diskID)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0
	  lis       r4, 0x804F
	  addi      r4, r4, 0x5AF0
	  beq-      .loc_0x18
	  mr        r0, r3
	  b         .loc_0x1C

	.loc_0x18:
	  addi      r0, r4, 0x220

	.loc_0x1C:
	  cmplwi    r3, 0
	  stw       r0, 0x10C(r4)
	  beq-      .loc_0x2C
	  b         .loc_0x30

	.loc_0x2C:
	  addi      r3, r4, 0x220

	.loc_0x30:
	  stw       r3, 0x21C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CARDGetDiskID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void CARDSetDiskID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D55CC
 * Size:	0000B8
 */
int __CARDGetControlBlock(int slotIndex, CARDBlock** outBlock)
{
	/*
	.loc_0x0:
	  mflr      r0
	  mulli     r6, r3, 0x110
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  lis       r5, 0x804F
	  cmpwi     r3, 0
	  stw       r31, 0x1C(r1)
	  addi      r0, r5, 0x5AF0
	  stw       r30, 0x18(r1)
	  add       r30, r0, r6
	  stw       r29, 0x14(r1)
	  addi      r29, r4, 0
	  blt-      .loc_0x48
	  cmpwi     r3, 0x2
	  bge-      .loc_0x48
	  lwz       r0, 0x10C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x50

	.loc_0x48:
	  li        r3, -0x80
	  b         .loc_0x9C

	.loc_0x50:
	  bl        0x1961C
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x68
	  li        r31, -0x3
	  b         .loc_0x94

	.loc_0x68:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x7C
	  li        r31, -0x1
	  b         .loc_0x94

	.loc_0x7C:
	  li        r0, -0x1
	  stw       r0, 0x4(r30)
	  li        r0, 0
	  li        r31, 0
	  stw       r0, 0xD0(r30)
	  stw       r30, 0x0(r29)

	.loc_0x94:
	  bl        0x19600
	  mr        r3, r31

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D5684
 * Size:	000064
 */
int __CARDPutControlBlock(CARDBlock* block, unknown p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        0x19598
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  stw       r31, 0x4(r30)
	  b         .loc_0x44

	.loc_0x34:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x44
	  stw       r31, 0x4(r30)

	.loc_0x44:
	  bl        0x19598
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void CARDGetResultCode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D56E8
 * Size:	000150
 */
int CARDFreeBlocks(int slotIndex, unknown p2, unknown p3)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r5, 0
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  addi      r29, r4, 0
	  addi      r4, r1, 0x18
	  bl        -0x140
	  cmpwi     r3, 0
	  bge-      .loc_0x34
	  b         .loc_0x134

	.loc_0x34:
	  lwz       r3, 0x18(r1)
	  bl        0x16E0
	  mr        r30, r3
	  lwz       r3, 0x18(r1)
	  bl        0x1A3C
	  cmplwi    r30, 0
	  beq-      .loc_0x58
	  cmplwi    r3, 0
	  bne-      .loc_0x98

	.loc_0x58:
	  lwz       r30, 0x18(r1)
	  bl        0x194F4
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x78
	  li        r0, -0x6
	  stw       r0, 0x4(r30)
	  b         .loc_0x8C

	.loc_0x78:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x8C
	  li        r0, -0x6
	  stw       r0, 0x4(r30)

	.loc_0x8C:
	  bl        0x194EC
	  li        r3, -0x6
	  b         .loc_0x134

	.loc_0x98:
	  cmplwi    r29, 0
	  beq-      .loc_0xB4
	  lwz       r4, 0x18(r1)
	  lhz       r0, 0x6(r30)
	  lwz       r4, 0xC(r4)
	  mullw     r0, r4, r0
	  stw       r0, 0x0(r29)

	.loc_0xB4:
	  cmplwi    r31, 0
	  beq-      .loc_0xF8
	  li        r0, 0
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  b         .loc_0xEC

	.loc_0xCC:
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0xE4
	  lwz       r4, 0x0(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r31)

	.loc_0xE4:
	  addi      r3, r3, 0x40
	  addi      r5, r5, 0x1

	.loc_0xEC:
	  rlwinm    r0,r5,0,16,31
	  cmplwi    r0, 0x7F
	  blt+      .loc_0xCC

	.loc_0xF8:
	  lwz       r30, 0x18(r1)
	  bl        0x19454
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x118
	  li        r0, 0
	  stw       r0, 0x4(r30)
	  b         .loc_0x12C

	.loc_0x118:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x12C
	  li        r0, 0
	  stw       r0, 0x4(r30)

	.loc_0x12C:
	  bl        0x1944C
	  li        r3, 0

	.loc_0x134:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void CARDGetEncoding(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void CARDGetMemSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void CARDGetSectorSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D5838
 * Size:	000098
 */
int __CARDSync(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  mulli     r4, r28, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r4
	  bl        0x193D0
	  mr        r29, r3
	  b         .loc_0x44

	.loc_0x3C:
	  addi      r3, r31, 0x8C
	  bl        0x1D074

	.loc_0x44:
	  cmpwi     r28, 0
	  blt-      .loc_0x54
	  cmpwi     r28, 0x2
	  blt-      .loc_0x5C

	.loc_0x54:
	  li        r0, -0x80
	  b         .loc_0x60

	.loc_0x5C:
	  lwz       r0, 0x4(r31)

	.loc_0x60:
	  mr        r30, r0
	  cmpwi     r30, -0x1
	  beq+      .loc_0x3C
	  mr        r3, r29
	  bl        0x193B8
	  mr        r3, r30
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D58D0
 * Size:	000050
 */
BOOL OnReset(unknown p1)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bne-      .loc_0x3C
	  li        r3, 0
	  bl        0x3498
	  cmpwi     r3, -0x1
	  beq-      .loc_0x34
	  li        r3, 0x1
	  bl        0x3488
	  cmpwi     r3, -0x1
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
