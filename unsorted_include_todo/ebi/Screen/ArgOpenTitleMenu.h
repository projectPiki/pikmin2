#ifndef _EBI_SCREEN_ARGOPENTITLEMENU_H
#define _EBI_SCREEN_ARGOPENTITLEMENU_H

/*
    __vt__Q33ebi6Screen16ArgOpenTitleMenu:
    .4byte 0
    .4byte 0
    .4byte getName__Q33ebi6Screen7ArgOpenFv
*/

namespace ebi {
namespace Screen {
	struct ArgOpen {
		virtual void getName(); // _00

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
	struct ArgOpenTitleMenu : public ArgOpen {
		virtual void getName(); // _00

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
