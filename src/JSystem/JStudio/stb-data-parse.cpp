#include "types.h"
#include "JSystem/JStudio/stb.h"
#include "JSystem/JGadget/binary.h"

namespace JStudio {
namespace stb {
namespace data {

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void toString_block(char*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000893C
 * @note Size: 0x4C
 */
void TParse_TSequence::getData(TParse_TSequence::TData* data) const
{
	data->mContent = nullptr;
	data->mNext    = nullptr;
	u32 head       = getHead();
	u8 type        = head >> guBit_TSequence_type;
	u32 param      = head & 0x00FFFFFF;
	data->mType    = type;
	data->mParam   = param;
	if (type != 0) {
		const void* next = (const void*)((int)getRaw() + 4);
		if (type <= 127) {
			data->mNext = next;
		} else {
			data->mContent = next;
			data->mNext    = (const void*)((int)next + param);
		}
	}
}

/**
 * @note Address: 0x80008988
 * @note Size: 0x78
 */
void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
{
	const void* rawData = getRaw();
	u32 result;
	const void* next = parseVariableUInt_16_32_following(rawData, &result, &data->mType, nullptr);
	data->mParam     = result;
	if (!result) {
		data->mContent = nullptr;
		data->mNext    = next;
	} else {
		data->mContent = next;
		data->mNext    = (const void*)((int)next + align_roundUp(result, 4));
	}
}

/**
 * @note Address: 0x80008A00
 * @note Size: 0x80
 */
void TParse_TParagraph_data::getData(TParse_TParagraph_data::TData* data) const
{
	u8* currentPtr;
	int dataSize = data->mDataSize = 0;

	data->mFileCount    = 0;
	data->mData         = nullptr;
	data->mDataBlockEnd = nullptr;

	u8* rawData = (u8*)getRaw();
	if (!rawData) {
		return;
	}

	u8 statusByte = *rawData;
	data->mStatus = statusByte & ~0x8;
	if (!statusByte) {
		return;
	}

	int fileCount    = 1;
	int hasExtraData = statusByte & 8;

	// Adjust pointer based on the presence of extra data
	if (currentPtr = (rawData + 1), hasExtraData) {
		fileCount = *currentPtr++;
	}

	data->mFileCount = fileCount;
	data->mData      = currentPtr;

	// If the lower 3 bits are zero, return
	if (!(statusByte & 7)) {
		return;
	}

	// Determine data size based on the lower 3 bits of the status byte
	dataSize        = (gauDataSize_TEParagraph_data)[statusByte &= 7];
	data->mDataSize = dataSize;

	// Set data pointer based on the data size and file count
	data->mDataBlockEnd = &currentPtr[dataSize * fileCount];
}

} // namespace data
} // namespace stb
} // namespace JStudio
