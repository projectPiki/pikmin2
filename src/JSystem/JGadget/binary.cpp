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
const void* parseVariableUInt_16_32_following(void const* inputBuffer, u32* output1, u32* output2, JGadget::binary::TEBit* bitPointer)
{
	// Temporary bit object
	JGadget::binary::TEBit tempBit;

	// If bitPointer is NULL, assign the address of tempBit to it
	if (bitPointer == NULL) {
		bitPointer = &tempBit;
	}

	// Read the first 16 bits from the buffer
	u32 bufferValue = *(u16*)inputBuffer;

	// If the most significant bit is 0
	if ((bufferValue & 0x8000) == 0) {
		bitPointer->mValue = 0x10;                          // Set bit value to 16
		*output1           = bufferValue;                   // Assign the 16-bit value to output1
		*output2           = *(u16*)((u8*)inputBuffer + 2); // Assign the next 16 bits to output2
		return (u8*)inputBuffer + 4;                        // Return the buffer pointer moved by 4 bytes
	}

	// If the most significant bit is 1
	bitPointer->mValue = 0x20;                    // Set bit value to 32
	bufferValue <<= 16;                           // Shift the 16-bit value to the left by 16 bits
	bufferValue &= 0x7fff0000;                    // Mask the value to keep only the 15 bits following the most significant bit
	bufferValue |= *(u16*)((u8*)inputBuffer + 2); // OR the value with the next 16 bits from the buffer
	*output1 = bufferValue;                       // Assign the 32-bit value to output1
	*output2 = *(u32*)((u8*)inputBuffer + 4);     // Assign the next 32 bits to output2
	return (u8*)inputBuffer + 8;                  // Return the buffer pointer moved by 8 bytes
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
