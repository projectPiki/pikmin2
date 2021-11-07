#ifndef _EBI_TITLE_TMAPBASE_H
#define _EBI_TITLE_TMAPBASE_H

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
	struct TMapBase : public TObjBase {
		virtual void getCreatureType(); // _00
		virtual void isCalc();          // _04

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

#endif
