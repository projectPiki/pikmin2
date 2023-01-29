#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D961C
 * Size:	000068
 */
BOOL __CARDCompareFileName(char* p1, char* p2)
{
	/*
	.loc_0x0:
	  addi      r5, r3, 0x8
	  li        r7, 0x20
	  b         .loc_0x44

	.loc_0xC:
	  lbz       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  lbz       r6, 0x0(r4)
	  addi      r4, r4, 0x1
	  extsb     r3, r0
	  extsb     r0, r6
	  cmpw      r3, r0
	  beq-      .loc_0x34
	  li        r3, 0
	  blr

	.loc_0x34:
	  extsb.    r0, r6
	  bne-      .loc_0x44
	  li        r3, 0x1
	  blr

	.loc_0x44:
	  subic.    r7, r7, 0x1
	  bge+      .loc_0xC
	  lbz       r0, 0x0(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x60
	  li        r3, 0x1
	  blr

	.loc_0x60:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D9684
 * Size:	000094
 */
int __CARDAccess(CARDBlock* block, CARDDirectoryEntry* entry)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r4
	  lbz       r0, 0x0(r4)
	  lwz       r31, 0x10C(r3)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x30
	  li        r3, -0x4
	  b         .loc_0x7C

	.loc_0x30:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5D10
	  cmplw     r31, r0
	  beq-      .loc_0x70
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  li        r5, 0x4
	  bl        -0x126E8
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  addi      r3, r30, 0x4
	  addi      r4, r31, 0x4
	  li        r5, 0x2
	  bl        -0x12700
	  cmpwi     r3, 0
	  bne-      .loc_0x78

	.loc_0x70:
	  li        r3, 0
	  b         .loc_0x7C

	.loc_0x78:
	  li        r3, -0xA

	.loc_0x7C:
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
 * Address:	800D9718
 * Size:	000134
 */
int __CARDIsWritable(CARDBlock* block, CARDDirectoryEntry* entry)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  mr        r27, r4
	  lbz       r0, 0x0(r4)
	  lwz       r29, 0x10C(r3)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x2C
	  li        r30, -0x4
	  b         .loc_0x78

	.loc_0x2C:
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5D10
	  cmplw     r29, r0
	  beq-      .loc_0x6C
	  addi      r3, r27, 0
	  addi      r4, r29, 0
	  li        r5, 0x4
	  bl        -0x12778
	  cmpwi     r3, 0
	  bne-      .loc_0x74
	  addi      r3, r27, 0x4
	  addi      r4, r29, 0x4
	  li        r5, 0x2
	  bl        -0x12790
	  cmpwi     r3, 0
	  bne-      .loc_0x74

	.loc_0x6C:
	  li        r30, 0
	  b         .loc_0x78

	.loc_0x74:
	  li        r30, -0xA

	.loc_0x78:
	  cmpwi     r30, -0xA
	  bne-      .loc_0x11C
	  lbz       r3, 0x34(r27)
	  lbz       r0, -0x7D66(r13)
	  and       r0, r3, r0
	  rlwinm    r28,r0,0,24,31
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0xD8
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5D10
	  addi      r3, r27, 0
	  addi      r4, r31, 0
	  li        r5, 0x4
	  bl        -0x127DC
	  cmpwi     r3, 0
	  bne-      .loc_0xD8
	  addi      r3, r27, 0x4
	  addi      r4, r31, 0x4
	  li        r5, 0x2
	  bl        -0x127F4
	  cmpwi     r3, 0
	  bne-      .loc_0xD8
	  li        r3, 0
	  b         .loc_0x120

	.loc_0xD8:
	  rlwinm.   r0,r28,0,25,25
	  beq-      .loc_0x11C
	  lis       r3, 0x804F
	  addi      r4, r3, 0x5D10
	  addi      r3, r27, 0
	  li        r5, 0x4
	  bl        -0x12820
	  cmpwi     r3, 0
	  bne-      .loc_0x11C
	  addi      r3, r27, 0x4
	  addi      r4, r29, 0x4
	  li        r5, 0x2
	  bl        -0x12838
	  cmpwi     r3, 0
	  bne-      .loc_0x11C
	  li        r3, 0
	  b         .loc_0x120

	.loc_0x11C:
	  mr        r3, r30

	.loc_0x120:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D984C
 * Size:	0000F4
 */
int __CARDIsReadable(CARDBlock* block, CARDDirectoryEntry* entry)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  mr        r27, r4
	  lwz       r28, 0x10C(r3)
	  bl        -0x1E0
	  addi      r29, r3, 0
	  cmpwi     r29, -0xA
	  bne-      .loc_0xC0
	  lbz       r3, 0x34(r27)
	  lbz       r0, -0x7D66(r13)
	  and       r0, r3, r0
	  rlwinm    r30,r0,0,24,31
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x80
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5D10
	  addi      r3, r27, 0
	  addi      r4, r31, 0
	  li        r5, 0x4
	  bl        -0x128B8
	  cmpwi     r3, 0
	  bne-      .loc_0x80
	  addi      r3, r27, 0x4
	  addi      r4, r31, 0x4
	  li        r5, 0x2
	  bl        -0x128D0
	  cmpwi     r3, 0
	  bne-      .loc_0x80
	  li        r29, 0
	  b         .loc_0xC0

	.loc_0x80:
	  rlwinm.   r0,r30,0,25,25
	  beq-      .loc_0xC0
	  lis       r3, 0x804F
	  addi      r4, r3, 0x5D10
	  addi      r3, r27, 0
	  li        r5, 0x4
	  bl        -0x128FC
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  addi      r3, r27, 0x4
	  addi      r4, r28, 0x4
	  li        r5, 0x2
	  bl        -0x12914
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  li        r29, 0

	.loc_0xC0:
	  cmpwi     r29, -0xA
	  bne-      .loc_0xDC
	  lbz       r0, 0x34(r27)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xDC
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0xDC:
	  mr        r3, r29

	.loc_0xE0:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void __CARDGetFileNo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void CARDFastOpen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D9940
 * Size:	00011C
 */
void CARDOpen(int slotIndex, char* fileName, CARDFileInfo* fileInfo)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, -0x1
	  stwu      r1, -0x38(r1)
	  stmw      r25, 0x1C(r1)
	  addi      r25, r4, 0
	  addi      r30, r5, 0
	  addi      r29, r3, 0
	  addi      r4, r1, 0x14
	  stw       r0, 0x0(r5)
	  bl        -0x439C
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  b         .loc_0x108

	.loc_0x38:
	  lwz       r26, 0x14(r1)
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  bne-      .loc_0x50
	  li        r26, -0x3
	  b         .loc_0xA8

	.loc_0x50:
	  mr        r3, r26
	  bl        -0x282C
	  addi      r27, r3, 0
	  li        r28, 0

	.loc_0x60:
	  addi      r3, r26, 0
	  addi      r4, r27, 0
	  bl        -0x324
	  cmpwi     r3, 0
	  blt-      .loc_0x94
	  addi      r3, r27, 0
	  addi      r4, r25, 0
	  bl        -0x3A0
	  cmpwi     r3, 0
	  beq-      .loc_0x94
	  addi      r31, r28, 0
	  li        r26, 0
	  b         .loc_0xA8

	.loc_0x94:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x7F
	  addi      r27, r27, 0x40
	  blt+      .loc_0x60
	  li        r26, -0x4

	.loc_0xA8:
	  cmpwi     r26, 0
	  blt-      .loc_0xFC
	  lwz       r3, 0x14(r1)
	  bl        -0x288C
	  rlwinm    r0,r31,6,0,25
	  add       r5, r3, r0
	  lhz       r4, 0x36(r5)
	  cmplwi    r4, 0x5
	  blt-      .loc_0xDC
	  lwz       r3, 0x14(r1)
	  lhz       r0, 0x10(r3)
	  cmplw     r4, r0
	  blt-      .loc_0xE4

	.loc_0xDC:
	  li        r26, -0x6
	  b         .loc_0xFC

	.loc_0xE4:
	  stw       r29, 0x0(r30)
	  li        r0, 0
	  stw       r31, 0x4(r30)
	  stw       r0, 0x8(r30)
	  lhz       r0, 0x36(r5)
	  sth       r0, 0x10(r30)

	.loc_0xFC:
	  lwz       r3, 0x14(r1)
	  mr        r4, r26
	  bl        -0x43C0

	.loc_0x108:
	  lmw       r25, 0x1C(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D9A5C
 * Size:	000054
 */
void CARDClose(CARDFileInfo* fileInfo)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  addi      r4, r1, 0xC
	  lwz       r3, 0x0(r3)
	  bl        -0x44AC
	  cmpwi     r3, 0
	  bge-      .loc_0x2C
	  b         .loc_0x40

	.loc_0x2C:
	  li        r0, -0x1
	  stw       r0, 0x0(r31)
	  li        r4, 0
	  lwz       r3, 0xC(r1)
	  bl        -0x4414

	.loc_0x40:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __CARDIsOpened(void)
{
	// UNUSED FUNCTION
}
