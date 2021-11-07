#ifndef _EBI_TITLE_TBLACKPLANE_H
#define _EBI_TITLE_TBLACKPLANE_H

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
