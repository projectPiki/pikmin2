#ifndef _EBI_TITLE_KOGANE_TUNIT_H
#define _EBI_TITLE_KOGANE_TUNIT_H

/*
    __vt__Q43ebi5title6Kogane5TUnit:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q43ebi5title6Kogane5TUnitFv
    .4byte isCalc__Q43ebi5title6Kogane5TUnitFv
*/

namespace ebi {
namespace title {
	namespace Kogane {
		struct TUnit {
			virtual void getCreatureType(); // _00
			virtual void isCalc();          // _04

			// _00 VTBL
		};
	} // namespace Kogane
} // namespace title
} // namespace ebi

#endif
