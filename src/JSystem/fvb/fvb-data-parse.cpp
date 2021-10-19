#include "types.h"

namespace JGadget {
namespace binary {
	struct TEBit {
	};

	extern u16* parseVariableUInt_16_32_following(void const*, unsigned long*,
	                                              unsigned long*, TEBit*);
} // namespace binary
} // namespace JGadget

namespace JStudio {
namespace fvb {
	namespace data {

		struct TParse_TParagraph {
			struct TData {
				u32* _00;
				u32* _04;
				u16* _08;
				u16* _0C;
			};

			void getData(TData*) const;
		};

		/*
		 * --INFO--
		 * Address:	8000CA3C
		 * Size:	000068
		 */
		void JStudio::fvb::data::TParse_TParagraph::getData(
		    TParse_TParagraph::TData* data) const
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
