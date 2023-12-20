#include "types.h"
#include "JSystem/JGadget/binary.h"
#include "JSystem/JStudio/fvb/fvb-data.h"

namespace JStudio {
namespace fvb {
namespace data {
/**
 * @note Address: 0x8000CA3C
 * @note Size: 0x68
 */
void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
{
	u16* parse = (u16*)JGadget::binary::parseVariableUInt_16_32_following(fvbData, (u32*)data, (u32*)&data->param, 0);
	u32 t      = (u32)data->type;
	if (!t) {
		data->content = nullptr;
		data->next    = parse;
	} else {
		data->content = parse;
		data->next    = parse + ((t + 3) >> 1 & ~1);
	}
}

} // namespace data
} // namespace fvb
} // namespace JStudio
