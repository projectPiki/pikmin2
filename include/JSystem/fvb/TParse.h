#ifndef _JSYSTEM_FVB_TPARSE_H
#define _JSYSTEM_FVB_TPARSE_H

#include "types.h"

namespace JStudio {
namespace fvb {
	struct TControl;

	struct TParse {
		TParse(TControl*);
		virtual ~TParse();
	};

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
	} // namespace data
} // namespace fvb
} // namespace JStudio

#endif
