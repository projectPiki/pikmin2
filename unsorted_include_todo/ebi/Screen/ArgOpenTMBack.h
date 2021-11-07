#ifndef _EBI_SCREEN_ARGOPENTMBACK_H
#define _EBI_SCREEN_ARGOPENTMBACK_H

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
	struct ArgOpenTMBack : public ArgOpen {
		virtual void getName(); // _00

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
