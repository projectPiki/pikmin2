#ifndef _EBI_SCREEN_TRESOURCEOBSERVER_H
#define _EBI_SCREEN_TRESOURCEOBSERVER_H

/*
    __vt__Q33ebi6Screen17TResourceObserver:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi6Screen17TResourceObserverFv
    .4byte 0
*/

namespace ebi {
namespace Screen {
	struct TResourceObserver {
		virtual ~TResourceObserver(); // _00
		virtual void _04() = 0;       // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
