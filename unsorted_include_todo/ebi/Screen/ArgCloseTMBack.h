#ifndef _EBI_SCREEN_ARGCLOSETMBACK_H
#define _EBI_SCREEN_ARGCLOSETMBACK_H

namespace ebi {
namespace Screen {
	struct ArgClose {
		virtual void getName(); // _00

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
	struct ArgCloseTMBack : public ArgClose {
		virtual void getName(); // _00

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
