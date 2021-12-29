#ifndef _EBI_TITLE_TBLACKPLANE_H
#define _EBI_TITLE_TBLACKPLANE_H

/*
    __vt__Q33ebi5title11TBlackPlane:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q33ebi5title8TObjBaseFv
    .4byte isCalc__Q33ebi5title8TObjBaseFv
*/

namespace ebi {
namespace title {
	struct TObjBase {
		virtual void getCreatureType(); // _00
		virtual void isCalc();          // _04

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

namespace ebi {
namespace title {
	struct TBlackPlane : public TObjBase {
		virtual void getCreatureType(); // _00
		virtual void isCalc();          // _04

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

#endif
