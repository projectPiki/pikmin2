#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800EFB30
 * Size:	000038
 */
void OSInitMutex(OSMutexObject* mutex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        0x1E70
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  stw       r0, 0xC(r31)
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EFB68
 * Size:	0000DC
 */
void OSLockMutex(OSMutexObject* mutex)
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
	  mr        r28, r3
	  bl        -0xF50
	  mr        r29, r3
	  bl        0x1E34
	  addi      r30, r3, 0
	  li        r31, 0

	.loc_0x34:
	  lwz       r0, 0x8(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  stw       r30, 0x8(r28)
	  lwz       r3, 0xC(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r28)
	  lwz       r3, 0x2F8(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x64
	  stw       r28, 0x2F4(r30)
	  b         .loc_0x68

	.loc_0x64:
	  stw       r28, 0x10(r3)

	.loc_0x68:
	  stw       r3, 0x14(r28)
	  li        r0, 0
	  stw       r0, 0x10(r28)
	  stw       r28, 0x2F8(r30)
	  b         .loc_0xB4

	.loc_0x7C:
	  cmplw     r0, r30
	  bne-      .loc_0x94
	  lwz       r3, 0xC(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r28)
	  b         .loc_0xB4

	.loc_0x94:
	  stw       r28, 0x2F0(r30)
	  lwz       r3, 0x8(r28)
	  lwz       r4, 0x2D0(r30)
	  bl        0x20E0
	  mr        r3, r28
	  bl        0x2CDC
	  stw       r31, 0x2F0(r30)
	  b         .loc_0x34

	.loc_0xB4:
	  mr        r3, r29
	  bl        -0xFC0
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
 * Address:	800EFC44
 * Size:	0000C8
 */
BOOL OSUnlockMutex(OSMutexObject* mutex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1028
	  mr        r31, r3
	  bl        0x1D5C
	  lwz       r0, 0x8(r29)
	  addi      r30, r3, 0
	  cmplw     r0, r30
	  bne-      .loc_0xA4
	  lwz       r3, 0xC(r29)
	  subic.    r0, r3, 0x1
	  stw       r0, 0xC(r29)
	  bne-      .loc_0xA4
	  lwz       r3, 0x10(r29)
	  lwz       r4, 0x14(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x60
	  stw       r4, 0x2F8(r30)
	  b         .loc_0x64

	.loc_0x60:
	  stw       r4, 0x14(r3)

	.loc_0x64:
	  cmplwi    r4, 0
	  bne-      .loc_0x74
	  stw       r3, 0x2F4(r30)
	  b         .loc_0x78

	.loc_0x74:
	  stw       r3, 0x10(r4)

	.loc_0x78:
	  li        r0, 0
	  stw       r0, 0x8(r29)
	  lwz       r3, 0x2D0(r30)
	  lwz       r0, 0x2D4(r30)
	  cmpw      r3, r0
	  bge-      .loc_0x9C
	  mr        r3, r30
	  bl        0x1E14
	  stw       r3, 0x2D0(r30)

	.loc_0x9C:
	  mr        r3, r29
	  bl        0x2CF4

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x108C
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
 * Address:	800EFD0C
 * Size:	000070
 */
void __OSUnlockAllMutex(OSThread* thread)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  b         .loc_0x4C

	.loc_0x20:
	  lwz       r5, 0x10(r4)
	  addi      r3, r4, 0
	  cmplwi    r5, 0
	  bne-      .loc_0x38
	  stw       r31, 0x2F8(r30)
	  b         .loc_0x3C

	.loc_0x38:
	  stw       r31, 0x14(r5)

	.loc_0x3C:
	  stw       r5, 0x2F4(r30)
	  stw       r31, 0xC(r4)
	  stw       r31, 0x8(r4)
	  bl        0x2C84

	.loc_0x4C:
	  lwz       r4, 0x2F4(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0x20
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
 * Address:	800EFD7C
 * Size:	0000BC
 */
BOOL OSTryLockMutex(OSMutexObject* mutex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1160
	  mr        r31, r3
	  bl        0x1C24
	  lwz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  stw       r3, 0x8(r29)
	  lwz       r4, 0xC(r29)
	  addi      r0, r4, 0x1
	  stw       r0, 0xC(r29)
	  lwz       r4, 0x2F8(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x58
	  stw       r29, 0x2F4(r3)
	  b         .loc_0x5C

	.loc_0x58:
	  stw       r29, 0x10(r4)

	.loc_0x5C:
	  stw       r4, 0x14(r29)
	  li        r0, 0
	  li        r30, 0x1
	  stw       r0, 0x10(r29)
	  stw       r29, 0x2F8(r3)
	  b         .loc_0x94

	.loc_0x74:
	  cmplw     r0, r3
	  bne-      .loc_0x90
	  lwz       r3, 0xC(r29)
	  li        r30, 0x1
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r29)
	  b         .loc_0x94

	.loc_0x90:
	  li        r30, 0

	.loc_0x94:
	  mr        r3, r31
	  bl        -0x11B4
	  mr        r3, r30
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
 * Address:	800EFE38
 * Size:	000020
 */
void OSInitCond(OSThreadQueue* threadQueue)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x1B70
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EFE58
 * Size:	0000D4
 */
u32 OSWaitCond(OSThreadQueue* threadQueue, OSMutexObject* mutex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  bl        -0x1238
	  mr        r31, r3
	  bl        0x1B4C
	  lwz       r0, 0x8(r28)
	  addi      r30, r3, 0
	  cmplw     r0, r30
	  bne-      .loc_0xB8
	  lwz       r29, 0xC(r28)
	  li        r0, 0
	  stw       r0, 0xC(r28)
	  lwz       r3, 0x10(r28)
	  lwz       r4, 0x14(r28)
	  cmplwi    r3, 0
	  bne-      .loc_0x58
	  stw       r4, 0x2F8(r30)
	  b         .loc_0x5C

	.loc_0x58:
	  stw       r4, 0x14(r3)

	.loc_0x5C:
	  cmplwi    r4, 0
	  bne-      .loc_0x6C
	  stw       r3, 0x2F4(r30)
	  b         .loc_0x70

	.loc_0x6C:
	  stw       r3, 0x10(r4)

	.loc_0x70:
	  li        r0, 0
	  stw       r0, 0x8(r28)
	  lwz       r3, 0x2D0(r30)
	  lwz       r0, 0x2D4(r30)
	  cmpw      r3, r0
	  bge-      .loc_0x94
	  mr        r3, r30
	  bl        0x1C08
	  stw       r3, 0x2D0(r30)

	.loc_0x94:
	  bl        0x1B18
	  mr        r3, r28
	  bl        0x2AE4
	  bl        0x1B4C
	  mr        r3, r27
	  bl        0x29EC
	  mr        r3, r28
	  bl        -0x3A0
	  stw       r29, 0xC(r28)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x12B4
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EFF2C
 * Size:	000020
 */
void OSSignalCond(OSThreadQueue* threadQueue)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x2AA0
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void IsMember(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void __OSCheckMutex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void __OSCheckDeadLock(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __OSCheckMutexes(void)
{
	// UNUSED FUNCTION
}
