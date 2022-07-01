#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void CARDSetVendorID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void CARDGetVendorID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DAB00
 * Size:	0000C4
 */
int CARDGetSerialNo(int slotIndex, u64* serialNo)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  blt-      .loc_0x24
	  cmpwi     r3, 0x2
	  blt-      .loc_0x2C

	.loc_0x24:
	  li        r3, -0x80
	  b         .loc_0xB0

	.loc_0x2C:
	  addi      r4, r1, 0x10
	  bl        -0x5564
	  cmpwi     r3, 0
	  bge-      .loc_0x40
	  b         .loc_0xB0

	.loc_0x40:
	  lwz       r3, 0x10(r1)
	  li        r7, 0
	  li        r6, 0
	  lwz       r5, 0x80(r3)
	  li        r4, 0
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x0(r5)
	  xor       r7, r7, r3
	  addi      r3, r5, 0x8
	  xor       r6, r6, r0
	  lwz       r0, 0x8(r5)
	  lwz       r3, 0x4(r3)
	  xor       r6, r6, r0
	  xor       r7, r7, r3
	  addi      r3, r5, 0x10
	  lwz       r0, 0x10(r5)
	  lwz       r3, 0x4(r3)
	  xor       r6, r6, r0
	  xor       r7, r7, r3
	  addi      r3, r5, 0x18
	  lwz       r0, 0x18(r5)
	  lwz       r3, 0x4(r3)
	  xor       r6, r6, r0
	  xor       r7, r7, r3
	  stw       r7, 0x4(r31)
	  stw       r6, 0x0(r31)
	  lwz       r3, 0x10(r1)
	  bl        -0x5528

	.loc_0xB0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void CARDGetUniqueCode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void CARDGetAttributes(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void CARDSetAttributesAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void CARDSetAttributes(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void __CARDEnablePerm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __CARDEnableGlobal(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __CARDEnableCompany(void)
{
	// UNUSED FUNCTION
}
