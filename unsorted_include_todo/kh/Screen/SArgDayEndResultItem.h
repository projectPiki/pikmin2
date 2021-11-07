#ifndef _KH_SCREEN_SARGDAYENDRESULTITEM_H
#define _KH_SCREEN_SARGDAYENDRESULTITEM_H

namespace kh {
namespace Screen {
	struct SArgDayEndResultItem {
		virtual void getSceneType() const; // _00
		virtual void getClassSize();       // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
