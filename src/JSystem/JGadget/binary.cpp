#include "JSystem/JGadget/binary.h"

namespace JGadget {
namespace binary {

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JGadget::binary::parseVariableUInt_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
// void JGadget::binary::parseVariableUInt_8_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JGadget::binary::parseVariableUInt_8_16(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80027128
 * @note Size: 0x68
 */
const void* parseVariableUInt_16_32_following(void const* buffer, u32* p1, u32* p2, JGadget::binary::TEBit* bit)
{
	JGadget::binary::TEBit temp;
	if (bit == NULL) {
		bit = &temp;
	}
	u32 uVar1 = *(u16*)buffer;
	if ((uVar1 & 0x8000) == 0) {
		bit->mValue = 0x10;
		*p1         = uVar1;
		*p2         = *(u16*)((u8*)buffer + 2);
		return (u8*)buffer + 4;
	}
	bit->mValue = 0x20;
	uVar1 <<= 16;
	uVar1 &= 0x7fff0000;
	uVar1 |= *(u16*)((u8*)buffer + 2);
	*p1 = uVar1;
	*p2 = *(u32*)((u8*)buffer + 4);
	return (u8*)buffer + 8;
}

/**
 * @note Address: 0x80027190
 * @note Size: 0x48
 */
TParse_header_block::~TParse_header_block() { }

/**
 * @note Address: 0x800271D8
 * @note Size: 0x10C
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
