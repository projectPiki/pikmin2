#ifndef _EBI_SCREEN_ARGOPENTMBACK_H
#define _EBI_SCREEN_ARGOPENTMBACK_H

/*
    __vt__Q33ebi6Screen13ArgOpenTMBack:
    .4byte 0
    .4byte 0
    .4byte getName__Q33ebi6Screen7ArgOpenFv
*/

namespace ebi {
namespace Screen {
struct ArgOpen {
	virtual void getName(); // _08 (inline)
};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
struct ArgOpenTMBack : public ArgOpen {
};
} // namespace Screen
} // namespace ebi

#endif
