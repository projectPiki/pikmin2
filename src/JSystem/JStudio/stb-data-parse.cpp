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
	u8* set2;
	int dSize = data->mDataSize = 0;
	data->_08                   = 0;
	data->mFileCount            = nullptr;
	data->_10                   = nullptr;
	u8* filedata                = (u8*)getRaw();
	if (!filedata) {
		return;
	}

	u8 set        = *filedata;
	data->mStatus = set & ~0x8;
	if (!set) {
		return;
	}

	int is8;
	int set3 = 1;
	is8      = set & 8;
	// Probably fake match
	if (set2 = (filedata + 1), is8) {
		set3 = *set2++;
	}
	data->_08        = set3;
	data->mFileCount = set2;

	if (!(set & 7)) {
		return;
	}

	dSize           = (gauDataSize_TEParagraph_data)[set &= 7];
	data->mDataSize = dSize;
	data->_10       = (u8*)set2 + (dSize * set3);
}

} // namespace data
} // namespace stb
} // namespace JStudio
