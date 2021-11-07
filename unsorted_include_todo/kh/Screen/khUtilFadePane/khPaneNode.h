#ifndef _KH_SCREEN_KHUTILFADEPANE_KHPANENODE_H
#define _KH_SCREEN_KHUTILFADEPANE_KHPANENODE_H

namespace kh {
namespace Screen {
	namespace khUtilFadePane {
		struct khPaneNode {
			virtual ~khPaneNode();  // _00
			virtual void _04() = 0; // _04

			// _00 VTBL
		};
	} // namespace khUtilFadePane
} // namespace Screen
} // namespace kh

#endif
