#ifndef _EBI_TITLE_CHAPPY_TUNIT_H
#define _EBI_TITLE_CHAPPY_TUNIT_H

namespace ebi {
namespace title {
	namespace Chappy {
		struct TUnit {
			virtual void getCreatureType(); // _00
			virtual void isCalc();          // _04

			// _00 VTBL
		};
	} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
