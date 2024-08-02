#include "types.h"
#include "JSystem/JGadget/binary.h"
#include "JSystem/JStudio/fvb-data-parse.h"

namespace JStudio {
namespace fvb {
namespace data {
/**
 * @note Address: 0x8000CA3C
 * @note Size: 0x68
 */
void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
{
	const u8* parse = (const u8*)JGadget::binary::parseVariableUInt_16_32_following(mRaw, (u32*)data, (u32*)&data->mType, 0);
	u32 t      = data->mSize;
	if (!t) {
		data->mContent = nullptr;
		data->mNext    = parse;
	} else {
		data->mContent = parse;
		data->mNext    = parse + align_roundUp(t, 4);
	}
}

} // namespace data
} // namespace fvb
} // namespace JStudio
