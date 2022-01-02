#include "types.h"
#include "JSystem/JGadget/binary.h"
#include "JSystem/fvb/fvb.h"

/*
    Generated from dpostproc
*/

namespace JStudio::fvb::data {
		/*
		 * --INFO--
		 * Address:	8000CA3C
		 * Size:	000068
		 */
		void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
		{
			u16* data = JGadget::binary::parseVariableUInt_16_32_following(
			    (void*)this, data->type, data->param, nullptr);

			if (data->type) {
				data->content = data;
				data->next = data + ((int)(data->type + 3) & ~4);
			} else {
				data->content = 0;
				data->next = data;
			}
		}

} // namespace JStudio::fvb::data