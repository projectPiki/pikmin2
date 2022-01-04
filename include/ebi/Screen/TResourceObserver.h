#ifndef _EBI_SCREEN_TRESOURCEOBSERVER_H
#define _EBI_SCREEN_TRESOURCEOBSERVER_H

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
