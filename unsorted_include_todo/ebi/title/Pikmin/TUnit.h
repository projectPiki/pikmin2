#ifndef _EBI_TITLE_PIKMIN_TUNIT_H
#define _EBI_TITLE_PIKMIN_TUNIT_H

namespace ebi {
namespace title {
	namespace Pikmin {
		struct TUnit {
			virtual void getCreatureType(); // _00
			virtual void isCalc();          // _04
			virtual void _08() = 0;         // _08

			// _00 VTBL
		};
	} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
