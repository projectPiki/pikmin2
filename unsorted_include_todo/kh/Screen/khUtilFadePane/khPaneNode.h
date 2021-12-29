#ifndef _KH_SCREEN_KHUTILFADEPANE_KHPANENODE_H
#define _KH_SCREEN_KHUTILFADEPANE_KHPANENODE_H

/*
    __vt__Q42kh6Screen14khUtilFadePane10khPaneNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q42kh6Screen14khUtilFadePane10khPaneNodeFv
    .4byte 0
*/

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
