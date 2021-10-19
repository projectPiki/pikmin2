#include "types.h"
#include "JSystem/JGadget/binary.h"
#include "JSystem/fvb/TParse.h"

namespace JStudio {
namespace fvb {
	namespace data {
		/*
		 * --INFO--
		 * Address:	8000CA3C
		 * Size:	000068
		 */
		void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
		{
			u16* v3 = JGadget::binary::parseVariableUInt_16_32_following(
			    (void*)this, data->_00, data->_04, nullptr);
			if (data->_00) {
				data->_08 = v3;
				data->_0C = v3 + ((data->_00 + 3) & ~4);
			} else {
				data->_08 = 0;
				data->_0C = v3;
			}
		}

	} // namespace data
} // namespace fvb
} // namespace JStudio
