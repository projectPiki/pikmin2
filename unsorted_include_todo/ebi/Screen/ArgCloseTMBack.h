#ifndef _EBI_SCREEN_ARGCLOSETMBACK_H
#define _EBI_SCREEN_ARGCLOSETMBACK_H

/*
    __vt__Q33ebi6Screen14ArgCloseTMBack:
    .4byte 0
    .4byte 0
    .4byte getName__Q33ebi6Screen8ArgCloseFv
*/

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
