#include "JSystem/JGadget/binary.h"

namespace JGadget {
namespace binary {

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JGadget::binary::parseVariableUInt_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
// void JGadget::binary::parseVariableUInt_8_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JGadget::binary::parseVariableUInt_8_16(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80027128
 * Size:	000068
 */
const void* parseVariableUInt_16_32_following(void const* buffer, u32* p1, u32* p2, JGadget::binary::TEBit* bit)
{
	JGadget::binary::TEBit temp;
	if (bit == NULL) {
		bit = &temp;
	}
	u32 uVar1 = *(u16*)buffer;
	const void* rv;
	if ((uVar1 & 0x8000) == 0) {
		bit->mValue = 0x10;
		*p1         = uVar1;
		*p2         = *(u16*)((u8*)buffer + 2);
		rv          = (u8*)buffer + 4;
	} else {
		bit->mValue = 0x20;
		uVar1 <<= 16;
		uVar1 &= 0x7fff0000;
		uVar1 |= *(u16*)((u8*)buffer + 2);
		*p1 = uVar1;
		*p2 = *(u32*)((u8*)buffer + 4);
		rv  = (u8*)buffer + 8;
	}
	return rv;
	/*
	.loc_0x0:
	  cmplwi    r6, 0
	  stwu      r1, -0x10(r1)
	  mr        r8, r3
	  bne-      .loc_0x14
	  addi      r6, r1, 0x8

	.loc_0x14:
	  lhz       r7, 0x0(r8)
	  rlwinm.   r0,r7,0,16,16
	  bne-      .loc_0x3C
	  li        r3, 0x10
	  lhz       r0, 0x2(r8)
	  stw       r3, 0x0(r6)
	  addi      r3, r8, 0x4
	  stw       r7, 0x0(r4)
	  stw       r0, 0x0(r5)
	  b         .loc_0x60

	.loc_0x3C:
	  li        r3, 0x20
	  lhz       r0, 0x2(r8)
	  rlwinm    r7,r7,16,1,15
	  stw       r3, 0x0(r6)
	  or        r7, r7, r0
	  lwz       r0, 0x4(r8)
	  stw       r7, 0x0(r4)
	  addi      r3, r8, 0x8
	  stw       r0, 0x0(r5)

	.loc_0x60:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80027190
 * Size:	000048
 */
TParse_header_block::~TParse_header_block() { }

/*
 * --INFO--
 * Address:	800271D8
 * Size:	00010C
 */
bool TParse_header_block::parse_next(void const** ptrLocation, u32 idx)
{
	u32 headerEnd, blockEnd;

	if ((ptrLocation == nullptr) || (*ptrLocation == nullptr)) {
		return false;
	}
	bool check, checkLastBlock;
	checkLastBlock = check = false;

	check = checkNext(ptrLocation, &headerEnd, idx);

	checkLastBlock = check;
	if (!(idx & 1) && (check == false)) {
		return check;
	}

	while (headerEnd > 0) {
		check = false;
		if (parseBlock_next(ptrLocation, &blockEnd, idx) && checkLastBlock) {
			check = true;
		}
		checkLastBlock = check;
		if (((idx & 2) == 0) && (check == false)) {
			return check;
		}
		headerEnd--;
	}
	return checkLastBlock;
}

} // namespace binary
} // namespace JGadget
